'''''''''
import mysql.connector

class Connection(object):

    def __init__(self):
        self.cellml_database = mysql.connector.connect(
          host="localhost",
          user="root",
          passwd="iloveyou00"
        )
        self.cursor = self.cellml_database.cursor()

    def close_database(self):
        self.cellml_database.close()
        self.cursor.close()

    def create_new_cellml_database(self, name:str):
        try:
            self.cursor.execute("CREATE DATABASE %s;" % name)
            self.cursor.execute("USE %s;" % name)
            self.cursor.execute("CREATE TABLE components("
                                "name VARCHAR(200) NOT NULL,"
                                "id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY);")
            self.cursor.execute("CREATE TABLE units("
							    "name VARCHAR(100) NOT NULL,"
                                "id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY);")
            self.cursor.execute("CREATE TABLE constants("
							    "value FLOAT UNSIGNED NOT NULL," 
                                "id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY);")
            self.cursor.execute("CREATE TABLE expressions("
						        "id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,"
                                "lhs VARCHAR(100) NOT NULL,"
                                "rhs VARCHAR(100) NOT NULL);")

            self.cursor.execute("CREATE TABLE odes("
						        "id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,"
                                "expressions_id INT UNSIGNED NOT NULL,"
                                "FOREIGN KEY(expressions_id) REFERENCES expressions(id));")

            self.cursor.execute("CREATE TABLE variables("
							    "id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,"
                                "component_id INT UNSIGNED NOT NULL,"
							    "name VARCHAR(100) NOT NULL,"
                                "constant_id INT UNSIGNED,"
                                "ode_id INT UNSIGNED,"
                                "unit_id INT UNSIGNED NOT NULL,"
                                "FOREIGN KEY(component_id) REFERENCES components(id),"
                                "FOREIGN KEY(constant_id) REFERENCES constants(id),"
                                "FOREIGN KEY(ode_id) REFERENCES odes(id),"
                                "FOREIGN KEY(unit_id) REFERENCES units(id));")
            self.cellml_database.commit()
        except Exception as e:
            print(e)

    # Tested
    def use_a_database(self, name:str):
        self.cursor.execute("USE %s;" % name)
        self.cellml_database.commit()

    # Tested
    def insert_to_components(self, name:str):
        self.cursor.execute("INSERT INTO components(name) VALUE('%s');" % name)
        self.cellml_database.commit()

    # Tested
    def insert_to_constants(self, value: float):
        sql_query = "INSERT INTO constants(value) VALUE (" + str(value) + ");"
        self.cursor.execute(sql_query)
        self.cellml_database.commit()

    # Tested
    def insert_to_units(self, unit_name:str):
        self.cursor.execute("INSERT INTO units(name) VALUE('%s');", unit_name)
        self.cellml_database.commit()

    # Tested
    def insert_to_expressions(self, lhs, rhs):
        self.cursor.execute("INSERT INTO expressions(lhs,rhs) VALUES('%s','%s');", (lhs,rhs))
        self.cellml_database.commit()

    def insert_to_odes(self):
        self.cursor.execute("INSERT INTO odes(expression_id) ")
    def insert_to_variables(self, component_id: int, name: str, constant_id: int, ode_id: int, unit_id: int):
        self.cursor.execute("INSERT INTO  ")



    # Tested
    def show_all_tables(self):
        self.cursor.execute("SHOW TABLES")
        names = self.cursor.fetchall()
        print(names)

    # Tested
    def show_expression_table(self):
        self.cursor.execute("SELECT * FROM expressions;")
        tables = self.cursor.fetchall()
        print(tables)

    # Tested
    def show_units_table(self):
        self.cursor.execute("SELECT * FROM units;")
        units = self.cursor.fetchall()
        print(units)

    # Tested
    def show_component_table(self):
        self.cursor.execute("SELECT * FROM components")
        components = self.cursor.fetchall()
        print(components)

    # Tested
    def show_constants_table(self):
        self.cursor.execute("SELECT * FROM constants")
        constants = self.cursor.fetchall()
        print(constants)


connection = Connection()
connection.use_a_database("test_database")
connection.insert_to_constants(1.1)
connection.show_constants_table()

'''''''''''





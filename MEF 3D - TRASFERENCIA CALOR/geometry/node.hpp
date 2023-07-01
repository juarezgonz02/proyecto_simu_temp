/**
 * @file geometry/node.hpp
 *
 * @author Enmanuel Amaya, MSc. 2023 *
 * @author Modified By: Grupo 09 - sec 01
 *
 * @brief Node
 * @version 1
 * @date 2023-06-30
 *
 * A Node is a colecction of coordinates X, Y, Z
 * has a setter and getter for the private objects
 */
class Node {
    // 3D MEF CHANGE
    private:
        int ID;
        float x_coordinate;
        float y_coordinate;
        float z_coordinate;

    public:
        Node(int identifier, float x_value, float y_value, float z_value){
            ID = identifier;
            x_coordinate = x_value;
            y_coordinate = y_value;
            z_coordinate = z_value;
        }

        void set_ID(int identifier){
            ID = identifier;
        }
        int get_ID(){
            return ID;
        }

        void set_x_coordinate(float x_value){
            x_coordinate = x_value;
        }
        float get_x_coordinate(){
            return x_coordinate;
        }

        void set_y_coordinate(float y_value){
            y_coordinate = y_value;
        }
        float get_y_coordinate(){
            return y_coordinate;
        }

        void set_z_coordinate(float z_value){
            z_coordinate = z_value;
        }
        float get_z_coordinate(){
            return z_coordinate;
        }
};

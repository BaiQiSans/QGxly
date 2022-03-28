package test;

import Utils.JDBCUtils;

import java.sql.SQLException;

public class DemoTest {
    public static void main(String[] args) {
        try {
            JDBCUtils.getConnection();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}

package service.Impl;

import dao.Impl.UserDaoImpl;
import dao.UserDao;
import po.User;
import service.UserService;

import java.util.List;

public class UserServiceImpl implements UserService {
    UserDao userDao=new UserDaoImpl();
    @Override
    public List<User> selectCondition(User user) {
        return null;
    }

    @Override
    public List<User> selectAll() {
        List<User> users = userDao.selectAll();
        return users;
    }

    @Override
    public User selectByName(String name) {
        return userDao.selectByName(name);
    }

    @Override
    public User selectById(Integer id) {
        return null;
    }

    @Override
    public boolean insert(User user) {
        boolean success = userDao.insert(user);
        return success;
    }

    @Override
    public boolean update(User user) {
        boolean success = userDao.update(user);
        return success;
    }

    @Override
    public boolean delete(Integer id) {
        boolean success = userDao.delete(id);
        return success;
    }
}

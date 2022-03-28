package MyThread;

import java.util.List;

public interface MyIThreadPool extends Runnable {
    //执行任务 在执行任务时请确保任务添加完毕；
    public void execute();

    //添加批量任务
    public void addTask(List<Runnable> tasks);

    public void addTask(Runnable task);

    public void addTask(Runnable[] tasks);

    //中途添加任务 当线程池开启时可以用该方法添加一般不介意使用
    // 个人觉得线程池可以根据线程大小 维护 多个任务队列
    //每个线程池取模 到对应任务队列中获取；当人本线程中没有提供此实现
    public void addSafeTask(List<Runnable> tasks);


    //销毁线程池 建议使用 销毁前会等待任务完成
    public void destory();

    //暴露销毁 不建议使用 可能任务没完成就直接退出
    public void froceDestory();

}

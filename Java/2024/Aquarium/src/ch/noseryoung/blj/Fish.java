package ch.noseryoung.blj;


public class Fish {
    private String name;
    private int x;
    private int y;
    private WaterType waterType;

    public Fish(String name, int x, int y, WaterType waterType) {
        this.name = name;
        this.x = x;
        this.y = y;
        this.waterType = waterType;
    }

    public WaterType getWaterType() {
        return waterType;
    }

    public String getName() {
        return name;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public Fish moveFish(Movement where) {
        int newX = x, newY = y;
        switch (where) {
            case UP:
                newY = y - 1;
                break;

            case DOWN:
                newY = y + 1;
                break;

            case LEFT:
                newX = x - 1;
                break;

            case RIGHT:
                newX = x + 1;
                break;
        }
        return new Fish(name, newX, newY, waterType);
    }
}
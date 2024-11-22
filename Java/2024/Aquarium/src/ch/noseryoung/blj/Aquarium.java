package ch.noseryoung.blj;

public class Aquarium {
    private int width;
    private int height;
    private WaterType waterType;
    private Movement movement;

    private Fish[][] field;

    public Aquarium(int width, int height, WaterType waterType) {
        this.height = height;
        this.waterType = waterType;
        this.width = width;
        this.field = new Fish[width][height];
    }

    public boolean addFish(Fish fish) {
        if (waterType != fish.getWaterType()) {
            return false;
        }
        if (fish.getX() >= width) {
            return false;
        }
        if (fish.getY() >= height) {
            return false;
        }
        if (this.field[fish.getX()][fish.getY()] != null) {
            return false;
        }
        this.field[fish.getX()][fish.getY()] = fish;
        return true;
    }


    public void printAquarium() {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                if (field[x][y] != null) {
                    System.out.print("f");
                } else {
                    System.out.print("~");
                }
            }
            System.out.println();
        }

    }

    public Fish findAndTakeFish(String fishName) {
        for (int y =0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                if (field[x][y] != null && field[x][y].getName().equalsIgnoreCase(fishName)) {
                    Fish result = field[x][y];
                    field[x][y] = null;
                    return result;
                }
            }
        }
        return null;
    }
}




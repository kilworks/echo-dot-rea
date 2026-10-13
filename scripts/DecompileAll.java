// Ghidra headless post-script: decompile every function to C pseudocode.
// args[0] = output .c path.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.FileWriter;
import java.io.PrintWriter;

public class DecompileAll extends GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String out = args[0];
        DecompInterface dec = new DecompInterface();
        dec.openProgram(currentProgram);
        ConsoleTaskMonitor mon = new ConsoleTaskMonitor();
        FunctionManager fm = currentProgram.getFunctionManager();
        int total = fm.getFunctionCount();
        int ok = 0, count = 0;
        PrintWriter w = new PrintWriter(new FileWriter(out));
        w.printf("// %s  functions=%d%n%n", currentProgram.getName(), total);
        for (Function fn : fm.getFunctions(true)) {
            count++;
            w.printf("// ==== %s @ %s ====%n", fn.getName(), fn.getEntryPoint());
            DecompileResults res = dec.decompileFunction(fn, 60, mon);
            if (res != null && res.decompileCompleted()) {
                w.print(res.getDecompiledFunction().getC());
                ok++;
            } else {
                w.printf("// [decompile failed: %s]%n",
                    res != null ? res.getErrorMessage() : "no result");
            }
            w.println();
        }
        w.close();
        println(String.format("DECOMPILED %d/%d functions -> %s", ok, count, out));
    }
}

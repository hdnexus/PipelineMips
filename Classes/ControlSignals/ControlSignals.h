
using namespace std;

class ControlSignals
{
private:
public:
  bool RegDst;
  bool Jump;
  bool Branch;
  bool MemRead;
  bool MemtoReg;
  bool ALUOp1;
  bool ALUOp0;
  bool MemWrite;
  bool ALUSrc;
  bool RegWrite;

  ControlSignals();
  ~ControlSignals();

  void setControlSignals(unsigned int opcode);
};
/* Generated automatically by the program `genattr-common'
   from the machine description file `md'.  */

#ifndef GCC_INSN_ATTR_COMMON_H
#define GCC_INSN_ATTR_COMMON_H

enum attr_type {TYPE_UNKNOWN, TYPE_COMPLEX, TYPE_CONTROL, TYPE_ALU, TYPE_COND_ALU, TYPE_ST, TYPE_LD, TYPE_SHIFT};
enum attr_alu2_zext_subst {ALU2_ZEXT_SUBST_NO, ALU2_ZEXT_SUBST_YES};
enum attr_alu3_zext_op1_subst {ALU3_ZEXT_OP1_SUBST_NO, ALU3_ZEXT_OP1_SUBST_YES};
enum attr_alu3_zext_op2_subst {ALU3_ZEXT_OP2_SUBST_NO, ALU3_ZEXT_OP2_SUBST_YES};
enum attr_alu3_zext_subst {ALU3_ZEXT_SUBST_NO, ALU3_ZEXT_SUBST_YES};
enum attr_bitalu_zext_subst {BITALU_ZEXT_SUBST_NO, BITALU_ZEXT_SUBST_YES};
#define INSN_SCHEDULING
#define DELAY_SLOTS 0

#endif /* GCC_INSN_ATTR_COMMON_H */

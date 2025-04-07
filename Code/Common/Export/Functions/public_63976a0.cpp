#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6336c20);
CLANG_FORWARD_PROC_SYMBOL(public_6336cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6336dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63976a8 _public_63976a8
#define public_63976b3 _public_63976b3
#define public_63976be _public_63976be

PROC_DECLARE(0x63976a0, internal_63976a0, public_63976a0);
/* CHUNK of public_6336ab0 */
extern "C" NAKED register_t __cdecl internal_63976a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6336c20
        public_63976a8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6336cf0
        public_63976b3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_6336dc0
        public_63976be : nop
        mov eax, offset public_63b1890
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63976a0)
        ASM_EXPORT_ENTRY_FIRST(0x63976a8, public_63976a8)
        ASM_EXPORT_ENTRY(0x63976b3, public_63976b3)
        ASM_EXPORT_ENTRY_LAST(0x63976be, public_63976be)
    }
}

#undef public_63976a8
#undef public_63976b3
#undef public_63976be

#pragma init_seg(compiler)
extern "C" void const* const public_63976a8 = __AsmFindLabelExport(&internal_63976a0, 0x63976a8);
extern "C" void const* const public_63976b3 = __AsmFindLabelExport(&internal_63976a0, 0x63976b3);
extern "C" void const* const public_63976be = __AsmFindLabelExport(&internal_63976a0, 0x63976be);

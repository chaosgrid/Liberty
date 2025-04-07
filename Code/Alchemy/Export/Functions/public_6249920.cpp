#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62306c0);
CLANG_FORWARD_PROC_SYMBOL(public_62307d0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249928 _public_6249928
#define public_6249930 _public_6249930
#define public_624993b _public_624993b
#define public_6249946 _public_6249946

PROC_DECLARE(0x6249920, internal_6249920, public_6249920);
/* CHUNK of public_62306e0 */
extern "C" NAKED register_t __cdecl internal_6249920()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_62307d0
        public_6249928 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_62307d0
        public_6249930 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x6C
        jmp public_62306c0
        public_624993b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp public_62306c0
        public_6249946 : nop
        mov eax, offset public_6252928
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249920)
        ASM_EXPORT_ENTRY_FIRST(0x6249928, public_6249928)
        ASM_EXPORT_ENTRY(0x6249930, public_6249930)
        ASM_EXPORT_ENTRY(0x624993b, public_624993b)
        ASM_EXPORT_ENTRY_LAST(0x6249946, public_6249946)
    }
}

#undef public_6249928
#undef public_6249930
#undef public_624993b
#undef public_6249946

#pragma init_seg(compiler)
extern "C" void const* const public_6249928 = __AsmFindLabelExport(&internal_6249920, 0x6249928);
extern "C" void const* const public_6249930 = __AsmFindLabelExport(&internal_6249920, 0x6249930);
extern "C" void const* const public_624993b = __AsmFindLabelExport(&internal_6249920, 0x624993b);
extern "C" void const* const public_6249946 = __AsmFindLabelExport(&internal_6249920, 0x6249946);

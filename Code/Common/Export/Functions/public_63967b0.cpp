#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6315750);
CLANG_FORWARD_PROC_SYMBOL(public_6316580);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63967b9 _public_63967b9
#define public_63967c1 _public_63967c1
#define public_63967cd _public_63967cd
#define public_63967d5 _public_63967d5

PROC_DECLARE(0x63967b0, internal_63967b0, public_63967b0);
/* CHUNK of public_6315f90 */
extern "C" NAKED register_t __cdecl internal_63967b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x64]
        jmp dword ptr ds : [public_63991ac]
        public_63967b9 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_6315750
        public_63967c1 : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 0xC
        jmp dword ptr ds : [public_63991ac]
        public_63967cd : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6316580
        public_63967d5 : nop
        mov eax, offset public_63b0664
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63967b0)
        ASM_EXPORT_ENTRY_FIRST(0x63967b9, public_63967b9)
        ASM_EXPORT_ENTRY(0x63967c1, public_63967c1)
        ASM_EXPORT_ENTRY(0x63967cd, public_63967cd)
        ASM_EXPORT_ENTRY_LAST(0x63967d5, public_63967d5)
    }
}

#undef public_63967b9
#undef public_63967c1
#undef public_63967cd
#undef public_63967d5

#pragma init_seg(compiler)
extern "C" void const* const public_63967b9 = __AsmFindLabelExport(&internal_63967b0, 0x63967b9);
extern "C" void const* const public_63967c1 = __AsmFindLabelExport(&internal_63967b0, 0x63967c1);
extern "C" void const* const public_63967cd = __AsmFindLabelExport(&internal_63967b0, 0x63967cd);
extern "C" void const* const public_63967d5 = __AsmFindLabelExport(&internal_63967b0, 0x63967d5);

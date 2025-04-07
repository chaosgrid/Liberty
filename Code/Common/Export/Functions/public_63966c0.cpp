#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6315920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63966cc _public_63966cc
#define public_63966d7 _public_63966d7
#define public_63966e2 _public_63966e2

PROC_DECLARE(0x63966c0, internal_63966c0, public_63966c0);
/* CHUNK of public_63149d0 */
extern "C" NAKED register_t __cdecl internal_63966c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_63966cc : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp public_6315920
        public_63966d7 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_6315920
        public_63966e2 : nop
        mov eax, offset public_63b0580
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63966c0)
        ASM_EXPORT_ENTRY_FIRST(0x63966cc, public_63966cc)
        ASM_EXPORT_ENTRY(0x63966d7, public_63966d7)
        ASM_EXPORT_ENTRY_LAST(0x63966e2, public_63966e2)
    }
}

#undef public_63966cc
#undef public_63966d7
#undef public_63966e2

#pragma init_seg(compiler)
extern "C" void const* const public_63966cc = __AsmFindLabelExport(&internal_63966c0, 0x63966cc);
extern "C" void const* const public_63966d7 = __AsmFindLabelExport(&internal_63966c0, 0x63966d7);
extern "C" void const* const public_63966e2 = __AsmFindLabelExport(&internal_63966c0, 0x63966e2);

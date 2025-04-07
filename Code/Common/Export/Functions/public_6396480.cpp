#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396488 _public_6396488
#define public_639649e _public_639649e
#define public_639649f _public_639649f

PROC_DECLARE(0x6396480, internal_6396480, public_6396480);
/* CHUNK of public_6312ff0 */
extern "C" NAKED register_t __cdecl internal_6396480()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp public_62a68e0
        public_6396488 : nop
        mov eax, dword ptr ss : [ebp-0x40]
        and eax, 1
        test eax, eax
        je public_639649e
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_62a68e0
        public_639649e : nop
        ret 
        public_639649f : nop
        mov eax, offset public_63b039c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396480)
        ASM_EXPORT_ENTRY_FIRST(0x6396488, public_6396488)
        ASM_EXPORT_ENTRY(0x639649e, public_639649e)
        ASM_EXPORT_ENTRY_LAST(0x639649f, public_639649f)
    }
}

#undef public_6396488
#undef public_639649e
#undef public_639649f

#pragma init_seg(compiler)
extern "C" void const* const public_6396488 = __AsmFindLabelExport(&internal_6396480, 0x6396488);
extern "C" void const* const public_639649e = __AsmFindLabelExport(&internal_6396480, 0x639649e);
extern "C" void const* const public_639649f = __AsmFindLabelExport(&internal_6396480, 0x639649f);

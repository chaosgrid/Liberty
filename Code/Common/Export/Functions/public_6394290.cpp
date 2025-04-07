#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394298 _public_6394298
#define public_63942a2 _public_63942a2

PROC_DECLARE(0x6394290, internal_6394290, public_6394290);
/* CHUNK of public_62ae400 */
extern "C" NAKED register_t __cdecl internal_6394290()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-1]
        jmp public_627e5e0
        public_6394298 : nop
        mov ecx, offset public_63fc344
        jmp public_627e5e0
        public_63942a2 : nop
        mov eax, offset public_63ad834
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394290)
        ASM_EXPORT_ENTRY_FIRST(0x6394298, public_6394298)
        ASM_EXPORT_ENTRY_LAST(0x63942a2, public_63942a2)
    }
}

#undef public_6394298
#undef public_63942a2

#pragma init_seg(compiler)
extern "C" void const* const public_6394298 = __AsmFindLabelExport(&internal_6394290, 0x6394298);
extern "C" void const* const public_63942a2 = __AsmFindLabelExport(&internal_6394290, 0x63942a2);

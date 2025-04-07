#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63988db _public_63988db
#define public_63988e6 _public_63988e6

PROC_DECLARE(0x63988d0, internal_63988d0, public_63988d0);
/* CHUNK of public_636da30 */
extern "C" NAKED register_t __cdecl internal_63988d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63988db : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63988e6 : nop
        mov eax, offset public_63b2f08
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63988d0)
        ASM_EXPORT_ENTRY_FIRST(0x63988db, public_63988db)
        ASM_EXPORT_ENTRY_LAST(0x63988e6, public_63988e6)
    }
}

#undef public_63988db
#undef public_63988e6

#pragma init_seg(compiler)
extern "C" void const* const public_63988db = __AsmFindLabelExport(&internal_63988d0, 0x63988db);
extern "C" void const* const public_63988e6 = __AsmFindLabelExport(&internal_63988d0, 0x63988e6);

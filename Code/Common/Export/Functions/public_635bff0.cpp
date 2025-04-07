#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_635bff0);

#define public_635c00a _public_635c00a
#define public_635c017 _public_635c017

PROC_DECLARE(0x635bff0, internal_635bff0, public_635bff0);
/* CHUNK of public_634e0b0 */
extern "C" NAKED register_t __cdecl internal_635bff0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[esi+0xC]
        cmp eax, ecx
        je public_635c017
        test eax, eax
        je public_635c00a
        push eax
        call public_6343fb0
        add esp, 4
        public_635c00a : nop
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi], 0
        public_635c017 : nop
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x635bff0)
        ASM_EXPORT_ENTRY_FIRST(0x635c00a, public_635c00a)
        ASM_EXPORT_ENTRY_LAST(0x635c017, public_635c017)
    }
}

#undef public_635c00a
#undef public_635c017

#pragma init_seg(compiler)
extern "C" void const* const public_635c00a = __AsmFindLabelExport(&internal_635bff0, 0x635c00a);
extern "C" void const* const public_635c017 = __AsmFindLabelExport(&internal_635bff0, 0x635c017);

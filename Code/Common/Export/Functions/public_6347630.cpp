#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6347630);

#define public_634764a _public_634764a
#define public_6347657 _public_6347657

PROC_DECLARE(0x6347630, internal_6347630, public_6347630);
/* CHUNK of public_6347660 */
extern "C" NAKED register_t __cdecl internal_6347630()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x54]
        lea ecx, ds:[esi+0x58]
        cmp eax, ecx
        je public_6347657
        test eax, eax
        je public_634764a
        push eax
        call public_6343fb0
        add esp, 4
        public_634764a : nop
        mov dword ptr ds : [esi+0x54], 0
        mov word ptr ds : [esi+0x50], 0
        public_6347657 : nop
        mov word ptr ds : [esi+0x52], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6347630)
        ASM_EXPORT_ENTRY_FIRST(0x634764a, public_634764a)
        ASM_EXPORT_ENTRY_LAST(0x6347657, public_6347657)
    }
}

#undef public_634764a
#undef public_6347657

#pragma init_seg(compiler)
extern "C" void const* const public_634764a = __AsmFindLabelExport(&internal_6347630, 0x634764a);
extern "C" void const* const public_6347657 = __AsmFindLabelExport(&internal_6347630, 0x6347657);

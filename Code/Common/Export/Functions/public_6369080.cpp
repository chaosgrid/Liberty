#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6369080);

#define public_636909a _public_636909a
#define public_63690a7 _public_63690a7

PROC_DECLARE(0x6369080, internal_6369080, public_6369080);
/* CHUNK of public_6368f60 */
extern "C" NAKED register_t __cdecl internal_6369080()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        lea ecx, ds:[esi+0x2C]
        cmp eax, ecx
        je public_63690a7
        test eax, eax
        je public_636909a
        push eax
        call public_6343fb0
        add esp, 4
        public_636909a : nop
        mov dword ptr ds : [esi+0x28], 0
        mov word ptr ds : [esi+0x24], 0
        public_63690a7 : nop
        mov word ptr ds : [esi+0x26], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6369080)
        ASM_EXPORT_ENTRY_FIRST(0x636909a, public_636909a)
        ASM_EXPORT_ENTRY_LAST(0x63690a7, public_63690a7)
    }
}

#undef public_636909a
#undef public_63690a7

#pragma init_seg(compiler)
extern "C" void const* const public_636909a = __AsmFindLabelExport(&internal_6369080, 0x636909a);
extern "C" void const* const public_63690a7 = __AsmFindLabelExport(&internal_6369080, 0x63690a7);

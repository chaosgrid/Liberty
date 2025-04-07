#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f027ad _public_6f027ad
#define public_6f027b6 _public_6f027b6

PROC_DECLARE(0x6f02790, internal_6f02790, public_6f02790);
/* CHUNK of public_6f01d70 */
extern "C" NAKED register_t __cdecl internal_6f02790()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f027b6
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f027ad
        cmp cl, 0xFF
        je public_6f027ad
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f027b6
        public_6f027ad : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f027b6 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f02790)
        ASM_EXPORT_ENTRY_FIRST(0x6f027ad, public_6f027ad)
        ASM_EXPORT_ENTRY_LAST(0x6f027b6, public_6f027b6)
    }
}

#undef public_6f027ad
#undef public_6f027b6

#pragma init_seg(compiler)
extern "C" void const* const public_6f027ad = __AsmFindLabelExport(&internal_6f02790, 0x6f027ad);
extern "C" void const* const public_6f027b6 = __AsmFindLabelExport(&internal_6f02790, 0x6f027b6);

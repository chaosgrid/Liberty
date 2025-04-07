#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bd40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_633bd5d _public_633bd5d
#define public_633bd66 _public_633bd66

PROC_DECLARE(0x633bd40, internal_633bd40, public_633bd40);
/* CHUNK of public_6337250 */
extern "C" NAKED register_t __cdecl internal_633bd40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_633bd66
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_633bd5d
        cmp cl, 0xFF
        je public_633bd5d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_633bd66
        public_633bd5d : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_633bd66 : nop
        mov dword ptr ds : [esi+0x1C], 0
        mov dword ptr ds : [esi+0x20], 0
        mov dword ptr ds : [esi+0x24], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x633bd40)
        ASM_EXPORT_ENTRY_FIRST(0x633bd5d, public_633bd5d)
        ASM_EXPORT_ENTRY_LAST(0x633bd66, public_633bd66)
    }
}

#undef public_633bd5d
#undef public_633bd66

#pragma init_seg(compiler)
extern "C" void const* const public_633bd5d = __AsmFindLabelExport(&internal_633bd40, 0x633bd5d);
extern "C" void const* const public_633bd66 = __AsmFindLabelExport(&internal_633bd40, 0x633bd66);

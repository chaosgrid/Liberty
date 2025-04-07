#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d38f0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d390d _public_65d390d
#define public_65d3916 _public_65d3916

PROC_DECLARE(0x65d38f0, internal_65d38f0, public_65d38f0);
/* CHUNK of public_65d2f10 */
extern "C" NAKED register_t __cdecl internal_65d38f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_65d3916
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_65d390d
        cmp cl, 0xFF
        je public_65d390d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_65d3916
        public_65d390d : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d3916 : nop
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d38f0)
        ASM_EXPORT_ENTRY_FIRST(0x65d390d, public_65d390d)
        ASM_EXPORT_ENTRY_LAST(0x65d3916, public_65d3916)
    }
}

#undef public_65d390d
#undef public_65d3916

#pragma init_seg(compiler)
extern "C" void const* const public_65d390d = __AsmFindLabelExport(&internal_65d38f0, 0x65d390d);
extern "C" void const* const public_65d3916 = __AsmFindLabelExport(&internal_65d38f0, 0x65d3916);

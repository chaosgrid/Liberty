#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8c00);

#define public_6ee8c1f _public_6ee8c1f

PROC_DECLARE(0x6ee8c00, internal_6ee8c00, public_6ee8c00);
/* CHUNK of public_6ee8960 */
extern "C" NAKED register_t __cdecl internal_6ee8c00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xFFFFFFFF
        je public_6ee8c1f
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ee8c1f
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_6ee8c1f : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ee8c00)
        ASM_EXPORT_ENTRY_SINGLE(0x6ee8c1f, public_6ee8c1f)
    }
}

#undef public_6ee8c1f

#pragma init_seg(compiler)
extern "C" void const* const public_6ee8c1f = __AsmFindLabelExport(&internal_6ee8c00, 0x6ee8c1f);

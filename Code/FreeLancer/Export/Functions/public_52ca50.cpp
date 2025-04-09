#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52ca50);

#define public_52ca7e _public_52ca7e

PROC_DECLARE(0x52ca50, internal_52ca50, public_52ca50);
/* CHUNK of public_52c830 */
extern "C" NAKED register_t __cdecl internal_52ca50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        cmp ecx, 0xFFFFFFFF
        je public_52ca7e
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_52ca7e : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x52ca50)
        ASM_EXPORT_ENTRY_SINGLE(0x52ca7e, public_52ca7e)
    }
}

#undef public_52ca7e

#pragma init_seg(compiler)
extern "C" void const* const public_52ca7e = __AsmFindLabelExport(&internal_52ca50, 0x52ca7e);

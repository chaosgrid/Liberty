#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211040);

#define public_6211049 _public_6211049
#define public_6211059 _public_6211059

PROC_DECLARE(0x6211040, internal_6211040, public_6211040);
/* CHUNK of public_6210e20 */
extern "C" NAKED register_t __cdecl internal_6211040()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_6211059
        push esi
        public_6211049 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_6211049
        pop esi
        public_6211059 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x6211040)
        ASM_EXPORT_ENTRY_FIRST(0x6211049, public_6211049)
        ASM_EXPORT_ENTRY_LAST(0x6211059, public_6211059)
    }
}

#undef public_6211049
#undef public_6211059

#pragma init_seg(compiler)
extern "C" void const* const public_6211049 = __AsmFindLabelExport(&internal_6211040, 0x6211049);
extern "C" void const* const public_6211059 = __AsmFindLabelExport(&internal_6211040, 0x6211059);

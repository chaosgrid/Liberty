#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6239ee0);

#define public_6239ee9 _public_6239ee9
#define public_6239ef9 _public_6239ef9

PROC_DECLARE(0x6239ee0, internal_6239ee0, public_6239ee0);
/* CHUNK of public_6239c70 */
extern "C" NAKED register_t __cdecl internal_6239ee0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_6239ef9
        push esi
        public_6239ee9 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_6239ee9
        pop esi
        public_6239ef9 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x6239ee0)
        ASM_EXPORT_ENTRY_FIRST(0x6239ee9, public_6239ee9)
        ASM_EXPORT_ENTRY_LAST(0x6239ef9, public_6239ef9)
    }
}

#undef public_6239ee9
#undef public_6239ef9

#pragma init_seg(compiler)
extern "C" void const* const public_6239ee9 = __AsmFindLabelExport(&internal_6239ee0, 0x6239ee9);
extern "C" void const* const public_6239ef9 = __AsmFindLabelExport(&internal_6239ee0, 0x6239ef9);

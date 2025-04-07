#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6230f10);

#define public_6230f19 _public_6230f19
#define public_6230f29 _public_6230f29

PROC_DECLARE(0x6230f10, internal_6230f10, public_6230f10);
/* CHUNK of public_6230ce0 */
extern "C" NAKED register_t __cdecl internal_6230f10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_6230f29
        push esi
        public_6230f19 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_6230f19
        pop esi
        public_6230f29 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x6230f10)
        ASM_EXPORT_ENTRY_FIRST(0x6230f19, public_6230f19)
        ASM_EXPORT_ENTRY_LAST(0x6230f29, public_6230f29)
    }
}

#undef public_6230f19
#undef public_6230f29

#pragma init_seg(compiler)
extern "C" void const* const public_6230f19 = __AsmFindLabelExport(&internal_6230f10, 0x6230f19);
extern "C" void const* const public_6230f29 = __AsmFindLabelExport(&internal_6230f10, 0x6230f29);

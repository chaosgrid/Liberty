#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b730);

#define public_620b739 _public_620b739
#define public_620b749 _public_620b749

PROC_DECLARE(0x620b730, internal_620b730, public_620b730);
/* CHUNK of public_620b480 */
extern "C" NAKED register_t __cdecl internal_620b730()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_620b749
        push esi
        public_620b739 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_620b739
        pop esi
        public_620b749 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x620b730)
        ASM_EXPORT_ENTRY_FIRST(0x620b739, public_620b739)
        ASM_EXPORT_ENTRY_LAST(0x620b749, public_620b749)
    }
}

#undef public_620b739
#undef public_620b749

#pragma init_seg(compiler)
extern "C" void const* const public_620b739 = __AsmFindLabelExport(&internal_620b730, 0x620b739);
extern "C" void const* const public_620b749 = __AsmFindLabelExport(&internal_620b730, 0x620b749);

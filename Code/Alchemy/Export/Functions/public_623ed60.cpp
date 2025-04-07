#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ed60);

#define public_623ed69 _public_623ed69
#define public_623ed79 _public_623ed79

PROC_DECLARE(0x623ed60, internal_623ed60, public_623ed60);
/* CHUNK of public_6204630 */
extern "C" NAKED register_t __cdecl internal_623ed60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_623ed79
        push esi
        public_623ed69 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_623ed69
        pop esi
        public_623ed79 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x623ed60)
        ASM_EXPORT_ENTRY_FIRST(0x623ed69, public_623ed69)
        ASM_EXPORT_ENTRY_LAST(0x623ed79, public_623ed79)
    }
}

#undef public_623ed69
#undef public_623ed79

#pragma init_seg(compiler)
extern "C" void const* const public_623ed69 = __AsmFindLabelExport(&internal_623ed60, 0x623ed69);
extern "C" void const* const public_623ed79 = __AsmFindLabelExport(&internal_623ed60, 0x623ed79);

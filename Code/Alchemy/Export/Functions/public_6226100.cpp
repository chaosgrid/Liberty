#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226100);

#define public_6226109 _public_6226109
#define public_6226119 _public_6226119

PROC_DECLARE(0x6226100, internal_6226100, public_6226100);
/* CHUNK of public_6225ed0 */
extern "C" NAKED register_t __cdecl internal_6226100()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_6226119
        push esi
        public_6226109 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_6226109
        pop esi
        public_6226119 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x6226100)
        ASM_EXPORT_ENTRY_FIRST(0x6226109, public_6226109)
        ASM_EXPORT_ENTRY_LAST(0x6226119, public_6226119)
    }
}

#undef public_6226109
#undef public_6226119

#pragma init_seg(compiler)
extern "C" void const* const public_6226109 = __AsmFindLabelExport(&internal_6226100, 0x6226109);
extern "C" void const* const public_6226119 = __AsmFindLabelExport(&internal_6226100, 0x6226119);

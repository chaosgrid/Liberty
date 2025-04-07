#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622da20);

#define public_622da29 _public_622da29
#define public_622da39 _public_622da39

PROC_DECLARE(0x622da20, internal_622da20, public_622da20);
/* CHUNK of public_622d7c0 */
extern "C" NAKED register_t __cdecl internal_622da20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_622da39
        push esi
        public_622da29 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_622da29
        pop esi
        public_622da39 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x622da20)
        ASM_EXPORT_ENTRY_FIRST(0x622da29, public_622da29)
        ASM_EXPORT_ENTRY_LAST(0x622da39, public_622da39)
    }
}

#undef public_622da29
#undef public_622da39

#pragma init_seg(compiler)
extern "C" void const* const public_622da29 = __AsmFindLabelExport(&internal_622da20, 0x622da29);
extern "C" void const* const public_622da39 = __AsmFindLabelExport(&internal_622da20, 0x622da39);

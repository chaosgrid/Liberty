#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfd4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfd4e0);

#define public_6cfd4c0 _public_6cfd4c0
#define public_6cfd4d4 _public_6cfd4d4

PROC_DECLARE(0x6cfd4b0, internal_6cfd4b0, public_6cfd4b0);
/* CHUNK of public_6cfffd0 */
extern "C" NAKED register_t __cdecl internal_6cfd4b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [public_6d6454c]
        push esi
        push edi
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6cfd4d4
        public_6cfd4c0 : nop
        lea ecx, ds:[esi+0xC]
        push ecx
        mov ecx, offset public_6d8d870
        call public_6cfd4e0
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6cfd4c0
        public_6cfd4d4 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfd4b0)
        ASM_EXPORT_ENTRY_FIRST(0x6cfd4c0, public_6cfd4c0)
        ASM_EXPORT_ENTRY_LAST(0x6cfd4d4, public_6cfd4d4)
    }
}

#undef public_6cfd4c0
#undef public_6cfd4d4

#pragma init_seg(compiler)
extern "C" void const* const public_6cfd4c0 = __AsmFindLabelExport(&internal_6cfd4b0, 0x6cfd4c0);
extern "C" void const* const public_6cfd4d4 = __AsmFindLabelExport(&internal_6cfd4b0, 0x6cfd4d4);

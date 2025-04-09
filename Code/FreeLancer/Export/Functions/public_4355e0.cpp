#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434d10);
CLANG_FORWARD_PROC_SYMBOL(public_4355e0);

#define public_435600 _public_435600
#define public_43560c _public_43560c
#define public_435625 _public_435625

PROC_DECLARE(0x4355e0, internal_4355e0, public_4355e0);
/* CHUNK of public_558850 */
extern "C" NAKED register_t __cdecl internal_4355e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        push edi
        call dword ptr ds : [public_5c60e4]
        mov edi, eax
        mov eax, dword ptr ds : [edi+0x10]
        mov esi, dword ptr ds : [eax]
        add edi, 0xC
        cmp esi, eax
        je public_435625
        push ebx
        mov ebx, dword ptr ds : [public_5c6020]
        lea ecx, ds:[ecx]
        public_435600 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_43560c
        mov eax, dword ptr ds : [public_5c7078]
        public_43560c : nop
        push eax
        call ebx
        add esp, 4
        push eax
        mov ecx, offset public_668660
        call public_434d10
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_435600
        pop ebx
        public_435625 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4355e0)
        ASM_EXPORT_ENTRY_FIRST(0x435600, public_435600)
        ASM_EXPORT_ENTRY(0x43560c, public_43560c)
        ASM_EXPORT_ENTRY_LAST(0x435625, public_435625)
    }
}

#undef public_435600
#undef public_43560c
#undef public_435625

#pragma init_seg(compiler)
extern "C" void const* const public_435600 = __AsmFindLabelExport(&internal_4355e0, 0x435600);
extern "C" void const* const public_43560c = __AsmFindLabelExport(&internal_4355e0, 0x43560c);
extern "C" void const* const public_435625 = __AsmFindLabelExport(&internal_4355e0, 0x435625);

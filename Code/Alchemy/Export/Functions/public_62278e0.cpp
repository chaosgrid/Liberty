#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a4f0);

#define public_6227931 _public_6227931

PROC_DECLARE(0x62278e0, internal_62278e0, public_62278e0);
extern "C" NAKED register_t __cdecl internal_62278e0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edi
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [esi+0xC]
        add esi, 8
        lea edx, ss:[esp+0x10]
        mov ecx, esi
        push edx
        mov dword ptr ss : [esp+0x14], eax
        call public_622a4f0
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+8], eax
        cmp eax, esi
        je public_6227931
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jb public_6227931
        lea eax, ss:[esp+8]
        xor edx, edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        pop edi
        setne dl
        mov al, dl
        pop esi
        pop ecx
        ret 4
        public_6227931 : nop
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], esi
        xor edx, edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        pop edi
        setne dl
        mov al, dl
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62278e0)
    }
}

#undef public_6227931

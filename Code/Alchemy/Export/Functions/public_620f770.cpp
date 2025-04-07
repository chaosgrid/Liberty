#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211440);
CLANG_FORWARD_PROC_SYMBOL(public_62121d0);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);

#define public_620f7a8 _public_620f7a8
#define public_620f7e7 _public_620f7e7

PROC_DECLARE(0x620f770, internal_620f770, public_620f770);
extern "C" NAKED register_t __cdecl internal_620f770()
{
    __asm
    {
        mov eax, dword ptr ds : [public_62579b4]
        sub esp, 0xC
        test eax, eax
        push ebx
        push esi
        push edi
        jne public_620f7a8
        mov eax, dword ptr ds : [public_62579b8]
        mov edi, dword ptr ds : [public_62579a8]
        sub eax, edi
        mov edx, dword ptr ds : [public_62579a4]
        shr eax, 3
        imul eax, dword ptr ds : [public_62579ac]
        mov ecx, dword ptr ds : [eax+edx+8]
        add eax, edx
        push eax
        call public_62121d0
        public_620f7a8 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        mov ecx, 6
        sub esp, 0x18
        mov esi, ebx
        mov edi, esp
        rep movsd
        mov esi, dword ptr ss : [esp+0x3C]
        push esi
        lea ecx, ds:[esi+0xD8]
        call public_6211440
        mov eax, dword ptr ds : [public_62579c8]
        test eax, eax
        jne public_620f7e7
        call public_623e830
        mov dword ptr ds : [public_62579c8], eax
        public_620f7e7 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xEC]
        push ebx
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov esi, dword ptr ds : [esi+0xDC]
        pop edi
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        add esi, 0x30
        mov dword ptr ds : [esi], eax
        xor eax, eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebx
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x620f770)
    }
}

#undef public_620f7a8
#undef public_620f7e7

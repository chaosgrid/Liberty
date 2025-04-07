#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211440);
CLANG_FORWARD_PROC_SYMBOL(public_62121d0);
CLANG_FORWARD_PROC_SYMBOL(public_6212700);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);

#define public_6212740 _public_6212740
#define public_621277b _public_621277b

PROC_DECLARE(0x6212700, internal_6212700, public_6212700);
extern "C" NAKED register_t __cdecl internal_6212700()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        push ebx
        lea ebx, ds:[eax+0xC]
        mov eax, dword ptr ds : [public_62579b4]
        push ebp
        push esi
        push edi
        test eax, eax
        jne public_6212740
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
        public_6212740 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x24]
        push ecx
        push edx
        mov ecx, 6
        sub esp, 0x18
        mov esi, ebp
        mov edi, esp
        rep movsd
        push ebx
        lea ecx, ds:[ebx+0xD8]
        call public_6211440
        mov eax, dword ptr ds : [public_62579c8]
        test eax, eax
        jne public_621277b
        call public_623e830
        mov dword ptr ds : [public_62579c8], eax
        public_621277b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0xEC]
        push ebp
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov esi, dword ptr ds : [ebx+0xDC]
        pop edi
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        add esi, 0x30
        mov dword ptr ds : [esi], eax
        xor eax, eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x6212700)
    }
}

#undef public_6212740
#undef public_621277b

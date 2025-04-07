#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac40e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4160);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4390);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4550);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4f80);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8d40);
CLANG_FORWARD_PROC_SYMBOL(public_6acd2b0);

#define public_6acd31d _public_6acd31d
#define public_6acd34b _public_6acd34b
#define public_6acd3cc _public_6acd3cc
#define public_6acd49e _public_6acd49e
#define public_6acd4aa _public_6acd4aa

PROC_DECLARE(0x6acd2b0, internal_6acd2b0, public_6acd2b0);
extern "C" NAKED register_t __cdecl internal_6acd2b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        push ecx
        call public_6ac8d40
        mov edi, eax
        push 0x251C
        mov ebp, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x24], edi
        mov esi, dword ptr ss : [ebp+0x100]
        call public_6ac4f80
        mov ebx, eax
        test ebx, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        jne public_6acd31d
        mov edi, dword ptr ss : [esp+0x24]
        lea edx, ds:[esi*4]
        mov ecx, edx
        mov esi, ecx
        shr ecx, 2
        rep stosd
        mov ecx, esi
        and ecx, 3
        rep stosb
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, edx
        xor eax, eax
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x1C
        public_6acd31d : nop
        test edi, edi
        jne public_6acd34b
        mov ecx, dword ptr ss : [esp+0x28]
        lea eax, ss:[ebp+0x1144]
        push ebp
        push ecx
        push eax
        push eax
        call public_6ac40e0
        mov ecx, esi
        xor eax, eax
        mov edi, dword ptr ss : [esp+0x24]
        push ebx
        rep stosd
        call public_6ac4fb0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x1C
        public_6acd34b : nop
        mov ebx, dword ptr ss : [esp+0x28]
        lea eax, ds:[esi*4]
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, eax
        mov edx, ecx
        mov edi, ebx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        push ebp
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, eax
        lea esi, ss:[ebp+0x1144]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edi, ds:[esi+0x100]
        push edi
        push 2
        push ecx
        call public_6ac4390
        lea eax, ds:[esi+0x200]
        mov dword ptr ss : [esp+0x28], eax
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        push eax
        push eax
        call public_6ac4160
        push ebp
        push esi
        push edi
        push esi
        call public_6ac4550
        mov eax, dword ptr ss : [esp+0x20]
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6acd4aa
        public_6acd3cc : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x24]
        push edx
        push ebp
        push edi
        dec ecx
        push esi
        push esi
        mov dword ptr ss : [esp+0x34], ecx
        call public_6ac4160
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
        push ebp
        push edi
        push ecx
        push edi
        call public_6ac4160
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push ebp
        push esi
        push ebx
        push esi
        call public_6ac4160
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push ebp
        push ebx
        push ebx
        push ebx
        call public_6ac4160
        push ebp
        push ebx
        push edi
        push ebx
        call public_6ac40e0
        push ebp
        push ebx
        push 0xFFFFFFFF
        push ebx
        call public_6ac4390
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, ecx
        and ecx, 0x1F
        shr edx, 5
        mov edx, dword ptr ds : [eax+edx*4]
        shr edx, cl
        test dl, 1
        je public_6acd49e
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
        push ebp
        push edi
        push esi
        push ecx
        call public_6ac4160
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push ebp
        push esi
        push esi
        push eax
        call public_6ac4160
        push ebp
        push esi
        push ebx
        push esi
        call public_6ac40e0
        push ebp
        push esi
        push 0xFFFFFFFF
        push esi
        call public_6ac4390
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push ebp
        push ebx
        push ebx
        push edx
        call public_6ac4160
        push ebp
        push ebx
        push edi
        push ebx
        call public_6ac40e0
        push ebp
        push ebx
        push 0xFFFFFFFF
        push ebx
        call public_6ac4390
        public_6acd49e : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        jne public_6acd3cc
        public_6acd4aa : nop
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebx
        call public_6ac4fb0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x1C
        UNREACHABLE_TRAP(0x6acd2b0)
    }
}

#undef public_6acd31d
#undef public_6acd34b
#undef public_6acd3cc
#undef public_6acd49e
#undef public_6acd4aa

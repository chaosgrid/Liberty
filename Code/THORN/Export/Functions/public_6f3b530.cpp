#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23090);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b670);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cc20);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f3b5e0 _public_6f3b5e0
#define public_6f3b60c _public_6f3b60c
#define public_6f3b645 _public_6f3b645
#define public_6f3b65a _public_6f3b65a

PROC_DECLARE(0x6f3b530, internal_6f3b530, public_6f3b530);
extern "C" NAKED register_t __cdecl internal_6f3b530()
{
    __asm
    {
        sub esp, 0xA0
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xAC]
        push esi
        push edi
        lea ebx, ss:[ebp+0x60]
        mov ecx, 0xC
        mov esi, ebx
        lea edi, ss:[esp+0x5C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0xB8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[ebp+0x54]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        lea esi, ss:[ebp+0x30]
        lea edx, ds:[esi+0x24]
        push edx
        mov dword ptr ds : [eax+8], ecx
        lea eax, ss:[esp+0x24]
        push esi
        push eax
        call public_6f3b9a0
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6f23090
        lea edx, ss:[esp+0x8C]
        push edx
        mov ecx, esi
        call public_6f3b670
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, 9
        lea edi, ss:[esp+0x2C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x54], ecx
        mov dword ptr ss : [esp+0x50], eax
        mov ecx, 0xC
        lea esi, ss:[esp+0x2C]
        mov edi, ebx
        mov dword ptr ss : [esp+0x58], edx
        rep movsd
        mov ecx, dword ptr ss : [ebp+0xA4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        je public_6f3b65a
        nop 
        public_6f3b5e0 : nop
        mov esi, dword ptr ds : [eax+0x10]
        test esi, esi
        je public_6f3b645
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6f3b645
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [public_6f61e1c]
        test eax, eax
        jne public_6f3b60c
        call public_6f57de0
        mov dword ptr ds : [public_6f61e1c], eax
        public_6f3b60c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x60]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], edx
        call dword ptr ds : [eax+0xC]
        public_6f3b645 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6f3cc20
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ss : [ebp+0xA4]
        jne public_6f3b5e0
        public_6f3b65a : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xA0
        ret 8
        UNREACHABLE_TRAP(0x6f3b530)
    }
}

#undef public_6f3b5e0
#undef public_6f3b60c
#undef public_6f3b645
#undef public_6f3b65a

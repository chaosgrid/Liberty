#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8ce7d _public_6d8ce7d

PROC_DECLARE(0x6d8cdf0, internal_6d8cdf0, public_6d8cdf0);
extern "C" NAKED register_t __cdecl internal_6d8cdf0()
{
    __asm
    {
        sub esp, 0x94
        push ebx
        lea eax, ss:[esp+4]
        push eax
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        push 0x39
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8ce7d
        push esi
        mov esi, dword ptr ss : [esp+0xA0]
        push edi
        push 0x40
        lea ecx, ss:[esp+0x14]
        push esi
        push ecx
        call dword ptr ds : [public_6db31f0]
        mov eax, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [esi+0x38]
        mov dword ptr ss : [esp+0xA0], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x9C], edx
        mov edx, dword ptr ds : [esi+0x3C]
        mov dword ptr ss : [esp+0xA4], ecx
        lea edi, ds:[eax+0x20]
        mov dword ptr ss : [esp+0xA8], edx
        mov word ptr ss : [esp+0x9A], 0
        mov ecx, 0x24
        lea esi, ss:[esp+0x1C]
        rep movsd
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ebx]
        add esp, 0xC
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x170]
        pop edi
        pop esi
        public_6d8ce7d : nop
        pop ebx
        add esp, 0x94
        ret 8
        UNREACHABLE_TRAP(0x6d8cdf0)
    }
}

#undef public_6d8ce7d

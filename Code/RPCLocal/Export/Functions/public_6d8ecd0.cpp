#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8ed2a _public_6d8ed2a
#define public_6d8ed30 _public_6d8ed30
#define public_6d8ed4e _public_6d8ed4e

PROC_DECLARE(0x6d8ecd0, internal_6d8ecd0, public_6d8ecd0);
extern "C" NAKED register_t __cdecl internal_6d8ecd0()
{
    __asm
    {
        push ecx
        push ebp
        lea eax, ss:[esp+4]
        push eax
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+4]
        push 5
        push 1
        call public_6d96300
        test eax, eax
        jne public_6d8ed4e
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        xor edx, edx
        cmp esi, edx
        push edi
        mov edi, eax
        je public_6d8ed2a
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, edx
        je public_6d8ed2a
        push ebx
        lea ebx, ds:[eax+0x28]
        push ecx
        mov dword ptr ds : [ebx], ecx
        call public_6db1f8a
        mov ecx, dword ptr ds : [ebx]
        mov edx, ecx
        mov dword ptr ds : [edi+0x2C], eax
        shr ecx, 2
        mov edi, eax
        rep movsd
        add esp, 4
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop ebx
        jmp public_6d8ed30
        public_6d8ed2a : nop
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [edi+0x2C], edx
        public_6d8ed30 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+0x20], ecx
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [ebp-4]
        lea ecx, ss:[ebp-4]
        push eax
        call dword ptr ds : [edx+0x170]
        pop edi
        pop esi
        public_6d8ed4e : nop
        pop ebp
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x6d8ecd0)
    }
}

#undef public_6d8ed2a
#undef public_6d8ed30
#undef public_6d8ed4e

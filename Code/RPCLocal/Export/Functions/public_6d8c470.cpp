#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8c4ca _public_6d8c4ca
#define public_6d8c4d0 _public_6d8c4d0
#define public_6d8c4fa _public_6d8c4fa

PROC_DECLARE(0x6d8c470, internal_6d8c470, public_6d8c470);
extern "C" NAKED register_t __cdecl internal_6d8c470()
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
        jne public_6d8c4fa
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        xor edx, edx
        cmp esi, edx
        push edi
        mov edi, eax
        je public_6d8c4ca
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, edx
        je public_6d8c4ca
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
        jmp public_6d8c4d0
        public_6d8c4ca : nop
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [edi+0x2C], edx
        public_6d8c4d0 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x20], eax
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+0x24], ecx
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [ebp-4]
        movzx eax, ax
        lea ecx, ss:[ebp-4]
        push esi
        push eax
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        public_6d8c4fa : nop
        pop ebp
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6d8c470)
    }
}

#undef public_6d8c4ca
#undef public_6d8c4d0
#undef public_6d8c4fa

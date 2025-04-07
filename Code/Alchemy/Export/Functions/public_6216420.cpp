#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6216420);
CLANG_FORWARD_PROC_SYMBOL(public_6218780);
CLANG_FORWARD_PROC_SYMBOL(public_62188c0);
CLANG_FORWARD_PROC_SYMBOL(public_6244b80);
CLANG_FORWARD_PROC_SYMBOL(public_6244df0);
CLANG_FORWARD_PROC_SYMBOL(public_6244ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);

#define public_6216460 _public_6216460
#define public_6216494 _public_6216494
#define public_621650b _public_621650b
#define public_621651c _public_621651c

PROC_DECLARE(0x6216420, internal_6216420, public_6216420);
extern "C" NAKED register_t __cdecl internal_6216420()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        sub esp, 8
        xor eax, eax
        mov word ptr ds : [public_62579e6], ax
        mov word ptr ds : [public_62579e8], ax
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov ebx, 1
        fadd dword ptr ds : [esi+0x84]
        cmp dword ptr ds : [esi+0xB0], eax
        fstp dword ptr ds : [esi+0x84]
        jne public_6216460
        cmp dword ptr ds : [esi+0xD8], eax
        jne public_6216460
        or dword ptr ds : [esi+4], ebx
        public_6216460 : nop
        mov eax, dword ptr ds : [esi+0xF0]
        lea ecx, ss:[esp+0xC]
        lea edi, ds:[esi+0xB4]
        push ecx
        mov eax, dword ptr ds : [eax+0x64]
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], offset public_6255804
        mov dword ptr ss : [esp+0x14], eax
        call public_6244b80
        cmp dword ptr ds : [edi+4], 0xFFFFFFFF
        jne public_6216494
        mov ecx, edi
        call public_6244df0
        public_6216494 : nop
        mov eax, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [eax+0x60]
        and edx, 8
        cmp dl, 8
        jne public_621650b
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [eax+0x84]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [edi+0x1C]
        fstp dword ptr ss : [esp+0x18]
        cmp eax, ebx
        je public_621651c
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, 0xFFFFFFFF
        je public_621651c
        add edi, 8
        dec eax
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], 0
        fild qword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [public_6257bbc]
        push edi
        fmul dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x20], ecx
        call public_6246188
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        push ebp
        call dword ptr ds : [eax+0x70]
        pop ebp
        jmp public_621651c
        public_621650b : nop
        cmp dword ptr ds : [edi+0x1C], ebx
        je public_621651c
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        push eax
        call public_6244ef0
        public_621651c : nop
        mov edx, dword ptr ds : [esi+0x18]
        lea ecx, ds:[esi+0x98]
        lea edi, ds:[esi+0xD8]
        push ecx
        push edi
        push edx
        call public_6218780
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push edi
        call public_62188c0
        add esp, 0x14
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6216420)
    }
}

#undef public_6216460
#undef public_6216494
#undef public_621650b
#undef public_621651c

#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7370);
CLANG_FORWARD_PROC_SYMBOL(public_6d0efe0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f100);

#define public_6d0f001 _public_6d0f001
#define public_6d0f003 _public_6d0f003
#define public_6d0f05c _public_6d0f05c
#define public_6d0f080 _public_6d0f080
#define public_6d0f0a8 _public_6d0f0a8
#define public_6d0f0af _public_6d0f0af

PROC_DECLARE(0x6d0efe0, internal_6d0efe0, public_6d0efe0);
extern "C" NAKED register_t __cdecl internal_6d0efe0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d0f001
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0f003
        public_6d0f001 : nop
        xor eax, eax
        public_6d0f003 : nop
        mov edx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [eax+0xB4]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        test esi, esi
        mov ebx, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x24]
        jbe public_6d0f05c
        mov edx, dword ptr ds : [public_6d90264]
        lea ecx, ds:[esi-1]
        cmp ecx, edx
        jae public_6d0f05c
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+edx+0x348], 0
        je public_6d0f05c
        imul esi, 0x418
        lea ecx, ds:[esi+edx]
        cmp dword ptr ds : [ecx-0x34], eax
        jne public_6d0f05c
        push 0
        push ebx
        push ebp
        add ecx, 0xFFFFFBE8
        call public_6d4f100
        public_6d0f05c : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edi+0xC]
        mov word ptr ss : [esp+0x18], bp
        mov word ptr ss : [esp+0x1A], bx
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0f0af
        mov edi, edi
        public_6d0f080 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        lea ecx, ds:[esi+8]
        call public_6cf7370
        test al, al
        je public_6d0f0a8
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ds : [esi+0x40]
        push eax
        call dword ptr ds : [edx+0x104]
        public_6d0f0a8 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6d0f080
        public_6d0f0af : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6d0efe0)
    }
}

#undef public_6d0f001
#undef public_6d0f003
#undef public_6d0f05c
#undef public_6d0f080
#undef public_6d0f0a8
#undef public_6d0f0af

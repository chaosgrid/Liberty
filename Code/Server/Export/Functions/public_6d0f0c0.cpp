#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7370);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f100);

#define public_6d0f0dd _public_6d0f0dd
#define public_6d0f0df _public_6d0f0df
#define public_6d0f13d _public_6d0f13d
#define public_6d0f157 _public_6d0f157
#define public_6d0f17c _public_6d0f17c
#define public_6d0f183 _public_6d0f183

PROC_DECLARE(0x6d0f0c0, internal_6d0f0c0, public_6d0f0c0);
extern "C" NAKED register_t __cdecl internal_6d0f0c0()
{
    __asm
    {
        sub esp, 0x10
        mov dword ptr ss : [esp], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6d0f0dd
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d0f0df
        public_6d0f0dd : nop
        xor eax, eax
        public_6d0f0df : nop
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax+0xB4]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x20]
        test esi, esi
        mov ebx, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x28]
        mov edi, eax
        jbe public_6d0f13d
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ecx
        jae public_6d0f13d
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6d0f13d
        imul esi, 0x418
        lea eax, ds:[esi+ecx]
        cmp dword ptr ds : [eax-0x34], edi
        jne public_6d0f13d
        push 0
        push ebx
        push ebp
        lea ecx, ds:[eax-0x418]
        call public_6d4f100
        public_6d0f13d : nop
        mov dword ptr ss : [esp+0x14], edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0xC]
        mov word ptr ss : [esp+0x18], bp
        mov dword ptr ss : [esp+0x1C], ebx
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0f183
        public_6d0f157 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        lea ecx, ds:[esi+8]
        call public_6cf7370
        test al, al
        je public_6d0f17c
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ds : [esi+0x40]
        push eax
        call dword ptr ds : [edx+0x20]
        public_6d0f17c : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6d0f157
        public_6d0f183 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6d0f0c0)
    }
}

#undef public_6d0f0dd
#undef public_6d0f0df
#undef public_6d0f13d
#undef public_6d0f157
#undef public_6d0f17c
#undef public_6d0f183

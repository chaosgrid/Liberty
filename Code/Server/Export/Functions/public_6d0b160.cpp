#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1a00);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6820);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b160);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ed10);
CLANG_FORWARD_PROC_SYMBOL(public_6d50a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d50af0);

#define public_6d0b182 _public_6d0b182
#define public_6d0b184 _public_6d0b184
#define public_6d0b205 _public_6d0b205
#define public_6d0b233 _public_6d0b233
#define public_6d0b237 _public_6d0b237
#define public_6d0b241 _public_6d0b241
#define public_6d0b256 _public_6d0b256

PROC_DECLARE(0x6d0b160, internal_6d0b160, public_6d0b160);
extern "C" NAKED register_t __cdecl internal_6d0b160()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ebx, ecx
        mov dword ptr ss : [esp+0xC], ebx
        je public_6d0b182
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0b184
        public_6d0b182 : nop
        xor eax, eax
        public_6d0b184 : nop
        mov ebp, dword ptr ss : [esp+0x2C]
        push edi
        mov edi, dword ptr ds : [eax+0xB4]
        test edi, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_6d0b237
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov ebx, eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6d90260
        call public_6ce1a00
        test al, al
        je public_6d0b233
        mov eax, dword ptr ds : [public_6d90260]
        mov esi, edi
        imul esi, 0x418
        cmp dword ptr ds : [esi+eax-0x34], ebx
        jne public_6d0b233
        lea ecx, ds:[esi+eax-0x418]
        call public_6d50af0
        mov ecx, dword ptr ds : [public_6d90260]
        push 1
        lea ecx, ds:[esi+ecx-0x418]
        call public_6d50a40
        cmp ebp, 1
        jne public_6d0b205
        mov edx, dword ptr ds : [public_6d90260]
        push 0
        push 0
        lea ecx, ds:[esi+edx-0x418]
        call public_6d4ed10
        public_6d0b205 : nop
        mov eax, dword ptr ds : [public_6d90260]
        mov dword ptr ds : [esi+eax-0x34], 0
        mov ecx, dword ptr ds : [public_6d90260]
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], edi
        mov edx, dword ptr ds : [esi+ecx-0x38]
        push eax
        push 0x37
        mov dword ptr ss : [esp+0x20], edx
        call public_6d43650
        add esp, 8
        public_6d0b233 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6d0b237 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        pop edi
        je public_6d0b256
        public_6d0b241 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ebp
        push ecx
        lea ecx, ds:[esi+8]
        call public_6cf6820
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0xC]
        jne public_6d0b241
        public_6d0b256 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6d0b160)
    }
}

#undef public_6d0b182
#undef public_6d0b184
#undef public_6d0b205
#undef public_6d0b233
#undef public_6d0b237
#undef public_6d0b241
#undef public_6d0b256

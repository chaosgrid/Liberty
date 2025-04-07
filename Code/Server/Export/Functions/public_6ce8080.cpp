#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce8080);
CLANG_FORWARD_PROC_SYMBOL(public_6ce83c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b160);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c730);
CLANG_FORWARD_PROC_SYMBOL(public_6d19110);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60548);

#define public_6ce80ca _public_6ce80ca
#define public_6ce80cc _public_6ce80cc
#define public_6ce818f _public_6ce818f
#define public_6ce8191 _public_6ce8191
#define public_6ce81c5 _public_6ce81c5
#define public_6ce81d0 _public_6ce81d0
#define public_6ce81e0 _public_6ce81e0
#define public_6ce81f8 _public_6ce81f8
#define public_6ce81fa _public_6ce81fa
#define public_6ce821b _public_6ce821b
#define public_6ce8264 _public_6ce8264
#define public_6ce8276 _public_6ce8276
#define public_6ce8278 _public_6ce8278
#define public_6ce82fa _public_6ce82fa
#define public_6ce82fc _public_6ce82fc
#define public_6ce8334 _public_6ce8334
#define public_6ce8382 _public_6ce8382
#define public_6ce8384 _public_6ce8384
#define public_6ce838c _public_6ce838c
#define public_6ce839b _public_6ce839b

PROC_DECLARE(0x6ce8080, internal_6ce8080, public_6ce8080);
extern "C" NAKED register_t __cdecl internal_6ce8080()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60548 @0x6ce8088*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60548
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x88]
        xor ebx, ebx
        cmp al, bl
        push edi
        mov edi, dword ptr ss : [esp+0x64]
        jne public_6ce8264
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        mov byte ptr ds : [esi+0x88], 1
        je public_6ce80ca
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6ce80cc
        public_6ce80ca : nop
        xor eax, eax
        public_6ce80cc : nop
        cmp dword ptr ds : [eax+0xB4], ebx
        jne public_6ce821b
        cmp edi, 1
        jne public_6ce8264
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], 0
        call public_6d06cd0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [edx+0x20]
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x88]
        lea edx, ss:[esp+0x14]
        push edx
        push 0x38
        mov dword ptr ss : [esp+0x28], 0
        call public_6d43650
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6d65188]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_6ce8264
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [public_6d6402c]
        mov eax, dword ptr ds : [esi]
        push ecx
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        mov edx, dword ptr ds : [public_6d64230]
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x74]
        push edx
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x1E4]
        test al, al
        je public_6ce8264
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_6ce818f
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_6ce8191
        public_6ce818f : nop
        xor eax, eax
        public_6ce8191 : nop
        mov ecx, eax
        call dword ptr ds : [public_6d6422c]
        mov edi, eax
        cmp edi, ebx
        je public_6ce81c5
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x68], eax
        lea ecx, ss:[esp+0x68]
        lea eax, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], 7
        call dword ptr ds : [edx]
        public_6ce81c5 : nop
        mov eax, dword ptr ds : [esi+0x64]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6ce81e0
        mov edi, edi
        public_6ce81d0 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        push esi
        call public_6d0c730
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x64]
        jne public_6ce81d0
        public_6ce81e0 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_6ce81f8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce81fa
        public_6ce81f8 : nop
        xor eax, eax
        public_6ce81fa : nop
        mov edx, dword ptr ds : [eax]
        push esi
        mov ecx, eax
        call dword ptr ds : [edx+0xC0]
        xor al, al
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0x54
        ret 8
        public_6ce821b : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6ce8264
        cmp edi, 1
        jne public_6ce8264
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xBC]
        test al, al
        je public_6ce8264
        mov ecx, esi
        call public_6ce83c0
        push ecx
        mov ecx, esp
        mov dword ptr ss : [esp+0x68], esp
        push 0x14
        mov word ptr ds : [ecx], ax
        mov byte ptr ds : [ecx+2], bl
        mov byte ptr ds : [ecx+3], bl
        call public_6d19110
        mov eax, dword ptr ds : [public_6d8f9a8]
        add esp, 8
        inc eax
        mov dword ptr ds : [public_6d8f9a8], eax
        public_6ce8264 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        je public_6ce8276
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6ce8278
        public_6ce8276 : nop
        xor ecx, ecx
        public_6ce8278 : nop
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax+0x98]
        mov cl, byte ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov byte ptr ss : [esp+0x44], cl
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x5C], ebx
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x28], eax
        call public_6d06cd0
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x34], edi
        je public_6ce82fa
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6ce82fc
        public_6ce82fa : nop
        xor eax, eax
        public_6ce82fc : nop
        mov edx, dword ptr ds : [eax+0xB4]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edx
        call dword ptr ds : [eax]
        cmp edi, 1
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x38], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x3C], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x40], eax
        jne public_6ce8334
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x1F4]
        public_6ce8334 : nop
        lea ecx, ss:[esp+0x24]
        push ecx
        push 0x39
        call public_6d43650
        mov ecx, dword ptr ds : [esi+0x28]
        add esp, 8
        push edi
        push esi
        call public_6d0b160
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x15C]
        cmp edi, 1
        jne public_6ce839b
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x1F0]
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6ce838c
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_6ce8382
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6ce8384
        public_6ce8382 : nop
        xor eax, eax
        public_6ce8384 : nop
        cmp dword ptr ds : [eax+0xB4], ebx
        jne public_6ce839b
        public_6ce838c : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x1F8]
        public_6ce839b : nop
        mov ecx, dword ptr ss : [esp+0x48]
        push ecx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x58]
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x6ce8080)
    }
}

#undef public_6ce80ca
#undef public_6ce80cc
#undef public_6ce818f
#undef public_6ce8191
#undef public_6ce81c5
#undef public_6ce81d0
#undef public_6ce81e0
#undef public_6ce81f8
#undef public_6ce81fa
#undef public_6ce821b
#undef public_6ce8264
#undef public_6ce8276
#undef public_6ce8278
#undef public_6ce82fa
#undef public_6ce82fc
#undef public_6ce8334
#undef public_6ce8382
#undef public_6ce8384
#undef public_6ce838c
#undef public_6ce839b

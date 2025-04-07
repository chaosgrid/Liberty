#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d07e20);
CLANG_FORWARD_PROC_SYMBOL(public_6d087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0cc00);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d000);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d100);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c430);

#define public_6cef6b0 _public_6cef6b0
#define public_6cef6b2 _public_6cef6b2
#define public_6cef768 _public_6cef768
#define public_6cef881 _public_6cef881
#define public_6cef90c _public_6cef90c
#define public_6cef9cc _public_6cef9cc

PROC_DECLARE(0x6cef600, internal_6cef600, public_6cef600);
extern "C" NAKED register_t __cdecl internal_6cef600()
{
    __asm
    {
        sub esp, 0xA0
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xB4]
        test esi, esi
        push edi
        jbe public_6cef9cc
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ecx
        jae public_6cef9cc
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6cef9cc
        mov eax, esi
        imul eax, 0x418
        mov edi, dword ptr ds : [eax+ecx-0x2C]
        mov edx, 0x3FFFFFFF
        test edx, edi
        mov dword ptr ss : [esp+0x40], eax
        jne public_6cef9cc
        test dword ptr ds : [eax+ecx-0x34], edx
        je public_6cef9cc
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0xBC]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cef9cc
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_6cef9cc
        mov ebp, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6cef6b0
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cef6b2
        public_6cef6b0 : nop
        xor eax, eax
        public_6cef6b2 : nop
        cmp dword ptr ds : [eax+0xB4], esi
        jne public_6cef9cc
        lea eax, ss:[ebp+0x90]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ds : [eax]
        push 0xC40
        push eax
        call public_6d0c8d0
        test eax, eax
        je public_6cef9cc
        lea ecx, ds:[eax+0xC]
        test ecx, ecx
        je public_6cef9cc
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        je public_6cef9cc
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_6cef9cc
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x154]
        mov ebx, dword ptr ds : [edi+0x1B4]
        mov eax, dword ptr ds : [edi+0x1B8]
        push ebx
        mov dword ptr ss : [esp+0x18], eax
        call public_6d00280
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_6cef768
        lea ecx, ds:[edi+0x1A4]
        mov esi, 0x100001
        call dword ptr ds : [public_6d642d4]
        mov ecx, dword ptr ds : [public_6d64a44]
        push eax
        push 0x6B
/*FIXUP push offset public_6d65f34 @0x6cef74b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65f34
/*FIXUP push offset public_6d65ef0 @0x6cef750*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65ef0
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA0
        ret 8
        public_6cef768 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        call public_6d06cd0
        mov edx, dword ptr ss : [esp+0xB4]
        mov dword ptr ss : [esp+0x70], edx
        mov dword ptr ss : [esp+0x78], eax
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x70]
        push edx
        push 0x25
        mov dword ptr ss : [esp+0x7C], ecx
        call public_6d43650
        mov eax, dword ptr ds : [public_6d64388]
        mov edx, dword ptr ds : [public_6d64384]
        mov dword ptr ss : [esp+0x84], 0x3F800000
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x88], ecx
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x8C], eax
        mov ecx, dword ptr ds : [edx+4]
        add esp, 8
        lea eax, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x88], ecx
        mov edx, dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ebp
        mov dword ptr ss : [esp+0x94], edx
        mov dword ptr ss : [esp+0x98], 0
        mov dword ptr ss : [esp+0x9C], 2
        mov byte ptr ss : [esp+0xA0], 0
        mov byte ptr ss : [esp+0xA1], 1
        mov byte ptr ss : [esp+0xAA], 0
        mov dword ptr ss : [esp+0xAC], 0
        mov dword ptr ss : [esp+0xB0], 0
        mov dword ptr ss : [esp+0xB4], 0
        mov byte ptr ss : [esp+0xA2], 0
        call public_6d0d000
        mov edi, dword ptr ss : [esp+0xB8]
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        push edi
        call public_6d087f0
        push edi
        mov ecx, esi
        call public_6d07e20
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_6d0c7e0
        mov edi, eax
        test edi, edi
        je public_6cef881
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        push ebp
        mov ecx, edi
        call dword ptr ds : [edx+0x250]
        jmp public_6cef90c
        public_6cef881 : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d642d4]
        mov edx, dword ptr ds : [public_6d64a44]
        push eax
        push 0x8D
/*FIXUP push offset public_6d65f34 @0x6cef897*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65f34
        mov eax, 0x100001
/*FIXUP push offset public_6d65ebc @0x6cef8a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65ebc
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x6C], 0x3F800000
        mov dword ptr ss : [esp+0x5C], 0x3F800000
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        public_6cef90c : nop
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x84]
        push edx
        push ebp
        mov ecx, esi
        call public_6d0d100
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edi
        push ebp
        mov ecx, esi
        call public_6d0cc00
        mov edx, dword ptr ds : [public_6d90260]
        mov ebp, dword ptr ss : [esp+0x40]
        xor eax, eax
        mov dword ptr ds : [edx+ebp-0x38], ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], eax
        call public_6d06cd0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0xB8]
        mov dword ptr ss : [esp+0x2C], eax
        call public_6d06cd0
        mov dword ptr ss : [esp+0x28], eax
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x34], eax
        lea eax, ss:[esp+0x24]
        push eax
        push 0x3B
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x44], edx
        call public_6d43650
        mov ecx, dword ptr ds : [public_6d90260]
        add esp, 8
        lea ecx, ds:[ecx+ebp-0x418]
        call public_6d4c430
        public_6cef9cc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA0
        ret 8
        UNREACHABLE_TRAP(0x6cef600)
    }
}

#undef public_6cef6b0
#undef public_6cef6b2
#undef public_6cef768
#undef public_6cef881
#undef public_6cef90c
#undef public_6cef9cc

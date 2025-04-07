#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d1aa70);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b350);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6206b);

#define public_6d1ab0c _public_6d1ab0c
#define public_6d1ab8d _public_6d1ab8d
#define public_6d1abd2 _public_6d1abd2
#define public_6d1abf7 _public_6d1abf7
#define public_6d1ac10 _public_6d1ac10
#define public_6d1ac2b _public_6d1ac2b

PROC_DECLARE(0x6d1aa70, internal_6d1aa70, public_6d1aa70);
extern "C" NAKED register_t __cdecl internal_6d1aa70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6206b @0x6d1aa72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6206b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ss : [esp+0x40]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x44]
        xor ebx, ebx
        push ebx
        mov dword ptr ds : [edi+4], ecx
        push ebx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1C], dl
        call public_6cfc340
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ebx
        mov eax, dword ptr ss : [esp+0x50]
        push eax
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x40], ebx
        call dword ptr ds : [public_6d64804]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x3C], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x4C]
        push eax
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x48], 2
        call public_6d1b1b0
        mov ecx, dword ptr ss : [esp+0x4C]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x3C], 1
        je public_6d1ab0c
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x4C], ebx
        public_6d1ab0c : nop
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x3C], bl
        call dword ptr ds : [public_6d64800]
        mov ecx, dword ptr ss : [esp+0x48]
        push 0xFFFFFFFF
        push ecx
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d64818]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x3C], 3
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x44], 4
        call public_6cfc340
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x4C]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6d1b4a0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x3C], 3
        je public_6d1ab8d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x4C], ebx
        public_6d1ab8d : nop
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x3C], bl
        call dword ptr ds : [public_6d647f8]
        lea ecx, ss:[esp+0x44]
        push ecx
        push 0x400
/*FIXUP push offset public_6d8f1b8 @0x6d1aba5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8f1b8
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_6d8f5b8
        call dword ptr ds : [public_6d647f4]
        test al, al
        je public_6d1abd2
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [edi+8], offset public_6d8f1b8
        mov dword ptr ds : [edi+0xC], eax
        mov byte ptr ds : [edi+0x10], 1
        jmp public_6d1abf7
        public_6d1abd2 : nop
        mov ecx, dword ptr ds : [public_6d64a44]
/*FIXUP push offset public_6d689f8 @0x6d1abd8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d689f8
        push 0x21E
/*FIXUP push offset public_6d687b8 @0x6d1abe2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d687b8
        mov eax, 0x100003
/*FIXUP push offset public_6d6879c @0x6d1abec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6879c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d1abf7 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        mov edi, eax
        je public_6d1ac2b
        nop 
        lea esp, ss:[esp]
        public_6d1ac10 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x50]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_6d1b350
        cmp esi, edi
        jne public_6d1ac10
        mov eax, dword ptr ss : [esp+0x18]
        public_6d1ac2b : nop
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x6d1aa70)
    }
}

#undef public_6d1ab0c
#undef public_6d1ab8d
#undef public_6d1abd2
#undef public_6d1abf7
#undef public_6d1ac10
#undef public_6d1ac2b

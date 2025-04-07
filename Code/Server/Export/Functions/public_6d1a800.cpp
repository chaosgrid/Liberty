#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d1a800);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b350);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6202c);

#define public_6d1a88e _public_6d1a88e
#define public_6d1a8f9 _public_6d1a8f9
#define public_6d1a95a _public_6d1a95a
#define public_6d1a96c _public_6d1a96c
#define public_6d1a9c4 _public_6d1a9c4
#define public_6d1a9e2 _public_6d1a9e2
#define public_6d1a9f6 _public_6d1a9f6
#define public_6d1aa11 _public_6d1aa11

PROC_DECLARE(0x6d1a800, internal_6d1a800, public_6d1a800);
extern "C" NAKED register_t __cdecl internal_6d1a800()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6202c @0x6d1a802*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6202c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        mov al, byte ptr ss : [esp+0x48]
        push esi
        push edi
        xor edi, edi
        push edi
        push edi
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], al
        call public_6cfc340
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], edi
        push 0x3EA8
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x48], edi
        call dword ptr ds : [public_6d64804]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x44], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+8], eax
        mov ecx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x50], 2
        call public_6d1b1b0
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, edi
        mov byte ptr ss : [esp+0x44], 1
        je public_6d1a88e
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], edi
        public_6d1a88e : nop
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x44], 0
        call dword ptr ds : [public_6d64800]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, edi
        je public_6d1a8f9
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 4
        cmp eax, 2
        jne public_6d1a8f9
        add ecx, 0x10
        push 0xFFFFFFFF
        push ecx
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_6d64818]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x44], 3
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x50], eax
        mov ecx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x50]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x50], 4
        call public_6d1b1b0
        mov byte ptr ss : [esp+0x44], 3
        jmp public_6d1a95a
        public_6d1a8f9 : nop
        push 0xFFFFFFFF
/*FIXUP push offset public_6d689c8 @0x6d1a8fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d689c8
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_6d647fc]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x44], 5
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x4C], 6
        call public_6cfc340
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x50]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6d1b4a0
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov byte ptr ss : [esp+0x44], 5
        public_6d1a95a : nop
        mov ecx, dword ptr ss : [esp+0x50]
        cmp ecx, edi
        je public_6d1a96c
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x50], edi
        public_6d1a96c : nop
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x44], 0
        call dword ptr ds : [public_6d647f8]
        lea ecx, ss:[esp+0xC]
        push ecx
        push 0x400
/*FIXUP push offset public_6d8f1b8 @0x6d1a985*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8f1b8
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, offset public_6d8f5b8
        call dword ptr ds : [public_6d647f4]
        test al, al
        jne public_6d1a9c4
/*FIXUP push offset public_6d689a8 @0x6d1a99e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d689a8
        push 0x1FF
/*FIXUP push offset public_6d687b8 @0x6d1a9a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d687b8
        mov eax, 0x100003
/*FIXUP push offset public_6d6879c @0x6d1a9b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6879c
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6d1a9e2
        public_6d1a9c4 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [public_6d8fb18]
        mov edx, dword ptr ds : [ecx]
/*FIXUP push offset public_6d8f1b8 @0x6d1a9d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8f1b8
        push eax
        mov eax, dword ptr ss : [esp+0x54]
        mov esi, dword ptr ds : [eax]
        push esi
        mov eax, esi
        push eax
        call dword ptr ds : [edx]
        public_6d1a9e2 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        mov edi, eax
        je public_6d1aa11
        public_6d1a9f6 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6d1b350
        cmp esi, edi
        jne public_6d1a9f6
        mov eax, dword ptr ss : [esp+0x20]
        public_6d1aa11 : nop
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 4
        pop edi
        mov al, 1
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x6d1a800)
    }
}

#undef public_6d1a88e
#undef public_6d1a8f9
#undef public_6d1a95a
#undef public_6d1a96c
#undef public_6d1a9c4
#undef public_6d1a9e2
#undef public_6d1a9f6
#undef public_6d1aa11

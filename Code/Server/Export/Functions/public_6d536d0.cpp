#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d48960);
CLANG_FORWARD_PROC_SYMBOL(public_6d48b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d48c20);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c310);
CLANG_FORWARD_PROC_SYMBOL(public_6d4eac0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4eae0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d536d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d53b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d53b90);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63941);

#define public_6d53876 _public_6d53876
#define public_6d53894 _public_6d53894
#define public_6d5389a _public_6d5389a
#define public_6d538b2 _public_6d538b2
#define public_6d538db _public_6d538db
#define public_6d53924 _public_6d53924
#define public_6d53958 _public_6d53958
#define public_6d5399c _public_6d5399c
#define public_6d539c4 _public_6d539c4
#define public_6d539f8 _public_6d539f8
#define public_6d53a44 _public_6d53a44
#define public_6d53a6c _public_6d53a6c
#define public_6d53a95 _public_6d53a95
#define public_6d53aa0 _public_6d53aa0
#define public_6d53ae3 _public_6d53ae3
#define public_6d53aec _public_6d53aec
#define public_6d53af8 _public_6d53af8
#define public_6d53b2c _public_6d53b2c

PROC_DECLARE(0x6d536d0, internal_6d536d0, public_6d536d0);
extern "C" NAKED register_t __cdecl internal_6d536d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63941 @0x6d536d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63941
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x554
        mov eax, dword ptr ss : [esp+0x564]
        push ebp
        push esi
        mov esi, dword ptr ds : [public_6d64bc0]
        push edi
/*FIXUP push offset public_6d6aea4 @0x6d536fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea4
/*FIXUP push offset public_6d6ae30 @0x6d53700*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae30
        push eax
        lea ecx, ss:[esp+0x164]
        push 0
        push ecx
        mov byte ptr ss : [esp+0x23], 0
        call esi
        add esp, 0x14
        lea ecx, ss:[esp+0x18]
        call public_6d4eac0
        mov dl, byte ptr ss : [esp+0xF]
        push 0
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x56C], 0
        mov dword ptr ss : [esp+0x18], offset public_6d6b5c0
        mov byte ptr ss : [esp+0x30], dl
        call dword ptr ds : [public_6d64b74]
        mov dword ptr ss : [esp+0x14], offset public_6d6b5a0
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x158]
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea eax, ss:[esp+0x15C]
        push eax
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x570], 1
        call dword ptr ds : [public_6d64b08]
        mov ebp, dword ptr ds : [public_6d64bd8]
        lea ecx, ss:[esp+0x158]
/*FIXUP push offset public_6d6b598 @0x6d5378e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b598
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6d53af8
        push ebx
        push 0x104
        lea edx, ss:[esp+0x5C]
        push edx
        push 0
        call dword ptr ds : [public_6d64a94]
        push 0
        push 0
        lea eax, ss:[esp+0x268]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        call dword ptr ds : [public_6d64bdc]
        push 0
/*FIXUP push offset public_6d6ae44 @0x6d537d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae44
        lea eax, ss:[esp+0x27C]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        lea edx, ss:[esp+0x7C]
        push edx
        call esi
        add esp, 0x28
        lea ecx, ss:[esp+0x44]
        call public_6d4eac0
        lea eax, ss:[esp+0x58]
/*FIXUP push offset public_6d6b314 @0x6d537ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b314
        push eax
        mov byte ptr ss : [esp+0x574], 2
        call ebp
        mov ebx, dword ptr ds : [public_6d64bd4]
        add esp, 8
        test eax, eax
        mov dword ptr ss : [esp+0x44], eax
        je public_6d5389a
        push eax
        push 4
        lea ecx, ss:[esp+0x1C]
        push 1
        push ecx
        call ebx
        lea eax, ss:[esp+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, offset public_6d6b30c
        mov eax, dword ptr ds : [edx]
        add esp, 0x10
        cmp ecx, eax
        jne public_6d53876
        lea ecx, ss:[esp+0x44]
        call public_6d4eae0
        lea edx, ss:[esp+0x58]
/*FIXUP push offset public_6d6aea8 @0x6d5384d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea8
        push edx
        call ebp
        add esp, 8
        test eax, eax
        mov dword ptr ss : [esp+0x44], eax
        je public_6d5389a
        push 4
        lea ecx, ss:[esp+0x48]
        call public_6d48960
        lea ecx, ss:[esp+0x44]
        call public_6d48b60
        jmp public_6d53894
        public_6d53876 : nop
        lea ecx, ss:[esp+0x14]
        mov edx, dword ptr ds : [ecx]
        mov eax, offset public_6d6b304
        cmp edx, dword ptr ds : [eax]
        je public_6d53aa0
        push 0
        lea ecx, ss:[esp+0x48]
        call public_6d48960
        public_6d53894 : nop
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        public_6d5389a : nop
        setne al
        test al, al
        je public_6d53aa0
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        jne public_6d538b2
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d538b2 : nop
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call dword ptr ds : [public_6d64c08]
        mov eax, dword ptr ss : [esp+0x4C]
        add esp, 8
        test eax, eax
        je public_6d538db
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        mov dword ptr ss : [esp+0x44], 0
        public_6d538db : nop
        mov ecx, dword ptr ds : [public_6d64a58]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 0x104
        lea ecx, ss:[esp+0x5C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x84]
        push 0
/*FIXUP push offset public_6d8f9c8 @0x6d538f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8f9c8
        lea edx, ss:[esp+0x60]
        push edx
        lea eax, ss:[esp+0x64]
        push 0
        push eax
        call esi
        lea ecx, ss:[esp+0x6C]
/*FIXUP push offset public_6d6b314 @0x6d5390f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b314
        push ecx
        call ebp
        mov edi, eax
        add esp, 0x1C
        test edi, edi
        je public_6d539f8
        public_6d53924 : nop
        push edi
        push 0x200
        lea edx, ss:[esp+0x36C]
        push 1
        push edx
        call ebx
        mov esi, eax
        add esp, 0x10
        test esi, esi
        jbe public_6d53958
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push esi
        lea ecx, ss:[esp+0x36C]
        push 1
        push ecx
        call dword ptr ds : [public_6d64c04]
        add esp, 0x10
        public_6d53958 : nop
        cmp esi, 0x200
        jae public_6d53924
        mov esi, dword ptr ds : [public_6d64bd0]
        push edi
        call esi
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        test eax, eax
        mov byte ptr ss : [esp+0x13], 1
        je public_6d53aec
        lea ecx, ss:[esp+0x18]
        call public_6d53b90
        lea ecx, ss:[esp+0x1C]
        call public_6d4eae0
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        jne public_6d5399c
        mov eax, dword ptr ds : [public_6d64b7c]
/*FIXUP public_6d5399c : nop
        push offset public_6d6b4e4 @0x6d5399c*/
  FIXUP public_6d5399c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b4e4
        push eax
        call ebp
/*FIXUP push offset public_6d6b30c @0x6d539a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b30c
        push eax
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [public_6d64c08]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0x10
        test eax, eax
        jne public_6d539c4
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d539c4 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        push ecx
        push 1
        push eax
        call dword ptr ds : [public_6d64c04]
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call esi
        add esp, 0x14
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x1C], 0
        call public_6d48c20
        pop ebx
        jmp public_6d53b2c
        public_6d539f8 : nop
        mov edx, dword ptr ds : [public_6d64a44]
        lea ecx, ss:[esp+0x58]
        push ecx
        push 0x155E
/*FIXUP push offset public_6d6b280 @0x6d53a08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b280
        mov eax, 0x100002
/*FIXUP push offset public_6d6b938 @0x6d53a12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b938
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x14
        test eax, eax
        je public_6d53a95
        lea ecx, ss:[esp+0x18]
        call public_6d53b90
        lea ecx, ss:[esp+0x1C]
        call public_6d4eae0
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        jne public_6d53a44
        mov eax, dword ptr ds : [public_6d64b7c]
/*FIXUP public_6d53a44 : nop
        push offset public_6d6b4e4 @0x6d53a44*/
  FIXUP public_6d53a44 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b4e4
        push eax
        call ebp
/*FIXUP push offset public_6d6b30c @0x6d53a4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b30c
        push eax
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [public_6d64c08]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0x10
        test eax, eax
        jne public_6d53a6c
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d53a6c : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x28]
        push ecx
        push edx
        push 1
        push eax
        call dword ptr ds : [public_6d64c04]
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 0x14
        mov dword ptr ss : [esp+0x1C], 0
        public_6d53a95 : nop
        lea ecx, ss:[esp+0x15C]
        push ecx
        jmp public_6d53ae3
        nop 
        public_6d53aa0 : nop
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x1C]
        call public_6d53b60
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_6d64a44]
        lea edx, ss:[esp+0x58]
        push edx
        push 0x1565
/*FIXUP push offset public_6d6b280 @0x6d53ac2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b280
/*FIXUP push offset public_6d6b938 @0x6d53ac7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b938
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        lea ecx, ss:[esp+0x18]
        call public_6d4eb00
        lea edx, ss:[esp+0x15C]
        push edx
        public_6d53ae3 : nop
        call dword ptr ds : [public_6d64c2c]
        add esp, 4
        public_6d53aec : nop
        lea ecx, ss:[esp+0x44]
        call public_6d48c20
        pop ebx
        jmp public_6d53b2c
        public_6d53af8 : nop
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x18]
        call public_6d53b60
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_6d64a44]
        lea ecx, ss:[esp+0x158]
        push ecx
        push 0x156C
/*FIXUP push offset public_6d6b280 @0x6d53b1c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b280
/*FIXUP push offset public_6d6b900 @0x6d53b21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b900
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6d53b2c : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x568], 0xFFFFFFFF
        call public_6d4c310
        mov ecx, dword ptr ss : [esp+0x560]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x560
        ret 4
        UNREACHABLE_TRAP(0x6d536d0)
    }
}

#undef public_6d53876
#undef public_6d53894
#undef public_6d5389a
#undef public_6d538b2
#undef public_6d538db
#undef public_6d53924
#undef public_6d53958
#undef public_6d5399c
#undef public_6d539c4
#undef public_6d539f8
#undef public_6d53a44
#undef public_6d53a6c
#undef public_6d53a95
#undef public_6d53aa0
#undef public_6d53ae3
#undef public_6d53aec
#undef public_6d53af8
#undef public_6d53b2c

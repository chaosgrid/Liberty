#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d448d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62ddf);

#define public_6d44937 _public_6d44937
#define public_6d44960 _public_6d44960
#define public_6d44982 _public_6d44982
#define public_6d4498e _public_6d4498e
#define public_6d4499c _public_6d4499c
#define public_6d449aa _public_6d449aa
#define public_6d44a1a _public_6d44a1a
#define public_6d44a2b _public_6d44a2b
#define public_6d44a40 _public_6d44a40
#define public_6d44a65 _public_6d44a65
#define public_6d44a8a _public_6d44a8a
#define public_6d44a93 _public_6d44a93
#define public_6d44ae6 _public_6d44ae6
#define public_6d44af1 _public_6d44af1
#define public_6d44b00 _public_6d44b00
#define public_6d44b16 _public_6d44b16
#define public_6d44b4c _public_6d44b4c
#define public_6d44b55 _public_6d44b55

PROC_DECLARE(0x6d448d0, internal_6d448d0, public_6d448d0);
extern "C" NAKED register_t __cdecl internal_6d448d0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_6d62ddf @0x6d448d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62ddf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x156C
        mov dword ptr fs : [0], esp
        call public_6d60160
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d644f0]
        mov eax, dword ptr ss : [esp+0x158C]
        xor ebp, ebp
        push ebp
        push eax
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x158C], ebp
        call dword ptr ds : [public_6d644e8]
        test al, al
        je public_6d449aa
        lea ecx, ss:[esp+0x14]
        xor bl, bl
        call dword ptr ds : [public_6d64540]
        test al, al
        je public_6d449aa
        mov esi, dword ptr ds : [public_6d64564]
        public_6d44937 : nop
        test bl, bl
        jne public_6d449aa
/*FIXUP push offset public_6d6ad90 @0x6d4493b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad90
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d64538]
        test al, al
        je public_6d4499c
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d6455c]
        test al, al
        je public_6d4499c
        lea esp, ss:[esp]
        public_6d44960 : nop
        test bl, bl
        jne public_6d4499c
/*FIXUP push offset public_6d6ad80 @0x6d44964*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad80
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d64568]
        test al, al
        je public_6d4498e
        lea ecx, ss:[esp+0x14]
        call esi
        mov edx, offset public_6d8f9c8
        public_6d44982 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_6d44982
        mov bl, 1
        public_6d4498e : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6d44960
        public_6d4499c : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64540]
        test al, al
        jne public_6d44937
        public_6d449aa : nop
        lea ecx, ss:[esp+0x143C]
        mov dword ptr ss : [esp+0x1584], 1
        mov dword ptr ss : [esp+0x10], ecx
        mov edx, dword ptr ds : [public_6d64b80]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebp
        lea ecx, ss:[esp+0x1444]
        mov byte ptr ss : [esp+0x158C], 2
        call dword ptr ds : [public_6d64b78]
        cmp dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        mov ebx, dword ptr ds : [public_6d64a68]
        mov esi, dword ptr ds : [public_6d64a70]
        je public_6d44a40
        cmp dword ptr ss : [esp+0x1450], ebp
        je public_6d44a2b
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebp
        je public_6d44a1a
        push eax
        call ebx
        mov dword ptr ss : [esp+0x1454], ebp
        mov dword ptr ss : [esp+0x1458], ebp
        public_6d44a1a : nop
        mov ecx, dword ptr ss : [esp+0x1450]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x1450], ebp
        public_6d44a2b : nop
        mov edx, dword ptr ss : [esp+0x144C]
        push edx
        call esi
        mov dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        public_6d44a40 : nop
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebp
        mov edi, dword ptr ds : [public_6d64c94]
        je public_6d44a65
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1454], ebp
        mov dword ptr ss : [esp+0x1458], ebp
        public_6d44a65 : nop
        mov eax, dword ptr ss : [esp+0x1440]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x145C], ebp
        je public_6d44a93
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d44a8a
        cmp cl, 0xFF
        je public_6d44a8a
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d44a93
        public_6d44a8a : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d44a93 : nop
        mov dword ptr ss : [esp+0x1440], ebp
        mov dword ptr ss : [esp+0x1444], ebp
        mov dword ptr ss : [esp+0x1448], ebp
        mov eax, dword ptr ds : [public_6d64b80]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebp
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x158C], 3
        call dword ptr ds : [public_6d64b78]
        cmp dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_6d44b00
        cmp dword ptr ss : [esp+0x28], ebp
        je public_6d44af1
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebp
        je public_6d44ae6
        push eax
        call ebx
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebp
        public_6d44ae6 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call esi
        mov dword ptr ss : [esp+0x28], ebp
        public_6d44af1 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        public_6d44b00 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebp
        je public_6d44b16
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebp
        public_6d44b16 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ss : [esp+0x2C], ebp
        cmp eax, ebp
        pop ebp
        pop ebx
        je public_6d44b55
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d44b4c
        cmp cl, 0xFF
        je public_6d44b4c
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x156C]
        mov dword ptr fs : [0], ecx
        add esp, 0x1578
        ret 
        public_6d44b4c : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d44b55 : nop
        mov ecx, dword ptr ss : [esp+0x156C]
        mov dword ptr fs : [0], ecx
        add esp, 0x1578
        ret 
        UNREACHABLE_TRAP(0x6d448d0)
    }
}

#undef public_6d44937
#undef public_6d44960
#undef public_6d44982
#undef public_6d4498e
#undef public_6d4499c
#undef public_6d449aa
#undef public_6d44a1a
#undef public_6d44a2b
#undef public_6d44a40
#undef public_6d44a65
#undef public_6d44a8a
#undef public_6d44a93
#undef public_6d44ae6
#undef public_6d44af1
#undef public_6d44b00
#undef public_6d44b16
#undef public_6d44b4c
#undef public_6d44b55

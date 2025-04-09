#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405860);
CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_41aa50);
CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_41c540);
CLANG_FORWARD_PROC_SYMBOL(public_420f30);
CLANG_FORWARD_PROC_SYMBOL(public_420f70);
CLANG_FORWARD_PROC_SYMBOL(public_4c9a30);
CLANG_FORWARD_PROC_SYMBOL(public_4cebc0);
CLANG_FORWARD_PROC_SYMBOL(public_4cec20);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_59b220);
CLANG_FORWARD_PROC_SYMBOL(public_59b670);
CLANG_FORWARD_PROC_SYMBOL(public_59b690);
CLANG_FORWARD_PROC_SYMBOL(public_59b6b0);
CLANG_FORWARD_PROC_SYMBOL(public_59b890);
CLANG_FORWARD_PROC_SYMBOL(public_5a6900);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4cfb);

#define public_59b252 _public_59b252
#define public_59b279 _public_59b279
#define public_59b326 _public_59b326
#define public_59b357 _public_59b357
#define public_59b3b2 _public_59b3b2
#define public_59b3c6 _public_59b3c6
#define public_59b3de _public_59b3de
#define public_59b411 _public_59b411
#define public_59b47a _public_59b47a
#define public_59b490 _public_59b490
#define public_59b4a9 _public_59b4a9
#define public_59b4dc _public_59b4dc
#define public_59b568 _public_59b568
#define public_59b5a6 _public_59b5a6
#define public_59b5d3 _public_59b5d3
#define public_59b5f6 _public_59b5f6
#define public_59b611 _public_59b611
#define public_59b63e _public_59b63e

PROC_DECLARE(0x59b220, internal_59b220, public_59b220);
extern "C" NAKED register_t __cdecl internal_59b220()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4cfb @0x59b222*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4cfb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x740
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x18], ebp
        call public_4c9a30
        lea esi, ss:[ebp+4]
        mov edi, 4
        public_59b252 : nop
        mov ecx, esi
        call public_420f70
        add esi, 0x10
        dec edi
        jne public_59b252
        mov ecx, dword ptr ss : [ebp]
        xor ebx, ebx
        cmp ecx, ebx
        je public_59b279
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        mov dword ptr ss : [ebp], ebx
/*FIXUP public_59b279 : nop
        push offset _public_59b690 @0x59b279*/
  FIXUP public_59b279 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59b690
        push 8
        push 0x18
        lea eax, ss:[esp+0x1FC]
        push eax
        call public_405860
/*FIXUP push offset _public_59b890 @0x59b28f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59b890
        push 8
        push 0x94
        lea ecx, ss:[esp+0x2BC]
        push ecx
        call public_405860
        mov ebp, dword ptr ss : [esp+0x760]
        mov eax, dword ptr ss : [ebp+4]
        push eax
        lea edx, ss:[esp+0x1F4]
        push ebx
        lea ecx, ss:[esp+0x190]
        mov dword ptr ss : [esp+0x190], ebx
        mov dword ptr ss : [esp+0x194], edx
        call public_59b6b0
        mov ecx, dword ptr ss : [ebp]
        push ecx
        push 1
        lea ecx, ss:[esp+0x190]
        call public_59b6b0
        mov edx, dword ptr ss : [ebp+8]
        push edx
        push 2
        lea ecx, ss:[esp+0x190]
        call public_59b6b0
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        push 3
        lea ecx, ss:[esp+0x190]
        call public_59b6b0
        mov eax, dword ptr ss : [esp+0x188]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], ebx
        je public_59b3de
        xor esi, esi
        cmp eax, ebx
        jle public_59b357
        xor edi, edi
        public_59b326 : nop
        mov ecx, dword ptr ss : [esp+0x18C]
        mov edx, dword ptr ds : [edi+ecx+4]
        mov eax, dword ptr ds : [edx+4]
        push 0xFFFFFFFF
        push 1
        push eax
        call public_41aa50
        add esp, 0xC
        mov dword ptr ss : [esp+esi*4+0x168], eax
        mov eax, dword ptr ss : [esp+0x188]
        inc esi
        add edi, 0x18
        cmp esi, eax
        jl public_59b326
        public_59b357 : nop
        mov ecx, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x194]
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        cmp eax, ebx
        je public_59b3b2
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x24]
        call public_411c50
        mov edx, dword ptr ss : [esp+0x188]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
        push edx
        push 0xD5
/*FIXUP push offset public_5d7188 @0x59b39e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7188
/*FIXUP push offset public_5d71a0 @0x59b3a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d71a0
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], ebx
        public_59b3b2 : nop
        mov eax, dword ptr ss : [esp+0x188]
        xor esi, esi
        cmp eax, ebx
        jle public_59b3de
        lea edi, ss:[esp+0x168]
        public_59b3c6 : nop
        push edi
        call public_41b030
        mov eax, dword ptr ss : [esp+0x18C]
        add esp, 4
        inc esi
        add edi, 4
        cmp esi, eax
        jl public_59b3c6
        public_59b3de : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi], edx
        call dword ptr ds : [public_5c60e4]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [ebp+0x30]
        xor esi, esi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], esi
        jle public_59b63e
        lea eax, ds:[edi+4]
        add ebp, 0x10
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x20], ebp
        public_59b411 : nop
        cmp esi, 4
        ja public_59b63e
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        call dword ptr ds : [public_5c6198]
        mov ebp, eax
        cmp ebp, ebx
        je public_59b611
        lea ecx, ss:[esp+0x17]
        push ecx
        lea ecx, ss:[esp+0x15C]
        mov dword ptr ss : [esp+0x50], ebx
        mov byte ptr ss : [esp+0x54], bl
        mov dword ptr ss : [esp+0xD4], ebx
        mov byte ptr ss : [esp+0xD8], bl
        mov dword ptr ss : [esp+0x118], ebx
        mov byte ptr ss : [esp+0x11C], bl
        call public_5a6900
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x758], ebx
        jne public_59b47a
        mov eax, dword ptr ds : [public_5c7078]
        public_59b47a : nop
        push eax
        lea ecx, ss:[esp+0x50]
        call public_4cec20
        mov eax, dword ptr ss : [ebp+0x28]
        cmp eax, ebx
        jne public_59b490
        mov eax, dword ptr ds : [public_5c7078]
        public_59b490 : nop
        push eax
        lea ecx, ss:[esp+0x118]
        call public_4cebc0
        mov eax, dword ptr ss : [ebp+0x18]
        cmp eax, ebx
        jne public_59b4a9
        mov eax, dword ptr ds : [public_5c7078]
        public_59b4a9 : nop
        push eax
        lea ecx, ss:[esp+0xD4]
        call public_4cebc0
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_59b4dc
        mov ecx, dword ptr ds : [public_5c6d58]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[esp+0x28]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x48]
        public_59b4dc : nop
        mov ecx, dword ptr ds : [public_5c6dd8]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ss : [esp+0x28]
        push ebx
        push ebx
        lea eax, ss:[esp+0x160]
        push eax
        push ebx
        push ebx
        push edx
        lea eax, ss:[esp+0x68]
        push eax
        call public_41c540
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x138]
        push edx
        push edi
        mov esi, eax
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call dword ptr ds : [public_5c64ac]
        add esp, 0x28
        test al, al
        je public_59b568
        lea eax, ss:[esp+0xD4]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_59b670
        lea ecx, ss:[esp+0x118]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_59b670
        mov edx, dword ptr ds : [public_5c6d5c]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x44]
        push edx
        push esi
        lea edx, ss:[esp+0x40]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        cmp eax, ebx
        je public_59b5a6
        public_59b568 : nop
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x3C]
        call public_411c50
        lea ecx, ss:[esp+0x118]
        push ecx
        lea edx, ss:[esp+0xD8]
        push edx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_5c6d18]
        lea ecx, ss:[esp+0x58]
        push ecx
        push 0x4E
/*FIXUP push offset public_5d7188 @0x59b596*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7188
/*FIXUP push offset public_5d7130 @0x59b59b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7130
        push edx
        call dword ptr ds : [eax]
        add esp, 0x1C
        public_59b5a6 : nop
        mov edi, dword ptr ss : [esp+0x10]
        lea ecx, ss:[ebp+0x34]
        mov dword ptr ds : [edi+4], esi
        cmp dword ptr ds : [ecx+8], ebx
        je public_59b5f6
        lea edx, ss:[esp+0x40]
        push edx
        call public_53e430
        mov eax, dword ptr ds : [eax]
        mov esi, dword ptr ds : [public_5c7078]
        add eax, 8
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_59b5d3
        mov esi, eax
        public_59b5d3 : nop
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c69a0]
        push 1
        push esi
        call dword ptr ds : [public_5c6028]
        add esp, 8
        push ebx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], eax
        call public_420f30
        public_59b5f6 : nop
        lea ecx, ss:[esp+0x158]
        mov dword ptr ss : [esp+0x758], 0xFFFFFFFF
        call public_4de730
        mov esi, dword ptr ss : [esp+0x2C]
        public_59b611 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x760]
        mov ecx, dword ptr ds : [eax+0x30]
        inc esi
        add ebp, 4
        add edx, 0x10
        cmp esi, ecx
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x10], edx
        jl public_59b411
        public_59b63e : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x750]
        pop edi
        pop esi
        xor eax, eax
        cmp edx, ebx
        pop ebp
        setne al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74C
        ret 4
        UNREACHABLE_TRAP(0x59b220)
    }
}

#undef public_59b252
#undef public_59b279
#undef public_59b326
#undef public_59b357
#undef public_59b3b2
#undef public_59b3c6
#undef public_59b3de
#undef public_59b411
#undef public_59b47a
#undef public_59b490
#undef public_59b4a9
#undef public_59b4dc
#undef public_59b568
#undef public_59b5a6
#undef public_59b5d3
#undef public_59b5f6
#undef public_59b611
#undef public_59b63e

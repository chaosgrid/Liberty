#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac620);
CLANG_FORWARD_PROC_SYMBOL(public_6eb79a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f143d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cb90);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fb70);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ea20);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ea40);
CLANG_FORWARD_PROC_SYMBOL(public_6f5f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5f510);
CLANG_FORWARD_PROC_SYMBOL(public_6f5f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f5f5c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5f760);
CLANG_FORWARD_PROC_SYMBOL(public_6f5f930);
CLANG_FORWARD_PROC_SYMBOL(public_6f5fb90);
CLANG_FORWARD_PROC_SYMBOL(public_6f5fe50);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ff50);
CLANG_FORWARD_PROC_SYMBOL(public_6f62120);
CLANG_FORWARD_PROC_SYMBOL(public_6f62290);
CLANG_FORWARD_PROC_SYMBOL(public_6f62440);
CLANG_FORWARD_PROC_SYMBOL(public_6f62750);
CLANG_FORWARD_PROC_SYMBOL(public_6f67050);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e40);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e70);
CLANG_FORWARD_PROC_SYMBOL(public_6f68f20);
CLANG_FORWARD_PROC_SYMBOL(public_6f69780);
CLANG_FORWARD_PROC_SYMBOL(public_6f767c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafa18);

#define public_6f5eb41 _public_6f5eb41
#define public_6f5eb6b _public_6f5eb6b
#define public_6f5eb72 _public_6f5eb72
#define public_6f5eb8c _public_6f5eb8c
#define public_6f5eb97 _public_6f5eb97
#define public_6f5ebfc _public_6f5ebfc
#define public_6f5ec85 _public_6f5ec85
#define public_6f5ecbe _public_6f5ecbe
#define public_6f5ed80 _public_6f5ed80
#define public_6f5edf6 _public_6f5edf6
#define public_6f5ee03 _public_6f5ee03
#define public_6f5ee30 _public_6f5ee30
#define public_6f5eed3 _public_6f5eed3
#define public_6f5efc5 _public_6f5efc5
#define public_6f5efd4 _public_6f5efd4
#define public_6f5efe5 _public_6f5efe5
#define public_6f5f040 _public_6f5f040
#define public_6f5f071 _public_6f5f071
#define public_6f5f131 _public_6f5f131
#define public_6f5f13b _public_6f5f13b
#define public_6f5f14d _public_6f5f14d
#define public_6f5f19d _public_6f5f19d
#define public_6f5f1b1 _public_6f5f1b1
#define public_6f5f246 _public_6f5f246
#define public_6f5f25a _public_6f5f25a
#define public_6f5f3a6 _public_6f5f3a6
#define public_6f5f49e _public_6f5f49e
#define public_6f5f4b2 _public_6f5f4b2

PROC_DECLARE(0x6f5ea40, internal_6f5ea40, public_6f5ea40);
extern "C" NAKED register_t __cdecl internal_6f5ea40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafa18 @0x6f5ea42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafa18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x218
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x234]
        push edi
        mov edi, dword ptr ss : [esp+0x240]
        push edi
        lea eax, ss:[esp+0x1A4]
        push esi
        push eax
        mov byte ptr ss : [esp+0x22], 1
        call public_6f62290
        add esp, 0xC
        lea ecx, ss:[esp+0x2B]
        push ecx
        lea ecx, ss:[esp+0x78]
        call public_6f2cb90
        lea ecx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x230], 0
        call public_6eb79a0
        mov ebx, dword ptr ss : [esp+0x23C]
        mov edx, ebx
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x90], eax
        mov dword ptr ss : [esp+0x94], ecx
        mov eax, edi
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x98], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        push edi
        mov dword ptr ss : [esp+0xA0], ecx
        lea ecx, ss:[esp+0x154]
        push ebx
        push ecx
        mov byte ptr ss : [esp+0x23C], 1
        mov dword ptr ss : [esp+0xAC], edx
        mov dword ptr ss : [esp+0xB0], eax
        call public_6eeaee0
        add esp, 0xC
        lea ecx, ss:[esp+0x150]
        call public_6f5f510
        fdiv dword ptr ds : [public_6fbbb94]
        fstp dword ptr ss : [esp+0x8C]
        mov ecx, esi
        mov dword ptr ss : [esp+0x230], 2
        call public_6f767c0
        mov ebp, eax
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ss : [ebp+8]
        je public_6f5ebfc
        public_6f5eb41 : nop
        lea ecx, ss:[esp+0xBC]
        call public_6f5ea20
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        xor ecx, ecx
        cmp eax, edx
        mov dword ptr ss : [esp+0xBC], ecx
        je public_6f5eb6b
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xD8], edx
        jmp public_6f5eb72
        public_6f5eb6b : nop
        mov dword ptr ss : [esp+0xD8], ecx
        public_6f5eb72 : nop
        mov ecx, esi
        call public_6f2fb70
        test eax, eax
        je public_6f5eb8c
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax-0x44]
        mov dword ptr ss : [esp+0xDC], eax
        jmp public_6f5eb97
        public_6f5eb8c : nop
        mov dword ptr ss : [esp+0xDC], 0
        public_6f5eb97 : nop
        lea ecx, ds:[esi+0x10]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0xC0], edx
        mov dword ptr ss : [esp+0xC4], eax
        lea edx, ds:[esi+0x1C]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xC8], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0xCC], eax
        lea eax, ss:[esp+0xBC]
        mov dword ptr ss : [esp+0xD0], ecx
        push eax
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0xD8], edx
        call public_6f68e70
        mov eax, dword ptr ss : [ebp+8]
        add esi, 0x98
        cmp esi, eax
        jne public_6f5eb41
        public_6f5ebfc : nop
        mov eax, dword ptr ss : [esp+0x7C]
        xor esi, esi
        cmp eax, esi
        jne public_6f5efe5
        mov ebp, dword ptr ss : [esp+0x238]
        lea ecx, ss:[esp+0x90]
        push ecx
        lea edx, ss:[esp+0x1E8]
        push ebp
        push edx
        call public_6f62120
        add esp, 0xC
        lea ecx, ss:[esp+0x15C]
        call public_6f67050
        lea eax, ss:[esp+0x15C]
        push eax
        lea ecx, ss:[esp+0xA0]
        push ecx
        lea edx, ss:[esp+0x1EC]
        push edx
        push ebp
        lea ecx, ss:[esp+0x84]
        call public_6f5f760
        test al, al
        je public_6f5f071
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x84]
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ss : [esp+0x84]
        je public_6f5ee03
        public_6f5ec85 : nop
        mov ecx, dword ptr ss : [esp+0x15C]
        cmp ecx, dword ptr ds : [eax+0x24]
        je public_6f5ecbe
        cmp ecx, dword ptr ds : [eax+0x28]
        je public_6f5ed80
        push esi
        lea ecx, ss:[esp+0x134]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ss : [esp+0x84]
        jne public_6f5ec85
        jmp public_6f5ee03
        public_6f5ecbe : nop
        add eax, 0x18
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ss:[esp+0x100]
        mov dword ptr ss : [esp+0x20], edx
        call public_6eb79a0
        lea ecx, ss:[esp+0x50]
        mov byte ptr ss : [esp+0x230], 3
        call public_6f5ea20
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x50], esi
        mov ecx, dword ptr ds : [eax+0x28]
        mov dword ptr ss : [esp+0x6C], ecx
        mov edx, dword ptr ds : [eax+0x24]
        lea ecx, ds:[eax+0x18]
        mov dword ptr ss : [esp+0x70], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x54], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x58], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x5C], ecx
        add eax, 0xC
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x60], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x64], ecx
        mov edx, dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x104]
        mov dword ptr ss : [esp+0x6C], edx
        call public_6f68e70
        lea ecx, ss:[esp+0x100]
        push ecx
        lea ecx, ss:[esp+0x78]
        call public_6f68f20
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        lea eax, ss:[esp+0x13C]
        push eax
        lea ecx, ss:[esp+0x88]
        call public_6ecfe80
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x100]
        jmp public_6f5edf6
        public_6f5ed80 : nop
        add eax, 0xC
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ss:[esp+0x118]
        mov dword ptr ss : [esp+0x20], edx
        call public_6eb79a0
        mov eax, dword ptr ss : [esp+0x10]
        add eax, 8
        push eax
        lea ecx, ss:[esp+0x11C]
        mov byte ptr ss : [esp+0x234], 4
        call public_6f68e70
        lea ecx, ss:[esp+0x118]
        push ecx
        lea ecx, ss:[esp+0x78]
        call public_6f68f20
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        lea eax, ss:[esp+0x138]
        push eax
        lea ecx, ss:[esp+0x88]
        call public_6ecfe80
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x118]
        public_6f5edf6 : nop
        mov byte ptr ss : [esp+0x230], 2
        call public_6f15350
        public_6f5ee03 : nop
        lea edx, ss:[esp+0x13C]
        push edx
        lea ecx, ss:[esp+0x84]
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0x10], eax
        je public_6f5efe5
        lea ebx, ds:[ebx]
        public_6f5ee30 : nop
        add eax, 0xC
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x14C]
        push ecx
        call public_6eeaee0
        add esp, 0xC
        lea ecx, ss:[esp+0x144]
        call public_6f5f4f0
        fcomp dword ptr ds : [public_6fbbbc0]
        fnstsw ax
        test ah, 5
        jp public_6f5eed3
        lea ecx, ss:[esp+0x10C]
        call public_6eb79a0
        mov edx, dword ptr ss : [esp+0x10]
        add edx, 8
        push edx
        lea ecx, ss:[esp+0x110]
        mov byte ptr ss : [esp+0x234], 5
        call public_6f68e70
        lea eax, ss:[esp+0x10C]
        push eax
        lea ecx, ss:[esp+0x78]
        call public_6f68f20
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x144]
        push edx
        lea ecx, ss:[esp+0x88]
        call public_6ecfe80
        mov eax, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10C]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x230], 2
        call public_6f15350
        jmp public_6f5efd4
        public_6f5eed3 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[ecx+0x18]
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0xB0]
        push eax
        call public_6eeaee0
        add esp, 0xC
        lea ecx, ss:[esp+0xA8]
        call public_6f5f4f0
        fcomp dword ptr ds : [public_6fbbbc0]
        fnstsw ax
        test ah, 5
        jp public_6f5efc5
        lea ecx, ss:[esp+0x124]
        call public_6eb79a0
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x230], 6
        call public_6f5ea20
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x2C], esi
        mov ecx, dword ptr ds : [eax+0x28]
        mov dword ptr ss : [esp+0x48], ecx
        mov edx, dword ptr ds : [eax+0x24]
        lea ecx, ds:[eax+0x18]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x34], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x38], ecx
        add eax, 0xC
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x3C], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x40], ecx
        mov edx, dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x128]
        mov dword ptr ss : [esp+0x48], edx
        call public_6f68e70
        lea ecx, ss:[esp+0x124]
        push ecx
        lea ecx, ss:[esp+0x78]
        call public_6f68f20
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        lea eax, ss:[esp+0xBC]
        push eax
        lea ecx, ss:[esp+0x88]
        call public_6ecfe80
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x124]
        mov byte ptr ss : [esp+0x230], 2
        call public_6f15350
        jmp public_6f5efd4
        public_6f5efc5 : nop
        push esi
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        public_6f5efd4 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ss : [esp+0x84]
        jne public_6f5ee30
        public_6f5efe5 : nop
        lea ecx, ss:[esp+0xCC]
        mov dword ptr ss : [esp+0xBC], esi
        call public_6f143d0
        mov ebp, dword ptr ss : [esp+0x238]
        lea ecx, ss:[esp+0xBC]
        push ecx
        push ebp
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x104], 0xFFFFFFFF
        call public_6f5f5c0
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x84]
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ss : [esp+0x84]
        je public_6f5f14d
        mov edi, edi
        public_6f5f040 : nop
        mov ecx, dword ptr ds : [eax+0x28]
        cmp ecx, dword ptr ss : [esp+0xBC]
        je public_6f5f13b
        push esi
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ss : [esp+0x84]
        jne public_6f5f040
        jmp public_6f5f14d
        public_6f5f071 : nop
        mov esi, dword ptr ss : [esp+0x244]
        mov ebp, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call public_6f1df30
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0xC0]
        push edx
        mov ecx, esi
        call public_6fa8370
        push edi
        lea eax, ss:[esp+0x1C]
        push ebx
        push eax
        call public_6eeaee0
        mov ecx, dword ptr ss : [esp+0x258]
        fld dword ptr ds : [ecx]
        add esp, 0xC
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_6f5f131
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+8]
        xor eax, eax
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x3C], edx
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x2C]
        push edx
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [edi+8]
        push eax
        lea eax, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x4C], ecx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 1
        call public_6f69780
        jmp public_6f5f4b2
        public_6f5f131 : nop
        mov byte ptr ss : [esp+0x16], 0
        jmp public_6f5f4b2
        public_6f5f13b : nop
        push eax
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x88]
        call public_6ecfe80
        public_6f5f14d : nop
        lea ecx, ss:[esp+0x1A4]
        push ecx
        lea edx, ss:[esp+0xC4]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov byte ptr ss : [esp+0x23], 0
        call public_6eeaee0
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fcomp dword ptr ds : [public_6fbbbc0]
        fnstsw ax
        test ah, 0x41
        jp public_6f5f19d
        mov byte ptr ss : [esp+0x17], 1
        public_6f5f19d : nop
        mov ecx, dword ptr ss : [esp+0xBC]
        cmp ecx, dword ptr ss : [esp+0x1A0]
        je public_6f5f25a
        public_6f5f1b1 : nop
        cmp dword ptr ss : [esp+0x7C], esi
        je public_6f5f25a
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        jne public_6f5f25a
        lea edx, ss:[esp+0xBC]
        push edx
        lea ecx, ss:[esp+0x78]
        call public_6f5fb90
        lea eax, ss:[esp+0xBC]
        push eax
        push ebp
        lea ecx, ss:[esp+0x7C]
        call public_6f5f5c0
        lea ecx, ss:[esp+0xBC]
        push ecx
        lea ecx, ss:[esp+0x78]
        call public_6f5f570
        lea edx, ss:[esp+0x1A4]
        push edx
        lea eax, ss:[esp+0xC4]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_6eeaee0
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fcomp dword ptr ds : [public_6fbbbc0]
        fnstsw ax
        test ah, 0x41
        jp public_6f5f246
        mov byte ptr ss : [esp+0x17], 1
        public_6f5f246 : nop
        mov edx, dword ptr ss : [esp+0xBC]
        cmp edx, dword ptr ss : [esp+0x1A0]
        jne public_6f5f1b1
        public_6f5f25a : nop
        push esi
        mov esi, dword ptr ss : [esp+0x248]
        push esi
        lea eax, ss:[esp+0xC4]
        push eax
        lea ecx, ss:[esp+0x80]
        call public_6f5fe50
        lea ecx, ss:[esp+0x2C]
        call public_6f5ea20
        mov ecx, dword ptr ss : [esp+0xC0]
        mov edx, dword ptr ss : [esp+0xC4]
        mov eax, dword ptr ss : [esp+0xC8]
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], edx
        mov ecx, edi
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x3C], edx
        lea edx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x44], ecx
        mov ebp, 1
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x44], eax
        call public_6f68e70
        mov eax, dword ptr ss : [esp+0x238]
        push esi
        push eax
        lea ecx, ss:[esp+0x7C]
        call public_6f5f930
        fstp dword ptr ss : [esp+0x10]
        push edi
        lea ecx, ss:[esp+0xAC]
        push ebx
        push ecx
        call public_6eeaee0
        add esp, 0xC
        lea ecx, ss:[esp+0xA8]
        call public_6f5f510
        fdiv dword ptr ds : [public_6fbbb94]
        mov ecx, esi
        fld dword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_6f5f3a6
        call public_6ecfec0
        push edi
        lea edx, ss:[esp+0xAC]
        push ebx
        push edx
        call public_6eeaee0
        mov eax, dword ptr ss : [esp+0x258]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], ecx
        add esp, 0xC
        lea ecx, ss:[esp+0xA8]
        call public_6f5f4f0
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_6f5f131
        lea ecx, ss:[esp+0x50]
        call public_6f5ea20
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x54], edx
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x5C], ecx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x60], edx
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x68], ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], ebp
        mov dword ptr ss : [esp+0x68], eax
        call public_6f68e70
        jmp public_6f5f4b2
        public_6f5f3a6 : nop
        lea eax, ss:[esp+0x10]
        push eax
        call public_6f1df30
        mov eax, dword ptr ds : [esi+4]
        cmp dword ptr ss : [esp+0x10], eax
        je public_6f5f4b2
        lea ecx, ss:[esp+0xA8]
        call public_6eac620
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0x24]
        lea ecx, ss:[esp+0xA8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x23C]
        push eax
        push ecx
        mov byte ptr ss : [esp+0x23C], 7
        call public_6f62750
        mov edx, dword ptr ss : [esp+0x1C]
        add edx, 0x18
        push edx
        lea eax, ss:[esp+0xB8]
        push eax
        lea ecx, ss:[esp+0x170]
        push ebx
        push ecx
        call public_6f62440
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x178]
        mov dword ptr ds : [edx+0x24], eax
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x17C]
        add ecx, 0xC
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [esp+0x180]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [esp+0x184]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax+0x24]
        mov edx, dword ptr ds : [eax+0x28]
        add esp, 0x1C
        cmp ecx, edx
        jne public_6f5f49e
        mov ecx, esi
        call public_6f68e40
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jne public_6f5f49e
        lea ecx, ss:[esp+0x50]
        call public_6f5ea20
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x54], edx
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x5C], ecx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x60], edx
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x68], ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], ebp
        mov dword ptr ss : [esp+0x68], eax
        call public_6f68e70
        public_6f5f49e : nop
        lea ecx, ss:[esp+0xA8]
        mov byte ptr ss : [esp+0x230], 2
        call public_6eec8d0
        public_6f5f4b2 : nop
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x230], 0xFFFFFFFF
        call public_6f5ff50
        mov ecx, dword ptr ss : [esp+0x228]
        mov al, byte ptr ss : [esp+0x16]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x224
        ret 
        UNREACHABLE_TRAP(0x6f5ea40)
    }
}

#undef public_6f5eb41
#undef public_6f5eb6b
#undef public_6f5eb72
#undef public_6f5eb8c
#undef public_6f5eb97
#undef public_6f5ebfc
#undef public_6f5ec85
#undef public_6f5ecbe
#undef public_6f5ed80
#undef public_6f5edf6
#undef public_6f5ee03
#undef public_6f5ee30
#undef public_6f5eed3
#undef public_6f5efc5
#undef public_6f5efd4
#undef public_6f5efe5
#undef public_6f5f040
#undef public_6f5f071
#undef public_6f5f131
#undef public_6f5f13b
#undef public_6f5f14d
#undef public_6f5f19d
#undef public_6f5f1b1
#undef public_6f5f246
#undef public_6f5f25a
#undef public_6f5f3a6
#undef public_6f5f49e
#undef public_6f5f4b2

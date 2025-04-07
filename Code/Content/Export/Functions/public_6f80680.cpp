#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e440);
CLANG_FORWARD_PROC_SYMBOL(public_6f24370);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f35140);
CLANG_FORWARD_PROC_SYMBOL(public_6f35400);
CLANG_FORWARD_PROC_SYMBOL(public_6f35740);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53080);
CLANG_FORWARD_PROC_SYMBOL(public_6f57710);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f72d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ae20);
CLANG_FORWARD_PROC_SYMBOL(public_6f81940);
CLANG_FORWARD_PROC_SYMBOL(public_6f81960);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0798);

#define public_6f806d3 _public_6f806d3
#define public_6f8074b _public_6f8074b
#define public_6f80761 _public_6f80761
#define public_6f80764 _public_6f80764
#define public_6f8076c _public_6f8076c
#define public_6f80780 _public_6f80780
#define public_6f807f2 _public_6f807f2
#define public_6f8080f _public_6f8080f
#define public_6f80820 _public_6f80820
#define public_6f80858 _public_6f80858
#define public_6f8085d _public_6f8085d
#define public_6f808b2 _public_6f808b2
#define public_6f808bc _public_6f808bc
#define public_6f808e7 _public_6f808e7
#define public_6f808fc _public_6f808fc
#define public_6f80908 _public_6f80908
#define public_6f80929 _public_6f80929
#define public_6f80a8e _public_6f80a8e
#define public_6f80ac4 _public_6f80ac4
#define public_6f80ad5 _public_6f80ad5
#define public_6f80b20 _public_6f80b20
#define public_6f80b43 _public_6f80b43
#define public_6f80b4e _public_6f80b4e
#define public_6f80b6e _public_6f80b6e
#define public_6f80b81 _public_6f80b81
#define public_6f80bf3 _public_6f80bf3
#define public_6f80c19 _public_6f80c19
#define public_6f80c27 _public_6f80c27
#define public_6f80cb0 _public_6f80cb0
#define public_6f80cd6 _public_6f80cd6
#define public_6f80cef _public_6f80cef
#define public_6f80cf8 _public_6f80cf8
#define public_6f80d63 _public_6f80d63
#define public_6f80d89 _public_6f80d89
#define public_6f80da2 _public_6f80da2
#define public_6f80da6 _public_6f80da6
#define public_6f80dca _public_6f80dca
#define public_6f80de0 _public_6f80de0
#define public_6f80df0 _public_6f80df0
#define public_6f80e02 _public_6f80e02
#define public_6f80e15 _public_6f80e15
#define public_6f80e20 _public_6f80e20
#define public_6f80e61 _public_6f80e61
#define public_6f80e63 _public_6f80e63
#define public_6f80e68 _public_6f80e68
#define public_6f80e71 _public_6f80e71
#define public_6f80e76 _public_6f80e76
#define public_6f80ee8 _public_6f80ee8

PROC_DECLARE(0x6f80680, internal_6f80680, public_6f80680);
extern "C" NAKED register_t __cdecl internal_6f80680()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0798 @0x6f80682*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0798
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC0
        mov eax, dword ptr ss : [esp+0xD4]
        cmp eax, 0x20
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x18], edi
        mov byte ptr ss : [esp+0x13], 0
        je public_6f806d3
        cmp eax, 0x37
        jne public_6f80ee8
        mov ecx, dword ptr ss : [esp+0xE0]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x14]
        jmp public_6f80ee8
        public_6f806d3 : nop
        mov ebx, dword ptr ss : [esp+0xE0]
        mov ecx, dword ptr ds : [ebx+0x10]
        test ecx, ecx
        je public_6f80ee8
        mov esi, dword ptr ds : [ecx+0x10]
        call public_6f478c0
        mov edx, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [edx+0x10]
        test ecx, ecx
        je public_6f80ee8
        test eax, eax
        je public_6f80ee8
        test esi, esi
        je public_6f80ee8
        mov ecx, esi
        call public_6f57710
        test al, al
        jne public_6f80ee8
        mov ecx, dword ptr ds : [ebx+0x10]
        call public_6f478c0
        mov ecx, dword ptr ds : [ebx+0x84]
        test ecx, 0x3FFFFFFF
        lea esi, ds:[ebx+0x84]
        mov dword ptr ds : [ebx+8], eax
        jne public_6f8076c
        mov ecx, dword ptr ds : [ebx+0x50]
        test ecx, ecx
        lea edx, ds:[ebx+0x50]
        jne public_6f8074b
        mov eax, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_6f80761
        public_6f8074b : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
        push edx
        mov ecx, eax
        call public_6f73ac0
        test eax, eax
        jne public_6f80764
        mov edx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [edx+0x10]
        public_6f80761 : nop
        mov eax, dword ptr ds : [eax+4]
        public_6f80764 : nop
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [ebx+0x88], eax
        public_6f8076c : nop
        mov eax, dword ptr ds : [ebx+0xA0]
        test eax, eax
        jne public_6f80780
        mov dword ptr ds : [ebx+0xA0], 2
        public_6f80780 : nop
        mov eax, dword ptr ds : [ebx+0xA0]
        cmp eax, 2
        mov ebp, dword ptr ds : [public_6fb3370]
        jne public_6f80820
        fld dword ptr ds : [ebx+0xBC]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jp public_6f807f2
        fld dword ptr ds : [ebx+0xB4]
        call public_6fa9130
        fld dword ptr ds : [ebx+0xB8]
        mov esi, eax
        call public_6fa9130
        mov edi, eax
        call ebp
        sub esi, edi
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        add eax, edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], 0
        fild qword ptr ss : [esp+0x34]
        fstp dword ptr ds : [ebx+0xBC]
        public_6f807f2 : nop
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ds : [ebx+0xBC]
        fnstsw ax
        test ah, 1
        jne public_6f8080f
        xor eax, eax
        mov dword ptr ds : [ebx+0xBC], eax
        mov dword ptr ds : [edi+8], eax
        jmp public_6f80858
        public_6f8080f : nop
        fld dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0xE8]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [edi+8]
        jmp public_6f8085d
        public_6f80820 : nop
        cmp eax, 1
        jne public_6f8085d
        lea ecx, ds:[ebx+0xA4]
        mov eax, dword ptr ds : [ecx]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], eax
        push esi
        mov dword ptr ds : [edx+8], ecx
        call public_6f24370
        fild dword ptr ds : [ebx+0xB0]
        add esp, 0x10
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6f8085d
        public_6f80858 : nop
        mov byte ptr ss : [esp+0x13], 1
        public_6f8085d : nop
        cmp dword ptr ds : [ebx+0x14], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], 0
        jne public_6f808bc
        mov ecx, dword ptr ds : [ebx+0x84]
        lea edx, ss:[esp+0xAC]
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        test eax, eax
        jne public_6f808b2
        mov ecx, dword ptr ds : [ebx+8]
        lea edx, ss:[esp+0x4C]
        push edx
        call public_6f72d10
        test eax, eax
        mov dword ptr ds : [ebx+0xC0], eax
        je public_6f808b2
        mov ecx, eax
        call public_6fa7fb0
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_6f808bc
        public_6f808b2 : nop
        mov byte ptr ss : [esp+0x13], 0
        jmp public_6f80ee8
        public_6f808bc : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6f80ee8
        lea esi, ds:[ebx+0x18]
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        test al, al
        je public_6f808e7
/*FIXUP push offset public_6fbbfd4 @0x6f808d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbfd4
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6f808e7 : nop
        mov eax, dword ptr ds : [ebx+0x38]
        xor edi, edi
        cmp eax, edi
        jne public_6f80929
        cmp dword ptr ds : [ebx+0x3C], edi
        jne public_6f808fc
        mov dword ptr ds : [ebx+0x3C], 1
        public_6f808fc : nop
        cmp dword ptr ds : [ebx+0x40], edi
        jne public_6f80908
        mov dword ptr ds : [ebx+0x40], 3
        public_6f80908 : nop
        mov esi, dword ptr ds : [ebx+0x40]
        mov edi, dword ptr ds : [ebx+0x3C]
        call ebp
        sub esi, edi
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        add eax, edi
        mov dword ptr ds : [ebx+0x38], eax
        xor edi, edi
        public_6f80929 : nop
        cmp dword ptr ds : [ebx+0x30], edi
        jne public_6f80a8e
        call ebp
        imul eax, 0xC9
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], 0xC53B8000
        fild qword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], 0
        mov eax, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xA0], ecx
        lea esi, ds:[ebx+0x28]
        lea ecx, ss:[esp+0x9C]
        push ecx
        mov dword ptr ss : [esp+0xA0], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xA8], edx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0xB4], 0x42A00000
        call public_6f7ae20
        call ebp
        imul eax, 0xC9
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], 0xC55AC000
        fild qword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], 0x44FA0000
        mov eax, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x70], ecx
        lea ecx, ss:[esp+0x6C]
        push ecx
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x78], edx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x84], 0x40200000
        call public_6f7ae20
        call ebp
        imul eax, 0xC9
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], 0xC55AC000
        fild qword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], 0xC4FA0000
        mov eax, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x80], ecx
        lea ecx, ss:[esp+0x7C]
        push ecx
        mov dword ptr ss : [esp+0x80], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x88], edx
        push eax
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x90], 0x40200000
        push edx
        mov ecx, esi
        call public_6f7ae20
        public_6f80a8e : nop
        cmp dword ptr ds : [ebx+0x14], 0xFFFFFFFF
        jne public_6f80ee8
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x5C], al
        mov dword ptr ss : [esp+0x60], edi
        mov dword ptr ss : [esp+0x64], edi
        mov dword ptr ss : [esp+0x68], edi
        mov eax, dword ptr ds : [ebx+0x48]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0xD8], edi
        mov dword ptr ss : [esp+0x14], ecx
        je public_6f80b81
        public_6f80ac4 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+0x24]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f80b6e
        public_6f80ad5 : nop
        mov dl, byte ptr ss : [esp+0x13]
        xor ebp, ebp
        mov byte ptr ss : [esp+0x4C], dl
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x54], ebp
        mov dword ptr ss : [esp+0x58], ebp
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ds:[edi+8]
        push ecx
        mov byte ptr ss : [esp+0xE0], 1
        call public_6f35400
        mov esi, dword ptr ss : [esp+0x58]
        add esp, 8
        cmp esi, ebp
        je public_6f80b4e
        mov ecx, dword ptr ss : [esp+0x54]
        mov eax, ecx
        sub eax, esi
        sar eax, 2
        test eax, eax
        je public_6f80b4e
        cmp esi, ecx
        je public_6f80b4e
        nop 
        public_6f80b20 : nop
        mov ebp, dword ptr ss : [esp+0x64]
        push esi
        lea ecx, ss:[esp+0x60]
        call public_6eb5f30
        cmp eax, ebp
        jne public_6f80b43
        mov edx, dword ptr ss : [esp+0x64]
        push esi
        push 1
        push edx
        lea ecx, ss:[esp+0x68]
        call public_6f937c0
        public_6f80b43 : nop
        mov eax, dword ptr ss : [esp+0x54]
        add esi, 4
        cmp esi, eax
        jne public_6f80b20
        public_6f80b4e : nop
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0xD8], 0
        call public_6eec8d0
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [eax+0x24]
        jne public_6f80ad5
        public_6f80b6e : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [ebx+0x48]
        mov dword ptr ss : [esp+0x14], eax
        jne public_6f80ac4
        public_6f80b81 : nop
        mov dl, byte ptr ss : [esp+0x13]
        xor ebp, ebp
        push ebp
        push ebp
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x48], dl
        call public_6fa8bb0
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ebp
        mov al, byte ptr ss : [esp+0x13]
        push ebp
        push ebp
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xE0], 2
        mov byte ptr ss : [esp+0x30], al
        call public_6fa8bb0
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], ebp
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x90]
        mov byte ptr ss : [esp+0xDC], 3
        call dword ptr ds : [public_6fb3140]
        mov esi, dword ptr ss : [esp+0x90]
        cmp esi, dword ptr ss : [esp+0x94]
        mov byte ptr ss : [esp+0xD8], 4
        je public_6f80c27
        public_6f80bf3 : nop
        mov edi, dword ptr ss : [esp+0x64]
        push esi
        lea ecx, ss:[esp+0x60]
        call public_6eb5f30
        cmp edi, eax
        je public_6f80c19
        mov edx, dword ptr ss : [esp+0x44]
        push esi
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x4C]
        call public_6f1e440
        public_6f80c19 : nop
        mov eax, dword ptr ss : [esp+0x94]
        add esi, 8
        cmp esi, eax
        jne public_6f80bf3
        public_6f80c27 : nop
        lea ecx, ss:[esp+0x8C]
        mov byte ptr ss : [esp+0xD8], 3
        call public_6eec8d0
        mov ecx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ebx+0x84]
        cmp edx, eax
        jne public_6f80cf8
        call public_6f33f80
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f53080
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0xDC], 5
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6fa8370
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x38]
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x14], eax
        je public_6f80cef
        nop 
        public_6f80cb0 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+8]
        push edx
        push eax
        call public_6f35140
        add esp, 8
        test al, 4
        je public_6f80cd6
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, 8
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6f81960
        public_6f80cd6 : nop
        push ebp
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ss : [esp+0x38]
        jne public_6f80cb0
        public_6f80cef : nop
        lea ecx, ss:[esp+0x34]
        jmp public_6f80da6
        public_6f80cf8 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [public_6fb364c]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 8
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x20], edx
        call public_6f53080
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0xDC], 6
        call public_6f1df30
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_6fa8370
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ss:[esp+0x50]
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x14], eax
        je public_6f80da2
        public_6f80d63 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax+8]
        push ecx
        push edx
        call public_6f35140
        add esp, 8
        test al, 4
        je public_6f80d89
        mov eax, dword ptr ss : [esp+0x14]
        add eax, 8
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_6f81960
        public_6f80d89 : nop
        push ebp
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ss : [esp+0x50]
        jne public_6f80d63
        public_6f80da2 : nop
        lea ecx, ss:[esp+0x4C]
        public_6f80da6 : nop
        mov byte ptr ss : [esp+0xD8], 3
        call public_6f15350
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebp
        je public_6f80e71
        lea esi, ds:[eax-1]
        cmp esi, ebp
        jne public_6f80dca
        xor eax, eax
        jmp public_6f80de0
        public_6f80dca : nop
        call dword ptr ds : [public_6fb3370]
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        public_6f80de0 : nop
        cmp eax, ebp
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], ecx
        jbe public_6f80e02
        mov esi, eax
        public_6f80df0 : nop
        push ebp
        lea edx, ss:[esp+0x38]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6f68e30
        dec esi
        jne public_6f80df0
        public_6f80e02 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ebx+0x48]
        mov dword ptr ds : [ebx+0x14], ecx
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f80e76
        public_6f80e15 : nop
        mov eax, dword ptr ds : [edi+0x24]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f80e68
        mov edi, edi
        public_6f80e20 : nop
        mov edx, dword ptr ds : [ebx+0x14]
        lea eax, ds:[esi+8]
        push eax
        push edx
        call public_6f35740
        add esp, 8
        test al, al
        jne public_6f80e61
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ebp
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        push 0
        lea ecx, ds:[esi+8]
        call public_6f81940
        push esi
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x28]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x28], eax
        mov esi, ebp
        jmp public_6f80e63
        public_6f80e61 : nop
        mov esi, dword ptr ds : [esi]
        public_6f80e63 : nop
        cmp esi, dword ptr ds : [edi+0x24]
        jne public_6f80e20
        public_6f80e68 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0x48]
        jne public_6f80e15
        jmp public_6f80e76
        public_6f80e71 : nop
        mov byte ptr ss : [esp+0x13], 0
        public_6f80e76 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx]
        push ecx
        push eax
        lea edx, ss:[esp+0x3C]
        push edx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0xE4], 2
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x48]
        add esp, 4
        xor esi, esi
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], esi
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0xE4], 0
        call public_6fa8370
        mov edx, dword ptr ss : [esp+0x44]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x64]
        push eax
        mov dword ptr ss : [esp+0x4C], esi
        mov dword ptr ss : [esp+0x50], esi
        call public_6fa8fe0
        add esp, 8
        public_6f80ee8 : nop
        mov ecx, dword ptr ss : [esp+0xD0]
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xCC
        ret 0xC
        UNREACHABLE_TRAP(0x6f80680)
    }
}

#undef public_6f806d3
#undef public_6f8074b
#undef public_6f80761
#undef public_6f80764
#undef public_6f8076c
#undef public_6f80780
#undef public_6f807f2
#undef public_6f8080f
#undef public_6f80820
#undef public_6f80858
#undef public_6f8085d
#undef public_6f808b2
#undef public_6f808bc
#undef public_6f808e7
#undef public_6f808fc
#undef public_6f80908
#undef public_6f80929
#undef public_6f80a8e
#undef public_6f80ac4
#undef public_6f80ad5
#undef public_6f80b20
#undef public_6f80b43
#undef public_6f80b4e
#undef public_6f80b6e
#undef public_6f80b81
#undef public_6f80bf3
#undef public_6f80c19
#undef public_6f80c27
#undef public_6f80cb0
#undef public_6f80cd6
#undef public_6f80cef
#undef public_6f80cf8
#undef public_6f80d63
#undef public_6f80d89
#undef public_6f80da2
#undef public_6f80da6
#undef public_6f80dca
#undef public_6f80de0
#undef public_6f80df0
#undef public_6f80e02
#undef public_6f80e15
#undef public_6f80e20
#undef public_6f80e61
#undef public_6f80e63
#undef public_6f80e68
#undef public_6f80e71
#undef public_6f80e76
#undef public_6f80ee8

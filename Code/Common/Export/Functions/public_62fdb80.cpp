#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a33e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a66b0);
CLANG_FORWARD_PROC_SYMBOL(public_62c2ab0);
CLANG_FORWARD_PROC_SYMBOL(public_62c2af0);
CLANG_FORWARD_PROC_SYMBOL(public_62c2c70);
CLANG_FORWARD_PROC_SYMBOL(public_62c2d90);
CLANG_FORWARD_PROC_SYMBOL(public_62d29a0);
CLANG_FORWARD_PROC_SYMBOL(public_62d5760);
CLANG_FORWARD_PROC_SYMBOL(public_62d5840);
CLANG_FORWARD_PROC_SYMBOL(public_62d5890);
CLANG_FORWARD_PROC_SYMBOL(public_62d5980);
CLANG_FORWARD_PROC_SYMBOL(public_62d7510);
CLANG_FORWARD_PROC_SYMBOL(public_62d7560);
CLANG_FORWARD_PROC_SYMBOL(public_62d75e0);
CLANG_FORWARD_PROC_SYMBOL(public_62d7610);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d9490);
CLANG_FORWARD_PROC_SYMBOL(public_62da4d0);
CLANG_FORWARD_PROC_SYMBOL(public_62da4e0);
CLANG_FORWARD_PROC_SYMBOL(public_62de160);
CLANG_FORWARD_PROC_SYMBOL(public_62e4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_62e4ea0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5af0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5b70);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e91d0);
CLANG_FORWARD_PROC_SYMBOL(public_62ebf50);
CLANG_FORWARD_PROC_SYMBOL(public_62ec520);
CLANG_FORWARD_PROC_SYMBOL(public_63275f0);

#define public_62fdba0 _public_62fdba0
#define public_62fdbf5 _public_62fdbf5
#define public_62fdc5c _public_62fdc5c
#define public_62fdc66 _public_62fdc66
#define public_62fdc8a _public_62fdc8a
#define public_62fdd16 _public_62fdd16
#define public_62fdd98 _public_62fdd98
#define public_62fdda8 _public_62fdda8
#define public_62fde18 _public_62fde18
#define public_62fde2d _public_62fde2d
#define public_62fde43 _public_62fde43
#define public_62fde58 _public_62fde58
#define public_62fdea8 _public_62fdea8
#define public_62fdedf _public_62fdedf
#define public_62fdf0e _public_62fdf0e
#define public_62fdf10 _public_62fdf10
#define public_62fdf8d _public_62fdf8d
#define public_62fdf9c _public_62fdf9c
#define public_62fdf9e _public_62fdf9e
#define public_62fdfcb _public_62fdfcb
#define public_62fdfcd _public_62fdfcd
#define public_62fe09c _public_62fe09c
#define public_62fe0ab _public_62fe0ab
#define public_62fe0ad _public_62fe0ad
#define public_62fe0c5 _public_62fe0c5
#define public_62fe0c7 _public_62fe0c7
#define public_62fe0d3 _public_62fe0d3
#define public_62fe19c _public_62fe19c
#define public_62fe1ee _public_62fe1ee
#define public_62fe1fb _public_62fe1fb
#define public_62fe235 _public_62fe235
#define public_62fe237 _public_62fe237
#define public_62fe244 _public_62fe244
#define public_62fe27a _public_62fe27a
#define public_62fe284 _public_62fe284
#define public_62fe29f _public_62fe29f
#define public_62fe2ae _public_62fe2ae
#define public_62fe2bd _public_62fe2bd
#define public_62fe317 _public_62fe317
#define public_62fe344 _public_62fe344
#define public_62fe356 _public_62fe356
#define public_62fe373 _public_62fe373
#define public_62fe375 _public_62fe375
#define public_62fe37f _public_62fe37f
#define public_62fe3bc _public_62fe3bc
#define public_62fe3df _public_62fe3df
#define public_62fe400 _public_62fe400
#define public_62fe47b _public_62fe47b
#define public_62fe4a4 _public_62fe4a4
#define public_62fe4b0 _public_62fe4b0
#define public_62fe4f8 _public_62fe4f8
#define public_62fe509 _public_62fe509
#define public_62fe518 _public_62fe518
#define public_62fe51d _public_62fe51d
#define public_62fe53d _public_62fe53d
#define public_62fe544 _public_62fe544
#define public_62fe55b _public_62fe55b
#define public_62fe571 _public_62fe571
#define public_62fe59d _public_62fe59d
#define public_62fe5e2 _public_62fe5e2
#define public_62fe5ea _public_62fe5ea
#define public_62fe62e _public_62fe62e
#define public_62fe646 _public_62fe646

PROC_DECLARE(0x62fdb80, internal_62fdb80, public_62fdb80);
extern "C" NAKED register_t __cdecl internal_62fdb80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x54
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x28]
        test al, 1
        push edi
        je public_62fdba0
        pop edi
        mov eax, 2
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 
        public_62fdba0 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        je public_62fe646
        test al, 2
        je public_62fe646
        lea edx, ss:[esp+0x13]
        mov byte ptr ss : [esp+0x13], 0
        mov eax, dword ptr ds : [ecx]
        mov ebp, 3
        push edx
        mov dword ptr ss : [esp+0x18], ebp
        call dword ptr ds : [eax+0x60]
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        jne public_62fdbf5
        mov ecx, dword ptr ds : [edi+0x84]
        lea edx, ds:[edi+0xC]
        push edx
        lea edx, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62fdbf5 : nop
        add edi, 0xC
        mov ecx, dword ptr ds : [edi]
        lea ebx, ds:[esi+0x2F8]
        mov eax, ebx
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x1C], 0
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62fdc66
        mov al, byte ptr ds : [esi+0x2E8]
        test al, al
        je public_62fdc5c
        mov al, byte ptr ds : [esi+0x36B]
        test al, al
        jne public_62fdc5c
        mov dword ptr ss : [esp+0x18], 0x3F800000
        jmp public_62fdc66
        public_62fdc5c : nop
        mov eax, dword ptr ds : [esi+0x2E4]
        mov dword ptr ss : [esp+0x18], eax
        public_62fdc66 : nop
        mov eax, dword ptr ds : [esi+0x2F4]
        sub eax, 0
        je public_62fde43
        dec eax
        je public_62fdc8a
        sub eax, 2
        jne public_62fe0d3
        mov dword ptr ss : [esp+0x14], ebp
        jmp public_62fe0d3
        public_62fdc8a : nop
        mov ecx, dword ptr ds : [esi+0x24]
        lea ebp, ds:[esi+0x304]
        add ecx, 0x14FC
        push ebp
        push ecx
        call public_62e4ea0
        fstp dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [esi+0x2EA]
        add esp, 8
        test al, al
        je public_62fde18
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [esi+0x24]
        fld dword ptr ds : [eax+0x20]
        add edi, 0x14FC
        fstp dword ptr ss : [esp+0x34]
        fxch 
        fchs 
        fstp dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x34]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi+0x7E]
        test al, al
        jne public_62fdd16
        mov ecx, dword ptr ds : [edi+0x84]
        lea edx, ds:[edi+0xC]
        push edx
        lea edx, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62fdd16 : nop
        fld dword ptr ss : [esp+0x20]
        lea ecx, ds:[esi+0x2D8]
        fmul dword ptr ds : [public_63a22f0]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_63a22f0]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_63a22f0]
        fadd dword ptr ds : [edi+0x14]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [edi+0x10]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [edi+0xC]
        fstp dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_62fdd98
        push ecx
        lea ecx, ds:[esi+0xA4]
        call public_62d75e0
        jmp public_62fdda8
        public_62fdd98 : nop
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ds:[esi+0xA4]
        call public_62d7560
        public_62fdda8 : nop
        lea edi, ds:[esi+0x2C]
        push 2
        mov ecx, edi
        call public_62d88b0
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_62d5890
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [esi+0x358]
        mov byte ptr ds : [esi+0x366], 1
        fnstsw ax
        test ah, 5
        jp public_62fde2d
        mov bl, byte ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi]
        or bl, 1
        mov ecx, esi
        mov byte ptr ds : [esi+0x368], 0
        mov byte ptr ds : [esi+0x28], bl
        call dword ptr ds : [edx+0x10]
        mov dl, byte ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x20]
        push 0
        and dl, 0xFD
        push 2
        mov byte ptr ds : [esi+0x28], dl
        call public_62d29a0
        pop edi
        mov dword ptr ds : [esi+0x10], 2
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 0x54
        ret 
        public_62fde18 : nop
        push ebp
        lea ecx, ds:[esi+0xA4]
        call public_62d7560
        push ebp
        lea ecx, ds:[esi+0x2C]
        call public_62d5840
        public_62fde2d : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        jmp public_62fe0d3
        public_62fde43 : nop
        mov eax, dword ptr ds : [esi+0x310]
        test eax, eax
        je public_62fde58
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62fdedf
        public_62fde58 : nop
        mov dl, byte ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [esi]
        or dl, 1
        mov ecx, esi
        mov byte ptr ds : [esi+0x28], dl
        call dword ptr ds : [eax+0x10]
        mov cl, byte ptr ds : [esi+0x28]
        mov bl, 0xFD
        and cl, bl
        push 2
        mov byte ptr ds : [esi+0x28], cl
        mov ecx, dword ptr ds : [esi+0x20]
        push 2
        call public_62d29a0
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62fdea8
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push ebp
        call dword ptr ds : [eax+0x6C]
        public_62fdea8 : nop
        mov al, byte ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi]
        or al, 1
        mov ecx, esi
        mov byte ptr ds : [esi+0x368], 0
        mov byte ptr ds : [esi+0x28], al
        call dword ptr ds : [edx+0x10]
        mov dl, byte ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x20]
        push 2
        and dl, bl
        push 2
        mov byte ptr ds : [esi+0x28], dl
        call public_62d29a0
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x54
        ret 
        public_62fdedf : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62fdf8d
        mov eax, dword ptr ds : [esi+0x310]
        test eax, eax
        je public_62fdf0e
        lea ecx, ds:[eax-8]
        jmp public_62fdf10
        public_62fdf0e : nop
        xor ecx, ecx
        public_62fdf10 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x44]
        push edx
        call dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_63a227c]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_62fdf8d
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 2
        call dword ptr ds : [eax+0x6C]
        mov bl, byte ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi]
        or bl, 1
        mov ecx, esi
        mov byte ptr ds : [esi+0x368], 0
        mov byte ptr ds : [esi+0x28], bl
        call dword ptr ds : [edx+0x10]
        mov dl, byte ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x20]
        push 2
        and dl, 0xFD
        push 2
        mov byte ptr ds : [esi+0x28], dl
        call public_62d29a0
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x54
        ret 
        public_62fdf8d : nop
        mov eax, dword ptr ds : [esi+0x310]
        test eax, eax
        je public_62fdf9c
        add eax, 0xFFFFFFF8
        jmp public_62fdf9e
        public_62fdf9c : nop
        xor eax, eax
        public_62fdf9e : nop
        push eax
        lea eax, ss:[esp+0x54]
        push eax
        call public_62e60e0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [esi+0x310]
        add esp, 8
        test eax, eax
        je public_62fdfcb
        add eax, 0xFFFFFFF8
        jmp public_62fdfcd
        public_62fdfcb : nop
        xor eax, eax
        public_62fdfcd : nop
        mov ecx, dword ptr ds : [esi+0x24]
        push eax
        add ecx, 0x14FC
        push ecx
        call public_62e4bb0
        fstp dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [esi+0x2EA]
        add esp, 8
        test al, al
        je public_62fe09c
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        lea ecx, ds:[esi+0xA4]
        fld dword ptr ds : [eax+0x20]
        lea eax, ds:[esi+0x2D8]
        fstp dword ptr ss : [esp+0x34]
        fxch 
        push eax
        fchs 
        fstp dword ptr ss : [esp+0x3C]
        fchs 
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x38]
        fchs 
        fstp dword ptr ss : [esp+0x44]
        call public_62d75e0
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ds:[esi+0x2C]
        call public_62d5890
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [esi+0x358]
        fnstsw ax
        test ah, 5
        jp public_62fe0d3
        mov bl, byte ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi]
        or bl, 1
        mov ecx, esi
        mov byte ptr ds : [esi+0x368], 0
        mov byte ptr ds : [esi+0x28], bl
        call dword ptr ds : [edx+0x10]
        mov dl, byte ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x20]
        push 0
        and dl, 0xFD
        push 2
        mov byte ptr ds : [esi+0x28], dl
        call public_62d29a0
        pop edi
        mov dword ptr ds : [esi+0x10], 2
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 0x54
        ret 
        public_62fe09c : nop
        mov eax, dword ptr ds : [esi+0x310]
        test eax, eax
        je public_62fe0ab
        add eax, 0xFFFFFFF8
        jmp public_62fe0ad
        public_62fe0ab : nop
        xor eax, eax
        public_62fe0ad : nop
        push eax
        lea ecx, ds:[esi+0x2C]
        call public_62d5760
        mov eax, dword ptr ds : [esi+0x310]
        test eax, eax
        je public_62fe0c5
        add eax, 0xFFFFFFF8
        jmp public_62fe0c7
        public_62fe0c5 : nop
        xor eax, eax
        public_62fe0c7 : nop
        push eax
        lea ecx, ds:[esi+0xA4]
        call public_62d7510
        public_62fe0d3 : nop
        mov eax, dword ptr ds : [esi+0x24]
        lea edi, ds:[esi+0x2F8]
        push edi
        lea ebx, ds:[esi+0x370]
        push eax
        mov ecx, ebx
        call public_62c2af0
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x24]
        push edi
        push ecx
        push edx
        mov ecx, ebx
        call public_62c2d90
        mov eax, dword ptr ds : [esi+0x2F4]
        cmp eax, 1
        je public_62fe1fb
        test eax, eax
        je public_62fe1fb
        cmp eax, 2
        jne public_62fe5ea
        mov ebp, dword ptr ss : [esp+0x18]
        lea eax, ds:[esi+0x330]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0x2F8], ecx
        lea edi, ds:[esi+0x164]
        mov dword ptr ds : [esi+0x2FC], edx
        push ebp
        mov ecx, edi
        mov dword ptr ds : [esi+0x300], eax
        call public_62da4d0
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_62fe19c
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62fe19c
        mov ecx, dword ptr ds : [esi+0x360]
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0x14]
        push ecx
        push 1
        push edx
        push eax
        mov ecx, ebx
        call public_62c2c70
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+0x14]
        push 1
        push ebp
        push ecx
        call public_62e5af0
        fcomp dword ptr ss : [esp+0x28]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jne public_62fe19c
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        mov ecx, edi
        call public_62da4e0
        public_62fe19c : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+4]
        sub eax, 0
        je public_62fe544
        dec eax
        jne public_62fe5e2
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_62fe1ee
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62fe1ee
        test byte ptr ds : [esi+0x384], 2
        jne public_62fe1ee
        mov al, byte ptr ds : [esi+0x366]
        test al, al
        jne public_62fe1ee
        mov dword ptr ss : [esp+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 
        public_62fe1ee : nop
        mov dword ptr ss : [esp+0x14], 2
        jmp public_62fe5ea
        public_62fe1fb : nop
        mov dl, byte ptr ds : [esi+0x366]
        neg dl
        lea edi, ds:[esi+0x2C]
        mov ecx, edi
        sbb edx, edx
        and edx, 2
        push edx
        call public_62d88b0
        mov al, byte ptr ds : [esi+0x365]
        test al, al
        je public_62fe244
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_63a22f0]
        fnstsw ax
        test ah, 0x41
        jne public_62fe235
        mov eax, 1
        jmp public_62fe237
        public_62fe235 : nop
        xor eax, eax
        public_62fe237 : nop
        mov byte ptr ds : [esi+0x364], al
        mov byte ptr ds : [esi+0x365], 0
        public_62fe244 : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62fe27a
        mov al, byte ptr ds : [esi+0x2E8]
        test al, al
        mov byte ptr ss : [esp+0x11], al
        je public_62fe29f
        mov al, byte ptr ds : [esi+0x364]
        mov byte ptr ss : [esp+0x11], al
        jmp public_62fe284
        public_62fe27a : nop
        mov cl, byte ptr ds : [esi+0x364]
        mov byte ptr ss : [esp+0x11], cl
        public_62fe284 : nop
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        je public_62fe29f
        mov edx, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [edx+0xC]
        test ecx, ecx
        je public_62fe29f
        call public_62de160
        mov byte ptr ss : [esp+0x11], al
        public_62fe29f : nop
        mov al, byte ptr ds : [esi+0x36A]
        test al, al
        je public_62fe2ae
        mov byte ptr ss : [esp+0x11], 1
        public_62fe2ae : nop
        mov al, byte ptr ds : [esi+0x36B]
        test al, al
        je public_62fe2bd
        mov byte ptr ss : [esp+0x11], 0
        public_62fe2bd : nop
        mov ecx, dword ptr ds : [esi+0x24]
        lea eax, ss:[esp+0x50]
        push eax
        add ecx, 0x1364
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        call public_62ebf50
        test al, al
        je public_62fe344
        push 0x40490FDB
        mov ecx, edi
        call public_63275f0
        fld dword ptr ss : [esp+0x54]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jp public_62fe317
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x18], ecx
        public_62fe317 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        mov ecx, edi
        call public_62a33e0
        mov eax, dword ptr ss : [esp+0x58]
        lea edi, ds:[esi+0xA4]
        push eax
        mov ecx, edi
        call public_62d7610
        mov al, byte ptr ss : [esp+0x60]
        test al, al
        jne public_62fe356
        mov byte ptr ss : [esp+0x11], 0
        jmp public_62fe356
        public_62fe344 : nop
        lea edi, ds:[esi+0xA4]
        push 0x3F800000
        mov ecx, edi
        call public_62d9490
        public_62fe356 : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        mov byte ptr ss : [esp+0x12], 0
        je public_62fe37f
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62fe37f
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_62fe373
        lea ecx, ds:[eax-8]
        jmp public_62fe375
        public_62fe373 : nop
        xor ecx, ecx
        public_62fe375 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x12]
        push eax
        call dword ptr ds : [edx+0x60]
        public_62fe37f : nop
        mov al, byte ptr ds : [esi+0x36A]
        test al, al
        jne public_62fe3bc
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_62fe3bc
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62fe3bc
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_62fe3bc
        mov ecx, ebx
        call public_62c2ab0
        mov ecx, dword ptr ds : [esi+0x24]
        push eax
        add ecx, 0x1364
        call public_62ec520
        test al, al
        jne public_62fe3bc
        mov byte ptr ss : [esp+0x11], al
        public_62fe3bc : nop
        mov al, byte ptr ss : [esp+0x11]
        cmp al, byte ptr ds : [esi+0x368]
        je public_62fe400
        test al, al
        je public_62fe3df
        push 2
        lea ecx, ds:[esi+0x2C]
        call public_62d5980
        mov byte ptr ds : [esi+0x368], 1
        jmp public_62fe400
        public_62fe3df : nop
        mov ecx, dword ptr ds : [esi+0x358]
        push ecx
        lea ebp, ds:[esi+0x2C]
        mov ecx, ebp
        call public_62a66b0
        push 0
        mov ecx, ebp
        call public_62d5980
        mov byte ptr ds : [esi+0x368], 0
        public_62fe400 : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_62fe4b0
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62fe4b0
        mov al, byte ptr ds : [esi+0x368]
        mov edx, dword ptr ds : [esi+0x360]
        mov ecx, dword ptr ds : [esi+0x24]
        neg al
        push edx
        mov edx, dword ptr ds : [esi+0x14]
        sbb eax, eax
        and eax, 3
        inc eax
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_62c2c70
        fstp dword ptr ss : [esp+0x1C]
        mov al, byte ptr ds : [esi+0x368]
        test al, al
        je public_62fe47b
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_62fe47b
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x14]
        push 4
        push eax
        push ecx
        call public_62e5af0
        fcomp dword ptr ss : [esp+0x28]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jne public_62fe4b0
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+0x14]
        push 4
        push edx
        push eax
        jmp public_62fe4a4
        public_62fe47b : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+0x14]
        push 1
        push ecx
        push edx
        call public_62e5af0
        fcomp dword ptr ss : [esp+0x28]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jne public_62fe4b0
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+0x14]
        push 1
        push eax
        push ecx
        public_62fe4a4 : nop
        call public_62e5b70
        fstp dword ptr ss : [esp+0x24]
        add esp, 0xC
        public_62fe4b0 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        xor edi, edi
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62fe518
        mov al, byte ptr ds : [esi+0x2EC]
        test al, al
        je public_62fe4f8
        mov ecx, dword ptr ds : [esi+0x24]
        push edi
        push 0xBF800000
        add ecx, 0x18
        call public_62e89a0
        jmp public_62fe53d
        public_62fe4f8 : nop
        mov al, byte ptr ds : [esi+0x2E9]
        test al, al
        je public_62fe509
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        jmp public_62fe51d
        public_62fe509 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        push 0
        add ecx, 0x18
        call public_62e91d0
        jmp public_62fe53d
        public_62fe518 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        public_62fe51d : nop
        lea edi, ds:[esi+0x2C]
        mov ecx, edi
        call public_62a33e0
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        push eax
        call dword ptr ds : [edx+4]
        mov edi, eax
        cmp edi, 3
        ja public_62fe5ea
/*FIXUP public_62fe53d : nop
        jmp dword ptr ds : [edi*4+public_62fe658] @0x62fe53d*/
  JMPTB public_62fe53d : nop
        cmp edi, 0
  JMPTB je public_62fe544
  JMPTB cmp edi, 1
  JMPTB je public_62fe55b
  JMPTB cmp edi, 2
  JMPTB je public_62fe5e2
  JMPTB cmp edi, 3
  JMPTB je public_62fe5e2
  JMPTB int 3
        public_62fe544 : nop
        mov dword ptr ss : [esp+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 
        public_62fe55b : nop
        mov al, byte ptr ds : [esi+0x36C]
        mov edi, 1
        cmp ebx, edi
        sete bl
        test al, al
        jne public_62fe571
        mov bl, 1
        public_62fe571 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62fe59d
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        jne public_62fe59d
        test bl, bl
        jne public_62fe59d
        mov eax, edi
        mov dword ptr ss : [esp+0x14], edi
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 
        public_62fe59d : nop
        mov eax, dword ptr ds : [esi+0x370]
        test eax, eax
        je public_62fe1ee
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62fe1ee
        test byte ptr ds : [esi+0x384], 2
        jne public_62fe1ee
        mov al, byte ptr ds : [esi+0x366]
        test al, al
        jne public_62fe1ee
        mov eax, edi
        mov dword ptr ss : [esp+0x14], edi
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 
        public_62fe5e2 : nop
        mov dword ptr ss : [esp+0x14], 3
        public_62fe5ea : nop
        mov bl, byte ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [esi]
        or bl, 1
        mov ecx, esi
        mov byte ptr ds : [esi+0x368], 0
        mov byte ptr ds : [esi+0x28], bl
        call dword ptr ds : [eax+0x10]
        mov dl, byte ptr ds : [esi+0x28]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x20]
        and dl, 0xFD
        sub eax, 2
        mov byte ptr ds : [esi+0x28], dl
        je public_62fe62e
        push 2
        push 2
        call public_62d29a0
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 
        public_62fe62e : nop
        push 0
        push 2
        call public_62d29a0
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 
        public_62fe646 : nop
        pop edi
        mov eax, 3
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x62fdb80)
        ASM_EXPORT_ENTRY_FIRST(0x62fe544, public_62fe544)
        ASM_EXPORT_ENTRY(0x62fe55b, public_62fe55b)
        ASM_EXPORT_ENTRY_LAST(0x62fe5e2, public_62fe5e2)
    }
}

#undef public_62fdba0
#undef public_62fdbf5
#undef public_62fdc5c
#undef public_62fdc66
#undef public_62fdc8a
#undef public_62fdd16
#undef public_62fdd98
#undef public_62fdda8
#undef public_62fde18
#undef public_62fde2d
#undef public_62fde43
#undef public_62fde58
#undef public_62fdea8
#undef public_62fdedf
#undef public_62fdf0e
#undef public_62fdf10
#undef public_62fdf8d
#undef public_62fdf9c
#undef public_62fdf9e
#undef public_62fdfcb
#undef public_62fdfcd
#undef public_62fe09c
#undef public_62fe0ab
#undef public_62fe0ad
#undef public_62fe0c5
#undef public_62fe0c7
#undef public_62fe0d3
#undef public_62fe19c
#undef public_62fe1ee
#undef public_62fe1fb
#undef public_62fe235
#undef public_62fe237
#undef public_62fe244
#undef public_62fe27a
#undef public_62fe284
#undef public_62fe29f
#undef public_62fe2ae
#undef public_62fe2bd
#undef public_62fe317
#undef public_62fe344
#undef public_62fe356
#undef public_62fe373
#undef public_62fe375
#undef public_62fe37f
#undef public_62fe3bc
#undef public_62fe3df
#undef public_62fe400
#undef public_62fe47b
#undef public_62fe4a4
#undef public_62fe4b0
#undef public_62fe4f8
#undef public_62fe509
#undef public_62fe518
#undef public_62fe51d
#undef public_62fe53d
#undef public_62fe544
#undef public_62fe55b
#undef public_62fe571
#undef public_62fe59d
#undef public_62fe5e2
#undef public_62fe5ea
#undef public_62fe62e
#undef public_62fe646

#pragma init_seg(compiler)
extern "C" void const* const public_62fe544 = __AsmFindLabelExport(&internal_62fdb80, 0x62fe544);
extern "C" void const* const public_62fe55b = __AsmFindLabelExport(&internal_62fdb80, 0x62fe55b);
extern "C" void const* const public_62fe5e2 = __AsmFindLabelExport(&internal_62fdb80, 0x62fe5e2);

#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6f95040);
CLANG_FORWARD_PROC_SYMBOL(public_6f95ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1643);

#define public_6f95076 _public_6f95076
#define public_6f950f0 _public_6f950f0
#define public_6f9511b _public_6f9511b
#define public_6f95140 _public_6f95140
#define public_6f95159 _public_6f95159
#define public_6f95164 _public_6f95164
#define public_6f95166 _public_6f95166
#define public_6f95179 _public_6f95179
#define public_6f951ba _public_6f951ba
#define public_6f95268 _public_6f95268
#define public_6f95274 _public_6f95274
#define public_6f95291 _public_6f95291
#define public_6f952c5 _public_6f952c5
#define public_6f952e0 _public_6f952e0
#define public_6f95308 _public_6f95308
#define public_6f95313 _public_6f95313
#define public_6f95315 _public_6f95315
#define public_6f95340 _public_6f95340
#define public_6f9534b _public_6f9534b
#define public_6f9534d _public_6f9534d
#define public_6f95358 _public_6f95358
#define public_6f95370 _public_6f95370
#define public_6f95383 _public_6f95383
#define public_6f953a9 _public_6f953a9
#define public_6f953d0 _public_6f953d0
#define public_6f9540d _public_6f9540d
#define public_6f95424 _public_6f95424
#define public_6f9544f _public_6f9544f
#define public_6f95475 _public_6f95475
#define public_6f9549f _public_6f9549f
#define public_6f954bd _public_6f954bd
#define public_6f954db _public_6f954db
#define public_6f954f9 _public_6f954f9
#define public_6f95517 _public_6f95517
#define public_6f95527 _public_6f95527
#define public_6f9553e _public_6f9553e
#define public_6f9555f _public_6f9555f
#define public_6f95561 _public_6f95561
#define public_6f95635 _public_6f95635
#define public_6f95655 _public_6f95655
#define public_6f95668 _public_6f95668

PROC_DECLARE(0x6f95040, internal_6f95040, public_6f95040);
extern "C" NAKED register_t __cdecl internal_6f95040()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb1643 @0x6f95048*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1643
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xA8
        push esi
        mov esi, dword ptr ss : [esp+0xBC]
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f95668
        push ebx
        push ebp
        push edi
/*FIXUP public_6f95076 : nop
        push offset public_6fbcb30 @0x6f95076*/
  FIXUP public_6f95076 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcb30
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f95655
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3030]
        mov al, byte ptr ss : [esp+0x13]
        xor ebp, ebp
        or edi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], ebp
        mov byte ptr ss : [esp+0x20], 0
        mov byte ptr ss : [esp+0x24], al
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x34], ebp
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x4C], ebp
        mov dword ptr ss : [esp+0x50], 1
        mov ecx, esi
        mov dword ptr ss : [esp+0xC0], ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f95179
        mov edi, edi
        public_6f950f0 : nop
        mov edi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb445c @0x6f950f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6f9511b
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6f95166
/*FIXUP public_6f9511b : nop
        push offset public_6fbcb24 @0x6f9511b*/
  FIXUP public_6f9511b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcb24
        call edi
        test al, al
        mov ecx, esi
        je public_6f95274
        call dword ptr ds : [public_6fb3054]
        mov ebx, eax
        mov edi, offset public_6fce748
        lea esp, ss:[esp]
        public_6f95140 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6f95159
        push eax
        push ebx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f95268
        public_6f95159 : nop
        add ebp, 8
        add edi, 8
        cmp ebp, 0x20
        jb public_6f95140
        public_6f95164 : nop
        xor ebp, ebp
        public_6f95166 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f950f0
        or edi, 0xFFFFFFFF
        public_6f95179 : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f95635
        cmp dword ptr ss : [esp+0x18], edi
        je public_6f95635
        mov al, byte ptr ss : [esp+0x20]
        test al, al
        mov ecx, dword ptr ss : [esp+0x28]
        jne public_6f951ba
        cmp ecx, ebp
        je public_6f95635
        mov eax, dword ptr ss : [esp+0x2C]
        sub eax, ecx
        sar eax, 2
        cmp eax, ebp
        je public_6f95635
        public_6f951ba : nop
        cmp dword ptr ss : [esp+0x34], ebp
        je public_6f95635
        cmp dword ptr ss : [esp+0x38], ebp
        je public_6f95635
        fld dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6f95635
        fld dword ptr ss : [esp+0x40]
        fcomp dword ptr ss : [esp+0x3C]
        fnstsw ax
        test ah, 1
        jne public_6f95635
        fld dword ptr ss : [esp+0x44]
        fcomp dword ptr ds : [public_6fbcabc]
        fnstsw ax
        test ah, 1
        jne public_6f95635
        fld dword ptr ss : [esp+0x44]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 0x41
        jp public_6f95635
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_6fbcac4]
        fnstsw ax
        test ah, 0x41
        jp public_6f95635
        lea edx, ss:[esp+0x5C]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        call dword ptr ds : [public_6fb35b0]
        fild dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x48]
        add esp, 8
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6f9555f
        fst dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x40]
        jmp public_6f95561
        public_6f95268 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_6f95164
/*FIXUP public_6f95274 : nop
        push offset public_6fb8bd8 @0x6f95274*/
  FIXUP public_6f95274 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8bd8
        call edi
        test al, al
        mov ecx, esi
        je public_6f95291
        push ebp
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6f95166
/*FIXUP public_6f95291 : nop
        push offset public_6fb44fc @0x6f95291*/
  FIXUP public_6f95291 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44fc
        call edi
        test al, al
        mov ecx, esi
        je public_6f95383
/*FIXUP push offset public_6fb5ca0 @0x6f952a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5ca0
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f952c5
        mov byte ptr ss : [esp+0x20], 1
        jmp public_6f95166
        public_6f952c5 : nop
        mov ebx, dword ptr ds : [public_6fb306c]
        push ebp
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 0
        xor edi, edi
        call ebx
        test al, al
        jne public_6f95164
        nop 
        public_6f952e0 : nop
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        lea edx, ss:[esp+0x58]
        push edx
        call dword ptr ds : [public_6fb361c]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 8
        cmp eax, ecx
        je public_6f95313
        mov edx, dword ptr ss : [esp+0x54]
        public_6f95308 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f95315
        add eax, 4
        cmp eax, ecx
        jne public_6f95308
        public_6f95313 : nop
        mov eax, ecx
        public_6f95315 : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x60], eax
        jne public_6f95358
        lea eax, ss:[esp+0x54]
        push eax
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp eax, ecx
        je public_6f9534b
        mov edx, dword ptr ss : [esp+0x54]
        lea esp, ss:[esp]
        public_6f95340 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f9534d
        add eax, 4
        cmp eax, ecx
        jne public_6f95340
        public_6f9534b : nop
        mov eax, ecx
        public_6f9534d : nop
        mov dword ptr ss : [esp+0x64], eax
        mov byte ptr ss : [esp+0x68], 1
        jmp public_6f95370
        public_6f95358 : nop
        lea ecx, ss:[esp+0x13]
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        lea ecx, ss:[esp+0x6C]
        mov byte ptr ss : [esp+0x1B], 0
        call public_6fa6e80
        public_6f95370 : nop
        inc edi
        push edi
        mov ecx, esi
        call ebx
        test al, al
        je public_6f952e0
        jmp public_6f95164
/*FIXUP public_6f95383 : nop
        push offset public_6fb8be4 @0x6f95383*/
  FIXUP public_6f95383 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8be4
        call edi
        test al, al
        mov ecx, esi
        je public_6f953a9
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        mov dword ptr ss : [esp+0x34], eax
        jmp public_6f95166
/*FIXUP public_6f953a9 : nop
        push offset public_6fb8b60 @0x6f953a9*/
  FIXUP public_6f953a9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8b60
        call edi
        test al, al
        mov ecx, esi
        je public_6f953d0
        call dword ptr ds : [public_6fb3054]
        push eax
        lea eax, ss:[esp+0x3C]
        push eax
        call dword ptr ds : [public_6fb33e4]
        add esp, 8
        jmp public_6f95166
/*FIXUP public_6f953d0 : nop
        push offset public_6fbcb18 @0x6f953d0*/
  FIXUP public_6f953d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcb18
        call edi
        test al, al
        mov ecx, esi
        je public_6f95424
        mov edi, dword ptr ds : [public_6fb3020]
        push ebp
        call edi
        mov dword ptr ss : [esp+0x58], eax
        fild dword ptr ss : [esp+0x58]
        push 1
        mov ecx, esi
        fstp dword ptr ss : [esp+0x40]
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f9540d
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x40], ecx
        jmp public_6f95166
        public_6f9540d : nop
        push 1
        mov ecx, esi
        call edi
        mov dword ptr ss : [esp+0x58], eax
        fild dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x40]
        jmp public_6f95166
/*FIXUP public_6f95424 : nop
        push offset public_6fbb430 @0x6f95424*/
  FIXUP public_6f95424 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb430
        call edi
        test al, al
        mov ecx, esi
        je public_6f9544f
        push ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x44]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x48]
        jmp public_6f95166
/*FIXUP public_6f9544f : nop
        push offset public_6fbcafc @0x6f9544f*/
  FIXUP public_6f9544f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcafc
        call edi
        test al, al
        mov ecx, esi
        je public_6f9553e
        push ebp
        xor edi, edi
        mov dword ptr ss : [esp+0x50], ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f95166
        public_6f95475 : nop
        mov ebp, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fbcaf4 @0x6f9547b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcaf4
        push edi
        mov ecx, esi
        call ebp
        mov ebx, dword ptr ds : [public_6fb3294]
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f9549f
        or dword ptr ss : [esp+0x4C], 0x40
        jmp public_6f95527
/*FIXUP public_6f9549f : nop
        push offset public_6fbcaec @0x6f9549f*/
  FIXUP public_6f9549f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcaec
        push edi
        mov ecx, esi
        call ebp
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f954bd
        or dword ptr ss : [esp+0x4C], 0x80
        jmp public_6f95527
/*FIXUP public_6f954bd : nop
        push offset public_6fbcae8 @0x6f954bd*/
  FIXUP public_6f954bd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcae8
        push edi
        mov ecx, esi
        call ebp
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f954db
        or dword ptr ss : [esp+0x4C], 0x100
        jmp public_6f95527
/*FIXUP public_6f954db : nop
        push offset public_6fbcae0 @0x6f954db*/
  FIXUP public_6f954db : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcae0
        push edi
        mov ecx, esi
        call ebp
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f954f9
        or dword ptr ss : [esp+0x4C], 0x200
        jmp public_6f95527
/*FIXUP public_6f954f9 : nop
        push offset public_6fbcad8 @0x6f954f9*/
  FIXUP public_6f954f9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcad8
        push edi
        mov ecx, esi
        call ebp
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f95517
        or dword ptr ss : [esp+0x4C], 0x800
        jmp public_6f95527
/*FIXUP public_6f95517 : nop
        push offset public_6fb5ca0 @0x6f95517*/
  FIXUP public_6f95517 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5ca0
        push edi
        mov ecx, esi
        call ebp
        push eax
        call ebx
        add esp, 8
        public_6f95527 : nop
        inc edi
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f95475
        jmp public_6f95164
/*FIXUP public_6f9553e : nop
        push offset public_6fbcac8 @0x6f9553e*/
  FIXUP public_6f9553e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcac8
        call edi
        test al, al
        je public_6f95166
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [esp+0x50], eax
        jmp public_6f95166
        public_6f9555f : nop
        fstp st(0)
        public_6f95561 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x74], ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x6C], eax
        mov dword ptr ss : [esp+0x70], eax
        mov al, byte ptr ss : [esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x7C], edx
        mov byte ptr ss : [esp+0x80], al
        call public_6eb35b0
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x90], edx
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x94], eax
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x98], ecx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x9C], edx
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0xA0], eax
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0xA4], ecx
        mov dword ptr ss : [esp+0xA8], edx
        mov dword ptr ss : [esp+0xAC], eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea edx, ss:[esp+0xB4]
        push edx
        mov ecx, offset public_6fd3c20
        mov byte ptr ss : [esp+0xC8], 1
        call public_6f95ef0
        mov eax, dword ptr ss : [esp+0x84]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x84], ebp
        mov dword ptr ss : [esp+0x88], ebp
        mov dword ptr ss : [esp+0x8C], ebp
        public_6f95635 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        mov dword ptr ss : [esp+0xC4], edi
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebp
        public_6f95655 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f95076
        pop edi
        pop ebp
        pop ebx
        public_6f95668 : nop
        mov ecx, dword ptr ss : [esp+0xAC]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0xB4
        ret 
        UNREACHABLE_TRAP(0x6f95040)
    }
}

#undef public_6f95076
#undef public_6f950f0
#undef public_6f9511b
#undef public_6f95140
#undef public_6f95159
#undef public_6f95164
#undef public_6f95166
#undef public_6f95179
#undef public_6f951ba
#undef public_6f95268
#undef public_6f95274
#undef public_6f95291
#undef public_6f952c5
#undef public_6f952e0
#undef public_6f95308
#undef public_6f95313
#undef public_6f95315
#undef public_6f95340
#undef public_6f9534b
#undef public_6f9534d
#undef public_6f95358
#undef public_6f95370
#undef public_6f95383
#undef public_6f953a9
#undef public_6f953d0
#undef public_6f9540d
#undef public_6f95424
#undef public_6f9544f
#undef public_6f95475
#undef public_6f9549f
#undef public_6f954bd
#undef public_6f954db
#undef public_6f954f9
#undef public_6f95517
#undef public_6f95527
#undef public_6f9553e
#undef public_6f9555f
#undef public_6f95561
#undef public_6f95635
#undef public_6f95655
#undef public_6f95668

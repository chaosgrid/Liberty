#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6f06260);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f37d30);
CLANG_FORWARD_PROC_SYMBOL(public_6f63cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f69a10);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f724f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f725c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f767d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f77b40);
CLANG_FORWARD_PROC_SYMBOL(public_6f77e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafb78);

#define public_6f63d4f _public_6f63d4f
#define public_6f63d59 _public_6f63d59
#define public_6f63d5d _public_6f63d5d
#define public_6f63dd8 _public_6f63dd8
#define public_6f63dee _public_6f63dee
#define public_6f63e00 _public_6f63e00
#define public_6f63e10 _public_6f63e10
#define public_6f63e2d _public_6f63e2d
#define public_6f63e31 _public_6f63e31
#define public_6f63e39 _public_6f63e39
#define public_6f63e40 _public_6f63e40
#define public_6f63e6f _public_6f63e6f
#define public_6f63e82 _public_6f63e82
#define public_6f63ee1 _public_6f63ee1
#define public_6f63ee5 _public_6f63ee5
#define public_6f63f0b _public_6f63f0b
#define public_6f63fb7 _public_6f63fb7
#define public_6f64015 _public_6f64015
#define public_6f64019 _public_6f64019
#define public_6f64082 _public_6f64082
#define public_6f6408b _public_6f6408b
#define public_6f640dc _public_6f640dc
#define public_6f6410b _public_6f6410b
#define public_6f64150 _public_6f64150
#define public_6f64160 _public_6f64160
#define public_6f6416d _public_6f6416d
#define public_6f6417f _public_6f6417f
#define public_6f64190 _public_6f64190
#define public_6f642a6 _public_6f642a6
#define public_6f642d0 _public_6f642d0
#define public_6f6431c _public_6f6431c
#define public_6f64381 _public_6f64381
#define public_6f643eb _public_6f643eb
#define public_6f6440f _public_6f6440f
#define public_6f64435 _public_6f64435
#define public_6f6447c _public_6f6447c
#define public_6f64485 _public_6f64485
#define public_6f644a5 _public_6f644a5
#define public_6f644a6 _public_6f644a6
#define public_6f64526 _public_6f64526
#define public_6f64539 _public_6f64539
#define public_6f64546 _public_6f64546
#define public_6f6455a _public_6f6455a
#define public_6f64561 _public_6f64561
#define public_6f64567 _public_6f64567
#define public_6f64572 _public_6f64572
#define public_6f645b1 _public_6f645b1
#define public_6f645c6 _public_6f645c6
#define public_6f645e0 _public_6f645e0
#define public_6f645f0 _public_6f645f0
#define public_6f6460a _public_6f6460a
#define public_6f64613 _public_6f64613
#define public_6f64660 _public_6f64660
#define public_6f6467e _public_6f6467e
#define public_6f646ec _public_6f646ec
#define public_6f6474e _public_6f6474e
#define public_6f647a5 _public_6f647a5
#define public_6f647be _public_6f647be
#define public_6f647c6 _public_6f647c6
#define public_6f647e1 _public_6f647e1
#define public_6f647ea _public_6f647ea

PROC_DECLARE(0x6f63cc0, internal_6f63cc0, public_6f63cc0);
extern "C" NAKED register_t __cdecl internal_6f63cc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafb78 @0x6f63cc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafb78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x58
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x74]
        push esi
        mov esi, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ds : [esi+0xFC]
        push edi
        cmp dword ptr ds : [eax+8], 4
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [ebp]
        sete cl
        cmp eax, 2
        mov byte ptr ss : [esp+0x80], cl
        jne public_6f63f0b
        mov eax, dword ptr ss : [ebp+0xC]
        xor edx, edx
        test cl, cl
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x7C], edx
        jne public_6f63ee1
        mov edi, dword ptr ss : [ebp+0x28]
        cmp edi, edx
        je public_6f63e82
        mov al, byte ptr ds : [edi+0x40]
        or ebx, 0xFFFFFFFF
        test al, 0x10
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6f63d5d
        cmp dword ptr ss : [ebp+0x34], 1
        jne public_6f63d4f
        mov eax, dword ptr ss : [ebp+0x30]
        mov dword ptr ss : [esp+0x80], eax
        jmp public_6f63d59
        public_6f63d4f : nop
        mov ebx, dword ptr ss : [ebp+0x30]
        mov dword ptr ss : [esp+0x80], edx
        public_6f63d59 : nop
        mov dword ptr ss : [esp+0x18], ebx
        public_6f63d5d : nop
        mov ecx, dword ptr ds : [esi]
        call public_6eb6bb0
        mov ecx, dword ptr ss : [esp+0x80]
/*FIXUP push offset public_6fbbb7c @0x6f63d6b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb7c
        push 0
        push ebx
        push ecx
        push edi
        lea edx, ss:[esp+0x30]
        push edx
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_6fbbb80 @0x6f63d83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        lea ecx, ds:[esi+0x50]
        push ecx
        mov ecx, dword ptr ss : [esp+0x9C]
        call public_6f725c0
        mov dl, byte ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x7C], eax
        xor eax, eax
        mov byte ptr ss : [esp+0x58], dl
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x70], eax
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x80]
        push ecx
        mov ecx, edi
        call public_6f37d30
        mov edx, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x60]
        cmp edx, ecx
        mov edi, edx
        je public_6f63e31
        public_6f63dd8 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, dword ptr ss : [esp+0x80]
        jl public_6f63dee
        cmp eax, dword ptr ss : [esp+0x18]
        jg public_6f63dee
        add edi, 4
        jmp public_6f63e2d
        public_6f63dee : nop
        lea eax, ds:[edi+4]
        cmp eax, ecx
        mov edx, ecx
        je public_6f63e10
        mov ecx, edi
        sub ecx, eax
        nop 
        lea esp, ss:[esp]
        public_6f63e00 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], ebx
        add eax, 4
        cmp eax, edx
        jne public_6f63e00
        mov ecx, dword ptr ss : [esp+0x60]
        public_6f63e10 : nop
        push ecx
        add ecx, 0xFFFFFFFC
        push ecx
        lea ecx, ss:[esp+0x60]
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x5C]
        sub ecx, 4
        mov dword ptr ss : [esp+0x60], ecx
        public_6f63e2d : nop
        cmp edi, ecx
        jne public_6f63dd8
        public_6f63e31 : nop
        test edx, edx
        jne public_6f63e39
        xor edi, edi
        jmp public_6f63e40
        public_6f63e39 : nop
        sub ecx, edx
        sar ecx, 2
        mov edi, ecx
        public_6f63e40 : nop
        call dword ptr ds : [public_6fb3370]
        imul eax, edi
        mov ecx, dword ptr ss : [esp+0x5C]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov edx, dword ptr ds : [ecx+eax*4]
        mov eax, dword ptr ss : [esp+0x7C]
        test eax, eax
        mov dword ptr ss : [ebp+0x2C], edx
        jne public_6f63e6f
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x7C], eax
        public_6f63e6f : nop
        push ecx
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        call public_6fa8fe0
        add esp, 4
        jmp public_6f63ee5
        public_6f63e82 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x80], 0x600D60
        call public_6eb6bb0
        lea ecx, ss:[esp+0x80]
        push ecx
        push 0xBF800000
        lea edx, ss:[esp+0x54]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x8C]
/*FIXUP push offset public_6fbbb80 @0x6f63ebb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        lea edx, ds:[esi+0x50]
        push edx
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        call public_6f724f0
        public_6f63ee1 : nop
        mov dword ptr ss : [esp+0x7C], eax
        public_6f63ee5 : nop
        mov ecx, dword ptr ds : [esi]
        call public_6f33f80
        mov dword ptr ss : [esp+0x78], eax
        lea eax, ss:[esp+0x78]
        push eax
        add esi, 0x50
        push esi
        lea ecx, ss:[esp+0x84]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        jmp public_6f647e1
        public_6f63f0b : nop
        cmp eax, 1
        jne public_6f64435
        mov ebx, dword ptr ss : [esp+0x78]
        xor eax, eax
        mov dword ptr ss : [esp+0x7C], eax
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x1C]
        push eax
        lea edi, ss:[ebp+4]
        push edi
        mov ecx, ebx
        call public_6f77e00
        add ebp, 8
        push ebp
        push edi
        mov ecx, ebx
        call public_6f77b40
        cmp eax, 0xFFFFFFFF
        mov edi, 0x600D60
        je public_6f63fb7
        xor ebp, ebp
        cmp eax, ebp
        je public_6f647ea
        cmp eax, 1
        jne public_6f64015
        mov ecx, dword ptr ss : [esp+0x1C]
        add ecx, 0x1C
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x34], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x38], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x78], edi
        call public_6eb6bb0
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x78]
        push edx
        push 0x469C4000
        add eax, 0x10
        push eax
/*FIXUP push offset public_6fbbb70 @0x6f63f97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb70
        lea ecx, ss:[esp+0x34]
        push ecx
/*FIXUP push offset public_6fbbb80 @0x6f63fa1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        lea edx, ds:[esi+0x50]
        push edx
        mov ecx, ebx
        call public_6f724f0
        mov dword ptr ss : [esp+0x7C], eax
        jmp public_6f64019
        public_6f63fb7 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add eax, 0x10
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x38], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x28], edi
        call public_6eb6bb0
        mov edx, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x28]
        push ecx
        push 0x469C4000
        add edx, 0x1C
        push edx
/*FIXUP push offset public_6fbbb70 @0x6f63fef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb70
        mov dword ptr ss : [esp+0x3C], eax
        lea eax, ss:[esp+0x3C]
        push eax
/*FIXUP push offset public_6fbbb80 @0x6f63ffd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        lea ecx, ds:[esi+0x50]
        push ecx
        mov ecx, ebx
        call public_6f724f0
        mov dword ptr ss : [esp+0x7C], eax
        xor ebp, ebp
        jmp public_6f64019
        public_6f64015 : nop
        mov eax, dword ptr ss : [esp+0x7C]
        public_6f64019 : nop
        mov cl, byte ptr ss : [esp+0x80]
        test cl, cl
        je public_6f6408b
        cmp eax, ebp
        jne public_6f64082
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x78], edi
        call public_6eb6bb0
        lea edx, ss:[esp+0x78]
        push edx
        push 0xBF800000
        mov dword ptr ss : [esp+0x88], eax
        lea eax, ss:[esp+0x54]
        push eax
/*FIXUP push offset public_6fbbb70 @0x6f64049*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb70
        lea ecx, ss:[esp+0x90]
        push ecx
/*FIXUP push offset public_6fbbb80 @0x6f64056*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        lea edx, ds:[esi+0x50]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        call public_6f724f0
        mov dword ptr ss : [esp+0x7C], eax
        public_6f64082 : nop
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6f6440f
        public_6f6408b : nop
        mov al, byte ptr ss : [esp+0x78]
        mov byte ptr ss : [esp+0x58], al
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x60], ebp
        mov dword ptr ss : [esp+0x64], ebp
        lea ecx, ss:[esp+0x58]
        push ecx
        push 0x469C4000
        lea edx, ss:[esp+0x3C]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x7C], 1
        call public_6f767d0
        mov ecx, dword ptr ss : [esp+0x5C]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x78], 0
        je public_6f640dc
        mov eax, dword ptr ss : [esp+0x60]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jne public_6f640dc
        mov byte ptr ss : [esp+0x78], al
        public_6f640dc : nop
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x80], eax
        fild dword ptr ss : [esp+0x80]
        fmul dword ptr ds : [public_6fb4448]
        fcomp dword ptr ds : [public_6fb605c]
        fnstsw ax
        test ah, 5
        jnp public_6f6410b
        mov al, byte ptr ss : [esp+0x78]
        test al, al
        je public_6f64150
        public_6f6410b : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x78], edi
        call public_6eb6bb0
        mov dword ptr ss : [esp+0x80], eax
        lea eax, ss:[esp+0x78]
        push eax
        push 0x469C4000
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x88]
        push edx
        lea eax, ss:[esp+0x90]
        push eax
/*FIXUP push offset public_6fbbb80 @0x6f6413c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        lea ecx, ds:[esi+0x50]
        push ecx
        mov ecx, ebx
        call public_6f724f0
        mov dword ptr ss : [esp+0x14], eax
        public_6f64150 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov edi, dword ptr ss : [esp+0x60]
        cmp eax, edi
        je public_6f6417f
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6f64160 : nop
        cmp dword ptr ds : [eax], ecx
        je public_6f6416d
        add eax, 4
        cmp eax, edi
        jne public_6f64160
        jmp public_6f6417f
        public_6f6416d : nop
        cmp eax, edi
        je public_6f6417f
        push eax
        lea ecx, ss:[esp+0x5C]
        call public_6f69a10
        mov edi, dword ptr ss : [esp+0x60]
        public_6f6417f : nop
        cmp dword ptr ss : [esp+0x14], ebp
        jne public_6f64381
        lea esp, ss:[esp]
        public_6f64190 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, eax
        je public_6f6431c
        sub edi, eax
        sar edi, 2
        test edi, edi
        je public_6f6431c
        call dword ptr ds : [public_6fb3370]
        imul eax, edi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov edx, dword ptr ss : [esp+0x5C]
        sar eax, 0xF
        mov ebp, dword ptr ds : [edx+eax*4]
        lea eax, ds:[edx+eax*4]
        lea edi, ss:[ebp+0x10]
        sub esp, 0xC
        lea ecx, ss:[esp+0x4C]
        fld dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x34], eax
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi]
        fsub dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [ebp+0x24]
        add ebp, 0x1C
        fsub dword ptr ss : [esp+0x3C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp]
        fsub dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [esi]
        fmul dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x78], 0x600D60
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x50]
        faddp 
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6f642a6
        call public_6eb6bb0
        mov dword ptr ss : [esp+0x80], eax
        lea eax, ss:[esp+0x78]
        push eax
        push 0x469C4000
        push ebp
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x90]
        push edx
/*FIXUP push offset public_6fbbb80 @0x6f6429b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        lea eax, ds:[esi+0x50]
        push eax
        jmp public_6f642d0
        public_6f642a6 : nop
        call public_6eb6bb0
        lea ecx, ss:[esp+0x78]
        push ecx
        push 0x469C4000
        push edi
        lea edx, ss:[esp+0x88]
        push edx
        mov dword ptr ss : [esp+0x3C], eax
        lea eax, ss:[esp+0x3C]
        push eax
/*FIXUP push offset public_6fbbb80 @0x6f642c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        lea ecx, ds:[esi+0x50]
        push ecx
        public_6f642d0 : nop
        mov ecx, ebx
        call public_6f724f0
        mov edx, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push edx
        add eax, 4
        push eax
        call public_6f6a640
        mov eax, dword ptr ss : [esp+0x6C]
        add esp, 0xC
        push eax
        add eax, 0xFFFFFFFC
        push eax
        lea ecx, ss:[esp+0x60]
        call public_6ea1490
        mov edi, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x14]
        sub edi, 4
        test eax, eax
        mov dword ptr ss : [esp+0x60], edi
        je public_6f64190
        jmp public_6f64381
        public_6f6431c : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x78], 0x600D60
        call public_6eb6bb0
        mov dword ptr ss : [esp+0x80], eax
        lea eax, ss:[esp+0x78]
        push eax
        push 0xBF800000
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x88]
        push edx
        lea eax, ss:[esp+0x90]
        push eax
/*FIXUP push offset public_6fbbb80 @0x6f64351*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        lea ecx, ds:[esi+0x50]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        call public_6f724f0
        mov edi, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x14], eax
        public_6f64381 : nop
        mov eax, dword ptr ss : [esp+0x7C]
        test eax, eax
        jne public_6f643eb
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x78], 0x600D60
        call public_6eb6bb0
        lea edx, ss:[esp+0x78]
        push edx
        push 0xBF800000
        mov dword ptr ss : [esp+0x88], eax
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x90]
        push edx
/*FIXUP push offset public_6fbbb80 @0x6f643bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        lea eax, ds:[esi+0x50]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        call public_6f724f0
        mov edi, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x7C], eax
        public_6f643eb : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        push edi
        push ecx
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        call public_6fa8fe0
        add esp, 4
        public_6f6440f : nop
        mov ecx, dword ptr ds : [esi]
        call public_6f33f80
        mov dword ptr ss : [esp+0x78], eax
        lea eax, ss:[esp+0x78]
        push eax
        add esi, 0x50
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x88]
        push edx
        jmp public_6f647e1
        public_6f64435 : nop
        mov edi, dword ptr ss : [ebp+0x28]
        xor edx, edx
        cmp edi, edx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x18], edx
        je public_6f6467e
        mov eax, dword ptr ds : [edi+0x40]
        test al, 0x10
        je public_6f64485
        cmp dword ptr ss : [ebp+0x34], 1
        jne public_6f6447c
        mov eax, dword ptr ss : [ebp+0x30]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, edx
        je public_6f644a5
        mov ecx, dword ptr ds : [edi+0x1C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        jmp public_6f644a5
        public_6f6447c : nop
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ss : [ebp+0x30]
        jmp public_6f644a6
        public_6f64485 : nop
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, edx
        mov dword ptr ss : [esp+0x1C], edx
        je public_6f644a5
        mov ecx, dword ptr ds : [edi+0x1C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f644a5 : nop
        dec edx
        public_6f644a6 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], edx
        call public_6eb6bb0
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
/*FIXUP push offset public_6fbbb7c @0x6f644b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb7c
        xor ebx, ebx
        push ebx
        push ecx
        push edx
        push edi
/*FIXUP push offset public_6fbbb70 @0x6f644c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb70
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x48], eax
        lea eax, ds:[esi+0x50]
/*FIXUP push offset public_6fbbb80 @0x6f644dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        push eax
        call public_6f725c0
        mov dl, byte ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x58], dl
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], ebx
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x78], 2
        call public_6f37d30
        mov ebp, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x60]
        cmp ebp, ecx
        mov edx, ebp
        je public_6f64567
        public_6f64526 : nop
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ss : [esp+0x1C]
        jl public_6f64539
        cmp eax, dword ptr ss : [esp+0x14]
        jg public_6f64539
        add edx, 4
        jmp public_6f64561
        public_6f64539 : nop
        lea eax, ds:[edx+4]
        cmp eax, ecx
        mov ebx, ecx
        je public_6f6455a
        mov ecx, edx
        sub ecx, eax
        public_6f64546 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], ebp
        add eax, 4
        cmp eax, ebx
        jne public_6f64546
        mov ecx, dword ptr ss : [esp+0x60]
        mov ebp, dword ptr ss : [esp+0x5C]
        public_6f6455a : nop
        sub ecx, 4
        mov dword ptr ss : [esp+0x60], ecx
        public_6f64561 : nop
        cmp edx, ecx
        jne public_6f64526
        xor ebx, ebx
        public_6f64567 : nop
        cmp ebp, ebx
        je public_6f64572
        sub ecx, ebp
        sar ecx, 2
        mov ebx, ecx
        public_6f64572 : nop
        call dword ptr ds : [public_6fb3370]
        imul eax, ebx
        mov ecx, dword ptr ss : [esp+0x7C]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov edx, dword ptr ss : [esp+0x5C]
        sar eax, 0xF
        mov eax, dword ptr ds : [edx+eax*4]
        mov dword ptr ds : [ecx+0x2C], eax
        mov dl, byte ptr ds : [edi+0x3C]
        test dl, dl
        jne public_6f6460a
        test byte ptr ds : [edi+0x40], 0x10
        je public_6f645e0
        cmp dword ptr ds : [ecx+0x34], 1
        jne public_6f645b1
        mov eax, ecx
        mov ebx, dword ptr ds : [eax+0x30]
        xor ebp, ebp
        jmp public_6f64613
        public_6f645b1 : nop
        mov eax, dword ptr ds : [edi+0x18]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x7C]
        mov ebp, dword ptr ds : [ecx+0x30]
        jne public_6f645c6
        xor edx, edx
        lea ebx, ds:[edx-1]
        jmp public_6f64613
        public_6f645c6 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        lea ebx, ds:[edx-1]
        jmp public_6f64613
        public_6f645e0 : nop
        mov eax, dword ptr ds : [edi+0x18]
        xor ebp, ebp
        test eax, eax
        jne public_6f645f0
        xor edx, edx
        lea ebx, ds:[edx-1]
        jmp public_6f64613
        public_6f645f0 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        lea ebx, ds:[edx-1]
        jmp public_6f64613
        public_6f6460a : nop
        mov edx, dword ptr ss : [esp+0x7C]
        mov ebp, dword ptr ds : [edx+0x30]
        mov ebx, eax
        public_6f64613 : nop
        mov ecx, dword ptr ds : [esi]
        call public_6eb6bb0
/*FIXUP push offset public_6fbbb7c @0x6f6461a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb7c
        push 0x459C4000
        push ebx
        push ebp
        push edi
        mov dword ptr ss : [esp+0x90], eax
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x94]
        push ecx
        mov ecx, dword ptr ss : [esp+0x94]
/*FIXUP push offset public_6fbbb80 @0x6f64642*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        lea edi, ds:[esi+0x50]
        push edi
        call public_6f725c0
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_6f64660
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], edx
        public_6f64660 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        push eax
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 4
        jmp public_6f647a5
        public_6f6467e : nop
        call dword ptr ds : [public_6fb3370]
        mov ebx, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x7C], eax
        fild dword ptr ss : [esp+0x7C]
        mov edi, 0x600D60
        fmul dword ptr ds : [public_6fb4448]
        fcomp dword ptr ds : [public_6fb605c]
        fnstsw ax
        test ah, 5
        jp public_6f646ec
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x78], edi
        call public_6eb6bb0
        lea ecx, ss:[esp+0x78]
        push ecx
        push 0x469C4000
        lea edx, ds:[esi+0xB4]
        push edx
/*FIXUP push offset public_6fbbb70 @0x6f646c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb70
        mov dword ptr ss : [esp+0x8C], eax
        lea eax, ss:[esp+0x8C]
        push eax
/*FIXUP push offset public_6fbbb80 @0x6f646d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        lea ecx, ds:[esi+0x50]
        push ecx
        mov ecx, ebx
        call public_6f724f0
        mov dword ptr ss : [esp+0x10], eax
        public_6f646ec : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6f6474e
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x78], edi
        call public_6eb6bb0
        lea edx, ss:[esp+0x78]
        push edx
        push 0xBF800000
        mov dword ptr ss : [esp+0x84], eax
        lea eax, ss:[esp+0x54]
        push eax
/*FIXUP push offset public_6fbbb70 @0x6f64715*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb70
        lea ecx, ss:[esp+0x8C]
        push ecx
/*FIXUP push offset public_6fbbb80 @0x6f64722*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        lea edx, ds:[esi+0x50]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        call public_6f724f0
        mov dword ptr ss : [esp+0x10], eax
        public_6f6474e : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x78], edi
        call public_6eb6bb0
        mov dword ptr ss : [esp+0x7C], eax
        lea eax, ss:[esp+0x78]
        push eax
        push 0xBF800000
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x8C]
        push eax
/*FIXUP push offset public_6fbbb80 @0x6f64779*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbb80
        lea edi, ds:[esi+0x50]
        push edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        call public_6f724f0
        mov dword ptr ss : [esp+0x18], eax
        public_6f647a5 : nop
        mov cl, byte ptr ss : [esp+0x80]
        test cl, cl
        je public_6f647c6
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        jne public_6f647be
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_6f647c6
        public_6f647be : nop
        test ecx, ecx
        jne public_6f647c6
        mov dword ptr ss : [esp+0x10], eax
        public_6f647c6 : nop
        mov ecx, dword ptr ds : [esi]
        call public_6f33f80
        lea edx, ss:[esp+0x30]
        push edx
        mov dword ptr ss : [esp+0x34], eax
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        public_6f647e1 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        call public_6f06260
        public_6f647ea : nop
        mov ecx, dword ptr ss : [esp+0x68]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x64
        ret 
        UNREACHABLE_TRAP(0x6f63cc0)
    }
}

#undef public_6f63d4f
#undef public_6f63d59
#undef public_6f63d5d
#undef public_6f63dd8
#undef public_6f63dee
#undef public_6f63e00
#undef public_6f63e10
#undef public_6f63e2d
#undef public_6f63e31
#undef public_6f63e39
#undef public_6f63e40
#undef public_6f63e6f
#undef public_6f63e82
#undef public_6f63ee1
#undef public_6f63ee5
#undef public_6f63f0b
#undef public_6f63fb7
#undef public_6f64015
#undef public_6f64019
#undef public_6f64082
#undef public_6f6408b
#undef public_6f640dc
#undef public_6f6410b
#undef public_6f64150
#undef public_6f64160
#undef public_6f6416d
#undef public_6f6417f
#undef public_6f64190
#undef public_6f642a6
#undef public_6f642d0
#undef public_6f6431c
#undef public_6f64381
#undef public_6f643eb
#undef public_6f6440f
#undef public_6f64435
#undef public_6f6447c
#undef public_6f64485
#undef public_6f644a5
#undef public_6f644a6
#undef public_6f64526
#undef public_6f64539
#undef public_6f64546
#undef public_6f6455a
#undef public_6f64561
#undef public_6f64567
#undef public_6f64572
#undef public_6f645b1
#undef public_6f645c6
#undef public_6f645e0
#undef public_6f645f0
#undef public_6f6460a
#undef public_6f64613
#undef public_6f64660
#undef public_6f6467e
#undef public_6f646ec
#undef public_6f6474e
#undef public_6f647a5
#undef public_6f647be
#undef public_6f647c6
#undef public_6f647e1
#undef public_6f647ea

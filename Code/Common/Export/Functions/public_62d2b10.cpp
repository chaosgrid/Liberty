#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ac230);
CLANG_FORWARD_PROC_SYMBOL(public_62d2b10);
CLANG_FORWARD_PROC_SYMBOL(public_62d3420);
CLANG_FORWARD_PROC_SYMBOL(public_62d3690);
CLANG_FORWARD_PROC_SYMBOL(public_62d4450);
CLANG_FORWARD_PROC_SYMBOL(public_62dd760);
CLANG_FORWARD_PROC_SYMBOL(public_62e4500);
CLANG_FORWARD_PROC_SYMBOL(public_62e5190);
CLANG_FORWARD_PROC_SYMBOL(public_62e66c0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8830);
CLANG_FORWARD_PROC_SYMBOL(public_62e8870);
CLANG_FORWARD_PROC_SYMBOL(public_62e9c50);
CLANG_FORWARD_PROC_SYMBOL(public_62ea050);
CLANG_FORWARD_PROC_SYMBOL(public_62eb670);
CLANG_FORWARD_PROC_SYMBOL(public_62ec6b0);
CLANG_FORWARD_PROC_SYMBOL(public_62ecaf0);
CLANG_FORWARD_PROC_SYMBOL(public_62ed5a0);
CLANG_FORWARD_PROC_SYMBOL(public_62ed5e0);
CLANG_FORWARD_PROC_SYMBOL(public_62ed780);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);
CLANG_FORWARD_PROC_SYMBOL(public_6391fbc);
CLANG_FORWARD_JUMP_SYMBOL(public_6395128);

#define public_62d2b89 _public_62d2b89
#define public_62d2c0d _public_62d2c0d
#define public_62d2ccd _public_62d2ccd
#define public_62d2cd7 _public_62d2cd7
#define public_62d2cfc _public_62d2cfc
#define public_62d2d16 _public_62d2d16
#define public_62d2d18 _public_62d2d18
#define public_62d2d60 _public_62d2d60
#define public_62d2d86 _public_62d2d86
#define public_62d2d94 _public_62d2d94
#define public_62d2dab _public_62d2dab
#define public_62d2dc3 _public_62d2dc3
#define public_62d2e2a _public_62d2e2a
#define public_62d2e44 _public_62d2e44
#define public_62d2e5f _public_62d2e5f
#define public_62d2e9b _public_62d2e9b
#define public_62d2ee1 _public_62d2ee1
#define public_62d2ef9 _public_62d2ef9
#define public_62d2f04 _public_62d2f04
#define public_62d2f17 _public_62d2f17
#define public_62d2f1c _public_62d2f1c
#define public_62d2f25 _public_62d2f25
#define public_62d2f4a _public_62d2f4a
#define public_62d2f67 _public_62d2f67
#define public_62d2f76 _public_62d2f76
#define public_62d2f78 _public_62d2f78
#define public_62d2f92 _public_62d2f92
#define public_62d2fa3 _public_62d2fa3
#define public_62d2ff8 _public_62d2ff8
#define public_62d2fff _public_62d2fff
#define public_62d3026 _public_62d3026
#define public_62d3092 _public_62d3092
#define public_62d30ab _public_62d30ab
#define public_62d30af _public_62d30af
#define public_62d30e1 _public_62d30e1
#define public_62d30e3 _public_62d30e3
#define public_62d3124 _public_62d3124
#define public_62d3138 _public_62d3138
#define public_62d314c _public_62d314c
#define public_62d3170 _public_62d3170
#define public_62d31a7 _public_62d31a7
#define public_62d31da _public_62d31da
#define public_62d31e2 _public_62d31e2
#define public_62d31e6 _public_62d31e6
#define public_62d320b _public_62d320b
#define public_62d3210 _public_62d3210
#define public_62d3212 _public_62d3212
#define public_62d325a _public_62d325a
#define public_62d3276 _public_62d3276
#define public_62d3293 _public_62d3293
#define public_62d32ad _public_62d32ad
#define public_62d32af _public_62d32af
#define public_62d32e0 _public_62d32e0
#define public_62d32f4 _public_62d32f4
#define public_62d3300 _public_62d3300
#define public_62d3306 _public_62d3306
#define public_62d331a _public_62d331a
#define public_62d331f _public_62d331f
#define public_62d3324 _public_62d3324
#define public_62d332b _public_62d332b
#define public_62d335d _public_62d335d
#define public_62d337e _public_62d337e
#define public_62d339d _public_62d339d
#define public_62d33c4 _public_62d33c4
#define public_62d33dc _public_62d33dc
#define public_62d33e2 _public_62d33e2
#define public_62d33ec _public_62d33ec
#define public_62d33f4 _public_62d33f4

PROC_DECLARE(0x62d2b10, internal_62d2b10, public_62d2b10);
extern "C" NAKED register_t __cdecl internal_62d2b10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6395128 @0x62d2b18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395128
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x170]
        test al, al
        push edi
        jne public_62d33f4
        mov eax, dword ptr ds : [esi+0xF0]
        test eax, eax
        je public_62d33f4
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62d33f4
        mov edi, dword ptr ds : [esi+8]
        add edi, 0x34
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov byte ptr ds : [edi+0x1D], 1
        mov ebp, dword ptr ss : [esp+0x34]
        push ebp
        mov dword ptr ss : [esp+0x30], 0
        call public_62d4450
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_62d2b89
        mov byte ptr ds : [edi+0x1D], 0
        jmp public_62d33f4
        public_62d2b89 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ebp
        call public_62e66c0
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x1364
        call public_62ec6b0
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        mov byte ptr ss : [esp+0x13], al
        test byte ptr ds : [esi+0x1C8], 1
        je public_62d2cd7
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [esi+0xE0]
        fst dword ptr ss : [esp+0x18]
        fst dword ptr ds : [esi+0xE0]
        fcomp dword ptr ds : [esi+0xE4]
        fnstsw ax
        test ah, 0x41
        jne public_62d2c0d
        fld dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0xE4]
        call public_6391fbc
        fstp dword ptr ds : [esi+0xE0]
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x142C
        call public_62ed780
        public_62d2c0d : nop
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x142C
        call public_62ed5a0
        mov edi, eax
        test edi, edi
        je public_62d2cd7
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x142C
        call public_62ed5e0
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x12C
        push eax
        push ebp
        push edi
        call public_62eb670
        mov eax, dword ptr ds : [esi+0x110]
        test eax, eax
        je public_62d2ccd
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62d2ccd
        mov eax, dword ptr ds : [esi+8]
        push 0xBF333333
        add eax, 0x14FC
        push edi
        push eax
        call public_62e5190
        add esp, 0xC
        test al, al
        je public_62d2ccd
        mov ecx, dword ptr ds : [public_63a034c]
        mov edx, dword ptr ds : [esi+8]
        push ecx
        add edx, 0x14FC
        push edi
        push edx
        call public_62e4500
        add esp, 0xC
        test al, al
        je public_62d2ccd
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        cmp dword ptr ds : [esi+0xE8], eax
        je public_62d2cd7
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+0x110]
        mov dword ptr ds : [esi+0xE8], eax
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xC]
        jmp public_62d2cd7
        public_62d2ccd : nop
        mov dword ptr ds : [esi+0xE8], 0
        public_62d2cd7 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_62d2cfc
        mov ecx, dword ptr ds : [esi+8]
        push ebp
        add ecx, 0x12C
        call public_62e9c50
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x12C
        call public_62ea050
        public_62d2cfc : nop
        mov ecx, dword ptr ds : [esi+0xC]
        push ebp
        call public_62dd760
        mov eax, dword ptr ds : [esi+0xF0]
        xor ebp, ebp
        cmp eax, ebp
        je public_62d2d16
        lea ecx, ds:[eax-8]
        jmp public_62d2d18
        public_62d2d16 : nop
        xor ecx, ecx
        public_62d2d18 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        je public_62d2d60
        fld dword ptr ds : [esi+0x12C]
        lea ecx, ds:[esi+0x124]
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
        test ah, 0x44
        fstp st(0)
        jnp public_62d2d60
        push ecx
        mov ecx, esi
        call public_62d3690
        public_62d2d60 : nop
        mov ecx, dword ptr ds : [esi+0x110]
        cmp ecx, ebp
        mov edx, 2
        je public_62d2dc3
        mov edi, dword ptr ds : [esi+8]
        cmp dword ptr ds : [edi+0x1434], edx
        mov al, 1
        mov byte ptr ss : [esp+0x14], al
        je public_62d2d86
        xor al, al
        mov byte ptr ss : [esp+0x14], al
        public_62d2d86 : nop
        cmp dword ptr ds : [esi+0xC0], edx
        je public_62d2d94
        xor al, al
        mov byte ptr ss : [esp+0x14], al
        public_62d2d94 : nop
        cmp dword ptr ds : [esi+0xC4], ebp
        je public_62d2dab
        cmp dword ptr ds : [esi+0xC8], 1
        je public_62d2dab
        xor al, al
        mov byte ptr ss : [esp+0x14], al
        public_62d2dab : nop
        cmp al, byte ptr ds : [esi+0xF8]
        je public_62d2dc3
        mov byte ptr ds : [esi+0xF8], al
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x18]
        public_62d2dc3 : nop
        fld dword ptr ss : [esp+0x34]
        xor cl, cl
        fadd dword ptr ds : [esi+0xD0]
        mov byte ptr ss : [esp+0x13], 0
        fst dword ptr ss : [esp+0x18]
        fst dword ptr ds : [esi+0xD0]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [esi+0xD4]
        fstp dword ptr ds : [esi+0xD4]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [esi+0xDC]
        fst dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0xDC]
        fcomp dword ptr ds : [public_63a0340]
        fnstsw ax
        test ah, 1
        jne public_62d2e2a
        fld dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_63a0340]
        call public_6391fbc
        fstp dword ptr ds : [esi+0xD0]
        mov cl, 1
        mov byte ptr ss : [esp+0x13], cl
        public_62d2e2a : nop
        cmp dword ptr ds : [esi+0xC4], ebp
        mov byte ptr ss : [esp+0x34], 0
        je public_62d2e44
        cmp dword ptr ds : [esi+0xC8], ebp
        jne public_62d2e44
        mov byte ptr ss : [esp+0x34], 1
        public_62d2e44 : nop
        mov eax, dword ptr ds : [esi+0xC0]
        xor bl, bl
        cmp eax, 6
        jne public_62d2e5f
        mov cl, 1
        mov dword ptr ds : [esi+0xD0], ebp
        mov byte ptr ss : [esp+0x13], cl
        mov bl, cl
        public_62d2e5f : nop
        cmp eax, 0xFFFFFFFF
        je public_62d33ec
        mov edi, dword ptr ds : [esi+eax*4+0x174]
        cmp edi, ebp
        je public_62d33ec
        test cl, cl
        je public_62d2f04
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x14]
        test bl, bl
        jne public_62d2e9b
        mov cl, byte ptr ss : [esp+0x34]
        test cl, cl
        je public_62d2e9b
        mov byte ptr ss : [esp+0x13], bl
        public_62d2e9b : nop
        cmp eax, 4
        jne public_62d2f04
        mov eax, dword ptr ds : [esi+0xC0]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x118], 2
        mov dword ptr ds : [esi+0x11C], eax
        je public_62d33e2
        mov ecx, dword ptr ds : [esi+0x120]
        push ebp
        push 1
        push ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0xC4], ebp
        call public_62d3420
        lea edi, ds:[esi+0xFC]
        mov ebx, 5
        public_62d2ee1 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebp
        je public_62d2ef9
        mov eax, dword ptr ds : [esi+0x118]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [esi+0x11C]
        push eax
        call dword ptr ds : [edx]
        public_62d2ef9 : nop
        add edi, 4
        dec ebx
        jne public_62d2ee1
        jmp public_62d33e2
        public_62d2f04 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x24]
        mov ebx, eax
        cmp ebx, 2
        je public_62d2f17
        cmp ebx, 3
        jne public_62d2f1c
        public_62d2f17 : nop
        mov byte ptr ss : [esp+0x13], 1
        public_62d2f1c : nop
        cmp ebx, ebp
        jne public_62d2f25
        mov byte ptr ss : [esp+0x13], 0
        public_62d2f25 : nop
        mov al, byte ptr ss : [esp+0x34]
        test al, al
        jne public_62d2f67
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x34
        call public_62e8830
        test al, al
        je public_62d2f4a
        cmp dword ptr ds : [esi+0xC0], 0xF
        je public_62d2f4a
        mov byte ptr ss : [esp+0x13], 1
        public_62d2f4a : nop
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x34
        call public_62e8870
        test al, al
        je public_62d2f67
        cmp dword ptr ds : [esi+0xC0], 5
        je public_62d2f67
        mov byte ptr ss : [esp+0x13], 1
        public_62d2f67 : nop
        mov eax, dword ptr ds : [esi+0xF0]
        cmp eax, ebp
        je public_62d2f76
        lea ecx, ds:[eax-8]
        jmp public_62d2f78
        public_62d2f76 : nop
        xor ecx, ecx
        public_62d2f78 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        je public_62d3138
        cmp ebx, 2
        je public_62d2f92
        cmp ebx, 3
        jne public_62d2fa3
        public_62d2f92 : nop
        mov ecx, dword ptr ds : [esi+0x120]
        push ebp
        push 1
        push ecx
        mov ecx, esi
        call public_62d3420
        public_62d2fa3 : nop
        mov byte ptr ds : [esi+0x168], 1
        mov byte ptr ds : [esi+0x169], 0
        mov dword ptr ds : [esi+0x16C], ebp
        mov eax, dword ptr ds : [esi+0xC0]
        cmp eax, 0xFFFFFFFF
        mov byte ptr ss : [esp+0x13], 0
        je public_62d3138
        cmp eax, 0x13
        je public_62d3138
        mov edi, dword ptr ds : [esi+eax*4+0x174]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x2C]
        xor ebp, ebp
        cmp ebx, ebp
        mov byte ptr ds : [esi+0x168], al
        je public_62d2ff8
        mov al, byte ptr ds : [esi+0xBC]
        test al, al
        je public_62d2fff
        public_62d2ff8 : nop
        mov byte ptr ds : [esi+0x169], 1
        public_62d2fff : nop
        mov eax, dword ptr ds : [esi+0xC0]
        xor bl, bl
        cmp eax, 7
        mov dword ptr ds : [esi+0x16C], ebp
        mov dword ptr ss : [esp+0x34], ebp
        jne public_62d3026
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x68]
        mov dword ptr ss : [esp+0x34], eax
        jmp public_62d30af
        public_62d3026 : nop
        cmp eax, 0xA
        jne public_62d3138
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x1364
        mov bl, 1
        call public_62ecaf0
        mov edi, eax
        cmp edi, ebp
        je public_62d30ab
        call public_6303220
        test al, al
        mov ecx, edi
        je public_62d3092
        mov edx, dword ptr ds : [edi]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62d30ab
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62d30ab
        mov ecx, eax
        call public_62ac230
        test eax, eax
        je public_62d30ab
        cmp dword ptr ds : [eax+0xC0], 7
        jne public_62d30ab
        mov ecx, dword ptr ds : [eax+0x190]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x68]
        mov dword ptr ss : [esp+0x34], eax
        jmp public_62d30af
        public_62d3092 : nop
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x148]
        cmp eax, 7
        jne public_62d30ab
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x74]
        public_62d30ab : nop
        mov eax, dword ptr ss : [esp+0x34]
        public_62d30af : nop
        test eax, eax
        je public_62d3138
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x88]
        test bl, bl
        je public_62d3124
        mov eax, dword ptr ds : [esi+0xF0]
        test eax, eax
        je public_62d30e1
        lea ecx, ds:[eax-8]
        jmp public_62d30e3
        public_62d30e1 : nop
        xor ecx, ecx
        public_62d30e3 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_63a03ec]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_62d3138
        public_62d3124 : nop
        test byte ptr ss : [esp+0x18], 0x80
        mov ecx, 0
        setne cl
        inc ecx
        mov dword ptr ds : [esi+0x16C], ecx
        public_62d3138 : nop
        mov al, byte ptr ds : [esi+0xBC]
        test al, al
        je public_62d314c
        mov byte ptr ss : [esp+0x13], 0
        jmp public_62d332b
        public_62d314c : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_62d332b
        lea ebx, ds:[esi+0x10]
        lea edx, ds:[esi+0x174]
        mov ebp, ebx
        mov byte ptr ss : [esp+0x34], 0
        xor edi, edi
        mov dword ptr ss : [esp+0x18], edx
        mov edi, edi
        public_62d3170 : nop
        mov edx, dword ptr ds : [esi+0xC0]
        mov eax, dword ptr ss : [esp+0x18]
        imul edx, 0x15
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+4]
        add edx, edi
        fld dword ptr ds : [eax+edx*4+0x48]
        mov eax, dword ptr ds : [esi+0xC4]
        cmp eax, 1
        fstp dword ptr ss : [esp+0x14]
        jne public_62d31a7
        cmp dword ptr ds : [esi+0xCC], edi
        jne public_62d31a7
        mov dword ptr ss : [esp+0x14], 0x3A83126F
        public_62d31a7 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x44
        jnp public_62d3212
        mov eax, dword ptr ds : [esi+0xDC]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_62d31da
        cmp eax, 1
        jle public_62d31e2
        cmp eax, 4
        jg public_62d31e2
        fld dword ptr ds : [public_6399408]
        jmp public_62d31e6
        public_62d31da : nop
        fld dword ptr ds : [public_639a1d0]
        jmp public_62d31e6
        public_62d31e2 : nop
        fld dword ptr ss : [esp+0x14]
        public_62d31e6 : nop
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_62d3210
        fst dword ptr ss : [ebp]
        mov dword ptr ss : [ebp+4], edi
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x44
        jp public_62d320b
        mov byte ptr ss : [esp+0x34], 1
        public_62d320b : nop
        add ebp, 8
        jmp public_62d3212
        public_62d3210 : nop
        fstp st(0)
        public_62d3212 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        inc edi
        add ecx, 4
        cmp edi, 0x15
        mov dword ptr ss : [esp+0x18], ecx
        jl public_62d3170
        sub ebp, esi
        sub ebp, 0x10
        sar ebp, 3
        xor eax, eax
        cmp ebp, eax
        jne public_62d3276
        cmp dword ptr ds : [esi+0xC4], 1
        jne public_62d325a
        mov ecx, dword ptr ds : [esi+0xCC]
        mov dword ptr ds : [esi+0x118], 2
        mov dword ptr ds : [esi+0x11C], ecx
        mov dword ptr ds : [esi+0xC4], eax
        public_62d325a : nop
        mov eax, dword ptr ds : [esi+0x120]
        cmp dword ptr ds : [esi+0xC0], eax
        je public_62d332b
        push 0
        push 0
        push eax
        jmp public_62d3324
        public_62d3276 : nop
        mov cl, byte ptr ss : [esp+0x34]
        or edx, 0xFFFFFFFF
        test cl, cl
        jne public_62d3300
        cmp ebp, eax
        fld dword ptr ds : [public_6399408]
        fst dword ptr ss : [esp+0x34]
        jle public_62d32ad
        public_62d3293 : nop
        fld dword ptr ds : [ebx+eax*8]
        inc eax
        cmp eax, ebp
        fld st(1)
        fadd dword ptr ds : [ebx+eax*8-8]
        fstp dword ptr ds : [ebx+eax*8-8]
        faddp 
        jl public_62d3293
        fstp dword ptr ss : [esp+0x34]
        jmp public_62d32af
        public_62d32ad : nop
        fstp st(0)
        public_62d32af : nop
        call dword ptr ds : [public_6399308]
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        xor ecx, ecx
        fmul dword ptr ds : [public_63997d0]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [public_639b984]
        fmulp 
        fadd qword ptr ds : [public_639c3f0]
        fstp dword ptr ss : [esp+0x34]
        nop 
        lea esp, ss:[esp]
        public_62d32e0 : nop
        fld dword ptr ds : [ebx+ecx*8]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        test ah, 0x41
        je public_62d32f4
        inc ecx
        cmp ecx, 0x15
        jl public_62d32e0
        public_62d32f4 : nop
        mov edx, dword ptr ds : [ebx+ecx*8+4]
        cmp edx, 0xFFFFFFFF
        jne public_62d331f
        int 3
        jmp public_62d331f
        public_62d3300 : nop
        xor ecx, ecx
        test ebp, ebp
        jle public_62d331f
        public_62d3306 : nop
        fld dword ptr ds : [ebx+ecx*8]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x44
        jp public_62d331a
        mov edx, dword ptr ds : [ebx+ecx*8+4]
        public_62d331a : nop
        inc ecx
        cmp ecx, ebp
        jl public_62d3306
        public_62d331f : nop
        push 0
        push 0
        push edx
        public_62d3324 : nop
        mov ecx, esi
        call public_62d3420
        public_62d332b : nop
        fld dword ptr ds : [esi+0xD4]
        mov edx, dword ptr ds : [esi+0xC0]
        fcomp dword ptr ds : [public_63a0344]
        mov edi, dword ptr ds : [esi+edx*4+0x174]
        fnstsw ax
        test ah, 1
        je public_62d335d
        mov al, byte ptr ds : [esi+0xD8]
        test al, al
        jne public_62d335d
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_62d337e
        public_62d335d : nop
        fld dword ptr ds : [esi+0xD4]
        mov eax, dword ptr ds : [edi]
        fstp dword ptr ds : [edi+0x1C]
        mov ecx, edi
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [esi+0xD4], 0
        mov byte ptr ds : [esi+0xD8], 0
        public_62d337e : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [esi+0x11C]
        cmp eax, 0xFFFFFFFF
        je public_62d33e2
        cmp eax, dword ptr ds : [esi+0xC0]
        je public_62d339d
        cmp eax, 8
        jne public_62d33e2
        public_62d339d : nop
        mov eax, dword ptr ds : [esi+0x120]
        push 0
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi+0xC4], 0
        call public_62d3420
        lea edi, ds:[esi+0xFC]
        mov ebx, 5
        public_62d33c4 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_62d33dc
        mov eax, dword ptr ds : [esi+0x118]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [esi+0x11C]
        push eax
        call dword ptr ds : [edx]
        public_62d33dc : nop
        add edi, 4
        dec ebx
        jne public_62d33c4
        public_62d33e2 : nop
        mov dword ptr ds : [esi+0x11C], 0xFFFFFFFF
        public_62d33ec : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [ecx+0x1D], 0
        public_62d33f4 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x62d2b10)
    }
}

#undef public_62d2b89
#undef public_62d2c0d
#undef public_62d2ccd
#undef public_62d2cd7
#undef public_62d2cfc
#undef public_62d2d16
#undef public_62d2d18
#undef public_62d2d60
#undef public_62d2d86
#undef public_62d2d94
#undef public_62d2dab
#undef public_62d2dc3
#undef public_62d2e2a
#undef public_62d2e44
#undef public_62d2e5f
#undef public_62d2e9b
#undef public_62d2ee1
#undef public_62d2ef9
#undef public_62d2f04
#undef public_62d2f17
#undef public_62d2f1c
#undef public_62d2f25
#undef public_62d2f4a
#undef public_62d2f67
#undef public_62d2f76
#undef public_62d2f78
#undef public_62d2f92
#undef public_62d2fa3
#undef public_62d2ff8
#undef public_62d2fff
#undef public_62d3026
#undef public_62d3092
#undef public_62d30ab
#undef public_62d30af
#undef public_62d30e1
#undef public_62d30e3
#undef public_62d3124
#undef public_62d3138
#undef public_62d314c
#undef public_62d3170
#undef public_62d31a7
#undef public_62d31da
#undef public_62d31e2
#undef public_62d31e6
#undef public_62d320b
#undef public_62d3210
#undef public_62d3212
#undef public_62d325a
#undef public_62d3276
#undef public_62d3293
#undef public_62d32ad
#undef public_62d32af
#undef public_62d32e0
#undef public_62d32f4
#undef public_62d3300
#undef public_62d3306
#undef public_62d331a
#undef public_62d331f
#undef public_62d3324
#undef public_62d332b
#undef public_62d335d
#undef public_62d337e
#undef public_62d339d
#undef public_62d33c4
#undef public_62d33dc
#undef public_62d33e2
#undef public_62d33ec
#undef public_62d33f4

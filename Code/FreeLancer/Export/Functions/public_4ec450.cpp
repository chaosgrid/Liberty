#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_445dc0);
CLANG_FORWARD_PROC_SYMBOL(public_45a490);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4be2d0);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_4c7270);
CLANG_FORWARD_PROC_SYMBOL(public_4c7c60);
CLANG_FORWARD_PROC_SYMBOL(public_4d4c70);
CLANG_FORWARD_PROC_SYMBOL(public_4d4d50);
CLANG_FORWARD_PROC_SYMBOL(public_4e8100);
CLANG_FORWARD_PROC_SYMBOL(public_4ebf70);
CLANG_FORWARD_PROC_SYMBOL(public_4ed180);
CLANG_FORWARD_PROC_SYMBOL(public_4ee260);
CLANG_FORWARD_PROC_SYMBOL(public_4f1800);
CLANG_FORWARD_PROC_SYMBOL(public_4f18d0);
CLANG_FORWARD_PROC_SYMBOL(public_4f1b40);
CLANG_FORWARD_PROC_SYMBOL(public_4f1dd0);
CLANG_FORWARD_PROC_SYMBOL(public_4f2070);
CLANG_FORWARD_PROC_SYMBOL(public_4f2220);
CLANG_FORWARD_PROC_SYMBOL(public_4f2d50);
CLANG_FORWARD_PROC_SYMBOL(public_4f5340);
CLANG_FORWARD_PROC_SYMBOL(public_51dd20);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_5472a0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_59daa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5beff1);

#define public_4ec4e1 _public_4ec4e1
#define public_4ec4e3 _public_4ec4e3
#define public_4ec561 _public_4ec561
#define public_4ec587 _public_4ec587
#define public_4ec589 _public_4ec589
#define public_4ec5ec _public_4ec5ec
#define public_4ec653 _public_4ec653
#define public_4ec658 _public_4ec658
#define public_4ec66d _public_4ec66d
#define public_4ec66f _public_4ec66f
#define public_4ec692 _public_4ec692
#define public_4ec6b7 _public_4ec6b7
#define public_4ec6b9 _public_4ec6b9
#define public_4ec726 _public_4ec726
#define public_4ec7cf _public_4ec7cf
#define public_4ec801 _public_4ec801
#define public_4ec80e _public_4ec80e
#define public_4ec87d _public_4ec87d
#define public_4ec8cd _public_4ec8cd
#define public_4ec8e4 _public_4ec8e4
#define public_4ec8e8 _public_4ec8e8
#define public_4ec8f1 _public_4ec8f1
#define public_4ec904 _public_4ec904
#define public_4ec90d _public_4ec90d
#define public_4ec914 _public_4ec914
#define public_4ec91c _public_4ec91c
#define public_4ec926 _public_4ec926
#define public_4ec943 _public_4ec943
#define public_4ec94c _public_4ec94c
#define public_4ec953 _public_4ec953
#define public_4ec95b _public_4ec95b
#define public_4ecafb _public_4ecafb
#define public_4ecb55 _public_4ecb55
#define public_4ecb72 _public_4ecb72
#define public_4ecbb7 _public_4ecbb7
#define public_4ecc07 _public_4ecc07
#define public_4ecc38 _public_4ecc38
#define public_4ecc4e _public_4ecc4e
#define public_4ecc7f _public_4ecc7f
#define public_4ecc9c _public_4ecc9c
#define public_4ecced _public_4ecced
#define public_4ecd04 _public_4ecd04
#define public_4ecd64 _public_4ecd64
#define public_4ecdb5 _public_4ecdb5
#define public_4ecdcc _public_4ecdcc
#define public_4ece5b _public_4ece5b
#define public_4ece70 _public_4ece70
#define public_4ecea7 _public_4ecea7
#define public_4eceeb _public_4eceeb
#define public_4ecf25 _public_4ecf25
#define public_4ecf30 _public_4ecf30
#define public_4ecf3b _public_4ecf3b
#define public_4ecf6c _public_4ecf6c
#define public_4ecf7c _public_4ecf7c
#define public_4ecfa7 _public_4ecfa7

PROC_DECLARE(0x4ec450, internal_4ec450, public_4ec450);
extern "C" NAKED register_t __cdecl internal_4ec450()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5beff1 @0x4ec458*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5beff1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB4
        push ebx
        push ebp
        push esi
        push edi
        push 6
        mov ebp, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4ecf7c
        push 0xA
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4ecf7c
        call public_41dd90
        test al, al
        je public_4ecf7c
        call public_54baf0
        test eax, eax
        je public_4ecf7c
        mov dword ptr ds : [public_674b78], 0
        call public_54baf0
        mov ebx, eax
        test ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_4ec4e1
        lea eax, ds:[ebx+0xC]
        test eax, eax
        je public_4ec4e1
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4ec4e1
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 1
        cmp cl, 1
        je public_4ec4e3
        public_4ec4e1 : nop
        xor eax, eax
        public_4ec4e3 : nop
        fild dword ptr ds : [public_616844]
        push 1
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [public_616840]
        fstp dword ptr ss : [esp]
        call public_40f130
        push eax
        lea edx, ss:[esp+0xC0]
        push edx
        call public_51dd20
        mov esi, eax
        lea edi, ss:[ebp+0x3F0]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ss : [ebp+0x914]
        mov edx, dword ptr ds : [eax]
        add esp, 0x18
        lea ecx, ss:[ebp+0x910]
        push eax
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_4f2d50
        fld dword ptr ds : [public_674b7c]
        fadd dword ptr ss : [esp+0xD8]
        fcom dword ptr ds : [public_5d8ee4]
        fst dword ptr ds : [public_674b7c]
        fnstsw ax
        test ah, 0x41
        jne public_4ec587
        mov cl, byte ptr ds : [public_6127bc]
        public_4ec561 : nop
        fsub dword ptr ds : [public_5d8ee4]
        test cl, cl
        sete cl
        fcom dword ptr ds : [public_5d8ee4]
        fnstsw ax
        test ah, 0x41
        je public_4ec561
        fstp dword ptr ds : [public_674b7c]
        mov byte ptr ds : [public_6127bc], cl
        jmp public_4ec589
        public_4ec587 : nop
        fstp st(0)
        public_4ec589 : nop
        mov ecx, ebp
        call public_4ed180
        mov ecx, ebp
        call public_4ebf70
        mov ecx, ebp
        call public_4ee260
        mov ecx, ebp
        call public_4f1dd0
        call public_54baf0
        test eax, eax
        je public_4ec5ec
        add eax, 0xC
        test eax, eax
        je public_4ec5ec
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_4ec5ec
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4ec5ec
        mov ecx, esi
        call dword ptr ds : [public_5c64a0]
        test al, al
        jne public_4ec5ec
        mov ecx, esi
        call dword ptr ds : [public_5c64fc]
        test al, al
        jne public_4ec5ec
        mov ecx, ebp
        call public_4f2070
        public_4ec5ec : nop
        mov ecx, ebp
        call public_4f2220
        mov ecx, ebp
        call public_4f18d0
        mov ecx, ebp
        call public_4f1800
        call public_42d680
        fadd dword ptr ss : [ebp+0x438]
        fst dword ptr ss : [ebp+0x438]
        fcom dword ptr ds : [public_5d8efc]
        fnstsw ax
        test ah, 5
        jnp public_4ec66d
        mov dl, byte ptr ss : [ebp+0x43C]
        fsub dword ptr ds : [public_5d8efc]
        test dl, dl
        sete dl
        fstp dword ptr ss : [ebp+0x438]
        mov byte ptr ss : [ebp+0x43C], dl
        call public_4f5340
        test al, al
        je public_4ec653
        mov al, byte ptr ss : [ebp+0x43C]
        test al, al
        jne public_4ec653
        xor eax, eax
        jmp public_4ec658
        public_4ec653 : nop
        mov eax, 1
        public_4ec658 : nop
        mov ecx, dword ptr ss : [ebp+0x418]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        jmp public_4ec66f
        public_4ec66d : nop
        fstp st(0)
        public_4ec66f : nop
        mov ecx, ebp
        call public_4f1b40
        fld dword ptr ds : [public_612434]
        mov ecx, dword ptr ss : [ebp+0x368]
        test ecx, ecx
        je public_4ec692
        test ebx, ebx
        je public_4ec692
        fstp st(0)
        call dword ptr ds : [public_5c64e4]
        public_4ec692 : nop
        fcom dword ptr ds : [public_612434]
        mov byte ptr ss : [esp+0x13], 0
        mov dword ptr ss : [esp+0x1C], 0x7149F2CA
        fnstsw ax
        test ah, 5
        jp public_4ec6b7
        fstp dword ptr ss : [esp+0x1C]
        mov byte ptr ss : [esp+0x13], 1
        jmp public_4ec6b9
        public_4ec6b7 : nop
        fstp st(0)
        public_4ec6b9 : nop
        call public_59daa0
        mov esi, dword ptr ss : [esp+0x18]
        xor edi, edi
        test esi, esi
        mov dword ptr ss : [esp+0x14], eax
        mov bl, 1
        je public_4ec8e4
        test eax, eax
        jne public_4ec8e8
        mov eax, dword ptr ss : [ebp+0x3E8]
        test eax, eax
        jge public_4ec80e
        mov eax, dword ptr ss : [ebp+0x408]
        test eax, eax
        je public_4ec8f1
        mov eax, dword ptr ds : [eax+0xB0]
        push edi
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_4ec726
        mov edi, dword ptr ds : [esi+0x1C]
        xor ecx, ecx
        cmp edi, 1
        setne cl
        push eax
        dec ecx
        and ecx, esi
        push ecx
        call public_45a490
        add esp, 8
        mov edi, eax
        xor bl, bl
        public_4ec726 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_4ec7cf
        mov ecx, dword ptr ss : [ebp+0x408]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xAC]
        push eax
        call dword ptr ds : [edx+0x64]
        fstp dword ptr ss : [esp+0x9C]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        fld dword ptr ss : [esp+0xB4]
        fsub dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x90]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xBC]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xB8]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ss : [esp+0x84]
        fld dword ptr ss : [esp+0x88]
        fmul dword ptr ss : [esp+0x88]
        faddp 
        fld dword ptr ss : [esp+0x8C]
        fmul dword ptr ss : [esp+0x8C]
        faddp 
        fsqrt 
        fsub dword ptr ss : [esp+0x9C]
        fabs 
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        jne public_4ec7cf
        mov bl, 1
        public_4ec7cf : nop
        mov eax, dword ptr ss : [ebp+0x408]
        test eax, eax
        je public_4ec801
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_4ec801
        fld dword ptr ds : [eax+0x140]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 1
        je public_4ec8f1
        public_4ec801 : nop
        test bl, bl
        je public_4ec8cd
        jmp public_4ec8f1
        public_4ec80e : nop
        mov edx, dword ptr ss : [ebp+0x36C]
        mov esi, dword ptr ds : [edx+eax*8]
        test esi, esi
        lea eax, ds:[edx+eax*8]
        je public_4ec8f1
        add esi, 0xFFFFFFF8
        test esi, esi
        je public_4ec8f1
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        mov edi, eax
        test edi, edi
        je public_4ec87d
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_4ec87d
        mov ecx, edi
        call dword ptr ds : [public_5c64e0]
        mov ecx, eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_4ec87d
        mov ecx, edi
        call dword ptr ds : [public_5c64e0]
        mov eax, dword ptr ds : [eax]
        push 2
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_4ec87d
        mov esi, eax
        public_4ec87d : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [eax+0x1C]
        xor edx, edx
        cmp ebx, 1
        setne dl
        push esi
        dec edx
        and eax, edx
        push eax
        call public_45a490
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        add esp, 8
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_4ec8cd
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_4ec8cd
        fld dword ptr ds : [eax+0x140]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 1
        je public_4ec8f1
        public_4ec8cd : nop
        cmp edi, 0xFFFFFFFF
        je public_4ec90d
        test edi, edi
        je public_4ec904
        cmp edi, 1
        jne public_4ec91c
        push 0
/*FIXUP push offset public_5d9590 @0x4ec8dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9590
        jmp public_4ec914
        public_4ec8e4 : nop
        test eax, eax
        je public_4ec8f1
        public_4ec8e8 : nop
        push 0
/*FIXUP push offset public_5c95fc @0x4ec8ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        jmp public_4ec953
        public_4ec8f1 : nop
        mov al, byte ptr ss : [ebp+0x928]
        test al, al
        jne public_4ec926
        push 0
/*FIXUP push offset public_5d9588 @0x4ec8fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9588
        jmp public_4ec953
        public_4ec904 : nop
        push 0
/*FIXUP push offset public_5d9580 @0x4ec906*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9580
        jmp public_4ec914
        public_4ec90d : nop
        push 0
/*FIXUP push offset public_5d9578 @0x4ec90f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9578
        public_4ec914 : nop
        call public_41dde0
        add esp, 8
        public_4ec91c : nop
        mov al, byte ptr ss : [ebp+0x928]
        test al, al
        je public_4ec95b
        public_4ec926 : nop
        mov eax, dword ptr ss : [ebp+0x92C]
        cmp eax, 0xFFFFFFFF
        je public_4ec94c
        test eax, eax
        je public_4ec943
        cmp eax, 1
        jne public_4ec95b
        push 0
/*FIXUP push offset public_5d9568 @0x4ec93c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9568
        jmp public_4ec953
        public_4ec943 : nop
        push 0
/*FIXUP push offset public_5d9558 @0x4ec945*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9558
        jmp public_4ec953
        public_4ec94c : nop
        push 0
/*FIXUP push offset public_5d9550 @0x4ec94e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9550
        public_4ec953 : nop
        call public_41dde0
        add esp, 8
        public_4ec95b : nop
        call public_4be2d0
        test al, al
        jne public_4ecfa7
        mov eax, dword ptr ss : [esp+0x14]
        xor edi, edi
        cmp eax, edi
        jne public_4ecfa7
        call public_45a740
        test al, al
        jne public_4ecfa7
        call public_4c7270
        test al, al
        je public_4ecfa7
        call public_4c7c60
        test al, al
        jne public_4ecfa7
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], edi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xCC], edi
        call public_4144b0
        push 0xFFFFFFFF
        push edi
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xD4], 1
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x6C], edi
        call public_413df0
        mov byte ptr ss : [esp+0x80], 0
        mov eax, dword ptr ss : [ebp+0x3E8]
        cmp eax, edi
        mov dword ptr ss : [esp+0xCC], 2
        jge public_4ecc38
        mov ecx, dword ptr ss : [ebp+0x408]
        cmp ecx, edi
        je public_4ecc07
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_4ecafb
        mov esi, dword ptr ss : [esp+0x18]
        cmp esi, edi
        je public_4ecafb
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xA0]
        push eax
        call dword ptr ds : [edx+0x64]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        fld dword ptr ss : [esp+0xA8]
        fsub dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x9C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xB0]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xAC]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x90]
        fmul dword ptr ss : [esp+0x90]
        fld dword ptr ss : [esp+0x94]
        fmul dword ptr ss : [esp+0x94]
        faddp 
        fld dword ptr ss : [esp+0x98]
        fmul dword ptr ss : [esp+0x98]
        faddp 
        fsqrt 
        fsub dword ptr ss : [esp+0x14]
        fabs 
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        jne public_4ecafb
        lea eax, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xCC], 3
        mov dword ptr ss : [esp+0x14], eax
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xCC], 5
        call public_4144f0
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0xCC], 4
        call public_445d70
        lea ecx, ss:[esp+0x30]
        call public_444e20
        lea ecx, ss:[esp+0x28]
        call public_444e20
        jmp public_4ecfa7
        public_4ecafb : nop
        mov ecx, dword ptr ss : [ebp+0x408]
        cmp ecx, edi
        je public_4ecb72
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_4ecb72
        fld dword ptr ds : [ecx+0x140]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 1
        jne public_4ecb72
        lea eax, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xCC], 6
        mov dword ptr ss : [esp+0x14], eax
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xCC], 8
        call public_4144f0
        mov byte ptr ss : [esp+0xCC], 7
        public_4ecb55 : nop
        lea ecx, ss:[esp+0x3C]
        call public_445d70
        lea ecx, ss:[esp+0x30]
        call public_444e20
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, edi
        jmp public_4ece5b
        public_4ecb72 : nop
        push ecx
        call public_4d4c70
        add esp, 4
        test al, al
        je public_4ecbb7
        mov ecx, dword ptr ss : [ebp+0x408]
        push ecx
        call public_4d4d50
        add esp, 4
        cmp eax, edi
        mov dword ptr ss : [esp+0x24], eax
        je public_4ecc07
        mov edx, dword ptr ss : [ebp+0x408]
        mov eax, dword ptr ds : [edx+0xB0]
        lea ecx, ss:[esp+0x20]
        not eax
        push ecx
        mov dword ptr ss : [esp+0x24], eax
        call public_4be370
        add esp, 4
        jmp public_4ecc07
        public_4ecbb7 : nop
        mov eax, dword ptr ss : [ebp+0x408]
        mov ecx, dword ptr ds : [eax+0xB4]
        xor edx, edx
        cmp ecx, edi
        sete dl
        push 1
        lea ecx, ss:[esp+0x2C]
        inc edx
        push edx
        push ecx
        push eax
        call public_4e8100
        add esp, 0x10
        test al, al
        je public_4ecc07
        mov ebp, dword ptr ss : [ebp+0x408]
        mov edx, dword ptr ss : [ebp+0xB0]
        push ebp
        mov dword ptr ss : [esp+0x24], edx
        call public_5472a0
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x24]
        push eax
        call public_4be370
        add esp, 8
        public_4ecc07 : nop
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xCC], 9
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xCC], 0xB
        call public_4144f0
        mov byte ptr ss : [esp+0xCC], 0xA
        jmp public_4ecb55
        public_4ecc38 : nop
        mov edx, dword ptr ss : [ebp+0x36C]
        lea eax, ds:[edx+eax*8]
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        je public_4ecc4e
        lea ecx, ds:[eax-8]
        cmp ecx, edi
        jne public_4ecc7f
        public_4ecc4e : nop
        lea eax, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xCC], 0xC
        mov dword ptr ss : [esp+0x14], eax
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xCC], 0xE
        call public_4144f0
        mov byte ptr ss : [esp+0xCC], 0xD
        jmp public_4ecb55
        public_4ecc7f : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        mov esi, eax
        xor ebx, ebx
        cmp esi, ebx
        je public_4ecc9c
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, eax
        and ecx, 3
        cmp cl, 3
        je public_4ecd04
        public_4ecc9c : nop
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xCC], 0xF
        mov dword ptr ss : [esp+0x14], edx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xCC], 0x11
        call public_4144f0
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0xCC], 0x10
        call public_445d70
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        mov esi, dword ptr ds : [public_5c71d8]
        je public_4ecced
        push eax
        call esi
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_4ecced : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_4ecfa7
        push eax
        call esi
        add esp, 4
        jmp public_4ecfa7
        public_4ecd04 : nop
        and eax, 0x303
        cmp eax, 0x303
        jne public_4ecdcc
        mov edi, dword ptr ds : [public_5c64e0]
        mov ecx, esi
        call edi
        mov ecx, eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_4ecdcc
        mov ecx, esi
        call edi
        mov eax, dword ptr ds : [eax]
        push 2
        push eax
        call public_5416c0
        add esp, 8
        cmp eax, ebx
        je public_4ecdcc
        add eax, 0xC
        cmp eax, ebx
        je public_4ecd64
        mov esi, dword ptr ds : [eax+4]
        cmp esi, ebx
        je public_4ecd64
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        je public_4ecdcc
        public_4ecd64 : nop
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xCC], 0x12
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xCC], 0x14
        call public_4144f0
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0xCC], 0x13
        call public_445d70
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        mov esi, dword ptr ds : [public_5c71d8]
        je public_4ecdb5
        push eax
        call esi
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_4ecdb5 : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_4ecfa7
        push eax
        call esi
        add esp, 4
        jmp public_4ecfa7
        public_4ecdcc : nop
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_4ece70
        fld dword ptr ds : [esi+0x140]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 1
        jne public_4ece70
        lea eax, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xCC], 0x15
        mov dword ptr ss : [esp+0x14], eax
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xCC], 0x17
        call public_4144f0
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x40]
        push ecx
        push edx
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0xD4], 0x16
        call public_445dc0
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        call public_444e20
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        public_4ece5b : nop
        je public_4ecfa7
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        jmp public_4ecfa7
        public_4ece70 : nop
        push esi
        call public_4d4c70
        add esp, 4
        test al, al
        je public_4ecea7
        push esi
        call public_4d4d50
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        je public_4eceeb
        mov ecx, dword ptr ds : [esi+0xB0]
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x24], ecx
        call public_4be370
        add esp, 4
        jmp public_4eceeb
        public_4ecea7 : nop
        mov eax, dword ptr ds : [esi+0xB4]
        xor ecx, ecx
        cmp eax, ebx
        sete cl
        push 1
        lea edx, ss:[esp+0x2C]
        inc ecx
        push ecx
        push edx
        push esi
        call public_4e8100
        add esp, 0x10
        test al, al
        je public_4eceeb
        mov eax, dword ptr ds : [esi+0xB0]
        push esi
        mov dword ptr ss : [esp+0x24], eax
        call public_5472a0
        lea ecx, ss:[esp+0x24]
        push ecx
        mov dword ptr ss : [esp+0x2C], eax
        call public_4be370
        add esp, 8
        public_4eceeb : nop
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xCC], 0x18
        mov dword ptr ss : [esp+0x14], edx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xCC], 0x1A
        call public_4144f0
        mov eax, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ss : [esp+0x40]
        cmp esi, eax
        mov byte ptr ss : [esp+0xCC], 0x19
        mov edi, eax
        je public_4ecf3b
        public_4ecf25 : nop
        mov ecx, dword ptr ds : [esi]
        cmp ecx, ebx
        je public_4ecf30
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_4ecf30 : nop
        add esi, 8
        cmp esi, edi
        jne public_4ecf25
        mov esi, dword ptr ss : [esp+0x40]
        public_4ecf3b : nop
        push esi
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [public_5c71d8]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        je public_4ecf6c
        push eax
        call esi
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_4ecf6c : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_4ecfa7
        push eax
        call esi
        add esp, 4
        jmp public_4ecfa7
        public_4ecf7c : nop
        mov eax, dword ptr ss : [ebp+0x410]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ss : [ebp+0x414]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ss : [ebp+0x418]
        and byte ptr ds : [eax+0x6C], cl
        mov ebp, dword ptr ss : [ebp+0x41C]
        and byte ptr ss : [ebp+0x6C], cl
        public_4ecfa7 : nop
        mov ecx, dword ptr ss : [esp+0xC4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xC0
        ret 8
        UNREACHABLE_TRAP(0x4ec450)
    }
}

#undef public_4ec4e1
#undef public_4ec4e3
#undef public_4ec561
#undef public_4ec587
#undef public_4ec589
#undef public_4ec5ec
#undef public_4ec653
#undef public_4ec658
#undef public_4ec66d
#undef public_4ec66f
#undef public_4ec692
#undef public_4ec6b7
#undef public_4ec6b9
#undef public_4ec726
#undef public_4ec7cf
#undef public_4ec801
#undef public_4ec80e
#undef public_4ec87d
#undef public_4ec8cd
#undef public_4ec8e4
#undef public_4ec8e8
#undef public_4ec8f1
#undef public_4ec904
#undef public_4ec90d
#undef public_4ec914
#undef public_4ec91c
#undef public_4ec926
#undef public_4ec943
#undef public_4ec94c
#undef public_4ec953
#undef public_4ec95b
#undef public_4ecafb
#undef public_4ecb55
#undef public_4ecb72
#undef public_4ecbb7
#undef public_4ecc07
#undef public_4ecc38
#undef public_4ecc4e
#undef public_4ecc7f
#undef public_4ecc9c
#undef public_4ecced
#undef public_4ecd04
#undef public_4ecd64
#undef public_4ecdb5
#undef public_4ecdcc
#undef public_4ece5b
#undef public_4ece70
#undef public_4ecea7
#undef public_4eceeb
#undef public_4ecf25
#undef public_4ecf30
#undef public_4ecf3b
#undef public_4ecf6c
#undef public_4ecf7c
#undef public_4ecfa7

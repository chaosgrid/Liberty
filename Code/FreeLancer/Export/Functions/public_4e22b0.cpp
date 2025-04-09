#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_45a4e0);
CLANG_FORWARD_PROC_SYMBOL(public_4e22b0);
CLANG_FORWARD_PROC_SYMBOL(public_4e27e0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4e2361 _public_4e2361
#define public_4e2363 _public_4e2363
#define public_4e236f _public_4e236f
#define public_4e2371 _public_4e2371
#define public_4e23ae _public_4e23ae
#define public_4e23b5 _public_4e23b5
#define public_4e23eb _public_4e23eb
#define public_4e23ed _public_4e23ed
#define public_4e2410 _public_4e2410
#define public_4e2422 _public_4e2422
#define public_4e2446 _public_4e2446
#define public_4e244b _public_4e244b
#define public_4e2458 _public_4e2458
#define public_4e2480 _public_4e2480
#define public_4e2485 _public_4e2485
#define public_4e2492 _public_4e2492
#define public_4e24e0 _public_4e24e0
#define public_4e24e2 _public_4e24e2
#define public_4e2516 _public_4e2516
#define public_4e2518 _public_4e2518
#define public_4e2524 _public_4e2524
#define public_4e25a7 _public_4e25a7
#define public_4e25b1 _public_4e25b1
#define public_4e25e6 _public_4e25e6
#define public_4e25e8 _public_4e25e8
#define public_4e261a _public_4e261a
#define public_4e261c _public_4e261c
#define public_4e2682 _public_4e2682
#define public_4e26f8 _public_4e26f8
#define public_4e2757 _public_4e2757
#define public_4e2775 _public_4e2775
#define public_4e2796 _public_4e2796
#define public_4e279b _public_4e279b
#define public_4e27c2 _public_4e27c2
#define public_4e27d2 _public_4e27d2
#define public_4e27d6 _public_4e27d6

PROC_DECLARE(0x4e22b0, internal_4e22b0, public_4e22b0);
extern "C" NAKED register_t __cdecl internal_4e22b0()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        mov esi, ecx
        call public_42d680
        fadd dword ptr ds : [esi+0x558]
        fst dword ptr ds : [esi+0x558]
        fcom dword ptr ds : [public_5d8864]
        fnstsw ax
        test ah, 0x41
        jne public_4e27d6
        fsub dword ptr ds : [public_5d8864]
        mov al, byte ptr ds : [esi+0x4D0]
        test al, al
        fstp dword ptr ds : [esi+0x558]
        je public_4e23b5
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e23b5
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e23b5
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        je public_4e23b5
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_4e23ae
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e23ae
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e23ae
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e23ae
        mov eax, dword ptr ds : [esi+0x500]
        test eax, eax
        je public_4e23ae
        mov eax, dword ptr ds : [esi+0x504]
        test eax, eax
        je public_4e23ae
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e2361
        lea ecx, ds:[eax-8]
        jmp public_4e2363
        public_4e2361 : nop
        xor ecx, ecx
        public_4e2363 : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_4e236f
        add eax, 0xFFFFFFF8
        jmp public_4e2371
        public_4e236f : nop
        xor eax, eax
        public_4e2371 : nop
        push ecx
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        call public_45a4e0
        mov ecx, dword ptr ds : [esi+0x500]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 1
        lea eax, ss:[esp+8]
        push eax
        push 0x33
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x504]
        mov edx, dword ptr ds : [ecx]
        push 1
        lea eax, ss:[esp+8]
        push eax
        push 0x33
        call dword ptr ds : [edx+0xA8]
        public_4e23ae : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        public_4e23b5 : nop
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        push ebx
        push edi
        je public_4e23eb
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e23eb
        add eax, 0xC
        test eax, eax
        je public_4e23eb
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4e23eb
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4e23eb
        mov edi, eax
        jmp public_4e23ed
        public_4e23eb : nop
        xor edi, edi
        public_4e23ed : nop
        mov eax, dword ptr ds : [esi+0x398]
        xor bl, bl
        test eax, eax
        mov dword ptr ss : [esp+0xC], edi
        je public_4e2410
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e2410
        mov eax, dword ptr ds : [esi+0x578]
        test eax, eax
        jle public_4e2410
        mov bl, 1
        public_4e2410 : nop
        test edi, edi
        je public_4e2422
        test dword ptr ds : [edi+0xE0], 0x200000
        jne public_4e2422
        xor bl, bl
        public_4e2422 : nop
        mov ecx, dword ptr ds : [esi+0x514]
        test ecx, ecx
        je public_4e2458
        mov al, byte ptr ss : [esp+0x2C]
        test al, al
        je public_4e2458
        test bl, bl
        je public_4e2446
        mov al, byte ptr ds : [esi+0x4D0]
        test al, al
        je public_4e2446
        xor eax, eax
        jmp public_4e244b
        public_4e2446 : nop
        mov eax, 1
        public_4e244b : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        public_4e2458 : nop
        mov ecx, dword ptr ds : [esi+0x518]
        test ecx, ecx
        je public_4e2492
        mov al, byte ptr ss : [esp+0x2C]
        test al, al
        je public_4e25b1
        test bl, bl
        je public_4e2480
        mov al, byte ptr ds : [esi+0x4D0]
        test al, al
        je public_4e2480
        xor eax, eax
        jmp public_4e2485
        public_4e2480 : nop
        mov eax, 1
        public_4e2485 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        public_4e2492 : nop
        mov al, byte ptr ss : [esp+0x2C]
        test al, al
        je public_4e25b1
        test edi, edi
        je public_4e25a7
        mov al, byte ptr ds : [esi+0x4D0]
        test al, al
        je public_4e25b1
        lea ecx, ds:[esi+0x364]
        call public_55e280
        test al, al
        jne public_4e25b1
        mov eax, dword ptr ds : [esi+0x654]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e24e0
        add eax, 0xFFFFFFF8
        jmp public_4e24e2
        public_4e24e0 : nop
        xor eax, eax
        public_4e24e2 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x144]
        mov dword ptr ss : [esp+0x2C], eax
        fild dword ptr ss : [esp+0x2C]
        fcom dword ptr ds : [public_5c7474]
        fst dword ptr ds : [esi+0x65C]
        fnstsw ax
        test ah, 5
        jnp public_4e2516
        fcomp dword ptr ds : [public_5ca218]
        fnstsw ax
        test ah, 0x41
        jne public_4e2524
        jmp public_4e2518
        public_4e2516 : nop
        fstp st(0)
        public_4e2518 : nop
        mov eax, dword ptr ds : [esi+0x658]
        mov dword ptr ds : [esi+0x65C], eax
        public_4e2524 : nop
        fld dword ptr ds : [esi+0x65C]
        fcomp dword ptr ds : [esi+0x658]
        fnstsw ax
        test ah, 0x44
        jnp public_4e25b1
        mov ecx, dword ptr ds : [esi+0x65C]
        mov dword ptr ds : [esi+0x658], ecx
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ds : [public_67eca8]
        push edx
/*FIXUP push offset public_66fc60 @0x4e254f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x619
        push eax
        call public_4347e0
        fld dword ptr ds : [esi+0x65C]
        call public_5b7ec0
        push eax
/*FIXUP push offset public_5d8d00 @0x4e256b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8d00
/*FIXUP push offset public_66dc60 @0x4e2570*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call dword ptr ds : [public_5c70ec]
/*FIXUP push offset public_66dc60 @0x4e257b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4e2580*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ac]
        mov ecx, dword ptr ds : [esi+0x654]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x24
        push 0
/*FIXUP push offset public_66fc60 @0x4e2598*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        jmp public_4e25b1
        public_4e25a7 : nop
        mov eax, dword ptr ds : [esi+0x654]
        and byte ptr ds : [eax+0x6C], 0xFC
        public_4e25b1 : nop
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        push ebp
        je public_4e25e6
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e25e6
        add eax, 0xC
        test eax, eax
        je public_4e25e6
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4e25e6
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        jne public_4e25e6
        mov ebp, eax
        jmp public_4e25e8
        public_4e25e6 : nop
        xor ebp, ebp
        public_4e25e8 : nop
        mov dword ptr ss : [esp+0x30], 0x497423F0
        call public_54baf0
        test ebp, ebp
        mov edi, eax
        jne public_4e2682
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_4e2682
        test edi, edi
        je public_4e2682
        mov ecx, dword ptr ds : [esi+0x398]
        test ecx, ecx
        je public_4e261a
        add ecx, 0xFFFFFFF8
        jmp public_4e261c
        public_4e261a : nop
        xor ecx, ecx
        public_4e261c : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], ecx
        fsub dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x24], edx
        fsub dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], eax
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x28]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x30]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_4e2682 : nop
        mov eax, dword ptr ds : [esi+0x508]
        test eax, eax
        je public_4e2757
        test ebp, ebp
        mov bl, 1
        jne public_4e26f8
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_4e26f8
        test edi, edi
        je public_4e26f8
        add edi, 0xC
        test edi, edi
        je public_4e26f8
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_4e26f8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4e26f8
        push 0x80000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        push eax
        call dword ptr ds : [public_5c655c]
        add esp, 4
        test eax, eax
        je public_4e26f8
        mov ecx, eax
        call dword ptr ds : [public_5c6558]
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [eax+0x78]
        fnstsw ax
        test ah, 0x41
        jp public_4e26f8
        xor bl, bl
        public_4e26f8 : nop
        mov ecx, dword ptr ds : [esi+0x508]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, bl
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
/*FIXUP push offset public_5d021c @0x4e270f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d021c
        call public_59da10
        mov ecx, dword ptr ds : [esi+0x508]
        add esp, 4
        mov edi, eax
        test edi, edi
        setne al
        mov byte ptr ds : [esi+0x594], al
        mov edx, dword ptr ds : [ecx]
        movzx eax, al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        test edi, edi
        je public_4e2757
        test bl, bl
        je public_4e2757
        mov edx, dword ptr ds : [edi]
        push 0
        push 0
        push 0xEF02
        mov ecx, edi
        call dword ptr ds : [edx+0x5C]
        public_4e2757 : nop
        mov ecx, dword ptr ds : [esi+0x50C]
        test ecx, ecx
        je public_4e2775
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        test ebp, ebp
        sete dl
        push 0
        push edx
        push 1
        call dword ptr ds : [eax+0xA8]
        public_4e2775 : nop
        mov ecx, dword ptr ds : [esi+0x51C]
        test ecx, ecx
        pop ebp
        je public_4e27c2
        mov eax, dword ptr ss : [esp+0xC]
        xor bl, bl
        test eax, eax
        je public_4e2796
        mov dl, byte ptr ds : [eax+0x2BD]
        test dl, dl
        je public_4e27d2
        mov bl, 1
        public_4e2796 : nop
        mov eax, 1
        public_4e279b : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x520]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        test bl, bl
        sete dl
        push 0
        push edx
        push 1
        call dword ptr ds : [eax+0xA8]
        public_4e27c2 : nop
        mov ecx, esi
        call public_4e27e0
        pop edi
        pop ebx
        pop esi
        add esp, 0x1C
        ret 4
        public_4e27d2 : nop
        xor eax, eax
        jmp public_4e279b
        public_4e27d6 : nop
        fstp st(0)
        pop esi
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x4e22b0)
    }
}

#undef public_4e2361
#undef public_4e2363
#undef public_4e236f
#undef public_4e2371
#undef public_4e23ae
#undef public_4e23b5
#undef public_4e23eb
#undef public_4e23ed
#undef public_4e2410
#undef public_4e2422
#undef public_4e2446
#undef public_4e244b
#undef public_4e2458
#undef public_4e2480
#undef public_4e2485
#undef public_4e2492
#undef public_4e24e0
#undef public_4e24e2
#undef public_4e2516
#undef public_4e2518
#undef public_4e2524
#undef public_4e25a7
#undef public_4e25b1
#undef public_4e25e6
#undef public_4e25e8
#undef public_4e261a
#undef public_4e261c
#undef public_4e2682
#undef public_4e26f8
#undef public_4e2757
#undef public_4e2775
#undef public_4e2796
#undef public_4e279b
#undef public_4e27c2
#undef public_4e27d2
#undef public_4e27d6

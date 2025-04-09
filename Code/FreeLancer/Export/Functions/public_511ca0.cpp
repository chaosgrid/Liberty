#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4221f0);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_50da20);
CLANG_FORWARD_PROC_SYMBOL(public_50e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_50f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_510160);
CLANG_FORWARD_PROC_SYMBOL(public_511b90);
CLANG_FORWARD_PROC_SYMBOL(public_512460);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_511d26 _public_511d26
#define public_511d4a _public_511d4a
#define public_511d4c _public_511d4c
#define public_511da7 _public_511da7
#define public_511e45 _public_511e45
#define public_511e70 _public_511e70
#define public_511e93 _public_511e93
#define public_511eb2 _public_511eb2
#define public_511f76 _public_511f76
#define public_511fe0 _public_511fe0
#define public_511fe5 _public_511fe5
#define public_511ff2 _public_511ff2
#define public_51202d _public_51202d
#define public_512037 _public_512037
#define public_51203b _public_51203b
#define public_5120bf _public_5120bf
#define public_5120d1 _public_5120d1
#define public_512112 _public_512112
#define public_512140 _public_512140
#define public_51216a _public_51216a
#define public_512181 _public_512181
#define public_512196 _public_512196
#define public_5121b0 _public_5121b0
#define public_5121de _public_5121de
#define public_512208 _public_512208
#define public_51221f _public_51221f
#define public_512234 _public_512234
#define public_51224c _public_51224c
#define public_512280 _public_512280
#define public_5122b0 _public_5122b0
#define public_5122da _public_5122da
#define public_5122f1 _public_5122f1
#define public_512306 _public_512306
#define public_512320 _public_512320
#define public_512350 _public_512350
#define public_51237a _public_51237a
#define public_512391 _public_512391
#define public_5123a6 _public_5123a6
#define public_5123b2 _public_5123b2
#define public_5123fb _public_5123fb
#define public_512423 _public_512423
#define public_51244a _public_51244a

PROC_DECLARE(0x511ca0, internal_511ca0, public_511ca0);
extern "C" NAKED register_t __cdecl internal_511ca0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        push edi
        push 0x25
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51244a
        push 0x24
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51244a
        push 0x28
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51244a
        fld dword ptr ds : [public_67509c]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jnp public_51244a
        mov ebx, dword ptr ss : [esp+0x44]
        push ebx
        mov ecx, esi
        call public_511b90
        fcom dword ptr ds : [esi+0x34]
        fnstsw ax
        test ah, 0x41
        jne public_511d26
        fld dword ptr ds : [esi+0x60]
        fdiv dword ptr ds : [esi+0x2C]
        fadd dword ptr ds : [esi+0x34]
        fst dword ptr ds : [esi+0x34]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_511d4a
        fstp dword ptr ds : [esi+0x34]
        jmp public_511d4c
        public_511d26 : nop
        fcom dword ptr ds : [esi+0x34]
        fnstsw ax
        test ah, 5
        jp public_511d4a
        fld dword ptr ds : [esi+0x60]
        fdiv dword ptr ds : [esi+0x28]
        fsubr dword ptr ds : [esi+0x34]
        fst dword ptr ds : [esi+0x34]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_511d4a
        fstp dword ptr ds : [esi+0x34]
        jmp public_511d4c
        public_511d4a : nop
        fstp st(0)
        public_511d4c : nop
        fld dword ptr ds : [esi+0x34]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_51244a
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x38], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [public_675198], 0
        mov edx, dword ptr ds : [ebx]
        push ebx
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x28], ecx
        call dword ptr ds : [edx+0x40]
        mov edi, eax
        mov eax, dword ptr ds : [public_675194]
        test eax, eax
        jne public_511da7
        call public_5b73e0
        mov dword ptr ds : [public_675194], eax
        public_511da7 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
        push edi
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        lea eax, ds:[esi+0x68]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi+0x14]
        call public_50f2a0
        fsubr qword ptr ds : [public_5c89b8]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edi, ds:[esi+0x78]
        fstp dword ptr ds : [esi+0x38]
        mov edx, dword ptr ds : [ebx]
        push edi
        lea ecx, ds:[esi+0x80]
        push ecx
        lea eax, ds:[esi+0x7C]
        push eax
        push ebx
        call dword ptr ds : [edx+0x34]
        test al, al
        jne public_511e93
        fld dword ptr ds : [esi+0x38]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_51244a
        fld dword ptr ds : [esi+0x60]
        mov esi, dword ptr ds : [esi+0x14]
        fld st(0)
        mov dword ptr ss : [esp+0x20], esi
        fdiv dword ptr ds : [esi+0x2E8]
        mov edi, esi
        fstp dword ptr ss : [esp+0x44]
        mov ebx, dword ptr ss : [esp+0x44]
        fdiv dword ptr ds : [esi+0x2EC]
        mov esi, 0xD
        fstp dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x24]
        public_511e45 : nop
        push 0x3F800000
        push ebp
        push ebx
        push 0x3F800000
        mov ecx, edi
        call public_512460
        add edi, 0x18
        dec esi
        jne public_511e45
        mov edx, dword ptr ss : [esp+0x20]
        lea esi, ds:[edx+0x138]
        mov edi, 0xC
        lea ecx, ds:[ecx]
        public_511e70 : nop
        push 0x3F800000
        push ebp
        push ebx
        push 0x3F800000
        mov ecx, esi
        call public_512460
        add esi, 0x18
        dec edi
        jne public_511e70
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 8
        public_511e93 : nop
        fld dword ptr ds : [edi]
        mov dword ptr ds : [esi+0x84], 0
        fcomp dword ptr ds : [public_5d3ee0]
        fnstsw ax
        test ah, 5
        jp public_511eb2
        mov dword ptr ds : [edi], 0x3DCCCCCD
        public_511eb2 : nop
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+0x2C]
        fstp dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0x20]
        fmul dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x24]
        push ebx
        fdiv dword ptr ds : [edi]
        fmulp 
        fstp dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [ebx]
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        sub ecx, edx
        inc ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x44], eax
        fild dword ptr ss : [esp+0x44]
        push 0
        mov dword ptr ss : [esp+0x24], ecx
        push 0xBF800000
        sub esp, 0x10
        fstp dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x2C], edx
        fild dword ptr ss : [esp+0x38]
        sub ecx, eax
        inc ecx
        mov dword ptr ss : [esp+0x3C], ecx
        fstp dword ptr ss : [esp+8]
        fild dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp]
        call public_4221f0
        fld dword ptr ds : [esi+0x70]
        add esp, 0x18
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        je public_51244a
        mov edx, dword ptr ds : [esi+0x14]
        fld dword ptr ds : [edx+0x2AC]
        mov dword ptr ss : [esp+0x14], edx
        fmul dword ptr ds : [esi+0x88]
        fadd st(0), st
        fst dword ptr ss : [esp+0x44]
        fcomp dword ptr ds : [public_5d440c]
        fnstsw ax
        test ah, 5
        jp public_511f76
        mov dword ptr ss : [esp+0x44], 0x42480000
        public_511f76 : nop
        fld dword ptr ss : [esp+0x44]
        lea eax, ds:[esi+0x7C]
        mov ecx, dword ptr ds : [eax]
        fchs 
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x2C], ecx
        fnstsw ax
        test ah, 0x41
        jne public_511fe0
        fild dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x44]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_511fe0
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_511fe0
        fild dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x44]
        mov byte ptr ss : [esp+0x44], 1
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 0x41
        je public_511fe5
        public_511fe0 : nop
        mov byte ptr ss : [esp+0x44], 0
        public_511fe5 : nop
        fld dword ptr ds : [public_5c7474]
        mov edi, dword ptr ds : [esi+0x1C]
        xor ebp, ebp
        xor ecx, ecx
        public_511ff2 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_51203b
        mov edx, dword ptr ds : [edi+8]
        sub edx, eax
        mov eax, 0x2E8BA2E9
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ebp, edx
        jae public_512037
        mov edx, dword ptr ds : [edi+4]
        fld dword ptr ds : [edx+ecx+8]
        lea edx, ds:[edx+ecx+8]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 0x41
        je public_51202d
        fstp st(0)
        fld dword ptr ds : [edx]
        public_51202d : nop
        mov edx, dword ptr ss : [esp+0x14]
        inc ebp
        add ecx, 0x2C
        jmp public_511ff2
        public_512037 : nop
        mov edx, dword ptr ss : [esp+0x14]
        public_51203b : nop
        fmul dword ptr ds : [esi+0x88]
        mov eax, dword ptr ds : [esi+0x7C]
        mov ecx, dword ptr ds : [esi+0x80]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+0x84]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x30], eax
        fchs 
        mov dword ptr ss : [esp+0x2C], ecx
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_5120d1
        fild dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_5120d1
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_5120d1
        fild dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 0x41
        jne public_5120d1
        mov al, byte ptr ss : [esp+0x44]
        test al, al
        mov byte ptr ss : [esp+0x13], 1
        je public_51224c
        public_5120bf : nop
        mov eax, dword ptr ds : [esi+0x60]
        push eax
        push esi
        push ebx
        mov ecx, edx
        call public_50da20
        jmp public_5123b2
        public_5120d1 : nop
        mov al, byte ptr ss : [esp+0x44]
        test al, al
        mov byte ptr ss : [esp+0x13], 0
        jne public_5120bf
        fld dword ptr ds : [esi+0x38]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_51244a
        fld dword ptr ds : [public_5d8464]
        add edx, 0x10
        fdiv dword ptr ds : [edx+0x2D8]
        mov ecx, 0xD
        fld dword ptr ds : [public_5d8464]
        fdiv dword ptr ds : [edx+0x2DC]
        public_512112 : nop
        fld dword ptr ds : [public_5c7474]
        mov byte ptr ds : [edx+4], 1
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 0x41
        jne public_512140
        fld st(1)
        fadd dword ptr ds : [edx]
        fst dword ptr ds : [edx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_51216a
        mov dword ptr ds : [edx], 0
        jmp public_512196
        public_512140 : nop
        fld dword ptr ds : [public_5c7474]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 5
        jp public_51216a
        fld dword ptr ds : [edx]
        fsub st, st(1)
        fst dword ptr ds : [edx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_51216a
        mov dword ptr ds : [edx], 0
        jmp public_512196
        public_51216a : nop
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_512181
        mov dword ptr ds : [edx], 0
        jmp public_512196
        public_512181 : nop
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_512196
        mov dword ptr ds : [edx], 0x3F800000
        public_512196 : nop
        add edx, 0x18
        dec ecx
        jne public_512112
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, 0x148
        mov edx, 0xC
        nop 
        public_5121b0 : nop
        fld dword ptr ds : [public_5c7474]
        mov byte ptr ds : [ecx+4], 1
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jne public_5121de
        fld st(1)
        fadd dword ptr ds : [ecx]
        fst dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_512208
        mov dword ptr ds : [ecx], 0
        jmp public_512234
        public_5121de : nop
        fld dword ptr ds : [public_5c7474]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 5
        jp public_512208
        fld dword ptr ds : [ecx]
        fsub st, st(1)
        fst dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_512208
        mov dword ptr ds : [ecx], 0
        jmp public_512234
        public_512208 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_51221f
        mov dword ptr ds : [ecx], 0
        jmp public_512234
        public_51221f : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_512234
        mov dword ptr ds : [ecx], 0x3F800000
        public_512234 : nop
        add ecx, 0x18
        dec edx
        jne public_5121b0
        pop edi
        fstp st(0)
        pop esi
        fstp st(0)
        pop ebp
        pop ebx
        add esp, 0x30
        ret 8
        public_51224c : nop
        fld dword ptr ds : [esi+0x38]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_5123b2
        fld dword ptr ds : [esi+0x60]
        add edx, 0x10
        fld st(0)
        mov ecx, 0xD
        fdiv dword ptr ds : [edx+0x2D8]
        fstp dword ptr ss : [esp+0x24]
        fdiv dword ptr ds : [edx+0x2DC]
        lea ecx, ds:[ecx]
        public_512280 : nop
        fld dword ptr ds : [public_5c7474]
        mov byte ptr ds : [edx+4], 1
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 0x41
        jne public_5122b0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [edx]
        fst dword ptr ds : [edx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_5122da
        mov dword ptr ds : [edx], 0
        jmp public_512306
        public_5122b0 : nop
        fld dword ptr ds : [public_5c7474]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 5
        jp public_5122da
        fld dword ptr ds : [edx]
        fsub st, st(1)
        fst dword ptr ds : [edx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_5122da
        mov dword ptr ds : [edx], 0
        jmp public_512306
        public_5122da : nop
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_5122f1
        mov dword ptr ds : [edx], 0
        jmp public_512306
        public_5122f1 : nop
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_512306
        mov dword ptr ds : [edx], 0x3F800000
        public_512306 : nop
        add edx, 0x18
        dec ecx
        jne public_512280
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, 0x148
        mov edx, 0xC
        nop 
        public_512320 : nop
        fld dword ptr ds : [public_5c7474]
        mov byte ptr ds : [ecx+4], 1
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jne public_512350
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [ecx]
        fst dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_51237a
        mov dword ptr ds : [ecx], 0
        jmp public_5123a6
        public_512350 : nop
        fld dword ptr ds : [public_5c7474]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 5
        jp public_51237a
        fld dword ptr ds : [ecx]
        fsub st, st(1)
        fst dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_51237a
        mov dword ptr ds : [ecx], 0
        jmp public_5123a6
        public_51237a : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_512391
        mov dword ptr ds : [ecx], 0
        jmp public_5123a6
        public_512391 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_5123a6
        mov dword ptr ds : [ecx], 0x3F800000
        public_5123a6 : nop
        add ecx, 0x18
        dec edx
        jne public_512320
        fstp st(0)
        public_5123b2 : nop
        push 0xBE2
        call public_421dd0
        push 0xB44
        call public_421ed0
        push 0xB71
        call public_421ed0
        mov al, byte ptr ss : [esp+0x1F]
        add esp, 0xC
        test al, al
        je public_5123fb
        mov al, byte ptr ds : [public_613471]
        test al, al
        je public_5123fb
        fld dword ptr ds : [public_5c75dc]
        push ecx
        fsub dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp]
        push esi
        push ebx
        call public_510160
        public_5123fb : nop
        mov al, byte ptr ss : [esp+0x44]
        test al, al
        je public_512423
        mov al, byte ptr ds : [public_613472]
        test al, al
        je public_512423
        fld dword ptr ds : [public_5c75dc]
        push ecx
        fsub dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp]
        push esi
        push ebx
        call public_50e6f0
        public_512423 : nop
        push 0xB71
        call public_421dd0
        push 0xB44
        call public_421dd0
        push 0xBE2
        call public_421ed0
        push ebx
        call public_422950
        add esp, 0x10
        public_51244a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x511ca0)
    }
}

#undef public_511d26
#undef public_511d4a
#undef public_511d4c
#undef public_511da7
#undef public_511e45
#undef public_511e70
#undef public_511e93
#undef public_511eb2
#undef public_511f76
#undef public_511fe0
#undef public_511fe5
#undef public_511ff2
#undef public_51202d
#undef public_512037
#undef public_51203b
#undef public_5120bf
#undef public_5120d1
#undef public_512112
#undef public_512140
#undef public_51216a
#undef public_512181
#undef public_512196
#undef public_5121b0
#undef public_5121de
#undef public_512208
#undef public_51221f
#undef public_512234
#undef public_51224c
#undef public_512280
#undef public_5122b0
#undef public_5122da
#undef public_5122f1
#undef public_512306
#undef public_512320
#undef public_512350
#undef public_51237a
#undef public_512391
#undef public_5123a6
#undef public_5123b2
#undef public_5123fb
#undef public_512423
#undef public_51244a

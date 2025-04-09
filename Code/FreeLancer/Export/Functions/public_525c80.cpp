#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_525200);
CLANG_FORWARD_PROC_SYMBOL(public_525c80);
CLANG_FORWARD_PROC_SYMBOL(public_526650);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_525cb0 _public_525cb0
#define public_525cce _public_525cce
#define public_525cd6 _public_525cd6
#define public_525cf4 _public_525cf4
#define public_525d30 _public_525d30
#define public_525d42 _public_525d42
#define public_525de1 _public_525de1
#define public_525e03 _public_525e03
#define public_525e07 _public_525e07
#define public_525e30 _public_525e30
#define public_525e70 _public_525e70
#define public_525ed6 _public_525ed6
#define public_525ef7 _public_525ef7
#define public_525f24 _public_525f24
#define public_525f58 _public_525f58
#define public_525fd4 _public_525fd4
#define public_526005 _public_526005
#define public_526022 _public_526022
#define public_526036 _public_526036
#define public_52604a _public_52604a
#define public_52607e _public_52607e
#define public_526101 _public_526101
#define public_526121 _public_526121
#define public_526154 _public_526154
#define public_52616d _public_52616d
#define public_52618b _public_52618b
#define public_526199 _public_526199

PROC_DECLARE(0x525c80, internal_525c80, public_525c80);
extern "C" NAKED register_t __cdecl internal_525c80()
{
    __asm
    {
        sub esp, 0x88
        push esi
        push edi
        push 0x22
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        mov eax, dword ptr ds : [esi+0xC]
        jne public_525cf4
        test eax, eax
        je public_526199
        mov eax, dword ptr ds : [esi+0x14]
        xor edi, edi
        test eax, eax
        jle public_525cd6
        lea esp, ss:[esp]
        public_525cb0 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+edi*4]
        test ecx, ecx
        je public_525cce
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x15C]
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+edi*4], 0
        public_525cce : nop
        mov eax, dword ptr ds : [esi+0x14]
        inc edi
        cmp edi, eax
        jl public_525cb0
        public_525cd6 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        call public_5b7e1d
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        add esp, 0x88
        ret 0xC
        public_525cf4 : nop
        test eax, eax
        jne public_525d42
        fild dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [esi+0xE0]
        fadd dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        lea edx, ds:[eax*4]
        push edx
        mov dword ptr ds : [esi+0x14], eax
        call public_5b7e84
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0xC], eax
        add esp, 4
        xor eax, eax
        test ecx, ecx
        jle public_525d42
        nop 
        lea esp, ss:[esp]
        public_525d30 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+eax*4], 0
        mov ecx, dword ptr ds : [esi+0x14]
        inc eax
        cmp eax, ecx
        jl public_525d30
        public_525d42 : nop
        mov edi, dword ptr ss : [esp+0x94]
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+0x10]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        push edi
        fld dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x24]
        fchs 
        fstp dword ptr ss : [esp+0xC]
        fxch 
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        call public_54baf0
        test eax, eax
        je public_525de1
        add eax, 0xC
        test eax, eax
        je public_525de1
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_525de1
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_525de1
        call dword ptr ds : [public_5c64a0]
        test al, al
        je public_525de1
        mov byte ptr ds : [esi+0x34], 0
        jmp public_525e07
        public_525de1 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_525e03
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax]
        fcomp dword ptr ds : [public_5d1494]
        fnstsw ax
        test ah, 0x41
        je public_525e03
        mov byte ptr ds : [esi+0x34], 0
        jmp public_525e07
        public_525e03 : nop
        mov byte ptr ds : [esi+0x34], 1
        public_525e07 : nop
        mov al, byte ptr ds : [esi+0x34]
        test al, al
        je public_525e30
        mov ecx, dword ptr ss : [esp+0x9C]
        test ecx, ecx
        je public_525e30
        mov eax, dword ptr ds : [ecx]
        push 0
        push 3
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [eax+4]
        neg al
        sbb al, al
        inc al
        mov byte ptr ds : [esi+0x34], al
        public_525e30 : nop
        fld dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [esi+0x14]
        fld st(0)
        xor edi, edi
        test eax, eax
        fmulp 
        fld dword ptr ds : [public_5d3e6c]
        fmul st, st(1)
        fstp qword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_613858]
        mov byte ptr ds : [esi+0x35], 0
        fst qword ptr ss : [esp+0x1C]
        fld qword ptr ss : [esp+0x38]
        fsub st, st(1)
        fstp qword ptr ss : [esp+0x40]
        fstp st(0)
        jle public_526199
        push ebx
        push ebp
        lea esp, ss:[esp]
        public_525e70 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+edi*4]
        test ecx, ecx
        je public_525ed6
        mov al, byte ptr ds : [ecx+0xAD]
        test al, al
        je public_525ed6
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x20]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ss : [esp+0x40]
        fnstsw ax
        test ah, 0x41
        jne public_526121
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov byte ptr ds : [ecx+0xAD], 0
        public_525ed6 : nop
        mov al, byte ptr ds : [esi+0x34]
        test al, al
        je public_52616d
        mov eax, dword ptr ds : [esi+0xC]
        cmp dword ptr ds : [eax+edi*4], 0
        jne public_525ef7
        mov ecx, esi
        call public_526650
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+edi*4], eax
        public_525ef7 : nop
        mov edx, dword ptr ds : [esi+0xC]
        cmp dword ptr ds : [edx+edi*4], 0
        jne public_525f24
/*FIXUP push offset public_5dd010 @0x525f00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd010
        push 0x986
/*FIXUP push offset public_5dc47c @0x525f0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x525f14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_525f24 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx+edi*4]
        mov al, byte ptr ds : [edx+0xAD]
        test al, al
        je public_525f58
/*FIXUP push offset public_5dcfdc @0x525f34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcfdc
        push 0x988
/*FIXUP push offset public_5dc47c @0x525f3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x525f48*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_525f58 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+0x8C]
        push edx
        mov dword ptr ss : [esp+0x18], ecx
        call dword ptr ds : [public_5c681c]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax]
        add esp, 4
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x58]
        fxch 
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [eax+edi*4]
        lea ecx, ds:[eax+0xB8]
        push ecx
        lea ecx, ds:[eax+0x28]
        call public_4fcef0
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [edx+edi*4]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_525fd4
        push 0
        push eax
        call dword ptr ds : [public_5c6810]
        add esp, 8
        public_525fd4 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+0x18]
        push eax
        mov eax, dword ptr ds : [esi+0xC]
        push ecx
        mov ecx, dword ptr ds : [eax+edi*4]
        lea edx, ss:[esp+0x38]
        push edx
        call public_525200
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx+edi*4]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_526005
        push 1
        push eax
        call dword ptr ds : [public_5c6810]
        add esp, 8
        public_526005 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ebp, dword ptr ds : [eax+edi*4]
        mov eax, dword ptr ss : [ebp+0xC0]
        test eax, eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], edx
        je public_526022
        test byte ptr ds : [eax+8], 2
        je public_52604a
        public_526022 : nop
        mov eax, dword ptr ss : [ebp+0xBC]
        test eax, eax
        je public_526036
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        jne public_52604a
        public_526036 : nop
        mov eax, dword ptr ss : [ebp+0xC4]
        test eax, eax
        je public_52607e
        mov ecx, dword ptr ds : [eax+0xD4]
        test ecx, ecx
        jne public_52607e
        public_52604a : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5dcee0 @0x526050*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcee0
        push 0x87C
/*FIXUP push offset public_5dc47c @0x52605a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x526064*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        lea eax, ss:[ebp+0xB8]
        push eax
        lea ecx, ss:[ebp+0x28]
        call public_4fcef0
        public_52607e : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+4]
        test ebx, ebx
        je public_526101
        mov al, byte ptr ds : [ebx+0x58]
        test al, al
        je public_526101
        lea ecx, ss:[esp+0x5C]
        call public_4215b0
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x80], 0
        call dword ptr ds : [edx+0x1C]
        lea ecx, ds:[ebx+0x54]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x3C], ecx
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_526101
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x3C]
        lea eax, ss:[ebp+0xB8]
        push eax
        lea eax, ss:[esp+0x60]
        push eax
        push ecx
        push ebp
        push edx
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        public_526101 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov byte ptr ds : [ecx+0xAD], 1
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [edx+edi*4]
        mov byte ptr ds : [eax+0xAC], 1
        mov byte ptr ds : [esi+0x35], 1
        jmp public_52618b
        public_526121 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [edx+edi*4]
        mov al, byte ptr ds : [ecx+0xAC]
        test al, al
        je public_52618b
        fld dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 0x41
        jne public_526154
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fsubr qword ptr ss : [esp+0x40]
        fdiv qword ptr ss : [esp+0x24]
        public_526154 : nop
        fst dword ptr ds : [ecx+0xB0]
        fcomp dword ptr ds : [public_5d3e44]
        fnstsw ax
        test ah, 0x41
        jne public_52618b
        mov byte ptr ds : [esi+0x35], 1
        jmp public_52618b
        public_52616d : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [ecx+edi*4]
        test ecx, ecx
        je public_52618b
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x15C]
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+edi*4], 0
        public_52618b : nop
        mov eax, dword ptr ds : [esi+0x14]
        inc edi
        cmp edi, eax
        jl public_525e70
        pop ebp
        pop ebx
        public_526199 : nop
        pop edi
        pop esi
        add esp, 0x88
        ret 0xC
        UNREACHABLE_TRAP(0x525c80)
    }
}

#undef public_525cb0
#undef public_525cce
#undef public_525cd6
#undef public_525cf4
#undef public_525d30
#undef public_525d42
#undef public_525de1
#undef public_525e03
#undef public_525e07
#undef public_525e30
#undef public_525e70
#undef public_525ed6
#undef public_525ef7
#undef public_525f24
#undef public_525f58
#undef public_525fd4
#undef public_526005
#undef public_526022
#undef public_526036
#undef public_52604a
#undef public_52607e
#undef public_526101
#undef public_526121
#undef public_526154
#undef public_52616d
#undef public_52618b
#undef public_526199

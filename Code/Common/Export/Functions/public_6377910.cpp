#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377910);
CLANG_FORWARD_PROC_SYMBOL(public_6377de0);
CLANG_FORWARD_PROC_SYMBOL(public_6377e10);

#define public_637794d _public_637794d
#define public_6377951 _public_6377951
#define public_637795a _public_637795a
#define public_6377964 _public_6377964
#define public_637797d _public_637797d
#define public_63779a5 _public_63779a5
#define public_63779da _public_63779da
#define public_6377a10 _public_6377a10
#define public_6377a65 _public_6377a65
#define public_6377a6b _public_6377a6b
#define public_6377a7b _public_6377a7b
#define public_6377a83 _public_6377a83
#define public_6377a96 _public_6377a96
#define public_6377aad _public_6377aad
#define public_6377aec _public_6377aec
#define public_6377b2e _public_6377b2e
#define public_6377b3c _public_6377b3c
#define public_6377b45 _public_6377b45
#define public_6377b70 _public_6377b70
#define public_6377ba5 _public_6377ba5
#define public_6377bc3 _public_6377bc3
#define public_6377bd9 _public_6377bd9
#define public_6377bdf _public_6377bdf
#define public_6377bef _public_6377bef
#define public_6377bf7 _public_6377bf7
#define public_6377c07 _public_6377c07
#define public_6377c0b _public_6377c0b
#define public_6377c2b _public_6377c2b
#define public_6377c42 _public_6377c42
#define public_6377c58 _public_6377c58
#define public_6377c65 _public_6377c65
#define public_6377c87 _public_6377c87
#define public_6377cae _public_6377cae
#define public_6377cc3 _public_6377cc3
#define public_6377cd4 _public_6377cd4
#define public_6377ce4 _public_6377ce4

PROC_DECLARE(0x6377910, internal_6377910, public_6377910);
extern "C" NAKED register_t __cdecl internal_6377910()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        mov edx, dword ptr ds : [public_658b250]
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [public_658b050]
        test edx, edx
        push esi
        mov ecx, eax
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6377951
        mov edx, dword ptr ds : [public_658b19c]
        test edx, edx
        jne public_637794d
        mov edx, dword ptr ds : [public_658b1a0]
        test edx, edx
        je public_6377951
        public_637794d : nop
        inc dword ptr ss : [esp+0x14]
        public_6377951 : nop
        cmp byte ptr ds : [eax], 0
        je public_6377c65
        public_637795a : nop
        cmp byte ptr ds : [ecx], 0x2D
        jne public_6377964
        inc ecx
        mov dword ptr ss : [esp+0x10], ecx
        public_6377964 : nop
        mov al, byte ptr ds : [ecx]
        cmp al, 0x50
        jne public_6377a96
        inc ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov bl, byte ptr ds : [ecx]
        test bl, bl
        je public_6377c2b
        public_637797d : nop
        movsx esi, bl
        inc ecx
        push esi
        mov dword ptr ss : [esp+0x14], ecx
        call dword ptr ds : [public_63992a0]
        add esp, 4
        test eax, eax
        jne public_6377c2b
        cmp bl, 0x64
        je public_63779a5
        cmp bl, 0x44
        jne public_6377a83
        public_63779a5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        movsx ecx, byte ptr ds : [eax]
        push ecx
        call dword ptr ds : [public_639929c]
        add esp, 4
        test eax, eax
        jne public_63779da
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_658b7fc]
        dec edx
        push edx
        push esi
/*FIXUP push offset public_63f2dd0 @0x63779c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2dd0
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        jmp public_6377a83
        public_63779da : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        call public_6377e10
        mov edi, eax
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 8
        cmp edi, eax
        jl public_6377a10
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push esi
        push edi
/*FIXUP push offset public_63f2d88 @0x63779ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2d88
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        jmp public_6377a83
        public_6377a10 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp byte ptr ds : [eax], 0x3A
        jne public_6377a65
        lea ecx, ss:[esp+0x10]
        inc eax
        push ecx
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call public_6377de0
        fst qword ptr ss : [esp+0x20]
        fld st(0)
        add esp, 8
        fabs 
        fcomp qword ptr ds : [public_63a5940]
        fnstsw ax
        test ah, 0x41
        jne public_6377a6b
        mov edx, dword ptr ss : [esp+0x1C]
        fstp st(0)
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_658b7fc]
        push esi
        push edx
        push eax
/*FIXUP push offset public_63f2d3c @0x6377a54*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2d3c
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        jmp public_6377a83
        public_6377a65 : nop
        fld qword ptr ds : [public_63a58b0]
        public_6377a6b : nop
        cmp bl, 0x64
        jne public_6377a7b
        mov edx, dword ptr ds : [public_658b67c]
        fstp qword ptr ds : [edx+edi*8]
        jmp public_6377a83
        public_6377a7b : nop
        mov eax, dword ptr ds : [public_658b678]
        fstp qword ptr ds : [eax+edi*8]
        public_6377a83 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov bl, byte ptr ds : [ecx]
        test bl, bl
        jne public_637797d
        jmp public_6377c2b
        public_6377a96 : nop
        cmp al, 0x51
        jne public_6377c07
        inc ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov al, byte ptr ds : [ecx]
        test al, al
        je public_6377c2b
        public_6377aad : nop
        mov bl, al
        movsx esi, bl
        inc ecx
        push esi
        mov dword ptr ss : [esp+0x14], ecx
        call dword ptr ds : [public_63992a0]
        add esp, 4
        test eax, eax
        jne public_6377c2b
        cmp bl, 0x62
        mov ecx, dword ptr ss : [esp+0x10]
        jne public_6377b3c
        mov al, byte ptr ds : [ecx]
        cmp al, 0x42
        jne public_6377b2e
        inc ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        lea eax, ds:[ecx-1]
        je public_6377bf7
        public_6377aec : nop
        mov ecx, dword ptr ds : [public_658b684]
        mov dword ptr ds : [ecx+eax*8], 0
        mov edx, dword ptr ds : [public_658b684]
        mov dword ptr ds : [edx+eax*8+4], 0xBFE00000
        mov ecx, dword ptr ds : [public_658b680]
        mov dword ptr ds : [ecx+eax*8], 0
        mov edx, dword ptr ds : [public_658b680]
        mov ecx, eax
        mov dword ptr ds : [edx+eax*8+4], 0x3FE00000
        dec eax
        test ecx, ecx
        jne public_6377aec
        jmp public_6377bf7
        public_6377b2e : nop
        cmp al, 0x62
        jne public_6377b45
        inc ecx
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_6377bf7
        public_6377b3c : nop
        cmp bl, 0x42
        jne public_6377bf7
        public_6377b45 : nop
        movsx edx, byte ptr ds : [ecx]
        push edx
        call dword ptr ds : [public_639929c]
        add esp, 4
        test eax, eax
        jne public_6377b70
        mov eax, dword ptr ds : [public_658b7fc]
        push esi
/*FIXUP push offset public_63f2cf8 @0x6377b5c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2cf8
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        jmp public_6377bf7
        public_6377b70 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        call public_6377e10
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        cmp edi, eax
        jl public_6377ba5
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push esi
        push edi
/*FIXUP push offset public_63f2cb4 @0x6377b94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2cb4
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        jmp public_6377bf7
        public_6377ba5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp byte ptr ds : [eax], 0x3A
        jne public_6377bc3
        lea ecx, ss:[esp+0x10]
        inc eax
        push ecx
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call public_6377de0
        add esp, 8
        jmp public_6377bdf
        public_6377bc3 : nop
        cmp bl, 0x62
        jne public_6377bd9
        fld qword ptr ds : [public_63a5988]
        mov edx, dword ptr ds : [public_658b684]
        fstp qword ptr ds : [edx+edi*8]
        jmp public_6377bf7
        public_6377bd9 : nop
        fld qword ptr ds : [public_63a5980]
        public_6377bdf : nop
        cmp bl, 0x62
        jne public_6377bef
        mov edx, dword ptr ds : [public_658b684]
        fstp qword ptr ds : [edx+edi*8]
        jmp public_6377bf7
        public_6377bef : nop
        mov eax, dword ptr ds : [public_658b680]
        fstp qword ptr ds : [eax+edi*8]
        public_6377bf7 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [ecx]
        test al, al
        jne public_6377aad
        jmp public_6377c2b
        public_6377c07 : nop
        test al, al
        je public_6377c2b
        public_6377c0b : nop
        movsx ecx, al
        push ecx
        call dword ptr ds : [public_63992a0]
        add esp, 4
        test eax, eax
        jne public_6377c2b
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        mov al, byte ptr ds : [eax]
        test al, al
        jne public_6377c0b
        public_6377c2b : nop
        mov edx, dword ptr ss : [esp+0x10]
        movsx eax, byte ptr ds : [edx]
        mov esi, dword ptr ds : [public_63992a0]
        push eax
        call esi
        add esp, 4
        test eax, eax
        je public_6377c58
        public_6377c42 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        movsx ecx, byte ptr ds : [eax]
        push ecx
        call esi
        add esp, 4
        test eax, eax
        jne public_6377c42
        public_6377c58 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp byte ptr ds : [ecx], 0
        jne public_637795a
        public_6377c65 : nop
        mov edx, dword ptr ds : [public_658b24c]
        mov eax, edx
        dec edx
        test eax, eax
        je public_6377ce4
        mov eax, dword ptr ds : [public_658b678]
        mov esi, dword ptr ds : [public_658b67c]
        lea ecx, ds:[eax+edx*8]
        sub esi, eax
        mov edi, 1
        public_6377c87 : nop
        fld qword ptr ds : [esi+ecx]
        fcomp qword ptr ds : [public_63a5930]
        fnstsw ax
        test ah, 0x41
        jne public_6377cae
        mov dword ptr ds : [public_658b068], edi
        fld qword ptr ds : [ecx]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        jne public_6377cd4
        jmp public_6377cc3
        public_6377cae : nop
        fld qword ptr ds : [ecx]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_6377cc3
        mov dword ptr ds : [public_658b068], edi
        public_6377cc3 : nop
        mov eax, edx
        dec edx
        sub ecx, 8
        test eax, eax
        jne public_6377c87
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6377cd4 : nop
        mov dword ptr ds : [public_658b1f0], edi
        mov dword ptr ds : [public_658b068], 0
        public_6377ce4 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6377910)
    }
}

#undef public_637794d
#undef public_6377951
#undef public_637795a
#undef public_6377964
#undef public_637797d
#undef public_63779a5
#undef public_63779da
#undef public_6377a10
#undef public_6377a65
#undef public_6377a6b
#undef public_6377a7b
#undef public_6377a83
#undef public_6377a96
#undef public_6377aad
#undef public_6377aec
#undef public_6377b2e
#undef public_6377b3c
#undef public_6377b45
#undef public_6377b70
#undef public_6377ba5
#undef public_6377bc3
#undef public_6377bd9
#undef public_6377bdf
#undef public_6377bef
#undef public_6377bf7
#undef public_6377c07
#undef public_6377c0b
#undef public_6377c2b
#undef public_6377c42
#undef public_6377c58
#undef public_6377c65
#undef public_6377c87
#undef public_6377cae
#undef public_6377cc3
#undef public_6377cd4
#undef public_6377ce4

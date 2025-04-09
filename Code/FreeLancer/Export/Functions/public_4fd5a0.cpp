#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fd5a0);

#define public_4fd5c5 _public_4fd5c5
#define public_4fd5f0 _public_4fd5f0
#define public_4fd5f7 _public_4fd5f7
#define public_4fd617 _public_4fd617
#define public_4fd61b _public_4fd61b
#define public_4fd620 _public_4fd620
#define public_4fd630 _public_4fd630
#define public_4fd672 _public_4fd672
#define public_4fd68b _public_4fd68b
#define public_4fd6b6 _public_4fd6b6
#define public_4fd6d7 _public_4fd6d7
#define public_4fd6f0 _public_4fd6f0
#define public_4fd715 _public_4fd715
#define public_4fd71d _public_4fd71d
#define public_4fd76d _public_4fd76d
#define public_4fd775 _public_4fd775
#define public_4fd7a5 _public_4fd7a5
#define public_4fd7d5 _public_4fd7d5
#define public_4fd7f6 _public_4fd7f6
#define public_4fd817 _public_4fd817
#define public_4fd880 _public_4fd880
#define public_4fd8aa _public_4fd8aa
#define public_4fd8bc _public_4fd8bc

PROC_DECLARE(0x4fd5a0, internal_4fd5a0, public_4fd5a0);
extern "C" NAKED register_t __cdecl internal_4fd5a0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        mov ecx, esi
        mov dword ptr ss : [esp+8], ebx
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4fd8bc
        push ebp
        mov ebp, dword ptr ds : [public_5c6698]
        push edi
/*FIXUP public_4fd5c5 : nop
        push offset public_5c866c @0x4fd5c5*/
  FIXUP public_4fd5c5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_4fd68b
        mov ecx, esi
        call ebp
        mov dword ptr ss : [esp+0x18], eax
        xor eax, eax
        mov ebp, offset public_612a68
        lea esp, ss:[esp]
        public_4fd5f0 : nop
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp]
        public_4fd5f7 : nop
        mov bl, byte ptr ds : [ecx]
        mov dl, bl
        cmp bl, byte ptr ds : [edi]
        jne public_4fd61b
        test dl, dl
        je public_4fd617
        mov bl, byte ptr ds : [ecx+1]
        mov dl, bl
        cmp bl, byte ptr ds : [edi+1]
        jne public_4fd61b
        add ecx, 2
        add edi, 2
        test dl, dl
        jne public_4fd5f7
        public_4fd617 : nop
        xor ecx, ecx
        jmp public_4fd620
        public_4fd61b : nop
        sbb ecx, ecx
        sbb ecx, 0xFFFFFFFF
        public_4fd620 : nop
        test ecx, ecx
        je public_4fd630
        add ebp, 0x28
        inc eax
        cmp ebp, offset public_6131c0
        jl public_4fd5f0
        public_4fd630 : nop
        cmp eax, 0x2F
        jl public_4fd672
/*FIXUP push offset public_5da3d0 @0x4fd635*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da3d0
        push 0x4C
/*FIXUP push offset public_5da39c @0x4fd63c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da39c
        mov eax, 0x100002
/*FIXUP push offset public_5c7418 @0x4fd646*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7418
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
/*FIXUP push offset public_5da390 @0x4fd656*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da390
        mov ecx, esi
        call dword ptr ds : [public_5c6038]
        mov ebp, dword ptr ds : [public_5c6698]
        mov ebx, dword ptr ss : [esp+0x10]
        jmp public_4fd8aa
        public_4fd672 : nop
        mov ebp, dword ptr ds : [public_5c6698]
        lea ecx, ds:[eax+eax*4]
        lea ebx, ds : [ecx*8+public_612a68]
        mov dword ptr ss : [esp+0x10], ebx
        jmp public_4fd8aa
        public_4fd68b : nop
        test ebx, ebx
        je public_4fd8aa
/*FIXUP push offset public_5cabec @0x4fd693*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cabec
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_4fd6b6
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [ebx+4]
        jmp public_4fd8aa
/*FIXUP public_4fd6b6 : nop
        push offset public_5da37c @0x4fd6b6*/
  FIXUP public_4fd6b6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da37c
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_4fd6d7
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [ebx+8]
        jmp public_4fd8aa
/*FIXUP public_4fd6d7 : nop
        push offset public_5da370 @0x4fd6d7*/
  FIXUP public_4fd6d7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da370
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_4fd71d
        mov edi, 1
        nop 
        lea esp, ss:[esp]
        public_4fd6f0 : nop
        mov edx, dword ptr ds : [edi*4+public_6131e8]
        push edx
        mov ecx, esi
        call ebp
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_4fd715
        inc edi
        cmp edi, 7
        jl public_4fd6f0
        jmp public_4fd8aa
        public_4fd715 : nop
        mov dword ptr ds : [ebx+0xC], edi
        jmp public_4fd8aa
/*FIXUP public_4fd71d : nop
        push offset public_5d6e4c @0x4fd71d*/
  FIXUP public_4fd71d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6e4c
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_4fd775
        push 0
        call dword ptr ds : [public_5c6cfc]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4fd76d
        mov ecx, dword ptr ds : [ebx]
        fstp st(0)
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x7C
/*FIXUP push offset public_5da39c @0x4fd752*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da39c
        mov eax, 0x100001
/*FIXUP push offset public_5da334 @0x4fd75c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da334
        push eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [public_5c75dc]
        add esp, 0x14
        public_4fd76d : nop
        fstp dword ptr ds : [ebx+0x10]
        jmp public_4fd8aa
/*FIXUP public_4fd775 : nop
        push offset public_5da328 @0x4fd775*/
  FIXUP public_4fd775 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da328
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_4fd7a5
        call ebp
/*FIXUP push offset public_5da318 @0x4fd788*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da318
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        neg eax
        sbb al, al
        inc al
        mov byte ptr ds : [ebx+0x14], al
        jmp public_4fd8aa
/*FIXUP public_4fd7a5 : nop
        push offset public_5da310 @0x4fd7a5*/
  FIXUP public_4fd7a5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da310
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_4fd7d5
        call ebp
/*FIXUP push offset public_5da2fc @0x4fd7b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da2fc
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        neg eax
        sbb al, al
        inc al
        mov byte ptr ds : [ebx+0x15], al
        jmp public_4fd8aa
/*FIXUP public_4fd7d5 : nop
        push offset public_5da2f0 @0x4fd7d5*/
  FIXUP public_4fd7d5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da2f0
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_4fd7f6
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [ebx+0x18]
        jmp public_4fd8aa
/*FIXUP public_4fd7f6 : nop
        push offset public_5da2ec @0x4fd7f6*/
  FIXUP public_4fd7f6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da2ec
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_4fd817
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [ebx+0x1C]
        jmp public_4fd8aa
/*FIXUP public_4fd817 : nop
        push offset public_5da2e4 @0x4fd817*/
  FIXUP public_4fd817 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da2e4
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_4fd880
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [ebx+0x20]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fst dword ptr ds : [ebx+0x24]
        fcomp dword ptr ds : [ebx+0x20]
        fnstsw ax
        test ah, 5
        jp public_4fd8aa
/*FIXUP push offset public_5da2c8 @0x4fd84a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da2c8
        push 0xC1
/*FIXUP push offset public_5da39c @0x4fd854*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da39c
        mov eax, 0x100002
/*FIXUP push offset public_5c7418 @0x4fd85e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7418
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
/*FIXUP push offset public_5da390 @0x4fd86e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da390
        mov ecx, esi
        call dword ptr ds : [public_5c6038]
        jmp public_4fd8aa
        lea ecx, ds:[ecx]
        public_4fd880 : nop
        mov edi, 0x100001
        call dword ptr ds : [public_5c64b4]
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push ecx
        push 0xC7
/*FIXUP push offset public_5da39c @0x4fd89a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da39c
/*FIXUP push offset public_5da288 @0x4fd89f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da288
        push edi
        call dword ptr ds : [edx]
        add esp, 0x18
        public_4fd8aa : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_4fd5c5
        pop edi
        pop ebp
        public_4fd8bc : nop
        xor eax, eax
        test ebx, ebx
        pop esi
        setne al
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4fd5a0)
    }
}

#undef public_4fd5c5
#undef public_4fd5f0
#undef public_4fd5f7
#undef public_4fd617
#undef public_4fd61b
#undef public_4fd620
#undef public_4fd630
#undef public_4fd672
#undef public_4fd68b
#undef public_4fd6b6
#undef public_4fd6d7
#undef public_4fd6f0
#undef public_4fd715
#undef public_4fd71d
#undef public_4fd76d
#undef public_4fd775
#undef public_4fd7a5
#undef public_4fd7d5
#undef public_4fd7f6
#undef public_4fd817
#undef public_4fd880
#undef public_4fd8aa
#undef public_4fd8bc

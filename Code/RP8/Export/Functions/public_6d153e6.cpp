#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2b2);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2b8);

#define public_6d15469 _public_6d15469
#define public_6d1547f _public_6d1547f
#define public_6d154a4 _public_6d154a4
#define public_6d154b3 _public_6d154b3
#define public_6d1552a _public_6d1552a
#define public_6d15547 _public_6d15547
#define public_6d15570 _public_6d15570
#define public_6d15599 _public_6d15599
#define public_6d155c2 _public_6d155c2
#define public_6d155c7 _public_6d155c7
#define public_6d15606 _public_6d15606

PROC_DECLARE(0x6d153e6, internal_6d153e6, public_6d153e6);
extern "C" NAKED register_t __cdecl internal_6d153e6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x628
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x170]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d15469
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x620]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x620], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x620]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x620], eax
/*FIXUP push offset public_6d6aa68 @0x6d1543b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aa68
        push 0x12D3
/*FIXUP push offset public_6d6aab0 @0x6d15445*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aab0
/*FIXUP push offset public_6d6aafc @0x6d1544a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aafc
        mov ecx, dword ptr ss : [ebp-0x620]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d15606
        public_6d15469 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x3EC], 0
        jne public_6d1547f
        mov eax, 0xFFFFFFFD
        jmp public_6d15606
        public_6d1547f : nop
        fld dword ptr ss : [ebp+0x10]
        fdivr qword ptr ds : [public_6d5e498]
        fstp dword ptr ss : [ebp-0x614]
        mov dword ptr ss : [ebp-0x610], 0x477FFF00
        mov dword ptr ss : [ebp-0x60C], 0
        jmp public_6d154b3
        public_6d154a4 : nop
        mov ecx, dword ptr ss : [ebp-0x60C]
        add ecx, 1
        mov dword ptr ss : [ebp-0x60C], ecx
        public_6d154b3 : nop
        cmp dword ptr ss : [ebp-0x60C], 0x100
        jae public_6d155c7
        mov edx, dword ptr ss : [ebp-0x60C]
        mov dword ptr ss : [ebp-0x628], edx
        mov dword ptr ss : [ebp-0x624], 0
        fild qword ptr ss : [ebp-0x628]
        fdiv qword ptr ds : [public_6d5e4b0]
        fstp dword ptr ss : [ebp-0x61C]
        fld dword ptr ss : [ebp+0x14]
        fld dword ptr ss : [ebp+0x18]
        fmul dword ptr ss : [ebp-0x61C]
        fadd dword ptr ss : [ebp+0x1C]
        fld dword ptr ss : [ebp-0x614]
        call public_6d2f2b8
        faddp 
        fstp dword ptr ss : [ebp-0x618]
        fld dword ptr ss : [ebp-0x618]
        fcomp dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 5
        jp public_6d1552a
        mov dword ptr ss : [ebp-0x618], 0
        public_6d1552a : nop
        fld dword ptr ss : [ebp-0x618]
        fcomp dword ptr ds : [public_6d5e488]
        fnstsw ax
        test ah, 0x41
        jne public_6d15547
        mov dword ptr ss : [ebp-0x618], 0x3F800000
        public_6d15547 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        and eax, 1
        test eax, eax
        je public_6d15570
        fld dword ptr ss : [ebp-0x618]
        fmul dword ptr ss : [ebp-0x610]
        call public_6d2f2b2
        mov ecx, dword ptr ss : [ebp-0x60C]
        mov word ptr ss : [ebp+ecx*2-0x608], ax
        public_6d15570 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 2
        test edx, edx
        je public_6d15599
        fld dword ptr ss : [ebp-0x618]
        fmul dword ptr ss : [ebp-0x610]
        call public_6d2f2b2
        mov ecx, dword ptr ss : [ebp-0x60C]
        mov word ptr ss : [ebp+ecx*2-0x408], ax
        public_6d15599 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        and edx, 4
        test edx, edx
        je public_6d155c2
        fld dword ptr ss : [ebp-0x618]
        fmul dword ptr ss : [ebp-0x610]
        call public_6d2f2b2
        mov ecx, dword ptr ss : [ebp-0x60C]
        mov word ptr ss : [ebp+ecx*2-0x208], ax
        public_6d155c2 : nop
        jmp public_6d154a4
        public_6d155c7 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [edx+0x170]
        shr al, 1
        and al, 1
        xor ecx, ecx
        mov cl, al
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov dword ptr ss : [ebp-4], ecx
        lea edx, ss:[ebp-0x608]
        push edx
        mov eax, dword ptr ss : [ebp-4]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x11C]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x11C]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x48]
        xor eax, eax
        public_6d15606 : nop
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d153e6)
    }
}

#undef public_6d15469
#undef public_6d1547f
#undef public_6d154a4
#undef public_6d154b3
#undef public_6d1552a
#undef public_6d15547
#undef public_6d15570
#undef public_6d15599
#undef public_6d155c2
#undef public_6d155c7
#undef public_6d15606

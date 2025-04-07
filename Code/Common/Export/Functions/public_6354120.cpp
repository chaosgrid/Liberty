#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_6347df0);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);
CLANG_FORWARD_PROC_SYMBOL(public_6354120);
CLANG_FORWARD_PROC_SYMBOL(public_6365d50);
CLANG_FORWARD_PROC_SYMBOL(public_6365df0);

#define public_6354163 _public_6354163
#define public_63541fa _public_63541fa
#define public_63545c2 _public_63545c2
#define public_63545c4 _public_63545c4
#define public_63545eb _public_63545eb
#define public_6354613 _public_6354613
#define public_63546ad _public_63546ad
#define public_63546d2 _public_63546d2
#define public_6354756 _public_6354756
#define public_635475a _public_635475a
#define public_6354863 _public_6354863
#define public_63548c2 _public_63548c2

PROC_DECLARE(0x6354120, internal_6354120, public_6354120);
extern "C" NAKED register_t __cdecl internal_6354120()
{
    __asm
    {
        sub esp, 0x2B8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C4]
        push esi
        push edi
        mov edi, ecx
        fld dword ptr ds : [edi+0x44]
        mov esi, dword ptr ds : [edi+0x40]
        fmul dword ptr ds : [edi+0x54]
        fmul dword ptr ss : [ebp]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a5610]
        fnstsw ax
        test ah, 1
        je public_6354163
        fld dword ptr ds : [public_63a53d4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2B8
        ret 4
/*FIXUP public_6354163 : nop
        push offset _public_6261260 @0x6354163*/
  FIXUP public_6354163 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea eax, ss:[esp+0xE8]
        push eax
        call public_6273bc0
/*FIXUP push offset _public_6261260 @0x6354179*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea ecx, ss:[esp+0x120]
        push ecx
        call public_6273bc0
/*FIXUP push offset _public_6261260 @0x635418f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea edx, ss:[esp+0x150]
        push edx
        call public_6273bc0
/*FIXUP push offset _public_6261260 @0x63541a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea eax, ss:[esp+0x180]
        push eax
        call public_6273bc0
        mov ebx, dword ptr ds : [esi+0x70]
        test ebx, ebx
        mov edx, dword ptr ds : [esi+0x74]
        mov dword ptr ss : [esp+0x30], edx
        je public_635475a
        mov ecx, dword ptr ds : [ebx+0x10]
        test ecx, ecx
        je public_635475a
        test edx, edx
        jne public_635475a
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_63541fa
        fld dword ptr ds : [eax+0x54]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        je public_635475a
        public_63541fa : nop
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+0x74]
        fld dword ptr ds : [ecx+eax*4+8]
        mov dword ptr ss : [esp+0x38], edx
        fstp dword ptr ss : [esp+0x90]
        fld dword ptr ds : [ecx+eax*4+0x18]
        fstp dword ptr ss : [esp+0x94]
        fld dword ptr ds : [ecx+eax*4+0x28]
        lea ecx, ss:[esp+0x80]
        push ecx
        fstp dword ptr ss : [esp+0x9C]
        mov ecx, dword ptr ds : [edx+0x8C]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+0x98]
        lea eax, ss:[esp+0x94]
        push eax
        add ecx, 0xF4
        call public_6348580
        push esi
        lea eax, ss:[esp+0x84]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_628bed0
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fcomp dword ptr ds : [public_63a5604]
        fnstsw ax
        test ah, 1
        jne public_6354756
        lea ecx, ss:[esp+0x40]
        call public_6347ef0
        push esi
        lea ecx, ss:[esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x70]
        call public_628bed0
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [esi+0x80]
        push 0
        fld dword ptr ss : [esp+0x48]
        lea edx, ss:[esp+0x6C]
        fmul dword ptr ds : [esi+0x7C]
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        faddp 
        add esi, 0x20
        fld dword ptr ss : [esp+0x4C]
        push esi
        fmul dword ptr ds : [esi+0x58]
        push 0
        push ebx
        lea ecx, ss:[esp+0xB8]
        faddp 
        fstp dword ptr ss : [esp+0x7C]
        fld dword ptr ss : [esp+0x88]
        fmul dword ptr ds : [esi+0x60]
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ds : [esi+0x5C]
        faddp 
        fld dword ptr ss : [esp+0x80]
        fmul dword ptr ds : [esi+0x58]
        faddp 
        fstp dword ptr ss : [esp+0x90]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ds : [esi+0x70]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [esi+0x6C]
        faddp 
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [esi+0x68]
        faddp 
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x88]
        fmul dword ptr ds : [esi+0x70]
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ds : [esi+0x6C]
        faddp 
        fld dword ptr ss : [esp+0x80]
        fmul dword ptr ds : [esi+0x68]
        faddp 
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [edi+0x3C]
        fld dword ptr ss : [esp+0x7C]
        fmul dword ptr ds : [edi+0x38]
        faddp 
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [edi+0x3C]
        fld dword ptr ss : [esp+0x90]
        fmul dword ptr ds : [edi+0x38]
        faddp 
        fstp dword ptr ss : [esp+0x94]
        call public_6365d50
        mov ecx, dword ptr ss : [esp+0x188]
        mov edx, dword ptr ss : [esp+0x1A8]
/*FIXUP push offset _public_6261260 @0x635438c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea eax, ss:[esp+0x234]
        push eax
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x3C], edx
        call public_6273bc0
/*FIXUP push offset _public_6261260 @0x63543aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea ecx, ss:[esp+0x264]
        push ecx
        call public_6273bc0
/*FIXUP push offset _public_6261260 @0x63543c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 3
        push 0x10
        lea edx, ss:[esp+0x294]
        push edx
        call public_6273bc0
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ecx+0x8C]
        push 0
        push 0
        lea eax, ss:[esp+0x70]
        push eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+0x98]
        push esi
        push 0
        push ecx
        lea ecx, ss:[esp+0x1CC]
        call public_6365d50
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [ebp+4]
        fsub dword ptr ss : [esp+0x1A4]
        fld dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [ebp+4]
        fsub dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x174]
        fmul dword ptr ss : [esp+0x188]
        fld dword ptr ss : [esp+0x178]
        fmul dword ptr ss : [esp+0x178]
        fsubp 
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a5658]
        fnstsw ax
        test ah, 1
        jne public_63548c2
        fdivr dword ptr ds : [public_63a53d0]
        fld dword ptr ss : [esp+0x188]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x178]
        fmul st, st(1)
        fchs 
        fst dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x174]
        fld dword ptr ss : [esp+0x58]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x54]
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x5C]
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [esi+8]
        fstp st(0)
        add eax, 0x48
        fstp st(0)
        mov ecx, edx
        fld dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0x2C], edx
        fmul dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x88]
        fmul dword ptr ss : [esp+0x70]
        faddp 
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ss : [esp+0x6C]
        faddp 
        fabs 
        fmul dword ptr ss : [esp+0x10]
        fdiv dword ptr ss : [esp+0x288]
        fadd dword ptr ds : [public_63a53d0]
        fmul dword ptr ds : [public_63a559c]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax+0x5C], ecx
        mov edx, dword ptr ds : [edx+0xFC]
        mov dword ptr ds : [eax+0x60], edx
        mov eax, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [eax+0x64]
        test ecx, ecx
        je public_6354613
        fadd dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_63545eb
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_6347df0
        fmul dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x3C]
        add esp, 4
        fmul dword ptr ss : [esp+0x14]
        fld st(0)
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        fld st(0)
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        fdiv dword ptr ss : [esp+0x18]
        fld st(0)
        fmul dword ptr ds : [edi+0x38]
        fstp dword ptr ds : [edi+0x38]
        fld st(0)
        fmul dword ptr ds : [edi+0x3C]
        fstp dword ptr ds : [edi+0x3C]
        mov eax, dword ptr ds : [edx+0x8C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0x98]
        fld dword ptr ds : [edx+0x40]
        mov eax, dword ptr ds : [ebx+0x10]
        fld dword ptr ds : [public_63a53d0]
        fsub st, st(2)
        fmulp 
        fmul dword ptr ds : [edi+0x54]
        fstp dword ptr ds : [eax+0x58]
        public_63545c2 : nop
        fstp st(0)
        public_63545c4 : nop
        lea edx, ss:[esp+0x1C]
        push edx
        push 0
        push ebx
        lea ecx, ss:[esp+0xAC]
        call public_6365df0
        fld dword ptr ds : [public_63a53d4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2B8
        ret 4
        public_63545eb : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_63a5460]
        fld st(0)
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [ecx+0x58], 0
        jmp public_63545c4
        public_6354613 : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x2C]
        fld st(0)
        fmul dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 0x41
        jne public_63545c2
        fadd dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x34]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 0x41
        jne public_63546ad
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call public_6347df0
        fmul dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x3C]
        add esp, 4
        fld st(0)
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        fld st(0)
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        fld st(0)
        fmul dword ptr ds : [edi+0x38]
        fstp dword ptr ds : [edi+0x38]
        fld st(0)
        fmul dword ptr ds : [edi+0x3C]
        fstp dword ptr ds : [edi+0x3C]
        mov ecx, dword ptr ds : [eax+0x8C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+0x98]
        fld dword ptr ds : [eax+0x40]
        mov ecx, dword ptr ds : [ebx+0x10]
        fld dword ptr ds : [public_63a53d0]
        fsub st, st(2)
        fmulp 
        fmul dword ptr ds : [edi+0x54]
        fstp dword ptr ds : [ecx+0x58]
        jmp public_63545c2
        public_63546ad : nop
        fld dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x34], edx
        fsqrt 
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_63546d2
        fchs 
        public_63546d2 : nop
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+0x8C]
        fmul dword ptr ds : [public_63edcd0]
        mov edx, dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [edx+0x98]
        fmul dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx+0x10]
        fdivp 
        fld dword ptr ds : [eax+0x40]
        fld dword ptr ds : [public_63a53d0]
        fsub st, st(2)
        fmulp 
        fmul dword ptr ds : [edi+0x54]
        fmul dword ptr ds : [public_63a559c]
        fstp dword ptr ds : [ecx+0x58]
        fcom dword ptr ds : [public_63a53d0]
        fnstsw ax
        test ah, 1
        je public_63545c2
        fmul dword ptr ss : [esp+0x7C]
        fld st(0)
        fmul dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x64]
        faddp 
        fstp dword ptr ds : [edi+0x38]
        fmul dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fstp dword ptr ds : [edi+0x3C]
        jmp public_63545c4
        public_6354756 : nop
        mov edx, dword ptr ss : [esp+0x30]
        public_635475a : nop
        push 0
        lea eax, ds:[esi+0x88]
        push eax
        lea ecx, ds:[esi+0x78]
        push ecx
        add esi, 0x20
        push esi
        push edx
        push ebx
        lea ecx, ss:[esp+0xB8]
        call public_6365d50
        fld dword ptr ss : [ebp+4]
        fmul dword ptr ds : [edi+0x38]
        fsub dword ptr ss : [esp+0x1A4]
        fld dword ptr ss : [ebp+4]
        fmul dword ptr ds : [edi+0x3C]
        fsub dword ptr ss : [esp+0x1A8]
        fld dword ptr ss : [esp+0x174]
        fmul dword ptr ss : [esp+0x188]
        fld dword ptr ss : [esp+0x178]
        fmul dword ptr ss : [esp+0x178]
        fsubp 
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a5658]
        fnstsw ax
        test ah, 1
        jne public_63548c2
        fdivr dword ptr ds : [public_63a53d0]
        fld dword ptr ss : [esp+0x188]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x178]
        fmul st, st(1)
        fchs 
        fst dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x174]
        fld dword ptr ss : [esp+0x58]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x54]
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x5C]
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fst dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6354863
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6347df0
        fmul dword ptr ss : [esp+0x18]
        add esp, 4
        fld st(0)
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        public_6354863 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        push ebx
        lea ecx, ss:[esp+0xAC]
        call public_6365df0
        fld dword ptr ds : [edi+0x3C]
        fld dword ptr ds : [edi+0x38]
        fld dword ptr ss : [ebp]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        fmul dword ptr ss : [esp+0x10]
        fmulp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fmul dword ptr ds : [public_63a5460]
        fld st(0)
        fsub dword ptr ds : [edi+0x50]
        fstp dword ptr ss : [esp+0x34]
        fstp dword ptr ds : [edi+0x50]
        pop edi
        fld dword ptr ss : [esp+0x30]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2B8
        ret 4
        public_63548c2 : nop
        pop edi
        fstp st(0)
        pop esi
        fstp st(0)
        pop ebp
        fstp st(0)
        fld dword ptr ds : [public_63a53d4]
        pop ebx
        add esp, 0x2B8
        ret 4
        UNREACHABLE_TRAP(0x6354120)
    }
}

#undef public_6354163
#undef public_63541fa
#undef public_63545c2
#undef public_63545c4
#undef public_63545eb
#undef public_6354613
#undef public_63546ad
#undef public_63546d2
#undef public_6354756
#undef public_635475a
#undef public_6354863
#undef public_63548c2

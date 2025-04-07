#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_634d8d0);
CLANG_FORWARD_PROC_SYMBOL(public_634d970);
CLANG_FORWARD_PROC_SYMBOL(public_634d9d0);
CLANG_FORWARD_PROC_SYMBOL(public_635de90);
CLANG_FORWARD_PROC_SYMBOL(public_635f180);
CLANG_FORWARD_PROC_SYMBOL(public_63694a0);
CLANG_FORWARD_PROC_SYMBOL(public_6369720);

#define public_635f441 _public_635f441
#define public_635f4a6 _public_635f4a6
#define public_635f4ad _public_635f4ad
#define public_635f636 _public_635f636
#define public_635f686 _public_635f686
#define public_635f7b4 _public_635f7b4
#define public_635f7f9 _public_635f7f9
#define public_635f886 _public_635f886
#define public_635f8b1 _public_635f8b1

PROC_DECLARE(0x635f180, internal_635f180, public_635f180);
extern "C" NAKED register_t __cdecl internal_635f180()
{
    __asm
    {
        sub esp, 0xC28
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC3C]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
/*FIXUP push offset _public_6261260 @0x635f194*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 0x15
        push 0x40
        lea eax, ss:[esp+0x704]
        push eax
        mov esi, ecx
        call public_6273bc0
        push edi
        lea ecx, ss:[esp+0x694]
        call public_635de90
        mov edi, dword ptr ss : [esp+0xC48]
        mov ebx, dword ptr ds : [edi+8]
/*FIXUP push offset _public_6261260 @0x635f1c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 0x15
        push 0x40
        lea ecx, ss:[esp+0x15C]
        push ecx
        call public_6273bc0
        push ebx
        lea ecx, ss:[esp+0xEC]
        call public_635de90
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x98]
        fld dword ptr ds : [eax+0x148]
        mov ecx, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [ecx+0x98]
        fadd dword ptr ds : [ecx+0x148]
        mov edx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [esi+0x2C], edx
        mov edx, dword ptr ss : [esp+0xC44]
        mov dword ptr ss : [esp+0xA0], eax
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [esi+0x30], eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x8C], ecx
        mov ecx, dword ptr ss : [esp+0xC3C]
        mov ebx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0xC40]
        lea ebp, ds:[esi+0x2C]
        and ebx, 0xFFFF
        shl ebx, 4
        fld dword ptr ds : [ebx+eax]
        add ebx, eax
        mov eax, dword ptr ds : [ecx]
        and eax, 0xFFFF
        shl eax, 4
        add eax, edx
        mov edx, ecx
        and edx, 0xC
        lea edx, ds : [edx+public_63ee4e0]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x34], offset public_63a5700
        mov ecx, dword ptr ds : [edx+ecx]
        mov edx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [ebx+4]
        and ecx, 0xFFFF
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ds : [ebx+8]
        shl ecx, 4
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [eax+4]
        add ecx, edx
        fld dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x14], edx
        fstp dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x64], edx
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x6C]
        fsub dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x74], eax
        fstp dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp+0x70]
        call public_6347ef0
        fld dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [public_63a53d0]
        fdiv dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax+0x50]
        shr edx, 0x16
        and edx, 0xFF
        fld dword ptr ds : [edx*4+public_658aa18]
        mov edx, dword ptr ss : [esp+0xC44]
        mov dword ptr ss : [esp+0x10], ecx
        fadd dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x90]
        push eax
        fmul dword ptr ds : [public_63a5460]
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, dword ptr ds : [edx+8]
        fstp dword ptr ss : [esp+0x50]
        call public_634d8d0
        lea eax, ss:[esp+0xB8]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        mov ecx, dword ptr ds : [edi+8]
        call public_634d8d0
        mov ecx, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0xC8]
        push edx
        lea eax, ss:[esp+0x70]
        push eax
        call public_634d9d0
        fld dword ptr ss : [esp+0xB8]
        fsub dword ptr ss : [esp+0x90]
        lea ecx, ss:[esp+0xC8]
        push ecx
        lea edx, ss:[esp+0xA8]
        fstp dword ptr ss : [esp+0xA8]
        fld dword ptr ss : [esp+0xC0]
        push edx
        fsub dword ptr ss : [esp+0x9C]
        lea ecx, ss:[esp+0xE0]
        fstp dword ptr ss : [esp+0xB0]
        fld dword ptr ss : [esp+0xC8]
        fsub dword ptr ss : [esp+0xA0]
        fstp dword ptr ss : [esp+0xB4]
        call public_628bed0
        lea eax, ss:[esp+0x7C]
        push eax
        lea ecx, ss:[esp+0xDC]
        push ecx
        mov ecx, dword ptr ds : [edi+8]
        call public_634d970
        lea ecx, ss:[esp+0x7C]
        call public_6347ef0
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edx+0x14]
        shr eax, 0x16
        push ebp
        push 0
        and eax, 0xFF
        fld dword ptr ds : [eax*4+public_658aa18]
        mov eax, dword ptr ds : [esi+0x24]
        fld dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0xF0]
        fmul dword ptr ds : [public_63a53fc]
        push ecx
        mov ecx, dword ptr ds : [esi+0x20]
        lea edx, ss:[esp+0x69C]
        fadd dword ptr ds : [public_658aa10]
        push edx
        mov edx, dword ptr ds : [esi+0x1C]
        push eax
        mov eax, dword ptr ds : [esi+0x18]
        push ecx
        push edx
        push eax
        push ecx
        fstp dword ptr ss : [esp]
        push ecx
        lea ecx, ss:[esp+0x5C]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp]
        call public_6369720
        test eax, eax
        je public_635f441
        mov dword ptr ds : [esi+0x28], 0x30
        public_635f441 : nop
        fld dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0xC40]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [public_63a53d0]
        mov ecx, dword ptr ds : [eax]
        fdiv dword ptr ss : [esp+0x38]
        shl ecx, 1
        sar ecx, 0x11
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [esp+0xB8], eax
        lea eax, ss:[esp+0xB8]
        mov dword ptr ss : [esp+0x34], offset public_63a56dc
        mov dword ptr ss : [esp+0xBC], edx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], 2
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+0x50]
        jmp public_635f4ad
        public_635f4a6 : nop
        mov edi, dword ptr ss : [esp+0xC48]
        public_635f4ad : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [edi]
        mov edi, dword ptr ds : [ecx]
        mov eax, ecx
        and eax, 0xC
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [eax+public_63ee4e0]
        mov eax, dword ptr ds : [eax+ecx]
        and eax, 0xFFFF
        shl eax, 4
        fld dword ptr ds : [eax+edx+4]
        add eax, edx
        and edi, 0xFFFF
        shl edi, 4
        fsub dword ptr ds : [edi+edx+4]
        add edi, edx
        fld dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edx+public_63ee4f0]
        mov ecx, dword ptr ds : [edx+ecx]
        mov edx, dword ptr ss : [esp+0xC48]
        fstp dword ptr ss : [esp+0x18]
        and ecx, 0xFFFF
        fld dword ptr ds : [eax]
        shl ecx, 4
        fsub dword ptr ds : [edi]
        add ecx, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x98], edx
        fstp dword ptr ss : [esp+0x90]
        fstp dword ptr ss : [esp+0x94]
        mov edx, dword ptr ds : [edi+4]
        fld dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x2C], edx
        fld dword ptr ds : [ecx]
        mov edx, dword ptr ds : [edi+8]
        fsub st, st(1)
        mov dword ptr ss : [esp+0x30], edx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [ecx+8]
        lea ecx, ss:[esp+0x90]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x28]
        fsubr dword ptr ds : [eax]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax+8]
        lea eax, ss:[esp+0xA4]
        fsub dword ptr ss : [esp+0x30]
        push eax
        fld st(1)
        push ecx
        fmul dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x60]
        fld st(1)
        fmul dword ptr ss : [esp+0x2C]
        fsubp 
        fstp dword ptr ss : [esp+0xAC]
        fmul dword ptr ss : [esp+0x20]
        fld st(2)
        fmul dword ptr ss : [esp+0x30]
        fsubp 
        fstp dword ptr ss : [esp+0xB0]
        fxch 
        fmul dword ptr ss : [esp+0x2C]
        fxch 
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fstp dword ptr ss : [esp+0xB4]
        call public_628bed0
        lea ecx, ss:[esp+0x58]
        call public_6347ef0
        mov edx, dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [edi]
        push ebp
        push 0
        mov eax, edx
        mov dword ptr ss : [esp+0xBC], edx
        lea ecx, ss:[esp+0xF0]
        push ecx
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x69C]
        push edx
        mov edx, dword ptr ds : [esi+0x1C]
        push 0
        fstp dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x84], eax
        mov eax, dword ptr ss : [ebp+4]
        fstp dword ptr ss : [esp+0x80]
        fld dword ptr ds : [public_658ab34]
        push eax
        mov eax, dword ptr ds : [esi+0x18]
        fchs 
        push ecx
        fstp dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x5C]
        call public_63694a0
        test eax, eax
        je public_635f636
        mov dword ptr ds : [esi+0x28], 0x31
        public_635f636 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        add ecx, 4
        dec eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_635f4a6
        fld dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edx+0x54]
        mov dword ptr ss : [esp+0x10], eax
        fadd dword ptr ss : [ebp+4]
        fsub dword ptr ds : [esi+0x1C]
        fmul dword ptr ds : [esi+0xC]
        fsubr dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a545c]
        fnstsw ax
        test ah, 1
        je public_635f686
        mov dword ptr ss : [esp+0x14], 0x3B449BA6
        public_635f686 : nop
        mov ecx, dword ptr ss : [esp+0xC44]
        mov edx, dword ptr ds : [ecx+0xC]
        mov edi, dword ptr ds : [edx+0x98]
        mov ecx, ebx
        call public_6347e60
        mov eax, dword ptr ss : [esp+0xA0]
        fmul dword ptr ds : [eax+0x148]
        mov ecx, dword ptr ss : [esp+0xC48]
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [edx+0x98]
        fadd dword ptr ds : [edi+0x144]
        mov edx, dword ptr ss : [esp+0x8C]
        fld dword ptr ds : [eax+0x14C]
        mov edi, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edx+0x148]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0xC40]
        mov edi, dword ptr ds : [edi]
        fadd dword ptr ds : [eax+0x144]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x34], offset public_63a56fc
        mov ecx, dword ptr ds : [edi+ecx]
        fadd st, st(1)
        and eax, 0xFFFF
        shl eax, 4
        fdiv dword ptr ss : [esp+0x14]
        add eax, edx
        and ecx, 0xFFFF
        shl ecx, 4
        add ecx, edx
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+8]
        fld dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x70], edx
        fstp dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x1C], edx
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x78]
        fsub dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x80], eax
        fstp dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0x7C]
        call public_6347ef0
        fld dword ptr ds : [public_63a53d0]
        mov ecx, dword ptr ss : [esp+0x14]
        fdiv dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x38], ecx
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edx+0x14]
        shr eax, 0x16
        and eax, 0xFF
        fld dword ptr ds : [eax*4+public_658aa18]
        fld dword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_635f7b4
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        public_635f7b4 : nop
        mov ecx, dword ptr ss : [esp+0xC48]
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [edx+0x98]
        fld dword ptr ds : [eax+0x48]
        mov ecx, dword ptr ss : [esp+0xC3C]
        fadd st(0), st
        mov edx, ecx
        and edx, 0xC
        mov eax, dword ptr ds : [edx+public_63ee4f0]
        add eax, ecx
        mov ecx, dword ptr ds : [eax]
        fmul st, st(1)
        shl ecx, 1
        sar ecx, 0x11
        fmul dword ptr ds : [public_63a56f8]
        lea eax, ds:[eax+ecx*4]
        mov dword ptr ss : [esp+0x10], eax
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        public_635f7f9 : nop
        mov ecx, dword ptr ss : [esp+0xC44]
        mov edi, eax
        and edi, 0xC
        mov edx, dword ptr ds : [edi+public_63ee4e0]
        mov eax, dword ptr ds : [edx+eax]
        mov edx, dword ptr ds : [ecx]
        and eax, 0xFFFF
        shl eax, 4
        fld dword ptr ds : [eax+edx+4]
        add eax, edx
        fsub dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x58]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x60], edx
        fstp dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x5C]
        call public_6347ef0
        mov edx, dword ptr ss : [ebp+4]
        push ebp
        push 0
        lea eax, ss:[esp+0xF0]
        push eax
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x69C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        push 0
        push edx
        mov edx, dword ptr ds : [esi+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x5C]
        call public_63694a0
        test eax, eax
        je public_635f886
        mov dword ptr ds : [esi+0x28], 0x32
        public_635f886 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ss : [esp+0xC3C]
        je public_635f8b1
        mov edi, dword ptr ds : [edi+public_63ee4f0]
        mov ecx, dword ptr ds : [edi+eax]
        add edi, eax
        shl ecx, 1
        sar ecx, 0x11
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ss : [esp+0x10], edx
        mov eax, edx
        jmp public_635f7f9
        public_635f8b1 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC28
        ret 0x10
        UNREACHABLE_TRAP(0x635f180)
    }
}

#undef public_635f441
#undef public_635f4a6
#undef public_635f4ad
#undef public_635f636
#undef public_635f686
#undef public_635f7b4
#undef public_635f7f9
#undef public_635f886
#undef public_635f8b1

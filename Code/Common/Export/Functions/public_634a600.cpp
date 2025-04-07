#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6347fa0);
CLANG_FORWARD_PROC_SYMBOL(public_634a600);
CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);

#define public_634a624 _public_634a624
#define public_634a647 _public_634a647
#define public_634a73b _public_634a73b
#define public_634a7a7 _public_634a7a7
#define public_634a7c4 _public_634a7c4
#define public_634a7c8 _public_634a7c8

PROC_DECLARE(0x634a600, internal_634a600, public_634a600);
extern "C" NAKED register_t __cdecl internal_634a600()
{
    __asm
    {
        sub esp, 0x50
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [edi+0x40]
        test eax, eax
        mov esi, ecx
        jne public_634a624
        mov eax, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [eax+0x94]
        push edi
        call public_634d530
        mov dword ptr ds : [edi+0x40], eax
        public_634a624 : nop
        mov ecx, dword ptr ds : [edi+0x78]
        shl ecx, 0x18
        cmp ecx, 0x8000000
        jge public_634a647
        mov edx, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [edi+0x40]
        mov eax, dword ptr ds : [edx+0x110]
        cmp eax, dword ptr ds : [ecx]
        jle public_634a647
        call public_634d640
        public_634a647 : nop
        mov eax, dword ptr ds : [edi+0x40]
        fld dword ptr ds : [eax+0x4C]
        add eax, 0x4C
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi+0x94]
        fld st(0)
        fmulp 
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ss : [esp+0x10]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom 
        fnstsw ax
        test ah, 1
        jne public_634a7c4
        fld dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x38]
        fsub dword ptr ss : [esp+8]
        push ecx
        fld dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x2C]
        fsub dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ss : [esp+0x14]
        fxch 
        fmul dword ptr ds : [esi+0x38]
        fxch 
        fmul dword ptr ds : [esi+0x3C]
        faddp 
        fxch 
        fmul dword ptr ds : [esi+0x34]
        faddp 
        fadd st(0), st
        fstp dword ptr ss : [esp+0x40]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fstp st(0)
        call public_6347fa0
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_634a7c8
        fld dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_63a53d4]
        mov dword ptr ss : [esp+0x5C], edx
        fnstsw ax
        test ah, 1
        je public_634a73b
        fld dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_63a53d4]
        mov dword ptr ss : [esp+0x5C], eax
        fnstsw ax
        test ah, 1
        jne public_634a7c8
        public_634a73b : nop
        fld dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0x18]
        fmul dword ptr ds : [esi+0x34]
        fadd dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [esi+0x38]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [esi+0x3C]
        fadd dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x20]
        call public_6347ef0
        cmp eax, 1
        je public_634a7a7
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        public_634a7a7 : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        push 0
        push 0
        push edi
        mov ecx, esi
        call dword ptr ds : [edx]
        pop edi
        pop esi
        add esp, 0x50
        ret 4
        public_634a7c4 : nop
        fstp st(0)
        fstp st(0)
        public_634a7c8 : nop
        pop edi
        pop esi
        add esp, 0x50
        ret 4
        UNREACHABLE_TRAP(0x634a600)
    }
}

#undef public_634a624
#undef public_634a647
#undef public_634a73b
#undef public_634a7a7
#undef public_634a7c4
#undef public_634a7c8

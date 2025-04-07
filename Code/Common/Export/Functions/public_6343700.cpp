#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_6343700);
CLANG_FORWARD_PROC_SYMBOL(public_6343cc0);
CLANG_FORWARD_PROC_SYMBOL(public_63450e0);
CLANG_FORWARD_PROC_SYMBOL(public_6345550);
CLANG_FORWARD_PROC_SYMBOL(public_63465a0);
CLANG_FORWARD_PROC_SYMBOL(public_6346ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6346f20);
CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);

#define public_63437e0 _public_63437e0
#define public_63437ff _public_63437ff
#define public_634380f _public_634380f
#define public_6343814 _public_6343814
#define public_6343833 _public_6343833
#define public_6343855 _public_6343855
#define public_63438b7 _public_63438b7
#define public_63438b9 _public_63438b9
#define public_63438cf _public_63438cf
#define public_63438d1 _public_63438d1

PROC_DECLARE(0x6343700, internal_6343700, public_6343700);
extern "C" NAKED register_t __cdecl internal_6343700()
{
    __asm
    {
        fld dword ptr ss : [esp+0xC]
        sub esp, 0x48
        fcomp dword ptr ds : [public_63a53d4]
        push ebx
        mov ebx, dword ptr ss : [esp+0x50]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x5C]
        fnstsw ax
        push edi
        test ah, 1
        je public_63437e0
        mov eax, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [eax+0xFC]
        mov ecx, dword ptr ds : [eax+0xF8]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [eax+0xF8]
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0xFC]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [ebx+0x98]
        mov dword ptr ss : [esp+0x14], eax
        fsub dword ptr ds : [ecx+0x68]
        push ecx
        lea edx, ds:[ecx+0xC4]
        fadd dword ptr ss : [esp+0x18]
        add ecx, 0xB4
        fsub dword ptr ds : [ecx-0x48]
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_628be60
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+0x98]
        fsub dword ptr ds : [eax+0x68]
        push ecx
        lea ecx, ds:[eax+0xC4]
        add eax, 0xB4
        fadd dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [eax-0x48]
        fstp dword ptr ss : [esp]
        push ecx
        push eax
        lea ecx, ss:[esp+0x44]
        call public_628be60
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x40]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fstp dword ptr ss : [esp+0x64]
        public_63437e0 : nop
        mov edx, dword ptr ds : [ebx+0x78]
        shl edx, 0x18
        cmp edx, 0x8000000
        jge public_63437ff
        mov eax, dword ptr ds : [esi+0x78]
        shl eax, 0x18
        cmp eax, 0x8000000
        jl public_6343814
        mov ecx, esi
        jmp public_634380f
        public_63437ff : nop
        mov ecx, dword ptr ds : [esi+0x78]
        shl ecx, 0x18
        cmp ecx, 0x8000000
        jge public_6343814
        mov ecx, ebx
        public_634380f : nop
        call public_63450e0
        public_6343814 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        mov ebp, dword ptr ds : [esi+0x98]
        jne public_6343833
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [edx+0x94]
        push esi
        call public_634d530
        mov dword ptr ds : [esi+0x40], eax
        public_6343833 : nop
        mov eax, dword ptr ds : [esi+0x78]
        shl eax, 0x18
        cmp eax, 0x8000000
        jge public_6343855
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edx+0x110]
        cmp eax, dword ptr ds : [ecx]
        jle public_6343855
        call public_634d640
        public_6343855 : nop
        mov eax, dword ptr ds : [esi+0x40]
        lea ecx, ds:[eax+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov edi, dword ptr ds : [ebx+0x98]
        mov dword ptr ss : [esp+0x1C], ecx
        fld dword ptr ds : [eax+0x4C]
        fld dword ptr ds : [eax+0x50]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [eax+0x54]
        fstp dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [ebp+4]
        fcom dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 0x41
        jne public_63438b7
        fstp dword ptr ds : [edi+4]
        jmp public_63438b9
        public_63438b7 : nop
        fstp st(0)
        public_63438b9 : nop
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [ebp+8]
        fcom dword ptr ds : [edi+8]
        fnstsw ax
        test ah, 0x41
        jne public_63438cf
        fstp dword ptr ds : [edi+8]
        jmp public_63438d1
        public_63438cf : nop
        fstp st(0)
        public_63438d1 : nop
        push 1
        mov ecx, esi
        call public_6345550
        push esi
        mov ecx, ebp
        call public_6346f20
        push esi
        mov ecx, edi
        mov dword ptr ds : [esi+0x98], edi
        mov dword ptr ds : [esi+0x9C], edi
        mov dword ptr ds : [esi+0xA0], edi
        call public_6346ef0
        mov eax, dword ptr ds : [ebx+0x78]
        mov ecx, dword ptr ds : [esi+0x78]
        shl eax, 0x18
        sar eax, 0x18
        mov edx, ecx
        xor edx, eax
        push 0
        and edx, 0xFF
        xor edx, ecx
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        push 0
        mov dword ptr ds : [esi+0x78], edx
        call public_6343cc0
        add esp, 0x14
        mov ecx, edi
        call public_63465a0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x6343700)
    }
}

#undef public_63437e0
#undef public_63437ff
#undef public_634380f
#undef public_6343814
#undef public_6343833
#undef public_6343855
#undef public_63438b7
#undef public_63438b9
#undef public_63438cf
#undef public_63438d1

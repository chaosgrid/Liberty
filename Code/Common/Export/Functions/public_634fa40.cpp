#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_634e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_634eb00);
CLANG_FORWARD_PROC_SYMBOL(public_634fa40);
CLANG_FORWARD_PROC_SYMBOL(public_6350020);
CLANG_FORWARD_PROC_SYMBOL(public_6362d90);
CLANG_FORWARD_PROC_SYMBOL(public_6362f90);
CLANG_FORWARD_PROC_SYMBOL(public_6363280);

#define public_634fa6d _public_634fa6d
#define public_634fcc7 _public_634fcc7
#define public_634fcc9 _public_634fcc9
#define public_634fcfe _public_634fcfe

PROC_DECLARE(0x634fa40, internal_634fa40, public_634fa40);
extern "C" NAKED register_t __cdecl internal_634fa40()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, eax
        and ecx, 0x3C0000
        cmp ecx, 0x100000
        push edi
        jne public_634fa6d
        mov ecx, esi
        call public_6362d90
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        public_634fa6d : nop
        mov ecx, eax
        shr ecx, 8
        and ecx, 3
        xor eax, 0x100
        lea edx, ds:[ecx*8]
        sub edx, ecx
        mov ebp, dword ptr ds : [esi+edx*4+0x28]
        mov edi, dword ptr ss : [ebp+0x98]
        shr eax, 8
        and eax, 3
        lea ecx, ds:[esi+edx*4+0x18]
        lea edx, ds:[eax*8]
        sub edx, eax
        lea eax, ds:[esi+edx*4+0x18]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [eax+0x10]
        mov ebx, dword ptr ds : [eax+0x98]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax+0xFC]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [eax+0xF8]
        mov dword ptr ss : [esp+0x1C], ecx
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [edi+0x68]
        mov dword ptr ss : [esp+0x20], edx
        push ecx
        mov dword ptr ss : [esp+0x30], ecx
        fadd dword ptr ss : [esp+0x24]
        lea eax, ds:[edi+0xC4]
        lea ecx, ds:[edi+0xB4]
        fsub dword ptr ds : [edi+0x6C]
        mov dword ptr ss : [esp+0x34], edx
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_628be60
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [ebx+0x68]
        push ecx
        lea edx, ds:[ebx+0xC4]
        lea eax, ds:[ebx+0xB4]
        fadd dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x48]
        fsub dword ptr ds : [ebx+0x6C]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_628be60
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [esi+0x14]
        test eax, 0x30000
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [edi+0x14C]
        fadd dword ptr ds : [edi+0x144]
        fadd dword ptr ds : [public_63a53d8]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ebx+0x14C]
        fadd dword ptr ds : [ebx+0x144]
        fadd dword ptr ds : [public_63a53d8]
        fst dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x14]
        jne public_634fcc7
        mov eax, dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [esi+0x64]
        mov ecx, dword ptr ss : [ebp+0x18]
        fxch 
        fmul dword ptr ds : [esi+0x68]
        faddp 
        fxch 
        fmul dword ptr ds : [esi+0x60]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [eax+0x44]
        fadd dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [eax+0x48]
        fld dword ptr ds : [eax+0x4C]
        fsub dword ptr ds : [eax+0x50]
        fmulp 
        fld dword ptr ds : [eax+0x54]
        fsub dword ptr ds : [eax+0x58]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [ebp+0x44]
        fadd dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [ebp+0x48]
        fld dword ptr ss : [ebp+0x4C]
        fsub dword ptr ss : [ebp+0x50]
        fmulp 
        fld dword ptr ss : [ebp+0x54]
        fsub dword ptr ss : [ebp+0x58]
        faddp 
        faddp 
        fld dword ptr ds : [esi+0x54]
        fld st(1)
        fsub dword ptr ds : [esi+0x5C]
        fsubp 
        fld dword ptr ds : [esi+0x58]
        fsub st, st(3)
        fsubp 
        fadd dword ptr ss : [esp+0x58]
        fst dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+0xAC]
        fmul dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_63a5620]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_634fcc9
        fstp dword ptr ds : [esi+0x5C]
        mov edi, dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [esi+0x58]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x58]
        fstp dword ptr ds : [esi+0x54]
        mov esi, dword ptr ds : [edi+0x10]
        fld dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi+4]
        fdiv dword ptr ss : [esp+0x14]
        add esi, 0x44
        lea ebx, ds:[esi+0x20]
        push edx
        mov ecx, ebx
        fstp dword ptr ss : [esp+0x5C]
        call public_6363280
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [esi]
        push ecx
        mov ecx, ebx
        fadd dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        fadd dword ptr ds : [esi+0x10]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x1C]
        fadd st, st(1)
        fstp dword ptr ss : [esp]
        push edi
        fstp st(0)
        call public_6362f90
        mov dword ptr ds : [edi+4], eax
        mov edi, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esi, 0x44
        lea ebx, ds:[esi+0x20]
        push eax
        mov ecx, ebx
        call public_6363280
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [esi]
        push ecx
        mov ecx, ebx
        fadd dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        fadd dword ptr ds : [esi+0x10]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x20]
        fadd st, st(1)
        fstp dword ptr ss : [esp]
        push edi
        fstp st(0)
        call public_6362f90
        mov dword ptr ds : [edi+4], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        public_634fcc7 : nop
        fstp st(0)
        public_634fcc9 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        fstp st(0)
        mov edi, dword ptr ds : [ecx+0x10]
        fstp st(0)
        push esi
        mov ecx, edi
        call public_6350020
        mov edx, dword ptr ds : [esi+0x14]
        and edx, 0x3000
        cmp edx, 0x1000
        push esi
        mov ecx, edi
        je public_634fcfe
        call public_634e9f0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        public_634fcfe : nop
        call public_634eb00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x634fa40)
    }
}

#undef public_634fa6d
#undef public_634fcc7
#undef public_634fcc9
#undef public_634fcfe

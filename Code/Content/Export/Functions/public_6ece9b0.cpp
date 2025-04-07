#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6ecea79 _public_6ecea79
#define public_6eceab6 _public_6eceab6
#define public_6eceacf _public_6eceacf

PROC_DECLARE(0x6ece9b0, internal_6ece9b0, public_6ece9b0);
extern "C" NAKED register_t __cdecl internal_6ece9b0()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        mov ebx, dword ptr ss : [esp+0x44]
        push ebp
        mov ebp, ecx
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x30]
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x34]
        push 2
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x38]
        push 6
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0xC]
        push 5
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+8]
        push 4
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x48]
        push 3
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fld st(0)
        fmul st, st(1)
        mov eax, dword ptr ds : [public_6fcf014]
        test eax, eax
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6fb5810]
        fld st(0)
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        jne public_6ecea79
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf014], eax
        public_6ecea79 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        lea edi, ss:[ebp+0xC]
        mov ecx, 9
        lea esi, ss:[esp+0x28]
        rep movsd
        mov esi, dword ptr ds : [public_6fb306c]
        push 7
        mov ecx, ebx
        call esi
        test al, al
        jne public_6eceab6
        push 7
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x3C]
        public_6eceab6 : nop
        push 8
        mov ecx, ebx
        call esi
        test al, al
        pop edi
        pop esi
        jne public_6eceacf
        push 8
        mov ecx, ebx
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x40]
        public_6eceacf : nop
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x6ece9b0)
    }
}

#undef public_6ecea79
#undef public_6eceab6
#undef public_6eceacf

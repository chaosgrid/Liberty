#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_550b60);
CLANG_FORWARD_PROC_SYMBOL(public_5524a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5524b0 _public_5524b0
#define public_5524c2 _public_5524c2
#define public_5524d3 _public_5524d3

PROC_DECLARE(0x5524a0, internal_5524a0, public_5524a0);
extern "C" NAKED register_t __cdecl internal_5524a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        xor edi, edi
        test eax, eax
        jle public_5524d3
        lea ecx, ds:[ecx]
        public_5524b0 : nop
        mov eax, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax+edi*4]
        test eax, eax
        je public_5524c2
        push eax
        call public_5b7e1d
        add esp, 4
        public_5524c2 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+edi*4], 0
        mov eax, dword ptr ds : [esi+0xC]
        inc edi
        cmp edi, eax
        jl public_5524b0
        public_5524d3 : nop
        mov edx, dword ptr ds : [esi]
        push edx
        call public_5b7e1d
        fld dword ptr ds : [public_5c75dc]
        fsub dword ptr ss : [esp+0x10]
        add esp, 4
        fld dword ptr ds : [public_5c75e0]
        mov ecx, esi
        mov dword ptr ds : [esi], 0
        fmul st, st(1)
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [esi+8]
        fld st(0)
        fmulp 
        fsubr dword ptr ds : [public_5c75dc]
        fld dword ptr ds : [public_5c75dc]
        fsub st, st(1)
        fmul dword ptr ds : [public_5e0e10]
        fadd st, st(1)
        fstp dword ptr ds : [esi+0xAC]
        fstp st(0)
        call public_550b60
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5524a0)
    }
}

#undef public_5524b0
#undef public_5524c2
#undef public_5524d3

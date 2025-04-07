#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a5ca0);

#define public_4a5cd6 _public_4a5cd6
#define public_4a5d15 _public_4a5d15
#define public_4a5d17 _public_4a5d17
#define public_4a5d72 _public_4a5d72

PROC_DECLARE(0x4a5ca0, internal_4a5ca0, public_4a5ca0);
extern "C" NAKED register_t __cdecl internal_4a5ca0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0x34C]
        test edi, edi
        je public_4a5d72
        fld dword ptr ss : [esp+0x10]
        xor ecx, ecx
        test edi, edi
        fchs 
        fild dword ptr ds : [public_610850]
        fmul dword ptr ds : [public_5d3fb4]
        jle public_4a5d17
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        lea ebx, ds:[esi+0x358]
        public_4a5cd6 : nop
        lea eax, ds:[ecx+ebp]
        cdq 
        idiv edi
        cmp ecx, 0x100
        jge public_4a5d15
        fld st(1)
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_4a5d15
        mov eax, dword ptr ds : [esi+0x344]
        mov ax, word ptr ds : [eax+edx*2]
        mov word ptr ds : [ebx], ax
        mov eax, dword ptr ds : [esi+0x348]
        fild dword ptr ds : [eax+edx*4]
        mov edi, dword ptr ds : [esi+0x34C]
        inc ecx
        add ebx, 2
        cmp ecx, edi
        faddp st(2), st
        jl public_4a5cd6
        public_4a5d15 : nop
        pop ebp
        pop ebx
        public_4a5d17 : nop
        fxch 
        push 0
        fsub st, st(1)
        mov word ptr ds : [esi+ecx*2+0x358], 0
        mov ecx, dword ptr ds : [esi+0x5B8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x358]
        fstp dword ptr ss : [esp+0x10]
        push eax
        push 0x1D
        fstp st(0)
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x5B8]
        mov edx, dword ptr ds : [ecx]
        push 1
        push 0
        push 0x22
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x5B8]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push 0x23
        call dword ptr ds : [eax+0xA8]
        public_4a5d72 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4a5ca0)
    }
}

#undef public_4a5cd6
#undef public_4a5d15
#undef public_4a5d17
#undef public_4a5d72

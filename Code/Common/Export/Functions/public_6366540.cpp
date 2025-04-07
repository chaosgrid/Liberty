#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366540);

#define public_636654b _public_636654b
#define public_6366566 _public_6366566
#define public_6366574 _public_6366574
#define public_6366583 _public_6366583

PROC_DECLARE(0x6366540, internal_6366540, public_6366540);
extern "C" NAKED register_t __cdecl internal_6366540()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        push edi
        xor edi, edi
        test edx, edx
        jle public_6366583
        push esi
        public_636654b : nop
        mov esi, dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [public_63a53d4]
        mov eax, edi
        imul eax, dword ptr ds : [ecx+8]
        test edx, edx
        lea eax, ds:[esi+eax*4]
        jle public_6366574
        mov esi, dword ptr ds : [ecx+0x10]
        sub esi, eax
        public_6366566 : nop
        fld dword ptr ds : [esi+eax]
        add eax, 4
        dec edx
        fmul dword ptr ds : [eax-4]
        faddp 
        jne public_6366566
        public_6366574 : nop
        mov edx, dword ptr ds : [ecx+0x14]
        fstp dword ptr ds : [edx+edi*4]
        mov edx, dword ptr ds : [ecx+4]
        inc edi
        cmp edi, edx
        jl public_636654b
        pop esi
        public_6366583 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6366540)
    }
}

#undef public_636654b
#undef public_6366566
#undef public_6366574
#undef public_6366583

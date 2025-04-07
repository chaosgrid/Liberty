#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636bdc0);

#define public_636bddb _public_636bddb
#define public_636be1d _public_636be1d

PROC_DECLARE(0x636bdc0, internal_636bdc0, public_636bdc0);
extern "C" NAKED register_t __cdecl internal_636bdc0()
{
    __asm
    {
        fld dword ptr ds : [public_63a53d4]
        push edi
        xor edi, edi
        mov di, word ptr ds : [ecx+0x12]
        xor eax, eax
        test edi, edi
        jle public_636be1d
        push ebx
        push ebp
        mov ebp, dword ptr ds : [ecx+0x14]
        push esi
        mov ebx, ebp
        public_636bddb : nop
        lea esi, ds:[eax+1]
        mov eax, esi
        cdq 
        idiv edi
        mov ecx, dword ptr ds : [ebx]
        mov eax, esi
        add ebx, 4
        cmp eax, edi
        fld dword ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp+edx*4]
        fsub dword ptr ds : [edx]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [edx+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [edx+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        faddp st(4), st
        fstp st(0)
        fstp st(0)
        fstp st(0)
        jl public_636bddb
        pop esi
        pop ebp
        pop ebx
        public_636be1d : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x636bdc0)
    }
}

#undef public_636bddb
#undef public_636be1d

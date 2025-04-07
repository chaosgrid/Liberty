#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63661b0);
CLANG_FORWARD_PROC_SYMBOL(public_6366220);

#define public_63661e7 _public_63661e7
#define public_63661fe _public_63661fe
#define public_6366200 _public_6366200
#define public_6366213 _public_6366213

PROC_DECLARE(0x63661b0, internal_63661b0, public_63661b0);
extern "C" NAKED register_t __cdecl internal_63661b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        mov ebx, dword ptr ds : [ecx+0xC]
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea edx, ds:[eax+1]
        imul edx, edi
        or ebp, 0xFFFFFFFF
        fld dword ptr ds : [ebx+edx*4]
        mov edx, dword ptr ds : [ecx+4]
        fabs 
        dec edx
        cmp edx, edi
        fstp dword ptr ss : [esp+0x10]
        jle public_6366213
        push esi
        mov esi, eax
        imul eax, edx
        neg esi
        shl esi, 2
        add eax, edi
        lea ebx, ds:[ebx+eax*4]
        public_63661e7 : nop
        fld dword ptr ds : [ebx]
        fabs 
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_63661fe
        fstp dword ptr ss : [esp+0x14]
        mov ebp, edx
        jmp public_6366200
        public_63661fe : nop
        fstp st(0)
        public_6366200 : nop
        dec edx
        add ebx, esi
        cmp edx, edi
        jg public_63661e7
        test ebp, ebp
        pop esi
        jl public_6366213
        push ebp
        push edi
        call public_6366220
        public_6366213 : nop
        pop edi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63661b0)
    }
}

#undef public_63661e7
#undef public_63661fe
#undef public_6366200
#undef public_6366213

#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366070);

#define public_6366092 _public_6366092
#define public_63660a2 _public_63660a2
#define public_63660ca _public_63660ca

PROC_DECLARE(0x6366070, internal_6366070, public_6366070);
extern "C" NAKED register_t __cdecl internal_6366070()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        fld dword ptr ds : [public_63a53d4]
        mov edx, dword ptr ds : [ecx+0xC]
        push esi
        mov esi, dword ptr ds : [ecx+4]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        imul eax, edi
        test esi, esi
        lea edx, ds:[edx+eax*4]
        jle public_63660a2
        mov eax, dword ptr ds : [ecx+0x14]
        public_6366092 : nop
        fld dword ptr ds : [eax]
        add edx, 4
        fmul dword ptr ds : [edx-4]
        add eax, 4
        dec esi
        faddp 
        jne public_6366092
        public_63660a2 : nop
        mov eax, dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [eax+edi*4]
        lea eax, ds:[eax+edi*4]
        fmul dword ptr ds : [public_63a5608]
        pop edi
        pop esi
        fabs 
        fadd st, st(1)
        fcomp dword ptr ds : [eax]
        fnstsw ax
        fstp st(0)
        test ah, 1
        jne public_63660ca
        mov eax, 1
        ret 4
        public_63660ca : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6366070)
    }
}

#undef public_6366092
#undef public_63660a2
#undef public_63660ca

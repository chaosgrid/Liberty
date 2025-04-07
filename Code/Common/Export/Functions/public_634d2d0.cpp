#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d2d0);

#define public_634d2f2 _public_634d2f2
#define public_634d30e _public_634d30e
#define public_634d314 _public_634d314

PROC_DECLARE(0x634d2d0, internal_634d2d0, public_634d2d0);
extern "C" NAKED register_t __cdecl internal_634d2d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        push esi
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ecx+4]
        add edx, esi
        push edi
        mov dword ptr ds : [eax+edx*4], ebx
        mov edi, dword ptr ds : [ecx]
        shr edi, 1
        je public_634d314
        public_634d2f2 : nop
        mov eax, dword ptr ds : [ecx+4]
        sar edx, 1
        lea esi, ds:[eax+edx*4]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_634d30e
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [eax+4]
        fnstsw ax
        test ah, 1
        je public_634d314
        public_634d30e : nop
        shr edi, 1
        mov dword ptr ds : [esi], ebx
        jne public_634d2f2
        public_634d314 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x634d2d0)
    }
}

#undef public_634d2f2
#undef public_634d30e
#undef public_634d314

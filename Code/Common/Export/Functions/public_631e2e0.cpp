#include "Common-PCH.h"


#define public_631e312 _public_631e312

PROC_DECLARE(0x631e2e0, internal_631e2e0, public_631e2e0);
extern "C" NAKED register_t __cdecl internal_631e2e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+4]
        cmp edx, eax
        jl public_631e312
        push esi
        mov esi, dword ptr ds : [ecx+8]
        lea eax, ds:[esi+eax-1]
        cmp edx, eax
        pop esi
        jg public_631e312
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+8]
        cmp edx, eax
        jl public_631e312
        mov ecx, dword ptr ds : [ecx+0xC]
        lea eax, ds:[ecx+eax-1]
        cmp edx, eax
        jg public_631e312
        mov al, 1
        ret 8
        public_631e312 : nop
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x631e2e0)
    }
}

#undef public_631e312

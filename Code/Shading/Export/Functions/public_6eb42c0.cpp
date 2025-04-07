#include "Shading-PCH.h"


#define public_6eb42d1 _public_6eb42d1
#define public_6eb42e6 _public_6eb42e6

PROC_DECLARE(0x6eb42c0, internal_6eb42c0, public_6eb42c0);
extern "C" NAKED register_t __cdecl internal_6eb42c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_6eb42d1
        or eax, 0xFFFFFFFF
        ret 8
        public_6eb42d1 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        test eax, eax
        jge public_6eb42e6
        or eax, 0xFFFFFFFF
        ret 8
        public_6eb42e6 : nop
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        or eax, 0x10
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6eb42c0)
    }
}

#undef public_6eb42d1
#undef public_6eb42e6

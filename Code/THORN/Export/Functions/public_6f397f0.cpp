#include "THORN-PCH.h"


#define public_6f3980d _public_6f3980d

PROC_DECLARE(0x6f397f0, internal_6f397f0, public_6f397f0);
extern "C" NAKED register_t __cdecl internal_6f397f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x2C]
        cmp eax, 6
        jl public_6f3980d
        cmp eax, 7
        jg public_6f3980d
        mov dword ptr ds : [ecx+0x2C], 5
        xor eax, eax
        ret 4
        public_6f3980d : nop
        or eax, 0xFFFFFFFF
        ret 4
        UNREACHABLE_TRAP(0x6f397f0)
    }
}

#undef public_6f3980d

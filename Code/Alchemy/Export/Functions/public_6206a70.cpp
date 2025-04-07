#include "Alchemy-PCH.h"


#define public_6206aa2 _public_6206aa2

PROC_DECLARE(0x6206a70, internal_6206a70, public_6206a70);
extern "C" NAKED register_t __cdecl internal_6206a70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+0xB4]
        lea eax, ds:[eax+eax*2]
        shl eax, 3
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [ecx+0xF0]
        mov ecx, dword ptr ds : [ecx+0x60]
        and ecx, 0x100
        cmp ecx, 0x100
        jne public_6206aa2
        add eax, 0x18
        mov dword ptr ds : [edx], eax
        public_6206aa2 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6206a70)
    }
}

#undef public_6206aa2

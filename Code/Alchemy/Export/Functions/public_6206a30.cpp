#include "Alchemy-PCH.h"


#define public_6206a5f _public_6206a5f

PROC_DECLARE(0x6206a30, internal_6206a30, public_6206a30);
extern "C" NAKED register_t __cdecl internal_6206a30()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+0xB4]
        lea eax, ds:[eax+eax*4]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [ecx+0xF0]
        mov ecx, dword ptr ds : [ecx+0x60]
        and ecx, 0x100
        cmp ecx, 0x100
        jne public_6206a5f
        add eax, 5
        mov dword ptr ds : [edx], eax
        public_6206a5f : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6206a30)
    }
}

#undef public_6206a5f

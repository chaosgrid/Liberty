#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad5ba1);

#define public_6ad5bb0 _public_6ad5bb0

PROC_DECLARE(0x6ad5ba1, internal_6ad5ba1, public_6ad5ba1);
extern "C" NAKED register_t __cdecl internal_6ad5ba1()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_6ae2580]
        jb public_6ad5bb0
        xor eax, eax
        ret 
        public_6ad5bb0 : nop
        mov ecx, eax
        and eax, 0x1F
        sar ecx, 5
        lea eax, ds:[eax+eax*8]
        mov ecx, dword ptr ds : [ecx*4+public_6ae2480]
        mov al, byte ptr ds : [ecx+eax*4+4]
        and eax, 0x40
        ret 
        UNREACHABLE_TRAP(0x6ad5ba1)
    }
}

#undef public_6ad5bb0

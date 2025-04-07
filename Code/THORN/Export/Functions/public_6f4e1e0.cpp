#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e1e0);

#define public_6f4e1ef _public_6f4e1ef

PROC_DECLARE(0x6f4e1e0, internal_6f4e1e0, public_6f4e1e0);
extern "C" NAKED register_t __cdecl internal_6f4e1e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xFFFFFFFA
        jge public_6f4e1ef
        mov eax, 1
        ret 
        public_6f4e1ef : nop
        mov edx, dword ptr ss : [esp+8]
        lea eax, ds:[eax+eax*8]
        shl eax, 1
        mov ecx, offset public_6f60694
        sub ecx, eax
        movsx eax, byte ptr ds : [ecx+edx]
        ret 
        UNREACHABLE_TRAP(0x6f4e1e0)
    }
}

#undef public_6f4e1ef

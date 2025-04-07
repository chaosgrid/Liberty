#include "Server-PCH.h"


#define public_6d118a5 _public_6d118a5

PROC_DECLARE(0x6d118a0, internal_6d118a0, public_6d118a0);
extern "C" NAKED register_t __cdecl internal_6d118a0()
{
    __asm
    {
        mov eax, offset public_6d8e524
        public_6d118a5 : nop
        mov dword ptr ds : [eax], 0
        sub eax, 4
        cmp eax, offset public_6d8e328
        jge public_6d118a5
        mov dword ptr ds : [public_6d8e528], 0
        ret 
        UNREACHABLE_TRAP(0x6d118a0)
    }
}

#undef public_6d118a5

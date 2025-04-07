#include "Common-PCH.h"


#define public_6334a70 _public_6334a70
#define public_6334a82 _public_6334a82

PROC_DECLARE(0x6334a60, internal_6334a60, public_6334a60);
extern "C" NAKED register_t __cdecl internal_6334a60()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        test edx, edx
        jle public_6334a82
        lea esp, ss:[esp]
        public_6334a70 : nop
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [edx+eax*4], 0xFFFFFFFF
        mov edx, dword ptr ds : [ecx+4]
        inc eax
        cmp eax, edx
        jl public_6334a70
        public_6334a82 : nop
        ret 
        UNREACHABLE_TRAP(0x6334a60)
    }
}

#undef public_6334a70
#undef public_6334a82

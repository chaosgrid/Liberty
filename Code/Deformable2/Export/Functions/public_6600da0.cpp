#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600d90);
CLANG_FORWARD_PROC_SYMBOL(public_6600da0);

#define public_6600dad _public_6600dad
#define public_6600dba _public_6600dba

PROC_DECLARE(0x6600da0, internal_6600da0, public_6600da0);
extern "C" NAKED register_t __cdecl internal_6600da0()
{
    __asm
    {
        call public_6600d90
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        xor eax, eax
        public_6600dad : nop
        cmp dword ptr ds : [ecx+eax*4], edx
        je public_6600dba
        inc eax
        cmp eax, 0x16
        jl public_6600dad
        xor eax, eax
        public_6600dba : nop
        ret 
        UNREACHABLE_TRAP(0x6600da0)
    }
}

#undef public_6600dad
#undef public_6600dba

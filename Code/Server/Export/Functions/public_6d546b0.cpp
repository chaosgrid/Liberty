#include "Server-PCH.h"


#define public_6d546c6 _public_6d546c6
#define public_6d546cb _public_6d546cb
#define public_6d546d5 _public_6d546d5

PROC_DECLARE(0x6d546b0, internal_6d546b0, public_6d546b0);
extern "C" NAKED register_t __cdecl internal_6d546b0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        test edx, edx
        jbe public_6d546d5
        mov ecx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+8]
        add ecx, 0x3E0
        public_6d546c6 : nop
        cmp dword ptr ds : [ecx], esi
        jne public_6d546cb
        inc eax
        public_6d546cb : nop
        add ecx, 0x418
        dec edx
        jne public_6d546c6
        pop esi
        public_6d546d5 : nop
        ret 4
        UNREACHABLE_TRAP(0x6d546b0)
    }
}

#undef public_6d546c6
#undef public_6d546cb
#undef public_6d546d5

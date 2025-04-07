#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d33b86);
CLANG_FORWARD_PROC_SYMBOL(public_6d33cdd);
CLANG_FORWARD_PROC_SYMBOL(public_6d33dc5);
CLANG_FORWARD_PROC_SYMBOL(public_6d40278);

#define public_6d33ef8 _public_6d33ef8
#define public_6d33f0c _public_6d33f0c

PROC_DECLARE(0x6d33edb, internal_6d33edb, public_6d33edb);
extern "C" NAKED register_t __cdecl internal_6d33edb()
{
    __asm
    {
        push ebp
        mov ebp, esp
        call public_6d40278
        test eax, eax
        je public_6d33ef8
        mov eax, offset _public_6d33dc5
        mov dword ptr ds : [public_6d6c938], eax
        mov dword ptr ds : [public_6d6c93c], eax
        jmp public_6d33f0c
        public_6d33ef8 : nop
        mov dword ptr ds : [public_6d6c938], offset _public_6d33b86
        mov dword ptr ds : [public_6d6c93c], offset _public_6d33cdd
        public_6d33f0c : nop
        pop ebp
        jmp dword ptr ds : [public_6d6c938]
        UNREACHABLE_TRAP(0x6d33edb)
    }
}

#undef public_6d33ef8
#undef public_6d33f0c

#include "Server-PCH.h"


#define public_6d2b7c1 _public_6d2b7c1

PROC_DECLARE(0x6d2b7b0, internal_6d2b7b0, public_6d2b7b0);
extern "C" NAKED register_t __cdecl internal_6d2b7b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        cmp word ptr ds : [eax], 0
        jne public_6d2b7c1
        xor al, al
        ret 8
        public_6d2b7c1 : nop
        add eax, 2
        mov dword ptr ds : [ecx], eax
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x6d2b7b0)
    }
}

#undef public_6d2b7c1

#include "Server-PCH.h"


#define public_6d2b434 _public_6d2b434

PROC_DECLARE(0x6d2b420, internal_6d2b420, public_6d2b420);
extern "C" NAKED register_t __cdecl internal_6d2b420()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+0xC], eax
        jne public_6d2b434
        xor al, al
        ret 8
        public_6d2b434 : nop
        add eax, 2
        mov dword ptr ds : [ecx], eax
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x6d2b420)
    }
}

#undef public_6d2b434

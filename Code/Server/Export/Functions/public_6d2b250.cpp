#include "Server-PCH.h"


#define public_6d2b265 _public_6d2b265
#define public_6d2b26a _public_6d2b26a

PROC_DECLARE(0x6d2b250, internal_6d2b250, public_6d2b250);
extern "C" NAKED register_t __cdecl internal_6d2b250()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+0xC], eax
        je public_6d2b265
        cmp word ptr ds : [eax], 0xA
        jne public_6d2b26a
        public_6d2b265 : nop
        xor al, al
        ret 8
        public_6d2b26a : nop
        add eax, 2
        mov dword ptr ds : [ecx], eax
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x6d2b250)
    }
}

#undef public_6d2b265
#undef public_6d2b26a

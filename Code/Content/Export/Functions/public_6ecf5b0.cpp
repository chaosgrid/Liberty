#include "Content-PCH.h"


#define public_6ecf5c8 _public_6ecf5c8

PROC_DECLARE(0x6ecf5b0, internal_6ecf5b0, public_6ecf5b0);
extern "C" NAKED register_t __cdecl internal_6ecf5b0()
{
    __asm
    {
        mov eax, ecx
        dec dword ptr ds : [eax+0x6C]
        jne public_6ecf5c8
        mov ecx, dword ptr ds : [eax+0x34]
        mov eax, dword ptr ds : [eax+0x40]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 0
        call dword ptr ds : [edx+0x74]
        xor al, al
        ret 
        public_6ecf5c8 : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ecf5b0)
    }
}

#undef public_6ecf5c8

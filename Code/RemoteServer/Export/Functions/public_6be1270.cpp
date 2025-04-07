#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1270);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be127e _public_6be127e

PROC_DECLARE(0x6be1270, internal_6be1270, public_6be1270);
extern "C" NAKED register_t __cdecl internal_6be1270()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_6be127e
        push eax
        call public_6c09aaa
        pop ecx
        public_6be127e : nop
        ret 
        UNREACHABLE_TRAP(0x6be1270)
    }
}

#undef public_6be127e

#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d26);

#define public_6b39bd6 _public_6b39bd6

PROC_DECLARE(0x6b39bc0, internal_6b39bc0, public_6b39bc0);
extern "C" NAKED register_t __cdecl internal_6b39bc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b73d74]
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        je public_6b39bd6
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6b69d26
        public_6b39bd6 : nop
        ret 
        UNREACHABLE_TRAP(0x6b39bc0)
    }
}

#undef public_6b39bd6

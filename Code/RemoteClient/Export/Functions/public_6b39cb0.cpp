#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d0e);

#define public_6b39cd2 _public_6b39cd2

PROC_DECLARE(0x6b39cb0, internal_6b39cb0, public_6b39cb0);
extern "C" NAKED register_t __cdecl internal_6b39cb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jbe public_6b39cd2
        cmp eax, 0x80
        ja public_6b39cd2
        mov ecx, dword ptr ds : [public_6b73d74]
        mov ecx, dword ptr ds : [ecx+eax*4+0xC]
        test ecx, ecx
        je public_6b39cd2
        jmp public_6b69d0e
        public_6b39cd2 : nop
        ret 
        UNREACHABLE_TRAP(0x6b39cb0)
    }
}

#undef public_6b39cd2

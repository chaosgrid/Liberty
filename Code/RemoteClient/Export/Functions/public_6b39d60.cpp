#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d50);

#define public_6b39d7f _public_6b39d7f

PROC_DECLARE(0x6b39d60, internal_6b39d60, public_6b39d60);
extern "C" NAKED register_t __cdecl internal_6b39d60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jbe public_6b39d7f
        cmp eax, 0x80
        ja public_6b39d7f
        mov ecx, dword ptr ds : [ecx+eax*4+0xC]
        test ecx, ecx
        je public_6b39d7f
        call public_6b69d50
        ret 4
        public_6b39d7f : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6b39d60)
    }
}

#undef public_6b39d7f

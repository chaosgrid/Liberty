#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39270);
CLANG_FORWARD_PROC_SYMBOL(public_6b69cf6);

#define public_6b3928f _public_6b3928f

PROC_DECLARE(0x6b39270, internal_6b39270, public_6b39270);
extern "C" NAKED register_t __cdecl internal_6b39270()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x68]
        test eax, eax
        mov dword ptr ds : [ecx], offset public_6b6bd80
        jbe public_6b3928f
        cmp eax, 0x80
        ja public_6b3928f
        mov dword ptr ds : [eax*4+public_6b73b34], 0
        public_6b3928f : nop
        jmp public_6b69cf6
        UNREACHABLE_TRAP(0x6b39270)
    }
}

#undef public_6b3928f

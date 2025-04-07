#include "RemoteClient-PCH.h"


#define public_6b395e5 _public_6b395e5
#define public_6b395fa _public_6b395fa

PROC_DECLARE(0x6b395e0, internal_6b395e0, public_6b395e0);
extern "C" NAKED register_t __cdecl internal_6b395e0()
{
    __asm
    {
        xor eax, eax
        lea edx, ds:[ecx+0x10]
        public_6b395e5 : nop
        cmp dword ptr ds : [edx], 0
        je public_6b395fa
        inc eax
        add edx, 4
        cmp eax, 0x80
        jb public_6b395e5
        xor eax, eax
        ret 4
        public_6b395fa : nop
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+eax*4+0x10], edx
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x6b395e0)
    }
}

#undef public_6b395e5
#undef public_6b395fa

#include "Server-PCH.h"


#define public_6cee9d6 _public_6cee9d6

PROC_DECLARE(0x6cee980, internal_6cee980, public_6cee980);
extern "C" NAKED register_t __cdecl internal_6cee980()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        sub esp, 0x14
        test ecx, ecx
        je public_6cee9d6
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_6cee9d6
        call dword ptr ds : [public_6d6422c]
        test eax, eax
        je public_6cee9d6
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], ecx
        lea edx, ss:[esp+8]
        lea ecx, ss:[esp]
        mov dword ptr ss : [esp+4], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+4], 3
        call dword ptr ds : [edx]
        public_6cee9d6 : nop
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6cee980)
    }
}

#undef public_6cee9d6

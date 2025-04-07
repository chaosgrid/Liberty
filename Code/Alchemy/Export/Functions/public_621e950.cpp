#include "Alchemy-PCH.h"


#define public_621e962 _public_621e962
#define public_621e96e _public_621e96e
#define public_621e978 _public_621e978

PROC_DECLARE(0x621e950, internal_621e950, public_621e950);
extern "C" NAKED register_t __cdecl internal_621e950()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ds : [eax+0x18]
        cmp eax, ecx
        je public_621e96e
        mov edx, dword ptr ss : [esp+8]
        public_621e962 : nop
        cmp dword ptr ds : [eax+4], edx
        je public_621e96e
        add eax, 0x10
        cmp eax, ecx
        jne public_621e962
        public_621e96e : nop
        cmp eax, ecx
        jne public_621e978
        or eax, 0xFFFFFFFF
        ret 0xC
        public_621e978 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x621e950)
    }
}

#undef public_621e962
#undef public_621e96e
#undef public_621e978

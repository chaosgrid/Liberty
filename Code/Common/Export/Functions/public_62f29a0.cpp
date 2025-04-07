#include "Common-PCH.h"


#define public_62f29b4 _public_62f29b4
#define public_62f29bf _public_62f29bf
#define public_62f29c4 _public_62f29c4

PROC_DECLARE(0x62f29a0, internal_62f29a0, public_62f29a0);
extern "C" NAKED register_t __cdecl internal_62f29a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x134]
        mov ecx, dword ptr ds : [ecx+0x138]
        cmp eax, ecx
        je public_62f29bf
        mov edx, dword ptr ss : [esp+4]
        public_62f29b4 : nop
        cmp dword ptr ds : [eax], edx
        je public_62f29c4
        add eax, 0x14
        cmp eax, ecx
        jne public_62f29b4
        public_62f29bf : nop
        xor eax, eax
        ret 4
        public_62f29c4 : nop
        add eax, 4
        ret 4
        UNREACHABLE_TRAP(0x62f29a0)
    }
}

#undef public_62f29b4
#undef public_62f29bf
#undef public_62f29c4

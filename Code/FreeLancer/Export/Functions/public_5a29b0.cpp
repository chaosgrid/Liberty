#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a29b0);

#define public_5a29e3 _public_5a29e3
#define public_5a2a10 _public_5a2a10

PROC_DECLARE(0x5a29b0, internal_5a29b0, public_5a29b0);
extern "C" NAKED register_t __cdecl internal_5a29b0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_67ddb4]
        xor eax, eax
        cmp cl, al
        je public_5a29e3
        mov ecx, dword ptr ds : [public_67dd9c]
        mov edx, dword ptr ds : [public_67dda0]
        mov byte ptr ds : [public_67ddb4], al
        mov dword ptr ds : [public_67ddac], eax
        mov dword ptr ds : [public_67ddb0], eax
        mov dword ptr ds : [public_67dda4], ecx
        mov dword ptr ds : [public_67dda8], edx
        public_5a29e3 : nop
        cmp byte ptr ds : [public_67dd8c], al
        je public_5a2a10
        mov ecx, dword ptr ds : [public_67dd78]
        mov byte ptr ds : [public_67dd8c], al
        mov dword ptr ds : [public_67dd84], eax
        mov dword ptr ds : [public_67dd88], eax
        mov eax, dword ptr ds : [public_67dd74]
        mov dword ptr ds : [public_67dd7c], eax
        mov dword ptr ds : [public_67dd80], ecx
        public_5a2a10 : nop
        ret 
        UNREACHABLE_TRAP(0x5a29b0)
    }
}

#undef public_5a29e3
#undef public_5a2a10

#include "zlib-PCH.h"


#define public_100090e2 _public_100090e2
#define public_100090ea _public_100090ea

PROC_DECLARE(0x100090d0, internal_100090d0, public_100090d0);
extern "C" NAKED register_t __cdecl internal_100090d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_100090e2
        mov eax, dword ptr ds : [eax+0x9C]
        test eax, eax
        jne public_100090ea
        public_100090e2 : nop
        mov eax, 0xFFFFFF9A
        ret 4
        public_100090ea : nop
        mov edx, dword ptr ds : [eax+0x5C]
        xor ecx, ecx
        test edx, edx
        sete cl
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x100090d0)
    }
}

#undef public_100090e2
#undef public_100090ea

#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0440);

#define public_6ed0459 _public_6ed0459

PROC_DECLARE(0x6ed0440, internal_6ed0440, public_6ed0440);
extern "C" NAKED register_t __cdecl internal_6ed0440()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed583c]
        cmp eax, offset public_6ed5838
        je public_6ed0459
        mov cl, byte ptr ss : [esp+4]
        mov byte ptr ds : [eax], cl
        inc dword ptr ds : [public_6ed583c]
        ret 
        public_6ed0459 : nop
        inc dword ptr ds : [public_6ed5840]
        ret 
        UNREACHABLE_TRAP(0x6ed0440)
    }
}

#undef public_6ed0459

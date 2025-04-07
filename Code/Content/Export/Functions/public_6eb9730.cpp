#include "Content-PCH.h"


#define public_6eb9741 _public_6eb9741
#define public_6eb9751 _public_6eb9751

PROC_DECLARE(0x6eb9730, internal_6eb9730, public_6eb9730);
extern "C" NAKED register_t __cdecl internal_6eb9730()
{
    __asm
    {
        cmp byte ptr ds : [ecx+0x2B0], 1
        mov eax, dword ptr ss : [esp+4]
        jne public_6eb9741
        test eax, eax
        je public_6eb9751
        public_6eb9741 : nop
        mov dword ptr ds : [ecx+0x2AC], eax
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x2E8], eax
        public_6eb9751 : nop
        ret 8
        UNREACHABLE_TRAP(0x6eb9730)
    }
}

#undef public_6eb9741
#undef public_6eb9751

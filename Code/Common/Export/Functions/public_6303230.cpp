#include "Common-PCH.h"


#define public_6303244 _public_6303244

PROC_DECLARE(0x6303230, internal_6303230, public_6303230);
extern "C" NAKED register_t __cdecl internal_6303230()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        mov byte ptr ds : [public_63fce0c], al
        je public_6303244
        mov byte ptr ds : [public_63ed17c], 0
        public_6303244 : nop
        ret 
        UNREACHABLE_TRAP(0x6303230)
    }
}

#undef public_6303244

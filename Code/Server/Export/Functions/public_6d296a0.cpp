#include "Server-PCH.h"


#define public_6d296c2 _public_6d296c2
#define public_6d296c7 _public_6d296c7

PROC_DECLARE(0x6d296a0, internal_6d296a0, public_6d296a0);
extern "C" NAKED register_t __cdecl internal_6d296a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x18], ecx
        mov eax, dword ptr ds : [eax+0x10]
        mov cx, word ptr ds : [eax]
        test cx, cx
        je public_6d296c7
        cmp cx, 0xA
        jne public_6d296c2
        cmp word ptr ds : [eax+2], 0
        je public_6d296c7
        public_6d296c2 : nop
        xor eax, eax
        ret 4
        public_6d296c7 : nop
        mov eax, 1
        ret 4
        UNREACHABLE_TRAP(0x6d296a0)
    }
}

#undef public_6d296c2
#undef public_6d296c7

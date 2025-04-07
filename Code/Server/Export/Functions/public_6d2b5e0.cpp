#include "Server-PCH.h"


#define public_6d2b5f4 _public_6d2b5f4
#define public_6d2b5f9 _public_6d2b5f9

PROC_DECLARE(0x6d2b5e0, internal_6d2b5e0, public_6d2b5e0);
extern "C" NAKED register_t __cdecl internal_6d2b5e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx]
        mov cx, word ptr ds : [eax]
        test cx, cx
        je public_6d2b5f4
        cmp cx, 0xA
        jne public_6d2b5f9
        public_6d2b5f4 : nop
        xor al, al
        ret 8
        public_6d2b5f9 : nop
        add eax, 2
        mov dword ptr ds : [edx], eax
        mov al, 1
        ret 8
        UNREACHABLE_TRAP(0x6d2b5e0)
    }
}

#undef public_6d2b5f4
#undef public_6d2b5f9

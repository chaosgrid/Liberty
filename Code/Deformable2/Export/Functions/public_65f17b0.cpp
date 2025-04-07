#include "Deformable2-PCH.h"


#define public_65f17c0 _public_65f17c0

PROC_DECLARE(0x65f17b0, internal_65f17b0, public_65f17b0);
extern "C" NAKED register_t __cdecl internal_65f17b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov al, byte ptr ds : [ecx+0x3C]
        test al, 2
        je public_65f17c0
        xor al, al
        ret 8
        public_65f17c0 : nop
        or al, 2
        mov byte ptr ds : [ecx+0x3C], al
        not al
        and eax, 1
        ret 8
        UNREACHABLE_TRAP(0x65f17b0)
    }
}

#undef public_65f17c0

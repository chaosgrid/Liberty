#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_4cc8d0);

#define public_4cc8f8 _public_4cc8f8

PROC_DECLARE(0x4cc8d0, internal_4cc8d0, public_4cc8d0);
extern "C" NAKED register_t __cdecl internal_4cc8d0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ds : [public_6748f8]
        xor al, al
        test ecx, ecx
        je public_4cc8f8
        mov al, byte ptr ds : [ecx+0xEC]
        mov byte ptr ss : [esp], al
        call public_41a3e0
        mov ecx, dword ptr ss : [esp]
        neg al
        sbb al, al
        not al
        and eax, ecx
        public_4cc8f8 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4cc8d0)
    }
}

#undef public_4cc8f8

#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58ad70);

#define public_58ad89 _public_58ad89

PROC_DECLARE(0x58ad70, internal_58ad70, public_58ad70);
extern "C" NAKED register_t __cdecl internal_58ad70()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x395], al
        mov al, byte ptr ss : [esp+8]
        test al, al
        je public_58ad89
        mov byte ptr ds : [ecx+0x394], 0
        public_58ad89 : nop
        ret 8
        UNREACHABLE_TRAP(0x58ad70)
    }
}

#undef public_58ad89

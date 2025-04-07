#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2f2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2f2c4 _public_6c2f2c4
#define public_6c2f2d4 _public_6c2f2d4

PROC_DECLARE(0x6c2f2b0, internal_6c2f2b0, public_6c2f2b0);
extern "C" NAKED register_t __cdecl internal_6c2f2b0()
{
    __asm
    {
        push 0xC
        call public_6c34eac
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6c2f2c4
        mov ecx, eax
        public_6c2f2c4 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6c2f2d4
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6c2f2d4 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6c2f2b0)
    }
}

#undef public_6c2f2c4
#undef public_6c2f2d4

#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d0d0);
CLANG_FORWARD_PROC_SYMBOL(public_661d0f0);

#define public_661d104 _public_661d104

PROC_DECLARE(0x661d0f0, internal_661d0f0, public_661d0f0);
extern "C" NAKED register_t __cdecl internal_661d0f0()
{
    __asm
    {
        call public_661d0d0
        test eax, eax
        je public_661d104
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, eax
        jmp dword ptr ds : [edx+4]
        public_661d104 : nop
        ret 8
        UNREACHABLE_TRAP(0x661d0f0)
    }
}

#undef public_661d104

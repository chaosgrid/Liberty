#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6268e30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6268e44 _public_6268e44
#define public_6268e54 _public_6268e54

PROC_DECLARE(0x6268e30, internal_6268e30, public_6268e30);
extern "C" NAKED register_t __cdecl internal_6268e30()
{
    __asm
    {
        push 0x28
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6268e44
        mov ecx, eax
        public_6268e44 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6268e54
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6268e54 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6268e30)
    }
}

#undef public_6268e44
#undef public_6268e54

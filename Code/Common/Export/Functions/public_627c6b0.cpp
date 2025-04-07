#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c6b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627c6ca _public_627c6ca
#define public_627c6d5 _public_627c6d5

PROC_DECLARE(0x627c6b0, internal_627c6b0, public_627c6b0);
extern "C" NAKED register_t __cdecl internal_627c6b0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        je public_627c6ca
        test eax, eax
        je public_627c6d5
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx+0x10], eax
        ret 4
        public_627c6ca : nop
        test eax, eax
        je public_627c6d5
        push eax
        call public_6391d5a
        pop ecx
        public_627c6d5 : nop
        ret 4
        UNREACHABLE_TRAP(0x627c6b0)
    }
}

#undef public_627c6ca
#undef public_627c6d5

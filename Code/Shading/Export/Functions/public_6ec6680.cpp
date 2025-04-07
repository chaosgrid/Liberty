#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6680);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec669a _public_6ec669a

PROC_DECLARE(0x6ec6680, internal_6ec6680, public_6ec6680);
extern "C" NAKED register_t __cdecl internal_6ec6680()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed57d4]
        test eax, eax
        je public_6ec669a
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_6ed57d4], ecx
        dec dword ptr ds : [public_6ed57e0]
        ret 4
        public_6ec669a : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_6ed0c5c
        add esp, 4
        ret 4
        UNREACHABLE_TRAP(0x6ec6680)
    }
}

#undef public_6ec669a

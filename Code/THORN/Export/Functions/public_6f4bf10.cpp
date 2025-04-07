#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4bf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f8f0);

#define public_6f4bf24 _public_6f4bf24

PROC_DECLARE(0x6f4bf10, internal_6f4bf10, public_6f4bf10);
extern "C" NAKED register_t __cdecl internal_6f4bf10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f4bf24
        xor eax, eax
        ret 
        public_6f4bf24 : nop
        push eax
        push ecx
        call public_6f4f8f0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f4bf10)
    }
}

#undef public_6f4bf24

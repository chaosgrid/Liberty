#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d220);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f4d24b _public_6f4d24b

PROC_DECLARE(0x6f4d220, internal_6f4d220, public_6f4d220);
extern "C" NAKED register_t __cdecl internal_6f4d220()
{
    __asm
    {
        push 0xC
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6f4d24b
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_6fbb35c
        mov dword ptr ds : [ecx], eax
        mov al, 1
        ret 
        public_6f4d24b : nop
        mov edx, dword ptr ss : [esp+8]
        xor eax, eax
        mov dword ptr ds : [edx], eax
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6f4d220)
    }
}

#undef public_6f4d24b

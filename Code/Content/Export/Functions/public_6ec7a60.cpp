#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb83e0);

#define public_6ec7a72 _public_6ec7a72

PROC_DECLARE(0x6ec7a60, internal_6ec7a60, public_6ec7a60);
extern "C" NAKED register_t __cdecl internal_6ec7a60()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6ec7a72
        add eax, 0xC
        push eax
        call public_6eb83e0
        public_6ec7a72 : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ec7a60)
    }
}

#undef public_6ec7a72

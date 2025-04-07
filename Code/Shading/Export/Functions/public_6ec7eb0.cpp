#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec7ebf _public_6ec7ebf
#define public_6ec7ed8 _public_6ec7ed8

PROC_DECLARE(0x6ec7eb0, internal_6ec7eb0, public_6ec7eb0);
extern "C" NAKED register_t __cdecl internal_6ec7eb0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        jbe public_6ec7ebf
        dec eax
        mov dword ptr ds : [ecx+0x18], eax
        public_6ec7ebf : nop
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        jne public_6ec7ed8
        push ecx
        mov dword ptr ds : [ecx+0x18], 1
        call public_6ed0c50
        add esp, 4
        xor eax, eax
        public_6ec7ed8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6ec7eb0)
    }
}

#undef public_6ec7ebf
#undef public_6ec7ed8

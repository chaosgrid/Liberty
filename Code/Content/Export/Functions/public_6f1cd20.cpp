#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1cd20);

#define public_6f1cd30 _public_6f1cd30

PROC_DECLARE(0x6f1cd20, internal_6f1cd20, public_6f1cd20);
extern "C" NAKED register_t __cdecl internal_6f1cd20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_6f1cd30
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+8]
        ret 
        public_6f1cd30 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f1cd20)
    }
}

#undef public_6f1cd30

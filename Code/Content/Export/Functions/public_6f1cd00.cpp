#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1cd00);

#define public_6f1cd14 _public_6f1cd14

PROC_DECLARE(0x6f1cd00, internal_6f1cd00, public_6f1cd00);
extern "C" NAKED register_t __cdecl internal_6f1cd00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_6f1cd14
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx]
        jmp dword ptr ds : [edx+0x10]
        public_6f1cd14 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f1cd00)
    }
}

#undef public_6f1cd14

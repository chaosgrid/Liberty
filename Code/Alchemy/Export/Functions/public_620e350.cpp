#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e350);

#define public_620e365 _public_620e365

PROC_DECLARE(0x620e350, internal_620e350, public_620e350);
extern "C" NAKED register_t __cdecl internal_620e350()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xA8]
        test edx, edx
        jne public_620e365
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        ret 4
        public_620e365 : nop
        mov eax, dword ptr ds : [ecx+0xAC]
        sub eax, edx
        mov edx, dword ptr ss : [esp+4]
        sar eax, 2
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x620e350)
    }
}

#undef public_620e365

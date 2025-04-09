#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ae80);

#define public_41a666 _public_41a666

PROC_DECLARE(0x41a640, internal_41a640, public_41a640);
extern "C" NAKED register_t __cdecl internal_41a640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x1C
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_41a666
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        call public_44ae80
        public_41a666 : nop
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x41a640)
    }
}

#undef public_41a666

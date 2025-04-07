#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6310410);

#define public_6310440 _public_6310440

PROC_DECLARE(0x6310410, internal_6310410, public_6310410);
extern "C" NAKED register_t __cdecl internal_6310410()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1564]
        test al, al
        je public_6310440
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0x145C]
        push eax
        movzx eax, word ptr ds : [edx]
        add eax, dword ptr ds : [ecx+0x1450]
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        neg eax
        sbb eax, eax
        inc eax
        ret 4
        public_6310440 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        add ecx, 0x428
        push ecx
        call dword ptr ds : [public_639902c]
        add esp, 8
        neg eax
        sbb eax, eax
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x6310410)
    }
}

#undef public_6310440

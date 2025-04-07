#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bc60);

#define public_634bc98 _public_634bc98

PROC_DECLARE(0x634bc60, internal_634bc60, public_634bc60);
extern "C" NAKED register_t __cdecl internal_634bc60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ds : [eax+0x84]
        add eax, 0x84
        add ecx, 0x84
        test dl, dl
        je public_634bc98
        cmp byte ptr ds : [ecx], 0
        je public_634bc98
        push 8
        push ecx
        push eax
        call dword ptr ds : [public_639925c]
        add esp, 0xC
        neg eax
        sbb eax, eax
        neg eax
        ret 8
        public_634bc98 : nop
        mov eax, 1
        ret 8
        UNREACHABLE_TRAP(0x634bc60)
    }
}

#undef public_634bc98

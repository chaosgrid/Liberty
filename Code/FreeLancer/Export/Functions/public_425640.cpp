#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425640);

#define public_42566d _public_42566d

PROC_DECLARE(0x425640, internal_425640, public_425640);
extern "C" NAKED register_t __cdecl internal_425640()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx]
        sub esp, 0x14
        test ecx, ecx
        je public_42566d
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push esi
        lea esi, ss:[esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x58]
        mov eax, dword ptr ss : [esp+4]
        pop esi
        add esp, 0x14
        ret 4
        public_42566d : nop
        xor eax, eax
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x425640)
    }
}

#undef public_42566d

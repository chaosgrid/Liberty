#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57c750);
CLANG_FORWARD_PROC_SYMBOL(public_57c7d0);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);

#define public_56177b _public_56177b

PROC_DECLARE(0x561730, internal_561730, public_561730);
extern "C" NAKED register_t __cdecl internal_561730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        push edi
        mov edi, ecx
        cmp dword ptr ds : [eax+4], 2
        jne public_56177b
        mov ecx, dword ptr ds : [edi+0x110]
        push ebx
        push esi
        push 0
        call public_57c7d0
        mov esi, dword ptr ds : [edi+0x110]
        mov ebx, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xC]
        push ecx
        call public_59da70
        add esp, 4
        push eax
        mov ecx, esi
        call dword ptr ds : [ebx+0x10]
        test al, al
        pop esi
        pop ebx
        je public_56177b
        mov ecx, dword ptr ds : [edi+0x110]
        call public_57c750
        public_56177b : nop
        xor al, al
        pop edi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x561730)
    }
}

#undef public_56177b

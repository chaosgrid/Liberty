#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6328f20);

#define public_6328ef0 _public_6328ef0

PROC_DECLARE(0x6328ee0, internal_6328ee0, public_6328ee0);
extern "C" NAKED register_t __cdecl internal_6328ee0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        jne public_6328ef0
        mov ecx, dword ptr ds : [public_639914c]
        public_6328ef0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push eax
        push ecx
        call public_6328f20
        add esp, 0x1C
        ret 0x14
        UNREACHABLE_TRAP(0x6328ee0)
    }
}

#undef public_6328ef0

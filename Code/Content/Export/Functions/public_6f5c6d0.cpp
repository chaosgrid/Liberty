#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5c6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6f5c6e9 _public_6f5c6e9

PROC_DECLARE(0x6f5c6d0, internal_6f5c6d0, public_6f5c6d0);
extern "C" NAKED register_t __cdecl internal_6f5c6d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd0ea8]
        sub esp, 0xC
        test eax, eax
        push esi
        mov esi, ecx
        jne public_6f5c6e9
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd0ea8], eax
        public_6f5c6e9 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6f5c6d0)
    }
}

#undef public_6f5c6e9

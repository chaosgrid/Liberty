#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6d5dc94 _public_6d5dc94

PROC_DECLARE(0x6d5dc60, internal_6d5dc60, public_6d5dc60);
extern "C" NAKED register_t __cdecl internal_6d5dc60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6d5dc94
        push eax
        call dword ptr ds : [public_6d644dc]
        add esp, 4
        test eax, eax
        je public_6d5dc94
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push ecx
        push edx
        mov ecx, eax
        call dword ptr ds : [public_6d649c8]
        mov al, 1
        ret 
        public_6d5dc94 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6d5dc60)
    }
}

#undef public_6d5dc94

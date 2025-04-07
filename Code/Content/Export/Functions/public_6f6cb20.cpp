#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab770);
CLANG_FORWARD_PROC_SYMBOL(public_6eac0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6cb20);

#define public_6f6cb5c _public_6f6cb5c

PROC_DECLARE(0x6f6cb20, internal_6f6cb20, public_6f6cb20);
extern "C" NAKED register_t __cdecl internal_6f6cb20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3428]
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 8
        test eax, eax
        je public_6f6cb5c
        lea edx, ss:[esp+8]
        push edx
        call public_6eac0c0
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        add esp, 4
        push edx
        mov ecx, eax
        call public_6eab770
        test eax, eax
        setne al
        ret 
        public_6f6cb5c : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6f6cb20)
    }
}

#undef public_6f6cb5c

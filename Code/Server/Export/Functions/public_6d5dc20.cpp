#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6d5dc4f _public_6d5dc4f

PROC_DECLARE(0x6d5dc20, internal_6d5dc20, public_6d5dc20);
extern "C" NAKED register_t __cdecl internal_6d5dc20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6d5dc4f
        push eax
        call dword ptr ds : [public_6d644dc]
        add esp, 4
        test eax, eax
        je public_6d5dc4f
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_6d649c4]
        mov al, 1
        ret 
        public_6d5dc4f : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6d5dc20)
    }
}

#undef public_6d5dc4f

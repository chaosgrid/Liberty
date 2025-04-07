#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_53c96d _public_53c96d

PROC_DECLARE(0x53c940, internal_53c940, public_53c940);
extern "C" NAKED register_t __cdecl internal_53c940()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push 1
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53c96d
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        xor eax, eax
        mov al, byte ptr ds : [esi+5]
        push 0
        push eax
        xor eax, eax
        mov al, byte ptr ds : [esi+4]
        push eax
        call dword ptr ds : [edx+0x50]
        public_53c96d : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x53c940)
    }
}

#undef public_53c96d

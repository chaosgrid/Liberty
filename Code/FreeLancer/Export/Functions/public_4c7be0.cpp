#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7be0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4c7c2e _public_4c7c2e

PROC_DECLARE(0x4c7be0, internal_4c7be0, public_4c7be0);
extern "C" NAKED register_t __cdecl internal_4c7be0()
{
    __asm
    {
        call public_54baf0
        test eax, eax
        je public_4c7c2e
        add eax, 0xC
        test eax, eax
        je public_4c7c2e
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4c7c2e
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4c7c2e
        push 0x20000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        push eax
        call dword ptr ds : [public_5c6498]
        add esp, 4
        test eax, eax
        je public_4c7c2e
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        jmp dword ptr ds : [edx+4]
        public_4c7c2e : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x4c7be0)
    }
}

#undef public_4c7c2e

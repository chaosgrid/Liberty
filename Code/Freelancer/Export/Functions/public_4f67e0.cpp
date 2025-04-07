#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f67e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4f6804 _public_4f6804

PROC_DECLARE(0x4f67e0, internal_4f67e0, public_4f67e0);
extern "C" NAKED register_t __cdecl internal_4f67e0()
{
    __asm
    {
        push 8
        call public_5b7e84
        add esp, 4
        test eax, eax
        je public_4f6804
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_5d98bc
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [ecx], eax
        mov al, 1
        ret 
        public_4f6804 : nop
        mov edx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr ds : [edx], eax
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x4f67e0)
    }
}

#undef public_4f6804

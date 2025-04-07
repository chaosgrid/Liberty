#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334450);

#define public_6334469 _public_6334469

PROC_DECLARE(0x6334450, internal_6334450, public_6334450);
extern "C" NAKED register_t __cdecl internal_6334450()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6334469
        push eax
        call dword ptr ds : [public_6399280]
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        ret 
        public_6334469 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [eax]
        ret 
        UNREACHABLE_TRAP(0x6334450)
    }
}

#undef public_6334469

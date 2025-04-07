#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b31022 _public_6b31022

PROC_DECLARE(0x6b31000, internal_6b31000, public_6b31000);
extern "C" NAKED register_t __cdecl internal_6b31000()
{
    __asm
    {
        push 0x30
        call public_6b6a134
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_6b31022
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov byte ptr ds : [eax+0x14], cl
        ret 
        public_6b31022 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6b31000)
    }
}

#undef public_6b31022

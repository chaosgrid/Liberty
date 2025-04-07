#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bd5cc2 _public_6bd5cc2

PROC_DECLARE(0x6bd5ca0, internal_6bd5ca0, public_6bd5ca0);
extern "C" NAKED register_t __cdecl internal_6bd5ca0()
{
    __asm
    {
        push 0x30
        call public_6c09d26
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_6bd5cc2
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov byte ptr ds : [eax+0x14], cl
        ret 
        public_6bd5cc2 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6bd5ca0)
    }
}

#undef public_6bd5cc2

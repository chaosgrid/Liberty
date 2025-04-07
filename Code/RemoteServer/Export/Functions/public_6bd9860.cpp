#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd9860);

#define public_6bd9872 _public_6bd9872

PROC_DECLARE(0x6bd9860, internal_6bd9860, public_6bd9860);
extern "C" NAKED register_t __cdecl internal_6bd9860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        jne public_6bd9872
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6c0b148]
        public_6bd9872 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6bd9860)
    }
}

#undef public_6bd9872

#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bed7f0);

#define public_6bed7f9 _public_6bed7f9
#define public_6bed804 _public_6bed804

PROC_DECLARE(0x6bed7f0, internal_6bed7f0, public_6bed7f0);
extern "C" NAKED register_t __cdecl internal_6bed7f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jne public_6bed7f9
        ret 
        public_6bed7f9 : nop
        cmp eax, dword ptr ds : [public_6c13bd0]
        jbe public_6bed804
        xor eax, eax
        ret 
        public_6bed804 : nop
        mov eax, dword ptr ds : [eax*4+public_6c136fc]
        ret 
        UNREACHABLE_TRAP(0x6bed7f0)
    }
}

#undef public_6bed7f9
#undef public_6bed804

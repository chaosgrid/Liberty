#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b50140);

#define public_6b50149 _public_6b50149
#define public_6b50154 _public_6b50154

PROC_DECLARE(0x6b50140, internal_6b50140, public_6b50140);
extern "C" NAKED register_t __cdecl internal_6b50140()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jne public_6b50149
        ret 
        public_6b50149 : nop
        cmp eax, dword ptr ds : [public_6b73f48]
        jbe public_6b50154
        xor eax, eax
        ret 
        public_6b50154 : nop
        mov eax, dword ptr ds : [eax*4+public_6b73704]
        ret 
        UNREACHABLE_TRAP(0x6b50140)
    }
}

#undef public_6b50149
#undef public_6b50154

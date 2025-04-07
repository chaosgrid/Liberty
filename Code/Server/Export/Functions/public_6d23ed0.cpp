#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23ed0);

#define public_6d23ee6 _public_6d23ee6

PROC_DECLARE(0x6d23ed0, internal_6d23ed0, public_6d23ed0);
extern "C" NAKED register_t __cdecl internal_6d23ed0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        cmp eax, ecx
        je public_6d23ee6
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_6d68d64
        public_6d23ee6 : nop
        ret 
        UNREACHABLE_TRAP(0x6d23ed0)
    }
}

#undef public_6d23ee6

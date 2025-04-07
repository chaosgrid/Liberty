#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f590);
CLANG_FORWARD_PROC_SYMBOL(public_623f6d0);

#define public_623f6f3 _public_623f6f3

PROC_DECLARE(0x623f6d0, internal_623f6d0, public_623f6d0);
extern "C" NAKED register_t __cdecl internal_623f6d0()
{
    __asm
    {
        push ecx
        push ebx
        mov eax, 1
        cpuid 
        mov dword ptr ss : [esp+4], edx
        mov eax, dword ptr ss : [esp+4]
        pop ebx
        test eax, 0x2000000
        je public_623f6f3
        mov dword ptr ds : [public_62572a0], offset _public_623f590
        public_623f6f3 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x623f6d0)
    }
}

#undef public_623f6f3

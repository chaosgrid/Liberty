#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4b62d0);

#define public_4b62e9 _public_4b62e9

PROC_DECLARE(0x4b62d0, internal_4b62d0, public_4b62d0);
extern "C" NAKED register_t __cdecl internal_4b62d0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_672288]
        test ecx, ecx
        je public_4b62e9
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push eax
        push edx
        call public_4b5fd0
        public_4b62e9 : nop
        ret 
        UNREACHABLE_TRAP(0x4b62d0)
    }
}

#undef public_4b62e9

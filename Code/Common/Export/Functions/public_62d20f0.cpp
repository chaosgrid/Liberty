#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);

#define public_62d20ff _public_62d20ff

PROC_DECLARE(0x62d20f0, internal_62d20f0, public_62d20f0);
extern "C" NAKED register_t __cdecl internal_62d20f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [eax+0xC]
        xor edx, edx
        cmp eax, edx
        je public_62d20ff
        mov dword ptr ds : [eax+0x64], edx
        public_62d20ff : nop
        mov byte ptr ds : [ecx+0x29], dl
        ret 
        UNREACHABLE_TRAP(0x62d20f0)
    }
}

#undef public_62d20ff

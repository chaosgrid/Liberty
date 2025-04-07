#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62e90a0);

#define public_62cef3e _public_62cef3e

PROC_DECLARE(0x62cef10, internal_62cef10, public_62cef10);
extern "C" NAKED register_t __cdecl internal_62cef10()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62cef3e
        push 3
        push 0
        call public_62d21d0
        mov ecx, esi
        mov dword ptr ds : [esi+0x30], 0
        call public_62d20d0
        mov ecx, dword ptr ds : [esi+0x24]
        push 0
        add ecx, 0x18
        call public_62e90a0
        public_62cef3e : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62cef10)
    }
}

#undef public_62cef3e

#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55590);
CLANG_FORWARD_PROC_SYMBOL(public_6f557c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55a30);

#define public_6f55a48 _public_6f55a48

PROC_DECLARE(0x6f55a30, internal_6f55a30, public_6f55a30);
extern "C" NAKED register_t __cdecl internal_6f55a30()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push eax
        call public_6f55590
        add esp, 4
        test eax, eax
        je public_6f55a48
        inc dword ptr ds : [esi]
        pop esi
        ret 
        public_6f55a48 : nop
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        call public_6f557c0
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f55a30)
    }
}

#undef public_6f55a48

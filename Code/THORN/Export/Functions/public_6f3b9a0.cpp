#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f3b9b6 _public_6f3b9b6

PROC_DECLARE(0x6f3b9a0, internal_6f3b9a0, public_6f3b9a0);
extern "C" NAKED register_t __cdecl internal_6f3b9a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e1c]
        sub esp, 0xC
        test eax, eax
        jne public_6f3b9b6
        call public_6f57de0
        mov dword ptr ds : [public_6f61e1c], eax
        public_6f3b9b6 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f3b9a0)
    }
}

#undef public_6f3b9b6

#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801d10);
CLANG_FORWARD_PROC_SYMBOL(public_6801d70);
CLANG_FORWARD_PROC_SYMBOL(public_6802950);
CLANG_FORWARD_PROC_SYMBOL(public_6802ec0);

#define public_6801d20 _public_6801d20

PROC_DECLARE(0x6801d10, internal_6801d10, public_6801d10);
extern "C" NAKED register_t __cdecl internal_6801d10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_6801d20
        mov eax, 1
        pop esi
        ret 
        public_6801d20 : nop
        mov eax, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        sub ecx, edx
        mov edx, dword ptr ds : [eax+0xC]
        sar ecx, 4
        sub ecx, edx
        push ecx
        call public_6802950
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+0xC]
        shl esi, 4
        lea edx, ds:[esi+eax-0x10]
        shl ecx, 4
        push edx
        add ecx, eax
        push ecx
        call public_6801d70
        add esp, 0xC
        call public_6802ec0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6801d10)
    }
}

#undef public_6801d20

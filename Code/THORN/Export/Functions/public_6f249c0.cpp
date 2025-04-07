#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f249c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f249d6 _public_6f249d6

PROC_DECLARE(0x6f249c0, internal_6f249c0, public_6f249c0);
extern "C" NAKED register_t __cdecl internal_6f249c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61dd0]
        sub esp, 0x10
        test eax, eax
        jne public_6f249d6
        call public_6f57de0
        mov dword ptr ds : [public_6f61dd0], eax
        public_6f249d6 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f249c0)
    }
}

#undef public_6f249d6

#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6713960);

#define public_6713990 _public_6713990

PROC_DECLARE(0x6713960, internal_6713960, public_6713960);
extern "C" NAKED register_t __cdecl internal_6713960()
{
    __asm
    {
        mov al, byte ptr ds : [public_671cfb8]
        test al, al
        je public_6713990
        mov eax, dword ptr ds : [public_671b51c]
        mov ecx, dword ptr ss : [esp+0xC]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        lea edx, ds:[eax+ecx-1]
        mov ecx, dword ptr ss : [esp+8]
        push edx
        inc eax
        lea edx, ds:[ecx+2]
        push edx
        push eax
        push ecx
        call dword ptr ds : [public_671b7ac]
        add esp, 0x14
        public_6713990 : nop
        ret 
        UNREACHABLE_TRAP(0x6713960)
    }
}

#undef public_6713990

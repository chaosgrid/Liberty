#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62888b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62888c6 _public_62888c6

PROC_DECLARE(0x62888b0, internal_62888b0, public_62888b0);
extern "C" NAKED register_t __cdecl internal_62888b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc0b8]
        sub esp, 0xC
        test eax, eax
        jne public_62888c6
        call public_6391cf0
        mov dword ptr ds : [public_63fc0b8], eax
        public_62888c6 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
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
        UNREACHABLE_TRAP(0x62888b0)
    }
}

#undef public_62888c6

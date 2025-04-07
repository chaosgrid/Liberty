#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e2c00);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62e2c2e _public_62e2c2e

PROC_DECLARE(0x62e2c00, internal_62e2c00, public_62e2c00);
extern "C" NAKED register_t __cdecl internal_62e2c00()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp], eax
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], edx
        jne public_62e2c2e
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e2c2e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62e2c00)
    }
}

#undef public_62e2c2e

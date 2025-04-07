#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf4a90);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);

#define public_6cf4aa6 _public_6cf4aa6

PROC_DECLARE(0x6cf4a90, internal_6cf4a90, public_6cf4a90);
extern "C" NAKED register_t __cdecl internal_6cf4a90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d8d7c4]
        sub esp, 0xC
        test eax, eax
        jne public_6cf4aa6
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d7c4], eax
        public_6cf4aa6 : nop
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
        UNREACHABLE_TRAP(0x6cf4a90)
    }
}

#undef public_6cf4aa6

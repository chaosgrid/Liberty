#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_483f30);
CLANG_FORWARD_PROC_SYMBOL(public_4a8820);
CLANG_FORWARD_PROC_SYMBOL(public_4a8e40);

#define public_4a8e5f _public_4a8e5f

PROC_DECLARE(0x4a8e40, internal_4a8e40, public_4a8e40);
extern "C" NAKED register_t __cdecl internal_4a8e40()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6721bc]
        test ecx, ecx
        je public_4a8e5f
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push edx
        push eax
        call public_4a8820
        ret 
        public_4a8e5f : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+0x30]
        push ecx
        push eax
        call public_483f30
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4a8e40)
    }
}

#undef public_4a8e5f

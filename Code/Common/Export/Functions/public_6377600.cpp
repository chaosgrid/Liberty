#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6377600);
CLANG_FORWARD_PROC_SYMBOL(public_6378130);
CLANG_FORWARD_PROC_SYMBOL(public_63781f0);
CLANG_FORWARD_PROC_SYMBOL(public_63782f0);

#define public_637763d _public_637763d

PROC_DECLARE(0x6377600, internal_6377600, public_6377600);
extern "C" NAKED register_t __cdecl internal_6377600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b078]
        push 0x20000
        push 0x10000
        push 0x12
        push 8
        push eax
        call public_6378130
        push 0x18
        call public_63782f0
        mov eax, dword ptr ds : [public_658b0a8]
        add esp, 0x18
        test eax, eax
        je public_637763d
        push 0x10
        call public_63782f0
        push 0x18
        call public_63782f0
        add esp, 8
        public_637763d : nop
        push esi
        push 0x58
        call public_63782f0
        push 0xC
        call public_63782f0
        mov ecx, dword ptr ds : [public_658b24c]
        lea esi, ds:[ecx*4+4]
        push esi
        call public_63782f0
        mov edx, dword ptr ds : [public_658b804]
        push edx
        call public_63782f0
        add esi, 4
        push esi
        call public_63782f0
        add esp, 0x14
        call public_62a8920
        call public_63781f0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6377600)
    }
}

#undef public_637763d

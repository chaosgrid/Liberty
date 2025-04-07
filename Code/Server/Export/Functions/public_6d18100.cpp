#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12740);
CLANG_FORWARD_PROC_SYMBOL(public_6d14170);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d1813b _public_6d1813b
#define public_6d1813d _public_6d1813d

PROC_DECLARE(0x6d18100, internal_6d18100, public_6d18100);
extern "C" NAKED register_t __cdecl internal_6d18100()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d14170
        mov ecx, eax
        test ecx, ecx
        mov eax, 0xFFFFFFFE
        je public_6d1813d
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        mov esi, 0xFFFFFFFD
        call public_6d12740
        cmp eax, 0xFFFFFFFF
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        je public_6d1813b
        xor eax, eax
        pop esi
        ret 
        public_6d1813b : nop
        mov eax, esi
        public_6d1813d : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d18100)
    }
}

#undef public_6d1813b
#undef public_6d1813d

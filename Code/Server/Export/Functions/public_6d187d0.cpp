#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12f40);
CLANG_FORWARD_PROC_SYMBOL(public_6d140f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d18807 _public_6d18807

PROC_DECLARE(0x6d187d0, internal_6d187d0, public_6d187d0);
extern "C" NAKED register_t __cdecl internal_6d187d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, 0x3FFFFFFF
        push esi
        mov esi, 0xFFFFFFFC
        je public_6d18807
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d140f0
        test eax, eax
        je public_6d18807
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        mov ecx, eax
        call public_6d12f40
        xor eax, eax
        pop esi
        ret 
        public_6d18807 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d187d0)
    }
}

#undef public_6d18807

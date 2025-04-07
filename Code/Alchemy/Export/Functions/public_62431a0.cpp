#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6246660);

#define public_62431b1 _public_62431b1

PROC_DECLARE(0x62431a0, internal_62431a0, public_62431a0);
extern "C" NAKED register_t __cdecl internal_62431a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        jne public_62431b1
        or eax, 0xFFFFFFFF
        ret 0x10
        public_62431b1 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        push edx
        push eax
        call public_6246660
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x62431a0)
    }
}

#undef public_62431b1

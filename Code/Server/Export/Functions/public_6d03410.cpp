#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce50d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d03410);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);

#define public_6d0343f _public_6d0343f
#define public_6d03447 _public_6d03447
#define public_6d0346b _public_6d0346b
#define public_6d03474 _public_6d03474

PROC_DECLARE(0x6d03410, internal_6d03410, public_6d03410);
extern "C" NAKED register_t __cdecl internal_6d03410()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_6d8d980
        call public_6d59ea0
        mov ecx, dword ptr ds : [public_6d8d984]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_6d0343f
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6d0343f
        lea eax, ss:[esp]
        jmp public_6d03447
        public_6d0343f : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6d03447 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6d03474
        dec dword ptr ds : [eax+0x24]
        jne public_6d0346b
        push eax
        lea eax, ss:[esp+8]
        push eax
        mov ecx, offset public_6d8d980
        call public_6ce50d0
        mov eax, 1
        add esp, 8
        ret 
        public_6d0346b : nop
        mov eax, 2
        add esp, 8
        ret 
        public_6d03474 : nop
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d03410)
    }
}

#undef public_6d0343f
#undef public_6d03447
#undef public_6d0346b
#undef public_6d03474

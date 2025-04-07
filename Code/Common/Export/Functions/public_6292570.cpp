#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343130);
CLANG_FORWARD_PROC_SYMBOL(public_6348f50);

#define public_62925a3 _public_62925a3
#define public_62925af _public_62925af

PROC_DECLARE(0x6292570, internal_6292570, public_6292570);
extern "C" NAKED register_t __cdecl internal_6292570()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x5C]
        mov ecx, dword ptr ds : [esi+0x54]
        mov ecx, dword ptr ds : [ecx+0x90]
        push eax
        call public_6348f50
        mov eax, dword ptr ss : [esp+0xC]
        sub eax, 0
        je public_62925a3
        dec eax
        jne public_62925af
        mov edx, dword ptr ss : [esp+8]
        push edx
        mov ecx, esi
        call public_6343130
        xor eax, eax
        pop esi
        ret 8
        public_62925a3 : nop
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, esi
        call public_6343130
        public_62925af : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6292570)
    }
}

#undef public_62925a3
#undef public_62925af

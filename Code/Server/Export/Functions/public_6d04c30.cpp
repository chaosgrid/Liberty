#include "Server-PCH.h"


#define public_6d04c58 _public_6d04c58

PROC_DECLARE(0x6d04c30, internal_6d04c30, public_6d04c30);
extern "C" NAKED register_t __cdecl internal_6d04c30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0x1003
        push eax
        mov esi, ecx
        call dword ptr ds : [public_6d64464]
        add esp, 8
        test eax, eax
        mov dword ptr ds : [esi+0x10], eax
        je public_6d04c58
        push 1
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [public_6d64188]
        public_6d04c58 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        xor eax, eax
        test ecx, ecx
        setne al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d04c30)
    }
}

#undef public_6d04c58

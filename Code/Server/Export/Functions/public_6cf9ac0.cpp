#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00630);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d8a0);

#define public_6cf9b15 _public_6cf9b15
#define public_6cf9b37 _public_6cf9b37
#define public_6cf9b3c _public_6cf9b3c

PROC_DECLARE(0x6cf9ac0, internal_6cf9ac0, public_6cf9ac0);
extern "C" NAKED register_t __cdecl internal_6cf9ac0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        sub esp, 8
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6cf9b3c
        lea edx, ss:[esp+4]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        call public_6d00630
        add esp, 0xC
        test al, al
        je public_6cf9b37
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp]
        push eax
        call dword ptr ds : [edx+0x88]
        mov eax, dword ptr ss : [esp+0x10]
        test al, al
        jne public_6cf9b15
        mov ecx, dword ptr ss : [esp]
        test ch, 4
        je public_6cf9b15
        xor eax, eax
        add esp, 8
        ret 
        public_6cf9b15 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push edx
        call public_6d0d8a0
        neg al
        sbb eax, eax
        and eax, 3
        add eax, 0xFFFFFFFD
        add esp, 8
        ret 
        public_6cf9b37 : nop
        mov eax, 0xFFFFFFFE
        public_6cf9b3c : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6cf9ac0)
    }
}

#undef public_6cf9b15
#undef public_6cf9b37
#undef public_6cf9b3c

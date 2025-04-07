#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b6d0);
CLANG_FORWARD_PROC_SYMBOL(public_62a0210);
CLANG_FORWARD_PROC_SYMBOL(public_62a1540);
CLANG_FORWARD_PROC_SYMBOL(public_63344f0);
CLANG_FORWARD_PROC_SYMBOL(public_6334510);

#define public_62ab7dc _public_62ab7dc
#define public_62ab80c _public_62ab80c

PROC_DECLARE(0x62ab7a0, internal_62ab7a0, public_62ab7a0);
extern "C" NAKED register_t __cdecl internal_62ab7a0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        mov edi, ecx
        xor bl, bl
        call public_6334510
        add esp, 4
        test al, al
        push esi
        je public_62ab7dc
        lea ecx, ds:[edi+0xE4]
        call public_629b6d0
        test eax, eax
        je public_62ab80c
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x40]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_62ab7dc : nop
        call public_63344f0
        add esp, 4
        test al, al
        je public_62ab80c
        push esi
        lea ecx, ds:[edi+0x144]
        call public_62a1540
        test eax, eax
        je public_62ab80c
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov ecx, eax
        call public_62a0210
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_62ab80c : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62ab7a0)
    }
}

#undef public_62ab7dc
#undef public_62ab80c

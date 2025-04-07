#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b10);

#define public_6ece3f4 _public_6ece3f4

PROC_DECLARE(0x6ece350, internal_6ece350, public_6ece350);
extern "C" NAKED register_t __cdecl internal_6ece350()
{
    __asm
    {
        sub esp, 0x14
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f15b10
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+8], eax
        call public_6f15ae0
        test eax, eax
        je public_6ece3f4
        lea edx, ss:[esp+4]
        push edx
        add eax, 0x40
        push eax
        mov dword ptr ss : [esp+0xC], 0
        call dword ptr ds : [public_6fb341c]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [public_6fb30b0]
        mov dword ptr ss : [esp+0x10], offset public_6fb6008
        mov dword ptr ss : [esp+0x14], eax
        mov byte ptr ss : [esp+0x18], 0
        mov dx, word ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x10]
        push eax
        add ecx, 0xC
        push ecx
        mov word ptr ss : [esp+0x22], dx
        mov dword ptr ss : [esp+0x18], offset public_6fb6004
        call dword ptr ds : [public_6fb3418]
        movzx edx, word ptr ss : [esp+0x22]
        add esp, 0x10
        test edx, 0x3FFFFFFF
        je public_6ece3f4
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ss : [esp+0x12]
        mov edx, dword ptr ds : [esi+4]
        push eax
        push ecx
        add edx, 0xC
        push edx
        call dword ptr ds : [public_6fb3414]
        add esp, 0xC
        public_6ece3f4 : nop
        mov al, 1
        pop esi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6ece350)
    }
}

#undef public_6ece3f4

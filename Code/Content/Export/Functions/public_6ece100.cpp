#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f67740);

#define public_6ece15f _public_6ece15f
#define public_6ece167 _public_6ece167

PROC_DECLARE(0x6ece100, internal_6ece100, public_6ece100);
extern "C" NAKED register_t __cdecl internal_6ece100()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0xC]
        push eax
        mov bl, 1
        call public_6f15b90
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0xC], eax
        je public_6ece167
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0xC
        push ecx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ece15f
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+8]
        call public_6f478c0
        mov eax, dword ptr ds : [eax+0x48]
        lea ecx, ds:[esi+0x40]
        push ecx
        add esi, 0x64
        push esi
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_6f67740
        add esp, 0x10
        public_6ece15f : nop
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 
        public_6ece167 : nop
        pop esi
        xor al, al
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ece100)
    }
}

#undef public_6ece15f
#undef public_6ece167

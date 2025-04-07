#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c64b0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_4c64c5 _public_4c64c5
#define public_4c64d0 _public_4c64d0
#define public_4c6518 _public_4c6518

PROC_DECLARE(0x4c64b0, internal_4c64b0, public_4c64b0);
extern "C" NAKED register_t __cdecl internal_4c64b0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        mov dword ptr ss : [esp+4], ecx
        jne public_4c64c5
        xor al, al
        pop esi
        pop ecx
        ret 0xC
        public_4c64c5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_4c64d0
        mov eax, dword ptr ds : [esi+0x14]
        public_4c64d0 : nop
        push ebx
        mov ebx, dword ptr ds : [public_5c6428]
        push edi
        mov edi, dword ptr ds : [esi+0x14]
        push eax
        mov ecx, esi
        call ebx
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6390]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [public_5c63a0]
        add esp, 4
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        lea ecx, ds:[eax+0x1C]
        call dword ptr ds : [public_5c6434]
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        je public_4c6518
        push 0x10
        call public_5645c0
        add esp, 4
        public_4c6518 : nop
        push edi
        mov ecx, esi
        call ebx
        pop edi
        pop ebx
        mov al, 1
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x4c64b0)
    }
}

#undef public_4c64c5
#undef public_4c64d0
#undef public_4c6518

#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);

#define public_6f34223 _public_6f34223
#define public_6f34237 _public_6f34237

PROC_DECLARE(0x6f341f0, internal_6f341f0, public_6f341f0);
extern "C" NAKED register_t __cdecl internal_6f341f0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ds : [ecx+8]
        push ebx
        push esi
        push edi
        call public_6eb6bb0
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        push eax
        call public_6f50650
        mov edx, eax
        mov ecx, dword ptr ds : [edx+0x60]
        mov esi, dword ptr ds : [edx+0x64]
        add esp, 4
        xor eax, eax
        cmp ecx, esi
        je public_6f34237
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x14]
        public_6f34223 : nop
        cmp eax, edi
        jge public_6f34237
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+eax*4], ebx
        mov ebx, dword ptr ds : [edx+0x64]
        add ecx, 8
        inc eax
        cmp ecx, ebx
        jne public_6f34223
        public_6f34237 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f341f0)
    }
}

#undef public_6f34223
#undef public_6f34237

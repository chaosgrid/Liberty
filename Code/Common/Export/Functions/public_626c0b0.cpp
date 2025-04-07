#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c0b0);

#define public_626c0d0 _public_626c0d0
#define public_626c0dc _public_626c0dc
#define public_626c0e0 _public_626c0e0
#define public_626c0f8 _public_626c0f8

PROC_DECLARE(0x626c0b0, internal_626c0b0, public_626c0b0);
extern "C" NAKED register_t __cdecl internal_626c0b0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x18]
        test edi, edi
        mov esi, 3
        je public_626c0dc
        mov eax, dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [ecx+0x1C]
        cmp eax, edx
        jae public_626c0dc
        sub edx, eax
        cmp edx, esi
        jae public_626c0d0
        mov esi, edx
        public_626c0d0 : nop
        lea edx, ds:[eax+edi]
        add eax, esi
        mov dword ptr ds : [ecx+0x20], eax
        mov eax, edx
        jmp public_626c0e0
        public_626c0dc : nop
        xor esi, esi
        xor eax, eax
        public_626c0e0 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        cmp esi, 3
        mov dword ptr ds : [ecx], eax
        pop esi
        je public_626c0f8
        mov dword ptr ds : [ecx], 0
        xor al, al
        ret 4
        public_626c0f8 : nop
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x626c0b0)
    }
}

#undef public_626c0d0
#undef public_626c0dc
#undef public_626c0e0
#undef public_626c0f8

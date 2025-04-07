#include "ReadFile-PCH.h"


#define public_6b71e43 _public_6b71e43
#define public_6b71e45 _public_6b71e45
#define public_6b71e65 _public_6b71e65
#define public_6b71e7a _public_6b71e7a
#define public_6b71e8f _public_6b71e8f
#define public_6b71e96 _public_6b71e96

PROC_DECLARE(0x6b71e30, internal_6b71e30, public_6b71e30);
extern "C" NAKED register_t __cdecl internal_6b71e30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        test eax, eax
        je public_6b71e96
        cmp eax, 0xFFFFFFFF
        je public_6b71e43
        mov esi, dword ptr ds : [eax+4]
        jmp public_6b71e45
        public_6b71e43 : nop
        xor esi, esi
        public_6b71e45 : nop
        test esi, esi
        je public_6b71e96
        mov ecx, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [public_6b7901c]
        test ecx, ecx
        je public_6b71e65
        mov eax, dword ptr ds : [esi+0x20]
        push ecx
        mov ecx, eax
        shr ecx, 0x10
        push ecx
        push eax
        call edi
        public_6b71e65 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        je public_6b71e7a
        mov eax, dword ptr ds : [esi+0x24]
        push ecx
        mov edx, eax
        shr edx, 0x10
        push edx
        push eax
        call edi
        public_6b71e7a : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_6b71e8f
        mov esi, dword ptr ds : [esi+0x28]
        push eax
        mov eax, esi
        shr eax, 0x10
        push eax
        push esi
        call edi
        public_6b71e8f : nop
        pop edi
        mov al, 1
        pop esi
        ret 0x10
        public_6b71e96 : nop
        xor al, al
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6b71e30)
    }
}

#undef public_6b71e43
#undef public_6b71e45
#undef public_6b71e65
#undef public_6b71e7a
#undef public_6b71e8f
#undef public_6b71e96

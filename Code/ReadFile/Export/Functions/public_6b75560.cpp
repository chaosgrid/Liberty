#include "ReadFile-PCH.h"


#define public_6b75599 _public_6b75599
#define public_6b755a6 _public_6b755a6

PROC_DECLARE(0x6b75560, internal_6b75560, public_6b75560);
extern "C" NAKED register_t __cdecl internal_6b75560()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push esi
        push eax
        push ecx
        call dword ptr ds : [public_6b79048]
        mov esi, eax
        test esi, esi
        jne public_6b755a6
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+0x120]
        test eax, eax
        je public_6b75599
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x78]
        mov dword ptr ds : [edi+0x11C], eax
        pop edi
        mov eax, esi
        pop esi
        ret 0xC
        public_6b75599 : nop
        call dword ptr ds : [public_6b79038]
        mov dword ptr ds : [edi+0x11C], eax
        pop edi
        public_6b755a6 : nop
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6b75560)
    }
}

#undef public_6b75599
#undef public_6b755a6

#include "ReadFile-PCH.h"


#define public_6b755e4 _public_6b755e4
#define public_6b755f1 _public_6b755f1

PROC_DECLARE(0x6b755b0, internal_6b755b0, public_6b755b0);
extern "C" NAKED register_t __cdecl internal_6b755b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push eax
        call dword ptr ds : [public_6b7904c]
        mov esi, eax
        test esi, esi
        jne public_6b755f1
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+0x120]
        test eax, eax
        je public_6b755e4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x78]
        mov dword ptr ds : [edi+0x11C], eax
        pop edi
        mov eax, esi
        pop esi
        ret 8
        public_6b755e4 : nop
        call dword ptr ds : [public_6b79038]
        mov dword ptr ds : [edi+0x11C], eax
        pop edi
        public_6b755f1 : nop
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6b755b0)
    }
}

#undef public_6b755e4
#undef public_6b755f1

#include "Server-PCH.h"


#define public_6cfb8d6 _public_6cfb8d6

PROC_DECLARE(0x6cfb880, internal_6cfb880, public_6cfb880);
extern "C" NAKED register_t __cdecl internal_6cfb880()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        sub esp, 0x10
        push esi
        push ecx
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d644f4]
        add esp, 4
        test eax, eax
        je public_6cfb8d6
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+8], ecx
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [edx+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], eax
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 
        public_6cfb8d6 : nop
        mov eax, esi
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6cfb880)
    }
}

#undef public_6cfb8d6

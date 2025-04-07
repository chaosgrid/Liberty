#include "LuaProfile-PCH.h"


#define public_680190a _public_680190a

PROC_DECLARE(0x68018e0, internal_68018e0, public_68018e0);
extern "C" NAKED register_t __cdecl internal_68018e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_680d290
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_680190a
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_680190a : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x68018e0)
    }
}

#undef public_680190a

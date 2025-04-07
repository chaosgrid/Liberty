#include "Alchemy-PCH.h"


#define public_620e66a _public_620e66a

PROC_DECLARE(0x620e640, internal_620e640, public_620e640);
extern "C" NAKED register_t __cdecl internal_620e640()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_625554c
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_620e66a
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_620e66a : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x620e640)
    }
}

#undef public_620e66a

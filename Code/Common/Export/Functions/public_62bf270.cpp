#include "Common-PCH.h"


#define public_62bf28f _public_62bf28f

PROC_DECLARE(0x62bf270, internal_62bf270, public_62bf270);
extern "C" NAKED register_t __cdecl internal_62bf270()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push esi
        push edi
        call dword ptr ds : [eax+0x70]
        test al, al
        je public_62bf28f
        pop edi
        xor eax, eax
        pop esi
        ret 8
        public_62bf28f : nop
        xor eax, eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], eax
        pop edi
        mov eax, 0xFFFFFFFB
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62bf270)
    }
}

#undef public_62bf28f

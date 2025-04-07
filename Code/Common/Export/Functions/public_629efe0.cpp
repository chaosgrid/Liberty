#include "Common-PCH.h"


#define public_629f01b _public_629f01b

PROC_DECLARE(0x629efe0, internal_629efe0, public_629efe0);
extern "C" NAKED register_t __cdecl internal_629efe0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        xor eax, eax
        push edi
        mov edi, ecx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x58]
        test al, al
        je public_629f01b
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+0x54]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], eax
        public_629f01b : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x629efe0)
    }
}

#undef public_629f01b

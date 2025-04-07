#include "Common-PCH.h"


#define public_629f080 _public_629f080

PROC_DECLARE(0x629f030, internal_629f030, public_629f030);
extern "C" NAKED register_t __cdecl internal_629f030()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], 0
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x58]
        test al, al
        je public_629f080
        mov edx, dword ptr ds : [edi]
        push 0
        mov ecx, edi
        call dword ptr ds : [edx+0x64]
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], eax
        public_629f080 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629f030)
    }
}

#undef public_629f080

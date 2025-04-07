#include "SoundManager-PCH.h"


#define public_6ee24f9 _public_6ee24f9

PROC_DECLARE(0x6ee24a0, internal_6ee24a0, public_6ee24a0);
extern "C" NAKED register_t __cdecl internal_6ee24a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        fild dword ptr ds : [eax+0xA4]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx]
        lea edx, ds:[eax+0xCC]
        mov esi, edx
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        fmul dword ptr ds : [eax+0xD4]
        mov ecx, dword ptr ds : [eax+0x128]
        test ecx, ecx
        fst dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax+0xD4]
        je public_6ee24f9
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0xD0]
        mov edx, dword ptr ds : [edx]
        mov esi, dword ptr ds : [ecx]
        push 1
        push edi
        push eax
        push edx
        push ecx
        call dword ptr ds : [esi+0x38]
        public_6ee24f9 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ee24a0)
    }
}

#undef public_6ee24f9

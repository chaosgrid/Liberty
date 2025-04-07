#include "SoundManager-PCH.h"


#define public_6ee2559 _public_6ee2559

PROC_DECLARE(0x6ee2500, internal_6ee2500, public_6ee2500);
extern "C" NAKED register_t __cdecl internal_6ee2500()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        fild dword ptr ds : [eax+0xA4]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx]
        lea edx, ds:[eax+0xD8]
        mov esi, edx
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        fmul dword ptr ds : [eax+0xE0]
        mov ecx, dword ptr ds : [eax+0x128]
        test ecx, ecx
        fst dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax+0xE0]
        je public_6ee2559
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0xDC]
        mov edx, dword ptr ds : [edx]
        mov esi, dword ptr ds : [ecx]
        push 1
        push edi
        push eax
        push edx
        push ecx
        call dword ptr ds : [esi+0x40]
        public_6ee2559 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ee2500)
    }
}

#undef public_6ee2559

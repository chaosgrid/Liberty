#include "DebugLib-PCH.h"


#define public_65d2966 _public_65d2966

PROC_DECLARE(0x65d2930, internal_65d2930, public_65d2930);
extern "C" NAKED register_t __cdecl internal_65d2930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+8]
        cmp edx, ecx
        jb public_65d2966
        push esi
        mov esi, dword ptr ds : [eax+4]
        mov edx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+8]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0x10
        public_65d2966 : nop
        mov eax, 0xFFFFFFFB
        ret 0x10
        UNREACHABLE_TRAP(0x65d2930)
    }
}

#undef public_65d2966

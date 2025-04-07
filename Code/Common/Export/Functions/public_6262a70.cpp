#include "Common-PCH.h"


#define public_6262a8f _public_6262a8f
#define public_6262aaf _public_6262aaf
#define public_6262ab4 _public_6262ab4

PROC_DECLARE(0x6262a70, internal_6262a70, public_6262a70);
extern "C" NAKED register_t __cdecl internal_6262a70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x18]
        test edi, edi
        je public_6262ab4
        mov edx, dword ptr ds : [ecx+0x20]
        mov esi, dword ptr ds : [ecx+0x1C]
        cmp edx, esi
        jae public_6262ab4
        sub esi, edx
        cmp eax, esi
        jbe public_6262a8f
        mov eax, esi
        public_6262a8f : nop
        lea esi, ds:[edx+edi]
        add edx, eax
        test esi, esi
        mov dword ptr ds : [ecx+0x20], edx
        je public_6262aaf
        mov edi, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        public_6262aaf : nop
        pop edi
        pop esi
        ret 8
        public_6262ab4 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6262a70)
    }
}

#undef public_6262a8f
#undef public_6262aaf
#undef public_6262ab4

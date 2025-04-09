#include "FreeLancer-PCH.h"

PROC_DECLARE(0x516cd0, internal_516cd0, public_516cd0);
extern "C" NAKED register_t __cdecl internal_516cd0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [public_5c6d90]
        fmul dword ptr ds : [public_5c77f4]
        push esi
        fstp dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx]
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        push 0
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        call dword ptr ds : [esi+0xC8]
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x516cd0)
    }
}

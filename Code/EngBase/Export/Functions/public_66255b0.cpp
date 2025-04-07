#include "EngBase-PCH.h"

PROC_DECLARE(0x66255b0, internal_66255b0, public_66255b0);
extern "C" NAKED register_t __cdecl internal_66255b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        lea esi, ds:[eax+0x1C]
        mov ecx, 9
        mov edi, edx
        add eax, 0x10
        rep movsd
        mov ecx, dword ptr ds : [eax]
        add edx, 0x24
        pop edi
        pop esi
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        ret 
        UNREACHABLE_TRAP(0x66255b0)
    }
}

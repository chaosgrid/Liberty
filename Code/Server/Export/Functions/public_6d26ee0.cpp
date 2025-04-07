#include "Server-PCH.h"

PROC_DECLARE(0x6d26ee0, internal_6d26ee0, public_6d26ee0);
extern "C" NAKED register_t __cdecl internal_6d26ee0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ds : [edx+4]
        shl eax, 5
        mov edx, dword ptr ds : [eax+esi+4]
        add eax, esi
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+0x10]
        sub edx, esi
        sar edx, 1
        neg edx
        shl edx, 1
        add eax, edx
        mov dword ptr ds : [ecx+0x10], eax
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d26ee0)
    }
}

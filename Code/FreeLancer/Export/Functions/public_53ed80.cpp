#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53ed80, internal_53ed80, public_53ed80);
extern "C" NAKED register_t __cdecl internal_53ed80()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        push esi
        push ebx
        push ebp
        mov ecx, edi
        call dword ptr ds : [eax+0x1A4]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi]
        push ebx
        push edi
        push eax
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x1AC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x53ed80)
    }
}

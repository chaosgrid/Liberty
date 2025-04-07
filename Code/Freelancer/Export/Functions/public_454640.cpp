#include "Freelancer-PCH.h"

PROC_DECLARE(0x454640, internal_454640, public_454640);
extern "C" NAKED register_t __cdecl internal_454640()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        mov cl, byte ptr ds : [edi]
        push ecx
        push esi
        call dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[edi+4]
        push eax
        push esi
        call dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [esi]
        push edx
        mov edx, dword ptr ds : [edi+0x14]
        push eax
        push edx
        push esi
        call dword ptr ds : [ecx+0x1C]
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [esi]
        xor edx, edx
        mov dl, byte ptr ds : [edi+1]
        push ecx
        push edx
        push esi
        call dword ptr ds : [eax+0x24]
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x454640)
    }
}

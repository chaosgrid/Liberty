#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4e1930, internal_4e1930, public_4e1930);
extern "C" NAKED register_t __cdecl internal_4e1930()
{
    __asm
    {
        push esi
        push edi
        movzx edi, byte ptr ss : [esp+0xC]
        push 0
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x4CC]
        mov eax, dword ptr ds : [ecx]
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x500]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x504]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x524]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x654]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x514]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x518]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x510]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4e1930)
    }
}

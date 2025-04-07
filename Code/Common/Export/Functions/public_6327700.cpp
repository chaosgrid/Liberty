#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

PROC_DECLARE(0x6327700, internal_6327700, public_6327700);
extern "C" NAKED register_t __cdecl internal_6327700()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        add eax, 8
        mov dword ptr ds : [esi+0x1C], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+8]
        add eax, 0x10
        mov dword ptr ds : [esi+0x2C], edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x30], ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6327700)
    }
}

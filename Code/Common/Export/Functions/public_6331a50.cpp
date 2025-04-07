#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6331a50);

PROC_DECLARE(0x6331a50, internal_6331a50, public_6331a50);
extern "C" NAKED register_t __cdecl internal_6331a50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ds : [eax+4]
        push edi
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [esi], edi
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edi
        mov esi, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0xC], eax
        mov eax, dword ptr ds : [ecx+0x18]
        dec esi
        dec eax
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x10], esi
        pop edi
        mov dword ptr ds : [eax], edx
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6331a50)
    }
}

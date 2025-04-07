#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d445e0);

PROC_DECLARE(0x6d445e0, internal_6d445e0, public_6d445e0);
extern "C" NAKED register_t __cdecl internal_6d445e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx+4], esi
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [ecx+4], edx
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6d445e0)
    }
}

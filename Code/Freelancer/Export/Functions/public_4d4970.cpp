#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d4970);

PROC_DECLARE(0x4d4970, internal_4d4970, public_4d4970);
extern "C" NAKED register_t __cdecl internal_4d4970()
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
        UNREACHABLE_TRAP(0x4d4970)
    }
}

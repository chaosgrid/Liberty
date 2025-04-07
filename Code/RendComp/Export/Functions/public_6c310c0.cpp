#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c310c0);

PROC_DECLARE(0x6c310c0, internal_6c310c0, public_6c310c0);
extern "C" NAKED register_t __cdecl internal_6c310c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ss : [esp+4]
        add eax, 0x2C
        push esi
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx+0x38]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c310c0)
    }
}

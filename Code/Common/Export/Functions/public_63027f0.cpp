#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63027f0);

PROC_DECLARE(0x63027f0, internal_63027f0, public_63027f0);
extern "C" NAKED register_t __cdecl internal_63027f0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[eax+4]
        mov ecx, 0xF
        mov dword ptr ds : [eax], edx
        rep movsd
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x63027f0)
    }
}

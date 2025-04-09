#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420fd0);

PROC_DECLARE(0x420fd0, internal_420fd0, public_420fd0);
extern "C" NAKED register_t __cdecl internal_420fd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x8C]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x420fd0)
    }
}

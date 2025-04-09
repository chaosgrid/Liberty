#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f6940, internal_4f6940, public_4f6940);
extern "C" NAKED register_t __cdecl internal_4f6940()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [edx+8]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x4f6940)
    }
}

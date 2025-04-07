#include "Common-PCH.h"

PROC_DECLARE(0x626f860, internal_626f860, public_626f860);
extern "C" NAKED register_t __cdecl internal_626f860()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [edx+4]
        xor ecx, ecx
        cmp eax, esi
        setne cl
        mov al, cl
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626f860)
    }
}

#include "Common-PCH.h"

PROC_DECLARE(0x6333460, internal_6333460, public_6333460);
extern "C" NAKED register_t __cdecl internal_6333460()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        push eax
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [edx]
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6333460)
    }
}

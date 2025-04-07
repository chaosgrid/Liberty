#include "Server-PCH.h"

PROC_DECLARE(0x6d5f940, internal_6d5f940, public_6d5f940);
extern "C" NAKED register_t __cdecl internal_6d5f940()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], edx
        jmp dword ptr ds : [eax]
        UNREACHABLE_TRAP(0x6d5f940)
    }
}

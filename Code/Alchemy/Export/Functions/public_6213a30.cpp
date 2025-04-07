#include "Alchemy-PCH.h"

PROC_DECLARE(0x6213a30, internal_6213a30, public_6213a30);
extern "C" NAKED register_t __cdecl internal_6213a30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x80]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0xC]
        UNREACHABLE_TRAP(0x6213a30)
    }
}

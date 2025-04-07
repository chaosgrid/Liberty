#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fddd0, internal_66fddd0, public_66fddd0);
extern "C" NAKED register_t __cdecl internal_66fddd0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x38]
        UNREACHABLE_TRAP(0x66fddd0)
    }
}

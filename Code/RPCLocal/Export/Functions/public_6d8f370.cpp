#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f370, internal_6d8f370, public_6d8f370);
extern "C" NAKED register_t __cdecl internal_6d8f370()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6dbbd5c]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], edx
        jmp dword ptr ds : [eax+0x30]
        UNREACHABLE_TRAP(0x6d8f370)
    }
}

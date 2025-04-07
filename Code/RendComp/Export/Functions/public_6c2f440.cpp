#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2f440);

PROC_DECLARE(0x6c2f440, internal_6c2f440, public_6c2f440);
extern "C" NAKED register_t __cdecl internal_6c2f440()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+4]
        UNREACHABLE_TRAP(0x6c2f440)
    }
}

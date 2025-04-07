#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fd070);

PROC_DECLARE(0x66fd070, internal_66fd070, public_66fd070);
extern "C" NAKED register_t __cdecl internal_66fd070()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x66fd070)
    }
}

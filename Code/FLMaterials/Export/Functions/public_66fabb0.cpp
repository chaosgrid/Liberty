#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fabb0);

PROC_DECLARE(0x66fabb0, internal_66fabb0, public_66fabb0);
extern "C" NAKED register_t __cdecl internal_66fabb0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67045b4]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_67045b8]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [public_67045bc]
        mov dword ptr ds : [eax+8], ecx
        ret 
        UNREACHABLE_TRAP(0x66fabb0)
    }
}

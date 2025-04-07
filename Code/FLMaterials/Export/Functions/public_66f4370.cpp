#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f4370, internal_66f4370, public_66f4370);
extern "C" NAKED register_t __cdecl internal_66f4370()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6704020]
        ret 
        UNREACHABLE_TRAP(0x66f4370)
    }
}

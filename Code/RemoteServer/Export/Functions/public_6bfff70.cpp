#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfff70, internal_6bfff70, public_6bfff70);
extern "C" NAKED register_t __cdecl internal_6bfff70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e400]
        mov dword ptr ds : [public_6c14084], eax
        ret 
        UNREACHABLE_TRAP(0x6bfff70)
    }
}

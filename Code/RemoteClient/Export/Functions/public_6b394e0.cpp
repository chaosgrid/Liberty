#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b394e0, internal_6b394e0, public_6b394e0);
extern "C" NAKED register_t __cdecl internal_6b394e0()
{
    __asm
    {
        mov eax, offset public_6b73b28
        ret 
        UNREACHABLE_TRAP(0x6b394e0)
    }
}

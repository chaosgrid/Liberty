#include "SoundStreamer-PCH.h"

PROC_DECLARE(0x6ef3dc0, internal_6ef3dc0, public_6ef3dc0);
extern "C" NAKED register_t __cdecl internal_6ef3dc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        inc ecx
        mov dword ptr ds : [eax+4], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6ef3dc0)
    }
}

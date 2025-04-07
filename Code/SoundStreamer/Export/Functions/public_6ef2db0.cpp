#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1000);

PROC_DECLARE(0x6ef2db0, internal_6ef2db0, public_6ef2db0);
extern "C" NAKED register_t __cdecl internal_6ef2db0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x5C], ecx
        mov dword ptr ds : [eax+0x60], ecx
        call public_6ef1000
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6ef2db0)
    }
}

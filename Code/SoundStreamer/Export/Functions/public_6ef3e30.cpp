#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3e30);

PROC_DECLARE(0x6ef3e30, internal_6ef3e30, public_6ef3e30);
extern "C" NAKED register_t __cdecl internal_6ef3e30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x6C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x6ef3e30)
    }
}

#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4d92);

PROC_DECLARE(0x6efa12d, internal_6efa12d, public_6efa12d);
extern "C" NAKED register_t __cdecl internal_6efa12d()
{
    __asm
    {
        push ebp
        mov ecx, dword ptr ss : [esp+8]
        mov ebp, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+0x1C]
        push eax
        mov eax, dword ptr ds : [ecx+0x18]
        push eax
        call public_6ef4d92
        add esp, 8
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6efa12d)
    }
}

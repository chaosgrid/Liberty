#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ef419d);
CLANG_FORWARD_PROC_SYMBOL(public_6ef51d1);
CLANG_FORWARD_PROC_SYMBOL(public_6ef52ac);
CLANG_FORWARD_JUMP_SYMBOL(public_6efbc88);

PROC_DECLARE(0x6ef419d, internal_6ef419d, public_6ef419d);
extern "C" NAKED register_t __cdecl internal_6ef419d()
{
    __asm
    {
        mov eax, public_6efbc88
        call public_6ef52ac
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [ebp-0x10], esi
        mov dword ptr ds : [esi], offset public_6efc290
        and dword ptr ss : [ebp-4], 0
        push 1
        lea ecx, ds:[esi+0xC]
        call public_6ef2800
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, esi
        call public_6ef51d1
        mov ecx, dword ptr ss : [ebp-0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef419d)
    }
}

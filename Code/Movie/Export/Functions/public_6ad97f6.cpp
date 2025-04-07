#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1500);
CLANG_FORWARD_PROC_SYMBOL(public_6ad97f6);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c54);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c7a);
CLANG_FORWARD_JUMP_SYMBOL(public_6ad9cf8);

PROC_DECLARE(0x6ad97f6, internal_6ad97f6, public_6ad97f6);
extern "C" NAKED register_t __cdecl internal_6ad97f6()
{
    __asm
    {
        mov eax, public_6ad9cf8
        call public_6ad9c54
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [ebp-0x10], esi
        mov dword ptr ds : [esi], offset public_6adb174
        and dword ptr ss : [ebp-4], 0
        push 1
        lea ecx, ds:[esi+0xC]
        call public_6ac1500
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, esi
        call public_6ad9c7a
        mov ecx, dword ptr ss : [ebp-0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad97f6)
    }
}

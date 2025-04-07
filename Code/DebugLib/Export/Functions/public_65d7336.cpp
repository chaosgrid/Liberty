#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7336);

PROC_DECLARE(0x65d7336, internal_65d7336, public_65d7336);
extern "C" NAKED register_t __cdecl internal_65d7336()
{
    __asm
    {
        push ebx
        push ecx
        mov ebx, offset public_65e33e8
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+0xC], ebp
        pop ecx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65d7336)
    }
}

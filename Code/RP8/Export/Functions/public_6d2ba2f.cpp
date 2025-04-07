#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2ba2f);

PROC_DECLARE(0x6d2ba2f, internal_6d2ba2f, public_6d2ba2f);
extern "C" NAKED register_t __cdecl internal_6d2ba2f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp+8]
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx+eax+4]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d2ba2f)
    }
}

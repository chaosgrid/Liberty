#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5460);

PROC_DECLARE(0x65d5460, internal_65d5460, public_65d5460);
extern "C" NAKED register_t __cdecl internal_65d5460()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x65d5460)
    }
}

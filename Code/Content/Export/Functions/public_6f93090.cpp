#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93090);

PROC_DECLARE(0x6f93090, internal_6f93090, public_6f93090);
extern "C" NAKED register_t __cdecl internal_6f93090()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        ret 4
        UNREACHABLE_TRAP(0x6f93090)
    }
}

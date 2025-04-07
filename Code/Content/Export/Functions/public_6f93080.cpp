#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93080);

PROC_DECLARE(0x6f93080, internal_6f93080, public_6f93080);
extern "C" NAKED register_t __cdecl internal_6f93080()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x6f93080)
    }
}

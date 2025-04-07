#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93610);

PROC_DECLARE(0x6f93610, internal_6f93610, public_6f93610);
extern "C" NAKED register_t __cdecl internal_6f93610()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        ret 
        UNREACHABLE_TRAP(0x6f93610)
    }
}

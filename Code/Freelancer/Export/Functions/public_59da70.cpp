#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59da70);

PROC_DECLARE(0x59da70, internal_59da70, public_59da70);
extern "C" NAKED register_t __cdecl internal_59da70()
{
    __asm
    {
        mov edx, dword ptr ds : [public_67dbcc]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [public_67dbd0]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [public_67dbd4]
        mov dword ptr ds : [ecx+8], edx
        ret 
        UNREACHABLE_TRAP(0x59da70)
    }
}

#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd2f0);

PROC_DECLARE(0x62fd2f0, internal_62fd2f0, public_62fd2f0);
extern "C" NAKED register_t __cdecl internal_62fd2f0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov cx, word ptr ds : [ecx+4]
        mov word ptr ds : [eax+4], cx
        ret 4
        UNREACHABLE_TRAP(0x62fd2f0)
    }
}

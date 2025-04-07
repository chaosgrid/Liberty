#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414640);

PROC_DECLARE(0x414640, internal_414640, public_414640);
extern "C" NAKED register_t __cdecl internal_414640()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x414640)
    }
}

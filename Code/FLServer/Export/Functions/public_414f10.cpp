#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414f10);

PROC_DECLARE(0x414f10, internal_414f10, public_414f10);
extern "C" NAKED register_t __cdecl internal_414f10()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax+4], dl
        ret 8
        UNREACHABLE_TRAP(0x414f10)
    }
}

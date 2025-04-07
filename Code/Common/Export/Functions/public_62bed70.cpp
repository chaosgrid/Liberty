#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bed70);

PROC_DECLARE(0x62bed70, internal_62bed70, public_62bed70);
extern "C" NAKED register_t __cdecl internal_62bed70()
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
        UNREACHABLE_TRAP(0x62bed70)
    }
}

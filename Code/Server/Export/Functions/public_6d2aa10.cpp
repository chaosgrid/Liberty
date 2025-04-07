#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2aa10);

PROC_DECLARE(0x6d2aa10, internal_6d2aa10, public_6d2aa10);
extern "C" NAKED register_t __cdecl internal_6d2aa10()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        mov dword ptr ds : [eax+4], 0
        setne dl
        mov byte ptr ds : [eax+8], dl
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax], offset public_6d69758
        ret 4
        UNREACHABLE_TRAP(0x6d2aa10)
    }
}

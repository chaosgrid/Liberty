#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26d30);

PROC_DECLARE(0x6c26d30, internal_6c26d30, public_6c26d30);
extern "C" NAKED register_t __cdecl internal_6c26d30()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [ecx]
        xor ecx, ecx
        mov byte ptr ds : [eax], dl
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 4
        UNREACHABLE_TRAP(0x6c26d30)
    }
}

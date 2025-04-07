#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5ca00);

PROC_DECLARE(0x6f5ca00, internal_6f5ca00, public_6f5ca00);
extern "C" NAKED register_t __cdecl internal_6f5ca00()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax+4], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], offset public_6fb74b8
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f5ca00)
    }
}

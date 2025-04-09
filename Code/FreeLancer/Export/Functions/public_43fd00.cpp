#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43fd00);

PROC_DECLARE(0x43fd00, internal_43fd00, public_43fd00);
extern "C" NAKED register_t __cdecl internal_43fd00()
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
        mov byte ptr ds : [eax], cl
        mov byte ptr ds : [eax+1], 1
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov byte ptr ds : [eax+0x20], cl
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x43fd00)
    }
}

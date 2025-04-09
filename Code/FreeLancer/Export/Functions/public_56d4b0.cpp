#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_56d4b0);

PROC_DECLARE(0x56d4b0, internal_56d4b0, public_56d4b0);
extern "C" NAKED register_t __cdecl internal_56d4b0()
{
    __asm
    {
        push ecx
        mov dl, byte ptr ss : [esp+3]
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax+4], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov byte ptr ds : [eax+0x14], dl
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x56d4b0)
    }
}

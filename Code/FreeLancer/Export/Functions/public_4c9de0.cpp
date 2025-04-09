#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c9de0);

PROC_DECLARE(0x4c9de0, internal_4c9de0, public_4c9de0);
extern "C" NAKED register_t __cdecl internal_4c9de0()
{
    __asm
    {
        push ecx
        mov dl, byte ptr ss : [esp+3]
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], cl
        mov dword ptr ds : [eax+0x84], ecx
        mov byte ptr ds : [eax+0x88], cl
        mov dword ptr ds : [eax+0xC8], ecx
        mov byte ptr ds : [eax+0xCC], cl
        mov byte ptr ds : [eax+0x10C], dl
        mov dword ptr ds : [eax+0x110], ecx
        mov dword ptr ds : [eax+0x114], ecx
        mov dword ptr ds : [eax+0x118], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4c9de0)
    }
}

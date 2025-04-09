#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55e340);

PROC_DECLARE(0x55e340, internal_55e340, public_55e340);
extern "C" NAKED register_t __cdecl internal_55e340()
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
        mov dword ptr ds : [eax], offset public_5e1904
        mov byte ptr ds : [eax+0x18], cl
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x55e340)
    }
}

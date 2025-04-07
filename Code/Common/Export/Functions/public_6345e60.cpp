#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345e60);

PROC_DECLARE(0x6345e60, internal_6345e60, public_6345e60);
extern "C" NAKED register_t __cdecl internal_6345e60()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x98]
        fld dword ptr ds : [eax+0x128]
        mov ecx, dword ptr ds : [eax+0x12C]
        fld dword ptr ds : [eax+0x124]
        add eax, 0x124
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax]
        mov edx, ecx
        fstp dword ptr ds : [eax+4]
        mov dword ptr ss : [esp], ecx
        mov dword ptr ds : [eax+8], edx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6345e60)
    }
}

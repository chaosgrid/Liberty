#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356240);

PROC_DECLARE(0x6356240, internal_6356240, public_6356240);
extern "C" NAKED register_t __cdecl internal_6356240()
{
    __asm
    {
        sub esp, 8
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ss : [esp], 0xC47A0000
        mov edx, dword ptr ss : [esp]
        mov dword ptr ds : [eax+0x1C], edx
        mov edx, ecx
        mov word ptr ds : [eax], cx
        mov word ptr ds : [eax+2], cx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x18], 1
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6356240)
    }
}

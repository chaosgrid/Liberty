#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1450);
CLANG_FORWARD_PROC_SYMBOL(public_65f14f0);

PROC_DECLARE(0x65f1450, internal_65f1450, public_65f1450);
extern "C" NAKED register_t __cdecl internal_65f1450()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        call public_65f14f0
        movzx eax, al
        ret 
        UNREACHABLE_TRAP(0x65f1450)
    }
}

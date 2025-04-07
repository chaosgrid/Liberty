#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6353370);
CLANG_FORWARD_PROC_SYMBOL(public_63536b0);

PROC_DECLARE(0x63536b0, internal_63536b0, public_63536b0);
extern "C" NAKED register_t __cdecl internal_63536b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+0x14]
        xor edx, 0x100
        push ecx
        mov dword ptr ds : [eax+0x14], edx
        call public_6353370
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x63536b0)
    }
}

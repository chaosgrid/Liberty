#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636d000);

PROC_DECLARE(0x636d000, internal_636d000, public_636d000);
extern "C" NAKED register_t __cdecl internal_636d000()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 4
        UNREACHABLE_TRAP(0x636d000)
    }
}

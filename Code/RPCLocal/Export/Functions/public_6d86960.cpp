#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d86960);

PROC_DECLARE(0x6d86960, internal_6d86960, public_6d86960);
extern "C" NAKED register_t __cdecl internal_6d86960()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx]
        add edx, 0x1000
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0xC], ecx
        ret 8
        UNREACHABLE_TRAP(0x6d86960)
    }
}

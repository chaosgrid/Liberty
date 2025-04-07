#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f36cf0);

PROC_DECLARE(0x6f36cf0, internal_6f36cf0, public_6f36cf0);
extern "C" NAKED register_t __cdecl internal_6f36cf0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax+8], ecx
        ret 8
        UNREACHABLE_TRAP(0x6f36cf0)
    }
}

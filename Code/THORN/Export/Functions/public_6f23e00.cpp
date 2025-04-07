#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23e00);

PROC_DECLARE(0x6f23e00, internal_6f23e00, public_6f23e00);
extern "C" NAKED register_t __cdecl internal_6f23e00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        push esi
        mov dword ptr ds : [eax], 0
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f23e00)
    }
}

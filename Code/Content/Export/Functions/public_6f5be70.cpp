#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5be70);

PROC_DECLARE(0x6f5be70, internal_6f5be70, public_6f5be70);
extern "C" NAKED register_t __cdecl internal_6f5be70()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        push esi
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[eax+0x24]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f5be70)
    }
}

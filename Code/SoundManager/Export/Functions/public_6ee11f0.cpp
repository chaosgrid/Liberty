#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee11f0);

PROC_DECLARE(0x6ee11f0, internal_6ee11f0, public_6ee11f0);
extern "C" NAKED register_t __cdecl internal_6ee11f0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        lea edx, ds:[eax+4]
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov byte ptr ds : [eax+0x28], cl
        mov dword ptr ds : [eax], offset public_6ee91dc
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+4], ecx
        ret 
        UNREACHABLE_TRAP(0x6ee11f0)
    }
}

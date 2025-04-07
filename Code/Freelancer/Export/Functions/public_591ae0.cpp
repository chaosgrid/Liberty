#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_591ae0);

PROC_DECLARE(0x591ae0, internal_591ae0, public_591ae0);
extern "C" NAKED register_t __cdecl internal_591ae0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov byte ptr ds : [eax+0x18], cl
        mov dword ptr ds : [eax+0x58], ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x44], ecx
        mov dword ptr ds : [eax+0x40], ecx
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0x5C], edx
        mov dword ptr ds : [eax+0x4C], edx
        mov dword ptr ds : [eax+0x3C], edx
        mov dword ptr ds : [eax+0x68], ecx
        mov dword ptr ds : [eax+0x64], ecx
        mov dword ptr ds : [eax+0x60], ecx
        mov dl, byte ptr ds : [eax+0x6C]
        and dl, 0xF8
        or dl, 8
        mov byte ptr ds : [eax+0x6C], dl
        mov dword ptr ds : [eax], offset public_5d5544
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x70], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x74], ecx
        mov dword ptr ds : [eax+0x78], ecx
        inc dword ptr ds : [public_67dcd4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x7C], offset public_5e534c
        mov dword ptr ds : [eax+0x80], offset public_5cbed8
        mov dword ptr ds : [eax], offset public_5e5384
        mov dword ptr ds : [eax+0x7C], offset public_5e536c
        mov dword ptr ds : [eax+0x80], offset public_5e5364
        mov dword ptr ds : [eax+0x84], edx
        mov dword ptr ds : [eax+0x88], ecx
        ret 4
        UNREACHABLE_TRAP(0x591ae0)
    }
}

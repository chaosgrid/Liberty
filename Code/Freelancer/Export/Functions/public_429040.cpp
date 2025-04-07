#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429040);

PROC_DECLARE(0x429040, internal_429040, public_429040);
extern "C" NAKED register_t __cdecl internal_429040()
{
    __asm
    {
        mov dl, byte ptr ss : [esp+4]
        mov eax, ecx
        mov cl, byte ptr ds : [eax+0xC]
        and cl, 0xFC
        and dl, 1
        and cl, 0xE3
        shl dl, 2
        xor dl, cl
        push esi
        xor esi, esi
        mov dword ptr ds : [eax], offset public_5ca174
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax+0x10], esi
        mov dword ptr ds : [eax+0x14], esi
        mov dword ptr ds : [eax+0x18], esi
        mov dword ptr ds : [eax+0x1C], esi
        mov dword ptr ds : [eax+0x20], esi
        mov byte ptr ds : [eax+0xC], dl
        mov dword ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ds : [public_667c58]
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], esi
        mov dword ptr ds : [eax], offset public_5c9fac
        inc dword ptr ds : [public_667cbc]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x429040)
    }
}

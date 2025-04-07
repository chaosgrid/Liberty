#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6278640);

PROC_DECLARE(0x6275960, internal_6275960, public_6275960);
extern "C" NAKED register_t __cdecl internal_6275960()
{
    __asm
    {
        push esi
        push edi
        add ecx, 0x144
        call public_6278640
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0xC
        mov edi, eax
        rep movsd
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ds:[ecx+0xC]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x30]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea esi, ds:[ecx+0x28]
        lea edi, ds:[eax+0x3C]
        mov ecx, 0x1A
        rep movsd
        mov cl, byte ptr ss : [esp+0x18]
        pop edi
        mov byte ptr ds : [eax+0xA4], cl
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6275960)
    }
}

#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac32b0);

PROC_DECLARE(0x6ac32b0, internal_6ac32b0, public_6ac32b0);
extern "C" NAKED register_t __cdecl internal_6ac32b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, 1
        mov ecx, dword ptr ds : [esi+0x100]
        mov dword ptr ds : [edx+0xC], edi
        xor edi, edi
        mov dword ptr ds : [edx+0x10], esi
        mov dword ptr ds : [edx+0x1C], edi
        mov dword ptr ds : [edx+0x20], edi
        add esi, 0x1144
        lea edi, ds:[edx+0x12C]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+4], eax
        mov dword ptr ds : [edx+8], eax
        rep movsd
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ac32b0)
    }
}

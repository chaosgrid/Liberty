#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67123d0);

PROC_DECLARE(0x67123d0, internal_67123d0, public_67123d0);
extern "C" NAKED register_t __cdecl internal_67123d0()
{
    __asm
    {
        mov edx, ecx
        mov ecx, dword ptr ss : [esp+4]
        push edi
        xor eax, eax
        mov dword ptr ds : [edx+0x58], ecx
        mov ecx, 0xF
        lea edi, ds:[edx+0xC]
        mov dword ptr ds : [edx+0x4C], eax
        mov dword ptr ds : [edx+0x50], eax
        mov dword ptr ds : [edx+0x54], eax
        mov dword ptr ds : [edx], offset public_67171ec
        mov byte ptr ds : [edx+0x48], al
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+4], eax
        rep stosd
        mov eax, edx
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x67123d0)
    }
}

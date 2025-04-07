#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a28f0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5b60);

PROC_DECLARE(0x62a28f0, internal_62a28f0, public_62a28f0);
extern "C" NAKED register_t __cdecl internal_62a28f0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62b5b60
        mov eax, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [esi+0xE8], eax
        mov ecx, dword ptr ds : [edi+0x60]
        mov dword ptr ds : [esi+0xEC], ecx
        mov dl, byte ptr ds : [edi+0x64]
        mov byte ptr ds : [esi+0xF0], dl
        mov al, byte ptr ds : [edi+0x65]
        mov byte ptr ds : [esi+0xF1], al
        mov ecx, dword ptr ds : [edi+0x68]
        pop edi
        mov dword ptr ds : [esi+0xF8], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a28f0)
    }
}

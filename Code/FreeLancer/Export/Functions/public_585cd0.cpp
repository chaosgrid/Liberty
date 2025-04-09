#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_585cd0);

PROC_DECLARE(0x585cd0, internal_585cd0, public_585cd0);
extern "C" NAKED register_t __cdecl internal_585cd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x4FC], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x500], edx
        mov dl, byte ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x504], eax
        mov al, byte ptr ds : [ecx+0x518]
        and dl, 1
        shl dl, 5
        and al, 0xCF
        xor dl, al
        mov dword ptr ds : [ecx+0x508], 0xFFFFFFFF
        mov byte ptr ds : [ecx+0x518], dl
        ret 0x10
        UNREACHABLE_TRAP(0x585cd0)
    }
}

#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x62a6150, internal_62a6150, public_62a6150);
extern "C" NAKED register_t __cdecl internal_62a6150()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push 0xC
        mov byte ptr ds : [esi+0x44], al
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x48], eax
        xor eax, eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x40], eax
        add esp, 4
        mov dword ptr ds : [esi+4], ecx
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a6150)
    }
}

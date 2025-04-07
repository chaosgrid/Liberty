#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x631d8a0, internal_631d8a0, public_631d8a0);
extern "C" NAKED register_t __cdecl internal_631d8a0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push 0x28
        mov byte ptr ds : [esi+0x10], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x14], eax
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov byte ptr ds : [esi+0x20], al
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi], offset public_63a3bfc
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x631d8a0)
    }
}

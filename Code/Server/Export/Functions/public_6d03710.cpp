#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

PROC_DECLARE(0x6d03710, internal_6d03710, public_6d03710);
extern "C" NAKED register_t __cdecl internal_6d03710()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push 0xC
        mov byte ptr ds : [esi+4], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi], eax
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d03710)
    }
}

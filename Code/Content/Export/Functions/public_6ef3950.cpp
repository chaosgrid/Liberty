#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3950);

PROC_DECLARE(0x6ef3950, internal_6ef3950, public_6ef3950);
extern "C" NAKED register_t __cdecl internal_6ef3950()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6fb3030]
        mov al, byte ptr ss : [esp+7]
        mov cl, byte ptr ss : [esp+7]
        mov dl, byte ptr ss : [esp+7]
        mov byte ptr ds : [esi+0x18], al
        xor eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov byte ptr ds : [esi+0x2C], cl
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x48], eax
        mov byte ptr ds : [esi+0x3C], dl
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef3950)
    }
}

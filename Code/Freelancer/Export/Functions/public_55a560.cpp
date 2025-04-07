#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55a560);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);

PROC_DECLARE(0x55a560, internal_55a560, public_55a560);
extern "C" NAKED register_t __cdecl internal_55a560()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        call public_59f860
        mov al, byte ptr ss : [esp+7]
        mov cl, byte ptr ss : [esp+7]
        mov byte ptr ds : [esi+0x350], al
        xor eax, eax
        mov dword ptr ds : [esi+0x354], eax
        mov dword ptr ds : [esi+0x358], eax
        mov dword ptr ds : [esi+0x35C], eax
        mov dword ptr ds : [esi+0x364], eax
        mov dword ptr ds : [esi+0x368], eax
        mov dword ptr ds : [esi+0x36C], eax
        mov byte ptr ds : [esi+0x360], cl
        mov byte ptr ds : [esi+0x373], al
        mov byte ptr ds : [esi+0x372], al
        mov byte ptr ds : [esi+0x371], al
        mov byte ptr ds : [esi+0x370], al
        and byte ptr ds : [esi+0x330], 0x80
        mov dl, byte ptr ds : [esi+0x331]
        and dl, 0xEE
        mov dword ptr ds : [esi+0x32C], eax
        mov dword ptr ds : [esi+0x34C], eax
        mov dword ptr ds : [esi+0x374], eax
        mov byte ptr ds : [esi+0x336], al
        or dl, 0xE
        mov byte ptr ds : [esi+0x337], al
        mov dword ptr ds : [esi+0x33C], eax
        mov byte ptr ds : [esi+0x332], al
        mov byte ptr ds : [esi+0x333], al
        mov byte ptr ds : [esi+0x334], al
        mov dword ptr ds : [esi+0x344], eax
        mov byte ptr ds : [esi+0x335], al
        mov dword ptr ds : [esi], offset public_5e15f4
        mov dword ptr ds : [esi+0x7C], offset public_5e15e8
        mov byte ptr ds : [esi+0x331], dl
        mov dword ptr ds : [esi+0x340], 0x43340000
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x55a560)
    }
}

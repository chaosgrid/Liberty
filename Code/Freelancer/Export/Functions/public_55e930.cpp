#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55e930);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);

PROC_DECLARE(0x55e930, internal_55e930, public_55e930);
extern "C" NAKED register_t __cdecl internal_55e930()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_59f860
        xor eax, eax
        mov byte ptr ds : [esi+0x343], al
        mov byte ptr ds : [esi+0x342], al
        mov byte ptr ds : [esi+0x341], al
        mov byte ptr ds : [esi+0x340], al
        mov byte ptr ds : [esi+0x347], al
        mov byte ptr ds : [esi+0x346], al
        mov byte ptr ds : [esi+0x345], al
        mov byte ptr ds : [esi+0x344], al
        mov dword ptr ds : [esi+0x330], eax
        mov dword ptr ds : [esi+0x334], eax
        mov dword ptr ds : [esi+0x338], eax
        mov dword ptr ds : [esi+0x33C], eax
        mov byte ptr ds : [esi+0x348], al
        mov byte ptr ds : [esi+0x349], al
        mov byte ptr ds : [esi+0x34B], al
        mov byte ptr ds : [esi+0x34A], al
        mov dword ptr ds : [esi+0x32C], eax
        mov cl, 1
        mov byte ptr ds : [esi+0x34C], cl
        mov byte ptr ds : [esi+0x34D], cl
        mov dword ptr ds : [esi], offset public_5e1924
        mov dword ptr ds : [esi+0x7C], offset public_5e1918
        mov cl, 0xFF
        mov byte ptr ds : [esi+0x346], al
        mov byte ptr ds : [esi+0x344], cl
        mov byte ptr ds : [esi+0x345], cl
        mov byte ptr ds : [esi+0x347], cl
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x55e930)
    }
}

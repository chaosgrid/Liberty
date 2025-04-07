#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);

PROC_DECLARE(0x626c6c0, internal_626c6c0, public_626c6c0);
extern "C" NAKED register_t __cdecl internal_626c6c0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        call public_6333e40
        mov ax, word ptr ds : [public_63a4aa4]
        lea ecx, ds:[esi+8]
        mov word ptr ds : [esi+4], ax
        call public_6333e30
        mov cl, byte ptr ss : [esp+7]
        xor eax, eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov byte ptr ds : [esi+0xC], cl
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x626c6c0)
    }
}

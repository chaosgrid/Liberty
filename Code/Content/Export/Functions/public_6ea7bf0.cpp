#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7bf0);

PROC_DECLARE(0x6ea7bf0, internal_6ea7bf0, public_6ea7bf0);
extern "C" NAKED register_t __cdecl internal_6ea7bf0()
{
    __asm
    {
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x48], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x4C], eax
        mov byte ptr ds : [esi+0x50], al
        lea ecx, ds:[esi+0xB4]
        mov dword ptr ds : [esi+0x70], eax
        mov byte ptr ds : [esi+0x74], al
        call dword ptr ds : [public_6fb3030]
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ea7bf0)
    }
}

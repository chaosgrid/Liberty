#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62e91d0);

PROC_DECLARE(0x62c9320, internal_62c9320, public_62c9320);
extern "C" NAKED register_t __cdecl internal_62c9320()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        call public_62d20d0
        xor ebx, ebx
        push 3
        push ebx
        mov ecx, esi
        mov byte ptr ds : [esi+0x1C5], bl
        mov dword ptr ds : [esi+0x1C8], ebx
        call public_62d21d0
        mov dl, byte ptr ds : [esi+0x1C4]
        mov ecx, dword ptr ds : [esi+0x24]
        cmp dl, bl
        sete al
        add ecx, 0x18
        push eax
        call public_62e91d0
        mov byte ptr ds : [esi+0x1B4], bl
        mov dword ptr ds : [esi+0x1B8], ebx
        mov dword ptr ds : [esi+0x1BC], ebx
        mov dword ptr ds : [esi+0x1C0], ebx
        mov dword ptr ds : [esi+0x1D8], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62c9320)
    }
}

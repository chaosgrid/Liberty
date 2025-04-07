#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed6180);
CLANG_FORWARD_PROC_SYMBOL(public_6f84790);

PROC_DECLARE(0x6f84790, internal_6f84790, public_6f84790);
extern "C" NAKED register_t __cdecl internal_6f84790()
{
    __asm
    {
        push ebx
        push esi
        xor ebx, ebx
        push ebx
        mov esi, ecx
        call public_6ed6180
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov byte ptr ds : [esi+0x4C], bl
        mov byte ptr ds : [esi+0x8C], bl
        mov dword ptr ds : [esi], offset public_6fbc648
        mov eax, esi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f84790)
    }
}

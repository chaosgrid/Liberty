#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6f6bbf0);

PROC_DECLARE(0x6f6bbf0, internal_6f6bbf0, public_6f6bbf0);
extern "C" NAKED register_t __cdecl internal_6f6bbf0()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x10], bl
        call public_6efec10
        fstp qword ptr ds : [esi+0x18]
        mov byte ptr ds : [esi+0x20], bl
        mov eax, esi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f6bbf0)
    }
}

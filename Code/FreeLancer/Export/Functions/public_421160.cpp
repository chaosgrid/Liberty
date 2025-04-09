#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421280);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x421160, internal_421160, public_421160);
extern "C" NAKED register_t __cdecl internal_421160()
{
    __asm
    {
        push ebx
        mov eax, 0x3000
        xor ebx, ebx
        mov ecx, offset public_6648dc
        mov dword ptr ds : [public_6648fc], 0x3F800000
        mov dword ptr ds : [public_6648ec], 0x3F800000
        mov dword ptr ds : [public_6648dc], 0x3F800000
        mov dword ptr ds : [public_6648f8], 0
        mov dword ptr ds : [public_6648f4], 0
        mov dword ptr ds : [public_6648f0], 0
        mov dword ptr ds : [public_6648e8], 0
        mov dword ptr ds : [public_6648e4], 0
        mov dword ptr ds : [public_6648e0], 0
        mov dword ptr ds : [public_664908], 0
        mov dword ptr ds : [public_664904], 0
        mov dword ptr ds : [public_664900], 0
        mov dword ptr ds : [public_616888], 0xFFFFFFFF
        mov dword ptr ds : [public_6168a4], eax
        mov dword ptr ds : [public_6168a8], ebx
        mov byte ptr ds : [public_6168ac], bl
        mov dword ptr ds : [public_6168b0], eax
        mov dword ptr ds : [public_6168b4], ebx
        call public_4215b0
        mov eax, 2
        mov dword ptr ds : [public_6648bc], eax
        mov dword ptr ds : [public_6648c0], eax
        mov eax, 1
/*FIXUP push offset _public_421280 @0x421224*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_421280
        mov dword ptr ds : [public_664908], ebx
        mov dword ptr ds : [public_664904], ebx
        mov dword ptr ds : [public_664900], ebx
        mov dword ptr ds : [public_6648b8], ebx
        mov byte ptr ds : [public_6648c4], al
        mov dword ptr ds : [public_6648c8], eax
        mov dword ptr ds : [public_6648cc], 4
        mov byte ptr ds : [public_6648d0], bl
        mov dword ptr ds : [public_6648d4], ebx
        mov byte ptr ds : [public_6648d8], bl
        mov dword ptr ds : [public_66490c], ebx
        mov dword ptr ds : [public_664928], ebx
        call public_5b7e6c
        add esp, 4
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x421160)
    }
}

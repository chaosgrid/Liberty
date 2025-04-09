#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53aa10);

#define public_53aa2f _public_53aa2f

PROC_DECLARE(0x53aa10, internal_53aa10, public_53aa10);
extern "C" NAKED register_t __cdecl internal_53aa10()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0x44]
        mov al, byte ptr ss : [esp+4]
        shl al, 3
        xor al, dl
        and al, 8
        xor al, dl
        test al, 8
        mov byte ptr ds : [ecx+0x44], al
        je public_53aa2f
        mov eax, dword ptr ds : [public_610850]
        mov dword ptr ds : [ecx+0x7C], eax
        public_53aa2f : nop
        ret 4
        UNREACHABLE_TRAP(0x53aa10)
    }
}

#undef public_53aa2f

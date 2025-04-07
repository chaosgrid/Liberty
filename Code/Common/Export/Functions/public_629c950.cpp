#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b540);
CLANG_FORWARD_PROC_SYMBOL(public_629c950);
CLANG_FORWARD_PROC_SYMBOL(public_629cb70);

#define public_629c97e _public_629c97e

PROC_DECLARE(0x629c950, internal_629c950, public_629c950);
extern "C" NAKED register_t __cdecl internal_629c950()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x80]
        test ecx, ecx
        je public_629c97e
        push esi
        call public_629cb70
        mov al, byte ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [esi+0x80]
        mov edx, dword ptr ds : [ecx+8]
        test al, al
        sete al
        push eax
        push edx
        call public_628b540
        add esp, 8
        public_629c97e : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629c950)
    }
}

#undef public_629c97e

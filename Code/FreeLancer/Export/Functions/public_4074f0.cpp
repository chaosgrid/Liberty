#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555860);

#define public_407510 _public_407510
#define public_407523 _public_407523

PROC_DECLARE(0x4074f0, internal_4074f0, public_4074f0);
extern "C" NAKED register_t __cdecl internal_4074f0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov cl, byte ptr ds : [edi+0x50]
        mov esi, dword ptr ds : [edi+0x44]
        mov eax, dword ptr ds : [edi+0x48]
        or cl, 8
        cmp esi, eax
        mov byte ptr ds : [edi+0x50], cl
        je public_407523
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_407510 : nop
        push ebx
        mov ecx, esi
        call public_555860
        mov eax, dword ptr ds : [edi+0x48]
        add esi, 0x24
        cmp esi, eax
        jne public_407510
        pop ebx
        public_407523 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4074f0)
    }
}

#undef public_407510
#undef public_407523

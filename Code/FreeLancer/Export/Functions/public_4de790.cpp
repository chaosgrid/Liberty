#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_4de790);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4de7a0 _public_4de7a0
#define public_4de7ae _public_4de7ae

PROC_DECLARE(0x4de790, internal_4de790, public_4de790);
extern "C" NAKED register_t __cdecl internal_4de790()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_4de7ae
        nop 
        public_4de7a0 : nop
        mov ecx, esi
        call public_4dd9a0
        add esi, 0x14
        cmp esi, ebx
        jne public_4de7a0
        public_4de7ae : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4de790)
    }
}

#undef public_4de7a0
#undef public_4de7ae

#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6330);
CLANG_FORWARD_PROC_SYMBOL(public_6ef65a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ef65b0 _public_6ef65b0
#define public_6ef65be _public_6ef65be

PROC_DECLARE(0x6ef65a0, internal_6ef65a0, public_6ef65a0);
extern "C" NAKED register_t __cdecl internal_6ef65a0()
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
        je public_6ef65be
        nop 
        public_6ef65b0 : nop
        mov ecx, esi
        call public_6ef6330
        add esi, 0x38
        cmp esi, ebx
        jne public_6ef65b0
        public_6ef65be : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ef65a0)
    }
}

#undef public_6ef65b0
#undef public_6ef65be

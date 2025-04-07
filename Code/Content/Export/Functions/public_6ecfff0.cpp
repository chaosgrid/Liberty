#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfff0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed36d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed0000 _public_6ed0000
#define public_6ed000e _public_6ed000e

PROC_DECLARE(0x6ecfff0, internal_6ecfff0, public_6ecfff0);
extern "C" NAKED register_t __cdecl internal_6ecfff0()
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
        je public_6ed000e
        nop 
        public_6ed0000 : nop
        mov ecx, esi
        call public_6ed36d0
        add esi, 0x3C
        cmp esi, ebx
        jne public_6ed0000
        public_6ed000e : nop
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
        UNREACHABLE_TRAP(0x6ecfff0)
    }
}

#undef public_6ed0000
#undef public_6ed000e

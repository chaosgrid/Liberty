#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6bab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f6bad6 _public_6f6bad6
#define public_6f6bae4 _public_6f6bae4
#define public_6f6bb05 _public_6f6bb05

PROC_DECLARE(0x6f6bab0, internal_6f6bab0, public_6f6bab0);
extern "C" NAKED register_t __cdecl internal_6f6bab0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd1cb8]
        mov al, 2
        test al, cl
        jne public_6f6bb05
        push esi
        mov esi, dword ptr ds : [public_6fd1cac]
        push edi
        mov edi, dword ptr ds : [public_6fd1cb0]
        or cl, al
        cmp esi, edi
        mov byte ptr ds : [public_6fd1cb8], cl
        je public_6f6bae4
        public_6f6bad6 : nop
        mov ecx, esi
        call public_6f98760
        add esi, 0x14
        cmp esi, edi
        jne public_6f6bad6
        public_6f6bae4 : nop
        mov eax, dword ptr ds : [public_6fd1cac]
        push eax
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6fd1cac], eax
        mov dword ptr ds : [public_6fd1cb0], eax
        mov dword ptr ds : [public_6fd1cb4], eax
        pop esi
        public_6f6bb05 : nop
        ret 
        UNREACHABLE_TRAP(0x6f6bab0)
    }
}

#undef public_6f6bad6
#undef public_6f6bae4
#undef public_6f6bb05

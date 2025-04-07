#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4daa0);

#define public_6f4dab1 _public_6f4dab1
#define public_6f4daca _public_6f4daca
#define public_6f4dad3 _public_6f4dad3

PROC_DECLARE(0x6f4daa0, internal_6f4daa0, public_6f4daa0);
extern "C" NAKED register_t __cdecl internal_6f4daa0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4daca
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f4dab1 : nop
        push ebx
        push esi
        call dword ptr ds : [public_6fb32c4]
        add esp, 8
        test al, al
        jne public_6f4dad3
        mov eax, dword ptr ds : [edi+8]
        add esi, 0x10
        cmp esi, eax
        jne public_6f4dab1
        public_6f4daca : nop
        mov eax, dword ptr ds : [edi+8]
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6f4dad3 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f4daa0)
    }
}

#undef public_6f4dab1
#undef public_6f4daca
#undef public_6f4dad3

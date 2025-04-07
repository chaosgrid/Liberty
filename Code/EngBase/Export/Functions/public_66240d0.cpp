#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66240d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_66240e2 _public_66240e2
#define public_6624116 _public_6624116
#define public_662411f _public_662411f
#define public_6624128 _public_6624128

PROC_DECLARE(0x66240d0, internal_66240d0, public_66240d0);
extern "C" NAKED register_t __cdecl internal_66240d0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+8]
        cmp edi, eax
        mov esi, edi
        je public_6624128
        public_66240e2 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, ebx
        push eax
        call public_66240d0
        mov eax, dword ptr ds : [public_662b1a8]
        mov esi, dword ptr ds : [esi]
        cmp eax, 0x80
        jge public_6624116
        mov ecx, dword ptr ds : [public_662b19c]
        mov dword ptr ds : [edi], ecx
        mov eax, dword ptr ds : [public_662b1a8]
        inc eax
        mov dword ptr ds : [public_662b19c], edi
        mov dword ptr ds : [public_662b1a8], eax
        jmp public_662411f
        public_6624116 : nop
        push edi
        call public_66281d0
        add esp, 4
        public_662411f : nop
        mov eax, dword ptr ds : [ebx+8]
        mov edi, esi
        cmp esi, eax
        jne public_66240e2
        public_6624128 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x66240d0)
    }
}

#undef public_66240e2
#undef public_6624116
#undef public_662411f
#undef public_6624128

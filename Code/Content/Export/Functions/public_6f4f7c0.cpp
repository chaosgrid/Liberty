#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);

#define public_6f4f7d7 _public_6f4f7d7
#define public_6f4f7f2 _public_6f4f7f2
#define public_6f4f7ff _public_6f4f7ff
#define public_6f4f818 _public_6f4f818
#define public_6f4f820 _public_6f4f820
#define public_6f4f82e _public_6f4f82e
#define public_6f4f839 _public_6f4f839

PROC_DECLARE(0x6f4f7c0, internal_6f4f7c0, public_6f4f7c0);
extern "C" NAKED register_t __cdecl internal_6f4f7c0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC8]
        push edi
        mov edi, dword ptr ds : [esi+0xC4]
        xor ebx, ebx
        cmp edi, eax
        je public_6f4f7ff
        public_6f4f7d7 : nop
        push edi
        call public_6fa6e50
        add esp, 4
        test eax, eax
        je public_6f4f7f2
        push 1
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6f4f7f2
        inc ebx
        public_6f4f7f2 : nop
        mov eax, dword ptr ds : [esi+0xC8]
        add edi, 4
        cmp edi, eax
        jne public_6f4f7d7
        public_6f4f7ff : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        test ecx, ecx
        je public_6f4f818
        mov eax, dword ptr ds : [esi+0xC8]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jne public_6f4f820
        public_6f4f818 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_6f4f820 : nop
        mov eax, dword ptr ds : [esi+0xC4]
        test eax, eax
        jne public_6f4f82e
        xor esi, esi
        jmp public_6f4f839
        public_6f4f82e : nop
        mov esi, dword ptr ds : [esi+0xC8]
        sub esi, eax
        sar esi, 2
        public_6f4f839 : nop
        call dword ptr ds : [public_6fb3370]
        imul eax, esi
        mov ecx, dword ptr ss : [esp+0x10]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        cmp eax, ebx
        sbb eax, eax
        pop edi
        add eax, 2
        pop esi
        mov dword ptr ds : [ecx], eax
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f4f7c0)
    }
}

#undef public_6f4f7d7
#undef public_6f4f7f2
#undef public_6f4f7ff
#undef public_6f4f818
#undef public_6f4f820
#undef public_6f4f82e
#undef public_6f4f839

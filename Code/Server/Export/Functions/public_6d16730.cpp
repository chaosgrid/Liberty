#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16730);
CLANG_FORWARD_PROC_SYMBOL(public_6d17060);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d16740 _public_6d16740
#define public_6d16749 _public_6d16749
#define public_6d1674b _public_6d1674b
#define public_6d16766 _public_6d16766
#define public_6d1676b _public_6d1676b
#define public_6d16773 _public_6d16773
#define public_6d16786 _public_6d16786
#define public_6d1678f _public_6d1678f
#define public_6d16793 _public_6d16793

PROC_DECLARE(0x6d16730, internal_6d16730, public_6d16730);
extern "C" NAKED register_t __cdecl internal_6d16730()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        mov edi, ecx
        xor esi, esi
        push ebp
        lea ebx, ds:[ebx]
        public_6d16740 : nop
        cmp esi, ebx
        jne public_6d16749
        mov esi, dword ptr ds : [edi+8]
        jmp public_6d1674b
        public_6d16749 : nop
        mov esi, dword ptr ds : [esi]
        public_6d1674b : nop
        cmp esi, ebx
        je public_6d1676b
        mov ebp, dword ptr ds : [esi+8]
        cmp ebp, ebx
        je public_6d16766
        mov ecx, ebp
        call public_6d17060
        push ebp
        call public_6d5ffb0
        add esp, 4
        public_6d16766 : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_6d16740
        public_6d1676b : nop
        mov esi, dword ptr ds : [edi+8]
        cmp esi, ebx
        pop ebp
        je public_6d16793
        public_6d16773 : nop
        cmp byte ptr ds : [edi+0x10], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_6d16786
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x14], eax
        jmp public_6d1678f
        public_6d16786 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d1678f : nop
        cmp esi, ebx
        jne public_6d16773
        public_6d16793 : nop
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi], ebx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d16730)
    }
}

#undef public_6d16740
#undef public_6d16749
#undef public_6d1674b
#undef public_6d16766
#undef public_6d1676b
#undef public_6d16773
#undef public_6d16786
#undef public_6d1678f
#undef public_6d16793

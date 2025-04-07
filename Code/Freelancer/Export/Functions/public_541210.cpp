#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_541200);
CLANG_FORWARD_PROC_SYMBOL(public_541210);
CLANG_FORWARD_PROC_SYMBOL(public_542410);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_541223 _public_541223
#define public_541230 _public_541230
#define public_541239 _public_541239
#define public_54123b _public_54123b
#define public_541269 _public_541269
#define public_54126b _public_54126b
#define public_541275 _public_541275
#define public_54127a _public_54127a
#define public_541332 _public_541332
#define public_541333 _public_541333
#define public_54134a _public_54134a

PROC_DECLARE(0x541210, internal_541210, public_541210);
extern "C" NAKED register_t __cdecl internal_541210()
{
    __asm
    {
        mov edx, dword ptr ds : [public_678a34]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [edx]
        cmp esi, edx
        je public_54127a
        push edi
        public_541223 : nop
        test ebx, ebx
        je public_541333
        xor ecx, ecx
        lea ecx, ds:[ecx]
        public_541230 : nop
        test ecx, ecx
        jne public_541239
        mov ecx, dword ptr ds : [ebx+4]
        jmp public_54123b
        public_541239 : nop
        mov ecx, dword ptr ds : [ecx]
        public_54123b : nop
        test ecx, ecx
        je public_541333
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_541269
        add eax, 0xC
        test eax, eax
        je public_541269
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_541269
        mov edi, dword ptr ds : [eax+0x4C]
        and edi, 0x503
        cmp edi, 0x503
        je public_54126b
        public_541269 : nop
        xor eax, eax
        public_54126b : nop
        mov edi, dword ptr ds : [esi+8]
        cmp eax, dword ptr ds : [edi+8]
        jne public_541230
        mov esi, dword ptr ds : [esi]
        public_541275 : nop
        cmp esi, edx
        jne public_541223
        pop edi
        public_54127a : nop
        push 1
        push ebx
        mov ecx, offset public_678aa8
        call public_542410
        push 1
        push ebx
        mov ecx, offset public_678a90
        call public_542410
        push 1
        push ebx
        mov ecx, offset public_678a9c
        call public_542410
        push 1
        push ebx
        mov ecx, offset public_678a84
        call public_542410
        push 1
        push ebx
        mov ecx, offset public_678a78
        call public_542410
        mov eax, dword ptr ds : [public_678ac4]
        push 1
        push ebx
        mov ecx, offset public_678ab4
        mov dword ptr ds : [public_678ac8], eax
        call public_542410
        push 1
        push ebx
        mov ecx, offset public_678a6c
        call public_542410
        push 1
        push ebx
        mov ecx, offset public_678a54
        call public_542410
        push 1
        push ebx
        mov ecx, offset public_678a60
        call public_542410
        push 1
        push ebx
        mov ecx, offset public_678a48
        call public_542410
        push 1
        push ebx
        mov ecx, offset public_678a3c
        call public_542410
        mov eax, dword ptr ds : [public_678ae0]
        test eax, eax
        pop esi
        pop ebx
        je public_541332
        push eax
        call dword ptr ds : [public_5c6a8c]
        add esp, 4
        mov dword ptr ds : [public_678ae0], 0
        public_541332 : nop
        ret 
        public_541333 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_54134a
        mov ecx, edi
        call public_541200
        push edi
        call public_5b7e1d
        add esp, 4
        public_54134a : nop
        mov edi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], edi
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov eax, dword ptr ds : [public_678a38]
        mov edx, dword ptr ds : [public_678a34]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_678a38], eax
        mov esi, edi
        jmp public_541275
        UNREACHABLE_TRAP(0x541210)
    }
}

#undef public_541223
#undef public_541230
#undef public_541239
#undef public_54123b
#undef public_541269
#undef public_54126b
#undef public_541275
#undef public_54127a
#undef public_541332
#undef public_541333
#undef public_54134a

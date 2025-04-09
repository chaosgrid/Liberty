#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8350);

#define public_4c8361 _public_4c8361
#define public_4c836f _public_4c836f
#define public_4c837c _public_4c837c
#define public_4c8382 _public_4c8382
#define public_4c8391 _public_4c8391
#define public_4c8398 _public_4c8398

PROC_DECLARE(0x4c8350, internal_4c8350, public_4c8350);
extern "C" NAKED register_t __cdecl internal_4c8350()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5d6e30
        mov eax, dword ptr ds : [public_673510]
        xor edx, edx
        test eax, eax
        je public_4c8398
        public_4c8361 : nop
        cmp eax, ecx
        je public_4c836f
        mov edx, eax
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_4c8361
        ret 
        public_4c836f : nop
        test edx, edx
        push esi
        mov esi, dword ptr ds : [eax+4]
        je public_4c837c
        mov dword ptr ds : [edx+4], esi
        jmp public_4c8382
        public_4c837c : nop
        mov dword ptr ds : [public_673510], esi
        public_4c8382 : nop
        cmp eax, dword ptr ds : [public_673514]
        pop esi
        jne public_4c8391
        mov dword ptr ds : [public_673514], edx
        public_4c8391 : nop
        mov dword ptr ds : [ecx+4], 0
        public_4c8398 : nop
        ret 
        UNREACHABLE_TRAP(0x4c8350)
    }
}

#undef public_4c8361
#undef public_4c836f
#undef public_4c837c
#undef public_4c8382
#undef public_4c8391
#undef public_4c8398

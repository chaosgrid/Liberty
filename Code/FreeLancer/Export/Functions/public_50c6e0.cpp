#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50c6e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_50c6f1 _public_50c6f1
#define public_50c704 _public_50c704
#define public_50c70a _public_50c70a
#define public_50c710 _public_50c710
#define public_50c73d _public_50c73d

PROC_DECLARE(0x50c6e0, internal_50c6e0, public_50c6e0);
extern "C" NAKED register_t __cdecl internal_50c6e0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [public_675180]
        mov esi, dword ptr ds : [edi]
        mov ebx, edi
        cmp esi, ebx
        je public_50c70a
        public_50c6f1 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_50c704
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov edi, dword ptr ds : [public_675180]
        public_50c704 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_50c6f1
        public_50c70a : nop
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_50c73d
        public_50c710 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_675184]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_675184], ecx
        jne public_50c710
        public_50c73d : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x50c6e0)
    }
}

#undef public_50c6f1
#undef public_50c704
#undef public_50c70a
#undef public_50c710
#undef public_50c73d

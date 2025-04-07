#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5200b0);
CLANG_FORWARD_PROC_SYMBOL(public_5205d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5200c0 _public_5200c0
#define public_5200dc _public_5200dc
#define public_5200e2 _public_5200e2
#define public_5200f0 _public_5200f0
#define public_52011d _public_52011d

PROC_DECLARE(0x5200b0, internal_5200b0, public_5200b0);
extern "C" NAKED register_t __cdecl internal_5200b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6753c4]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov ebx, eax
        je public_5200e2
        public_5200c0 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_5200dc
        mov ecx, edi
        call public_5205d0
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_6753c4]
        add esp, 4
        public_5200dc : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_5200c0
        public_5200e2 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_52011d
        lea ebx, ds:[ebx]
        public_5200f0 : nop
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
        mov ecx, dword ptr ds : [public_6753c8]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6753c8], ecx
        jne public_5200f0
        public_52011d : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5200b0)
    }
}

#undef public_5200c0
#undef public_5200dc
#undef public_5200e2
#undef public_5200f0
#undef public_52011d

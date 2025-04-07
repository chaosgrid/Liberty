#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5582a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5582b0 _public_5582b0
#define public_5582c6 _public_5582c6
#define public_5582cf _public_5582cf
#define public_5582d6 _public_5582d6
#define public_5582e0 _public_5582e0
#define public_558307 _public_558307

PROC_DECLARE(0x5582a0, internal_5582a0, public_5582a0);
extern "C" NAKED register_t __cdecl internal_5582a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_5582d6
        mov edi, edi
        public_5582b0 : nop
        mov esi, dword ptr ds : [ebx+8]
        test esi, esi
        je public_5582cf
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_5582c6
        push eax
        call public_5b7e1d
        add esp, 4
        public_5582c6 : nop
        push esi
        call public_5b7e1d
        add esp, 4
        public_5582cf : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edi+4]
        jne public_5582b0
        public_5582d6 : nop
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_558307
        nop 
        public_5582e0 : nop
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
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_5582e0
        public_558307 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5582a0)
    }
}

#undef public_5582b0
#undef public_5582c6
#undef public_5582cf
#undef public_5582d6
#undef public_5582e0
#undef public_558307

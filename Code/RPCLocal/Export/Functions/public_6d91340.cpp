#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d91358 _public_6d91358
#define public_6d9136f _public_6d9136f
#define public_6d91378 _public_6d91378
#define public_6d91381 _public_6d91381
#define public_6d91390 _public_6d91390
#define public_6d913b7 _public_6d913b7
#define public_6d913d7 _public_6d913d7

PROC_DECLARE(0x6d91340, internal_6d91340, public_6d91340);
extern "C" NAKED register_t __cdecl internal_6d91340()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        push esi
        push edi
        je public_6d913d7
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d91381
        public_6d91358 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_6d91378
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        je public_6d9136f
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d9136f : nop
        push edi
        call public_6db1dc2
        add esp, 4
        public_6d91378 : nop
        mov eax, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [eax+4]
        jne public_6d91358
        public_6d91381 : nop
        mov edi, dword ptr ds : [ebx]
        test edi, edi
        je public_6d913d7
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6d913b7
        public_6d91390 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6db1dc2
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6d91390
        public_6d913b7 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6db1dc2
        push edi
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [edi+8], 0
        call public_6db1dc2
        add esp, 8
        public_6d913d7 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d91340)
    }
}

#undef public_6d91358
#undef public_6d9136f
#undef public_6d91378
#undef public_6d91381
#undef public_6d91390
#undef public_6d913b7
#undef public_6d913d7

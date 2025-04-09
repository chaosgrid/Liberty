#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50c040);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_50c051 _public_50c051
#define public_50c065 _public_50c065
#define public_50c06b _public_50c06b
#define public_50c071 _public_50c071
#define public_50c09e _public_50c09e

PROC_DECLARE(0x50c040, internal_50c040, public_50c040);
extern "C" NAKED register_t __cdecl internal_50c040()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [public_675060]
        mov esi, dword ptr ds : [edi]
        mov ebx, edi
        cmp esi, ebx
        je public_50c06b
        public_50c051 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_50c065
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x34]
        mov edi, dword ptr ds : [public_675060]
        public_50c065 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_50c051
        public_50c06b : nop
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_50c09e
        public_50c071 : nop
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
        mov ecx, dword ptr ds : [public_675064]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_675064], ecx
        jne public_50c071
        public_50c09e : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x50c040)
    }
}

#undef public_50c051
#undef public_50c065
#undef public_50c06b
#undef public_50c071
#undef public_50c09e

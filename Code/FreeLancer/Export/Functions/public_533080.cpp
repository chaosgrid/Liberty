#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_533080);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_533093 _public_533093
#define public_5330a1 _public_5330a1
#define public_5330ae _public_5330ae
#define public_5330c0 _public_5330c0
#define public_5330ed _public_5330ed

PROC_DECLARE(0x533080, internal_533080, public_533080);
extern "C" NAKED register_t __cdecl internal_533080()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xB8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_5330ae
        xor ebx, ebx
        public_533093 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_5330a1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+4]
        public_5330a1 : nop
        mov dword ptr ds : [esi+8], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xB8]
        jne public_533093
        public_5330ae : nop
        mov ebx, dword ptr ds : [edi+0xB8]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_5330ed
        lea ebx, ds:[ebx]
        public_5330c0 : nop
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
        mov ecx, dword ptr ds : [edi+0xBC]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0xBC], ecx
        jne public_5330c0
        public_5330ed : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x533080)
    }
}

#undef public_533093
#undef public_5330a1
#undef public_5330ae
#undef public_5330c0
#undef public_5330ed

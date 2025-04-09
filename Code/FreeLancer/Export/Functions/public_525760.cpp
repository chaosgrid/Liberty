#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_525760);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_525773 _public_525773
#define public_525782 _public_525782
#define public_52579c _public_52579c
#define public_5257a4 _public_5257a4
#define public_5257ca _public_5257ca
#define public_5257f9 _public_5257f9

PROC_DECLARE(0x525760, internal_525760, public_525760);
extern "C" NAKED register_t __cdecl internal_525760()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        xor ebx, ebx
        cmp ecx, ebx
        je public_525773
        call dword ptr ds : [public_5c65c8]
        public_525773 : nop
        cmp dword ptr ds : [esi+0xC], ebx
        push edi
        je public_5257a4
        mov eax, dword ptr ds : [esi+0x14]
        xor edi, edi
        cmp eax, ebx
        jle public_5257a4
        public_525782 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+edi*4]
        cmp ecx, ebx
        je public_52579c
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x15C]
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+edi*4], ebx
        public_52579c : nop
        mov eax, dword ptr ds : [esi+0x14]
        inc edi
        cmp edi, eax
        jl public_525782
        public_5257a4 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0xA8]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop edi
        je public_5257ca
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xA8], ebx
        public_5257ca : nop
        mov esi, dword ptr ds : [esi+0xB0]
        cmp esi, ebx
        je public_5257f9
        mov eax, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        call public_5b7e1d
        push esi
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_5b7e1d
        add esp, 0xC
        public_5257f9 : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x525760)
    }
}

#undef public_525773
#undef public_525782
#undef public_52579c
#undef public_5257a4
#undef public_5257ca
#undef public_5257f9

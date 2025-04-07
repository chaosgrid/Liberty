#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1be0);

#define public_6ac1c06 _public_6ac1c06
#define public_6ac1c1c _public_6ac1c1c
#define public_6ac1c43 _public_6ac1c43
#define public_6ac1c58 _public_6ac1c58
#define public_6ac1c73 _public_6ac1c73
#define public_6ac1c83 _public_6ac1c83
#define public_6ac1c98 _public_6ac1c98
#define public_6ac1cad _public_6ac1cad
#define public_6ac1ccc _public_6ac1ccc

PROC_DECLARE(0x6ac1be0, internal_6ac1be0, public_6ac1be0);
extern "C" NAKED register_t __cdecl internal_6ac1be0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ae0934]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        je public_6ac1c06
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ds : [public_6ae0934]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_6ae0934], ebx
        public_6ac1c06 : nop
        mov ecx, dword ptr ds : [public_6ae0938]
        cmp ecx, ebx
        je public_6ac1c1c
        mov eax, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ds : [public_6ae0938]
        public_6ac1c1c : nop
        mov eax, dword ptr ds : [public_6ae093c]
        cmp eax, ebx
        je public_6ac1c43
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [public_6ae093c]
        push ebx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x74]
        mov ecx, dword ptr ds : [public_6ae0938]
        mov eax, dword ptr ds : [public_6ae093c]
        public_6ac1c43 : nop
        cmp ecx, ebx
        je public_6ac1c58
        mov eax, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_6ae093c]
        mov dword ptr ds : [public_6ae0938], ebx
        public_6ac1c58 : nop
        mov ecx, dword ptr ds : [public_6ae0944]
        cmp ecx, ebx
        je public_6ac1c73
        mov edx, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [public_6ae093c]
        mov dword ptr ds : [public_6ae0944], ebx
        public_6ac1c73 : nop
        cmp eax, ebx
        je public_6ac1c83
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6ae093c], ebx
        public_6ac1c83 : nop
        mov eax, dword ptr ds : [public_6ae0940]
        cmp eax, ebx
        je public_6ac1c98
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_6ae0940], ebx
        public_6ac1c98 : nop
        mov eax, dword ptr ds : [public_6ae0948]
        cmp eax, ebx
        je public_6ac1cad
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6ae0948], ebx
        public_6ac1cad : nop
        mov eax, dword ptr ds : [public_6ae0950]
        cmp eax, ebx
        je public_6ac1ccc
        mov edx, dword ptr ds : [public_6ae094c]
        push eax
        push 0xFFFFFFFC
        push edx
        call dword ptr ds : [public_6ada174]
        mov dword ptr ds : [public_6ae0950], ebx
        public_6ac1ccc : nop
        mov byte ptr ds : [public_6ae0955], bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ac1be0)
    }
}

#undef public_6ac1c06
#undef public_6ac1c1c
#undef public_6ac1c43
#undef public_6ac1c58
#undef public_6ac1c73
#undef public_6ac1c83
#undef public_6ac1c98
#undef public_6ac1cad
#undef public_6ac1ccc

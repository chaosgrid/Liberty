#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e990);
CLANG_FORWARD_PROC_SYMBOL(public_41b030);

#define public_4089b0 _public_4089b0
#define public_4089c1 _public_4089c1
#define public_4089d0 _public_4089d0
#define public_4089de _public_4089de
#define public_408a0e _public_408a0e
#define public_408a1c _public_408a1c
#define public_408a24 _public_408a24
#define public_408a37 _public_408a37
#define public_408a43 _public_408a43
#define public_408a51 _public_408a51
#define public_408a58 _public_408a58

PROC_DECLARE(0x4089a0, internal_4089a0, public_4089a0);
extern "C" NAKED register_t __cdecl internal_4089a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x7C]
        push edi
        mov edi, dword ptr ds : [esi+0x78]
        cmp edi, eax
        je public_4089c1
        mov edi, edi
        public_4089b0 : nop
        mov ecx, dword ptr ds : [edi]
        call public_40e990
        mov eax, dword ptr ds : [esi+0x7C]
        add edi, 4
        cmp edi, eax
        jne public_4089b0
        public_4089c1 : nop
        mov edx, dword ptr ds : [esi+0x7C]
        mov ecx, dword ptr ds : [esi+0x78]
        mov eax, edx
        cmp eax, edx
        je public_4089de
        lea ecx, ds:[ecx]
        public_4089d0 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_4089d0
        public_4089de : nop
        mov dword ptr ds : [esi+0x7C], ecx
        test byte ptr ds : [esi+0x50], 1
        je public_408a58
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_408a1c
        mov eax, dword ptr ds : [eax+8]
        push 0xEA60
        push eax
        call dword ptr ds : [public_5c601c]
        mov ecx, dword ptr ds : [esi+0x1C]
        add esp, 8
        test ecx, ecx
        je public_408a0e
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+4]
        public_408a0e : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ds : [esi+0x1C], 0
        call dword ptr ds : [eax+0x28]
        public_408a1c : nop
        mov edi, dword ptr ds : [esi+0x34]
        cmp edi, dword ptr ds : [esi+0x38]
        je public_408a37
        public_408a24 : nop
        push edi
        call public_41b030
        mov eax, dword ptr ds : [esi+0x38]
        add edi, 4
        add esp, 4
        cmp edi, eax
        jne public_408a24
        public_408a37 : nop
        mov edx, dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [esi+0x34]
        mov eax, edx
        cmp eax, edx
        je public_408a51
        public_408a43 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_408a43
        public_408a51 : nop
        mov dword ptr ds : [esi+0x38], ecx
        and byte ptr ds : [esi+0x50], 0xFC
        public_408a58 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        mov al, byte ptr ds : [esi+0x50]
        and al, 0xEB
        pop edi
        mov byte ptr ds : [esi+0x50], al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4089a0)
    }
}

#undef public_4089b0
#undef public_4089c1
#undef public_4089d0
#undef public_4089de
#undef public_408a0e
#undef public_408a1c
#undef public_408a24
#undef public_408a37
#undef public_408a43
#undef public_408a51
#undef public_408a58

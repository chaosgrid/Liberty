#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6268664 _public_6268664
#define public_626868f _public_626868f
#define public_6268691 _public_6268691
#define public_6268697 _public_6268697

PROC_DECLARE(0x6268650, internal_6268650, public_6268650);
extern "C" NAKED register_t __cdecl internal_6268650()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6268697
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6268697
        public_6268664 : nop
        mov cx, word ptr ds : [esi+0xA]
        cmp cx, word ptr ds : [eax+0xA]
        je public_626868f
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+8], eax
        jmp public_6268691
        public_626868f : nop
        mov esi, eax
        public_6268691 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        jne public_6268664
        public_6268697 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6268650)
    }
}

#undef public_6268664
#undef public_626868f
#undef public_6268691
#undef public_6268697

#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6268614 _public_6268614
#define public_626863f _public_626863f
#define public_6268641 _public_6268641
#define public_6268647 _public_6268647

PROC_DECLARE(0x6268600, internal_6268600, public_6268600);
extern "C" NAKED register_t __cdecl internal_6268600()
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
        je public_6268647
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6268647
        public_6268614 : nop
        mov cx, word ptr ds : [esi+0xA]
        cmp cx, word ptr ds : [eax+0xA]
        jne public_626863f
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
        jmp public_6268641
        public_626863f : nop
        mov esi, eax
        public_6268641 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        jne public_6268614
        public_6268647 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6268600)
    }
}

#undef public_6268614
#undef public_626863f
#undef public_6268641
#undef public_6268647

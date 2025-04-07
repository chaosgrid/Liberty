#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d17090);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d170ae _public_6d170ae
#define public_6d170b7 _public_6d170b7
#define public_6d170cd _public_6d170cd
#define public_6d170d5 _public_6d170d5
#define public_6d170df _public_6d170df
#define public_6d170ff _public_6d170ff
#define public_6d1710c _public_6d1710c
#define public_6d1710f _public_6d1710f

PROC_DECLARE(0x6d17090, internal_6d17090, public_6d17090);
extern "C" NAKED register_t __cdecl internal_6d17090()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6d1710f
        cmp dword ptr ds : [ecx+4], eax
        jne public_6d170b7
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov dword ptr ds : [ecx+4], eax
        jne public_6d170ae
        mov dword ptr ds : [ecx+8], eax
        jmp public_6d170df
        public_6d170ae : nop
        mov dword ptr ds : [eax+4], 0
        jmp public_6d170df
        public_6d170b7 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, eax
        jne public_6d170d5
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        mov dword ptr ds : [ecx+8], eax
        jne public_6d170cd
        mov dword ptr ds : [ecx+4], eax
        jmp public_6d170df
        public_6d170cd : nop
        mov dword ptr ds : [eax], 0
        jmp public_6d170df
        public_6d170d5 : nop
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [eax+4], edx
        public_6d170df : nop
        mov dl, byte ptr ds : [ecx+0xC]
        test dl, dl
        mov eax, dword ptr ds : [edi]
        push esi
        mov esi, dword ptr ds : [eax+4]
        je public_6d170ff
        test eax, eax
        je public_6d1710c
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx+0x10], eax
        mov dword ptr ds : [edi], esi
        pop esi
        pop edi
        ret 4
        public_6d170ff : nop
        test eax, eax
        je public_6d1710c
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d1710c : nop
        mov dword ptr ds : [edi], esi
        pop esi
        public_6d1710f : nop
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x6d17090)
    }
}

#undef public_6d170ae
#undef public_6d170b7
#undef public_6d170cd
#undef public_6d170d5
#undef public_6d170df
#undef public_6d170ff
#undef public_6d1710c
#undef public_6d1710f

#include "Shading-PCH.h"


#define public_6eba75f _public_6eba75f
#define public_6eba770 _public_6eba770
#define public_6eba7aa _public_6eba7aa
#define public_6eba7ac _public_6eba7ac
#define public_6eba7f0 _public_6eba7f0
#define public_6eba817 _public_6eba817
#define public_6eba840 _public_6eba840

PROC_DECLARE(0x6eba720, internal_6eba720, public_6eba720);
extern "C" NAKED register_t __cdecl internal_6eba720()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ds:[ebx+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6eba75f
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6eba75f
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_6eba75f
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_6eba75f : nop
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed209c
        mov eax, 0x8D
        lea ecx, ds:[ecx]
        public_6eba770 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi]
        push ecx
        push eax
        push edi
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eba770
        mov edi, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push 0
        push esi
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, 4
        jb public_6eba7aa
        add eax, 0xFFFFFFFC
        jmp public_6eba7ac
        public_6eba7aa : nop
        xor eax, eax
        public_6eba7ac : nop
        mov ecx, dword ptr ds : [esi]
        push eax
        push 0xB
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xD
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [esi]
        inc edx
        push edx
        push 0xE
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed20ac
        mov eax, 1
        nop 
        lea esp, ss:[esp]
        public_6eba7f0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eba7f0
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed20e4
        mov eax, 1
        public_6eba817 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eba817
        mov ebx, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed206c
        mov eax, 0x89
        pop edi
        nop 
        public_6eba840 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eba840
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eba720)
    }
}

#undef public_6eba75f
#undef public_6eba770
#undef public_6eba7aa
#undef public_6eba7ac
#undef public_6eba7f0
#undef public_6eba817
#undef public_6eba840

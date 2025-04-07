#include "FLMaterials-PCH.h"


#define public_66fb4c4 _public_66fb4c4
#define public_66fb4de _public_66fb4de
#define public_66fb4e3 _public_66fb4e3
#define public_66fb4fb _public_66fb4fb
#define public_66fb518 _public_66fb518

PROC_DECLARE(0x66fb490, internal_66fb490, public_66fb490);
extern "C" NAKED register_t __cdecl internal_66fb490()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ds:[ebx+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        fld dword ptr ds : [ebx+0x74]
        fcomp qword ptr ds : [public_6702818]
        mov edi, dword ptr ds : [ebx+4]
        fnstsw ax
        test ah, 5
        mov eax, 0x89
        jp public_66fb4de
        mov esi, offset public_67026fc
        public_66fb4c4 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66fb4c4
        jmp public_66fb4fb
        public_66fb4de : nop
        mov esi, offset public_67026dc
        public_66fb4e3 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66fb4e3
        public_66fb4fb : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push eax
        call dword ptr ds : [ecx+0x108]
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_670272c
        mov eax, 1
        public_66fb518 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi]
        push ecx
        push eax
        push 0
        push edi
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66fb518
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66fb490)
    }
}

#undef public_66fb4c4
#undef public_66fb4de
#undef public_66fb4e3
#undef public_66fb4fb
#undef public_66fb518

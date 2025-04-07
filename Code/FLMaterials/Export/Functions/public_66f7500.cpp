#include "FLMaterials-PCH.h"


#define public_66f7527 _public_66f7527
#define public_66f7560 _public_66f7560
#define public_66f7583 _public_66f7583
#define public_66f7585 _public_66f7585
#define public_66f75c4 _public_66f75c4
#define public_66f75f0 _public_66f75f0
#define public_66f7618 _public_66f7618

PROC_DECLARE(0x66f7500, internal_66f7500, public_66f7500);
extern "C" NAKED register_t __cdecl internal_66f7500()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0x2C]
        push esi
        fcomp dword ptr ds : [public_670402c]
        fnstsw ax
        test ah, 5
        jp public_66f7527
        mov eax, dword ptr ds : [public_670402c]
        mov dword ptr ds : [ebx+0x2C], eax
        mov ecx, dword ptr ds : [public_670402c]
        mov dword ptr ds : [ebx+0x3C], ecx
        public_66f7527 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x20]
        push ecx
        push eax
        call dword ptr ds : [edx+0xAC]
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_66f7560
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_66f7560
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_66f7560
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [eax]
        push 1
        push 0x8D
        push eax
        call dword ptr ds : [edx+0xF0]
        public_66f7560 : nop
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        push 0
        push esi
        call dword ptr ds : [eax+0x108]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, 4
        jb public_66f7583
        add eax, 0xFFFFFFFC
        jmp public_66f7585
        public_66f7583 : nop
        xor eax, eax
        public_66f7585 : nop
        mov edx, dword ptr ds : [esi]
        push eax
        push 0xB
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov ecx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [esi]
        inc ecx
        push ecx
        push 0xD
        push 0
        push esi
        call dword ptr ds : [eax+0xF8]
        mov eax, dword ptr ds : [edi+0x24]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xE
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6701d6c
        mov eax, 1
        public_66f75c4 : nop
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
        jne public_66f75c4
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6701da4
        mov eax, 1
        nop 
        lea esp, ss:[esp]
        public_66f75f0 : nop
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
        jne public_66f75f0
        mov ebx, dword ptr ds : [ebx+4]
        mov esi, offset public_6701d1c
        mov eax, 0x89
        pop edi
        public_66f7618 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66f7618
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66f7500)
    }
}

#undef public_66f7527
#undef public_66f7560
#undef public_66f7583
#undef public_66f7585
#undef public_66f75c4
#undef public_66f75f0
#undef public_66f7618

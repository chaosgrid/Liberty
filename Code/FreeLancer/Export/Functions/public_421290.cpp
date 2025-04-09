#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421290);

#define public_421300 _public_421300
#define public_421330 _public_421330
#define public_42134d _public_42134d
#define public_421370 _public_421370
#define public_421392 _public_421392
#define public_4213b0 _public_4213b0

PROC_DECLARE(0x421290, internal_421290, public_421290);
extern "C" NAKED register_t __cdecl internal_421290()
{
    __asm
    {
        mov al, byte ptr ds : [public_6648d0]
        test al, al
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        je public_421392
        mov edx, dword ptr ds : [public_6648d4]
        push edx
        push eax
        call dword ptr ds : [ecx+0xBC]
        test eax, eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        jne public_42134d
        mov edx, dword ptr ds : [public_6648d4]
        push edx
        push 0
        push eax
        call dword ptr ds : [ecx+0x108]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xB
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5c96c0
        mov eax, 1
        nop 
        public_421300 : nop
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
        jne public_421300
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5c96f8
        mov eax, 1
        nop 
        lea esp, ss:[esp]
        public_421330 : nop
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
        jne public_421330
        pop edi
        pop esi
        ret 
        public_42134d : nop
        push 0
        push 0
        push eax
        call dword ptr ds : [ecx+0x108]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5c96f8
        mov eax, 1
        lea ebx, ds:[ebx]
        public_421370 : nop
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
        jne public_421370
        pop edi
        mov dword ptr ds : [public_6648d4], eax
        pop esi
        ret 
        public_421392 : nop
        push 0
        push 0
        push eax
        call dword ptr ds : [ecx+0x108]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5c96f8
        mov eax, 1
        nop 
        public_4213b0 : nop
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
        jne public_4213b0
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x421290)
    }
}

#undef public_421300
#undef public_421330
#undef public_42134d
#undef public_421370
#undef public_421392
#undef public_4213b0

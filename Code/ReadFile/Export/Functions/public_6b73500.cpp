#include "ReadFile-PCH.h"


#define public_6b73520 _public_6b73520
#define public_6b73526 _public_6b73526
#define public_6b7354f _public_6b7354f
#define public_6b73555 _public_6b73555
#define public_6b7357c _public_6b7357c
#define public_6b73591 _public_6b73591
#define public_6b735a1 _public_6b735a1
#define public_6b735a7 _public_6b735a7
#define public_6b735ce _public_6b735ce
#define public_6b73620 _public_6b73620
#define public_6b73631 _public_6b73631

PROC_DECLARE(0x6b73500, internal_6b73500, public_6b73500);
extern "C" NAKED register_t __cdecl internal_6b73500()
{
    __asm
    {
        sub esp, 0x104
        push ebx
        mov ebx, dword ptr ss : [esp+0x10C]
        push esi
        push edi
        mov ecx, dword ptr ds : [ebx+0x238]
        test ecx, ecx
        je public_6b73520
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        jmp public_6b73526
        public_6b73520 : nop
        mov eax, dword ptr ds : [ebx+0x23C]
        public_6b73526 : nop
        test eax, eax
        je public_6b73631
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        test al, al
        je public_6b73631
        mov eax, dword ptr ds : [ebx+0x230]
        test eax, eax
        je public_6b7354f
        mov esi, dword ptr ds : [eax+0x238]
        jmp public_6b73555
        public_6b7354f : nop
        mov esi, dword ptr ds : [ebx+0x238]
        public_6b73555 : nop
        test esi, esi
        je public_6b73631
        mov ecx, dword ptr ss : [esp+0x118]
        mov eax, dword ptr ds : [ebx]
        push 0x104
        lea edx, ss:[esp+0x10]
        push ecx
        push edx
        push ebx
        call dword ptr ds : [eax+0xA4]
        test eax, eax
        jne public_6b73591
        public_6b7357c : nop
        pop edi
        mov dword ptr ds : [ebx+0x1C], 0xA1
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x104
        ret 8
        public_6b73591 : nop
        mov ecx, dword ptr ds : [ebx+0x238]
        test ecx, ecx
        je public_6b735a1
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        jmp public_6b735a7
        public_6b735a1 : nop
        mov eax, dword ptr ds : [ebx+0x23C]
        public_6b735a7 : nop
        mov edx, dword ptr ds : [esi]
        push 0xFFFFFFFF
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        mov edi, eax
        test edi, edi
        je public_6b7357c
        mov eax, dword ptr ds : [ebx+0x22C]
        test eax, eax
        je public_6b735ce
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        public_6b735ce : nop
        mov dword ptr ds : [ebx+0x22C], edi
        lea edi, ss:[esp+0xC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        lea esi, ss:[esp+0xC]
        mov eax, ecx
        lea edi, ds:[ebx+0x128]
        lea ecx, ds:[eax+1]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov cl, byte ptr ds : [eax+ebx+0x127]
        cmp cl, 0x5C
        je public_6b73620
        cmp cl, 0x2F
        je public_6b73620
        mov byte ptr ds : [eax+ebx+0x128], 0x5C
        mov byte ptr ds : [eax+ebx+0x129], 0
        public_6b73620 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x104
        ret 8
        public_6b73631 : nop
        pop edi
        mov dword ptr ds : [ebx+0x1C], 5
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x104
        ret 8
        UNREACHABLE_TRAP(0x6b73500)
    }
}

#undef public_6b73520
#undef public_6b73526
#undef public_6b7354f
#undef public_6b73555
#undef public_6b7357c
#undef public_6b73591
#undef public_6b735a1
#undef public_6b735a7
#undef public_6b735ce
#undef public_6b73620
#undef public_6b73631

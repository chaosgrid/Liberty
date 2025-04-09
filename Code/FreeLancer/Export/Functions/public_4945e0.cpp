#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_491100);
CLANG_FORWARD_PROC_SYMBOL(public_4a0220);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

#define public_494602 _public_494602
#define public_4946f6 _public_4946f6
#define public_494701 _public_494701
#define public_494733 _public_494733
#define public_494780 _public_494780
#define public_4947bc _public_4947bc
#define public_49480c _public_49480c
#define public_494843 _public_494843
#define public_494849 _public_494849
#define public_494870 _public_494870
#define public_494883 _public_494883

PROC_DECLARE(0x4945e0, internal_4945e0, public_4945e0);
extern "C" NAKED register_t __cdecl internal_4945e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xEF01
        push esi
        mov esi, ecx
        jne public_494849
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_494602
        mov edx, dword ptr ds : [esi]
        add eax, 0x60
        push eax
        call dword ptr ds : [edx+0x14]
        public_494602 : nop
        push ebx
        mov ecx, esi
        call public_491100
        mov eax, dword ptr ds : [esi+0x484]
        mov cl, byte ptr ds : [esi+0x6C]
        mov dword ptr ds : [esi+0x480], eax
        mov eax, dword ptr ds : [esi+0x7D0]
        or cl, 3
        test eax, eax
        mov byte ptr ds : [esi+0x6C], cl
        mov byte ptr ds : [esi+0x818], 0
        je public_49480c
        mov ecx, dword ptr ds : [esi+0x7EC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x7F0]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x8D8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x8DC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xB4C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xB54]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC14]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xC18]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC58]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0xB5C]
        test eax, eax
        jne public_4946f6
        xor ecx, ecx
        jmp public_494701
        public_4946f6 : nop
        mov ecx, dword ptr ds : [esi+0xB60]
        sub ecx, eax
        sar ecx, 2
        public_494701 : nop
        test ecx, ecx
        mov ecx, dword ptr ds : [esi+0xB50]
        mov eax, dword ptr ds : [ecx]
        sete bl
        xor edx, edx
        mov dl, bl
        push 0
        push edx
        push 1
        call dword ptr ds : [eax+0xA8]
        test bl, bl
        je public_494733
        cmp dword ptr ds : [public_6720a0], 3
        jne public_494733
        push 0
        mov ecx, esi
        call public_4a0220
        public_494733 : nop
        mov eax, dword ptr ds : [public_6720a0]
        cmp eax, 1
        je public_494780
        cmp eax, 2
        je public_494780
        mov ecx, dword ptr ds : [esi+0xC5C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC60]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xC64]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        jmp public_4947bc
        public_494780 : nop
        mov ecx, dword ptr ds : [esi+0xC5C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xC60]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC64]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        public_4947bc : nop
        mov ecx, dword ptr ds : [esi+0xAF8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xAFC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xB00]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xB04]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        public_49480c : nop
        mov bl, byte ptr ds : [esi+0x818]
        mov ecx, dword ptr ds : [esi+0x8CC]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        test bl, bl
        sete dl
        push 0
        push edx
        push 1
        call dword ptr ds : [eax+0xA8]
        mov esi, dword ptr ds : [esi+0x8D0]
        mov eax, dword ptr ds : [esi]
        push 0
        push 1
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        pop ebx
        public_494843 : nop
        xor al, al
        pop esi
        ret 0xC
        public_494849 : nop
        cmp eax, 0xEF02
        jne public_494843
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xFC
        push 0
        push esi
        mov byte ptr ds : [esi+0x6C], al
        call public_59dd00
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 8
        test eax, eax
        je public_494883
        push edi
        nop 
        lea esp, ss:[esp]
        public_494870 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_494870
        pop edi
        public_494883 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        mov al, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4945e0)
    }
}

#undef public_494602
#undef public_4946f6
#undef public_494701
#undef public_494733
#undef public_494780
#undef public_4947bc
#undef public_49480c
#undef public_494843
#undef public_494849
#undef public_494870
#undef public_494883

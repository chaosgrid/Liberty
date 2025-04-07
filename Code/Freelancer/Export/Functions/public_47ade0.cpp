#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_47ade0);
CLANG_FORWARD_PROC_SYMBOL(public_482040);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_4c62b0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0840);

#define public_47ae26 _public_47ae26
#define public_47ae69 _public_47ae69
#define public_47ae80 _public_47ae80
#define public_47ae93 _public_47ae93
#define public_47aea8 _public_47aea8
#define public_47aed3 _public_47aed3
#define public_47af0f _public_47af0f
#define public_47af15 _public_47af15

PROC_DECLARE(0x47ade0, internal_47ade0, public_47ade0);
extern "C" NAKED register_t __cdecl internal_47ade0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xEF02
        push esi
        mov esi, ecx
        jne public_47aea8
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_47ae26
        mov cl, byte ptr ds : [eax+0x6C]
        test cl, 2
        je public_47ae26
        mov dl, cl
        and dl, 0xFC
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x360]
        mov ecx, dword ptr ds : [eax+0x978]
        test ecx, ecx
        je public_47ae26
        mov dword ptr ds : [eax+0x978], 0
        public_47ae26 : nop
        push 1
        call public_4c4060
        push eax
        lea ecx, ds:[esi+0x330]
        call public_4c62b0
        mov eax, dword ptr ds : [esi+0x500]
        test eax, eax
        mov byte ptr ds : [esi+0x4E3], 0
        je public_47ae69
        mov ecx, dword ptr ds : [esi+0x504]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x4E5]
        push ecx
        push edx
        call eax
        add esp, 8
        mov dword ptr ds : [esi+0x500], 0
        public_47ae69 : nop
        push 0
        push esi
        call public_59dd00
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 8
        test eax, eax
        je public_47ae93
        push edi
        lea esp, ss:[esp]
        public_47ae80 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_47ae80
        pop edi
        public_47ae93 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        mov al, 1
        pop esi
        ret 0xC
        public_47aea8 : nop
        cmp eax, 0xEF01
        jne public_47af15
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        push 0xEF01
        mov ecx, esi
        call public_5a0840
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_47aed3
        or byte ptr ds : [eax+0x6C], 3
        public_47aed3 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0x360]
        test ecx, ecx
        je public_47af0f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        mov ecx, dword ptr ds : [esi+0x360]
        cmp dword ptr ds : [ecx+0x978], 2
        jne public_47af0f
        call public_482040
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [esi+0x360]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        public_47af0f : nop
        mov al, 1
        pop esi
        ret 0xC
        public_47af15 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_5a0840
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x47ade0)
    }
}

#undef public_47ae26
#undef public_47ae69
#undef public_47ae80
#undef public_47ae93
#undef public_47aea8
#undef public_47aed3
#undef public_47af0f
#undef public_47af15

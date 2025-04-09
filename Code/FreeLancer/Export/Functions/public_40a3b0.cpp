#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_407100);

#define public_40a3c9 _public_40a3c9
#define public_40a3ce _public_40a3ce
#define public_40a3e6 _public_40a3e6
#define public_40a3f5 _public_40a3f5
#define public_40a41b _public_40a41b
#define public_40a443 _public_40a443
#define public_40a448 _public_40a448
#define public_40a45e _public_40a45e
#define public_40a472 _public_40a472
#define public_40a477 _public_40a477
#define public_40a4ba _public_40a4ba

PROC_DECLARE(0x40a3b0, internal_40a3b0, public_40a3b0);
extern "C" NAKED register_t __cdecl internal_40a3b0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x50]
        mov cl, al
        and cl, 1
        je public_40a3c9
        test al, 8
        mov byte ptr ss : [esp+7], 1
        jne public_40a3ce
        public_40a3c9 : nop
        mov byte ptr ss : [esp+7], 0
        public_40a3ce : nop
        test cl, cl
        jne public_40a3e6
        push 0
        mov ecx, esi
        call public_407100
        test al, al
        je public_40a3e6
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        public_40a3e6 : nop
        test byte ptr ds : [esi+0x50], 8
        jne public_40a3f5
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+0x30]
        public_40a3f5 : nop
        test byte ptr ds : [esi+0x50], 0x10
        jne public_40a477
        mov ecx, dword ptr ds : [esi+0x14]
        push edi
        mov edi, dword ptr ds : [public_5c602c]
        call edi
        test al, al
        je public_40a472
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_40a41b
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_40a472
        public_40a41b : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call edi
        test al, al
        je public_40a472
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 3
        je public_40a443
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+0xC], 0
        jne public_40a448
        public_40a443 : nop
        mov byte ptr ss : [esp+0xC], 1
        public_40a448 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x40]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_40a45e
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_40a472
        public_40a45e : nop
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        push 0
        push eax
        push ecx
        call public_4022f0
        fstp dword ptr ds : [esi+0xC]
        add esp, 0x10
        public_40a472 : nop
        or byte ptr ds : [esi+0x50], 0x10
        pop edi
        public_40a477 : nop
        mov al, byte ptr ss : [esp+7]
        test al, al
        jne public_40a4ba
        mov esi, dword ptr ds : [esi+0x14]
        add esi, 0x98
        mov ecx, esi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_40a4ba
        mov esi, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_40a4ba
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        pop esi
        mov dword ptr ss : [esp+0xC], ecx
        add esp, 8
        mov ecx, eax
        jmp dword ptr ds : [edx+0x20]
        public_40a4ba : nop
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x40a3b0)
    }
}

#undef public_40a3c9
#undef public_40a3ce
#undef public_40a3e6
#undef public_40a3f5
#undef public_40a41b
#undef public_40a443
#undef public_40a448
#undef public_40a45e
#undef public_40a472
#undef public_40a477
#undef public_40a4ba

#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_407100);

#define public_40739c _public_40739c
#define public_4073ab _public_4073ab
#define public_4073e1 _public_4073e1
#define public_407409 _public_407409
#define public_40740e _public_40740e
#define public_407430 _public_407430
#define public_407444 _public_407444
#define public_407449 _public_407449

PROC_DECLARE(0x407380, internal_407380, public_407380);
extern "C" NAKED register_t __cdecl internal_407380()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0x50], 1
        jne public_40739c
        push 0
        call public_407100
        test al, al
        je public_40739c
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        public_40739c : nop
        test byte ptr ds : [esi+0x50], 8
        jne public_4073ab
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+0x30]
        public_4073ab : nop
        test byte ptr ds : [esi+0x50], 0x10
        jne public_407449
        mov ecx, dword ptr ds : [esi+0x14]
        push edi
        mov edi, dword ptr ds : [public_5c602c]
        call edi
        test al, al
        je public_407444
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_4073e1
        mov al, byte ptr ds : [esi+0x50]
        or al, 0x10
        pop edi
        mov dword ptr ds : [esi+0xC], 0xBF800000
        mov byte ptr ds : [esi+0x50], al
        pop esi
        pop ecx
        ret 4
        public_4073e1 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call edi
        test al, al
        je public_407444
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 3
        je public_407409
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+8], 0
        jne public_40740e
        public_407409 : nop
        mov byte ptr ss : [esp+8], 1
        public_40740e : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+0x40]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_407430
        mov al, byte ptr ds : [esi+0x50]
        or al, 0x10
        pop edi
        mov dword ptr ds : [esi+0xC], 0xBF800000
        mov byte ptr ds : [esi+0x50], al
        pop esi
        pop ecx
        ret 4
        public_407430 : nop
        mov edx, dword ptr ss : [esp+8]
        push edx
        push 0
        push eax
        push ecx
        call public_4022f0
        fstp dword ptr ds : [esi+0xC]
        add esp, 0x10
        public_407444 : nop
        or byte ptr ds : [esi+0x50], 0x10
        pop edi
        public_407449 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x407380)
    }
}

#undef public_40739c
#undef public_4073ab
#undef public_4073e1
#undef public_407409
#undef public_40740e
#undef public_407430
#undef public_407444
#undef public_407449

#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_4c4320);
CLANG_FORWARD_PROC_SYMBOL(public_4c45d0);
CLANG_FORWARD_PROC_SYMBOL(public_52cfd0);
CLANG_FORWARD_PROC_SYMBOL(public_52d410);
CLANG_FORWARD_PROC_SYMBOL(public_548eb0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bc80);
CLANG_FORWARD_PROC_SYMBOL(public_5532d0);

#define public_52d48b _public_52d48b
#define public_52d494 _public_52d494
#define public_52d49c _public_52d49c
#define public_52d4b5 _public_52d4b5
#define public_52d4e1 _public_52d4e1
#define public_52d506 _public_52d506

PROC_DECLARE(0x52d410, internal_52d410, public_52d410);
extern "C" NAKED register_t __cdecl internal_52d410()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x90]
        cmp eax, 9
        jne public_52d4b5
        push edi
        mov ecx, ebx
        call public_52cfd0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x94]
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        push eax
        call public_548eb0
        add esp, 4
        test al, al
        je public_52d49c
        mov eax, dword ptr ds : [esi+0x4C]
        mov cl, byte ptr ds : [eax+0x78]
        test cl, cl
        je public_52d49c
        mov eax, dword ptr ds : [eax+8]
        push eax
        call public_4c45d0
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_52d49c
        mov ecx, esi
        call dword ptr ds : [public_5c68c4]
        cmp dword ptr ds : [edi+0x14], eax
        push eax
        jle public_52d48b
        xor ecx, ecx
        mov cx, word ptr ds : [edi+2]
        push ecx
        push 1
        jmp public_52d494
        public_52d48b : nop
        xor edx, edx
        mov dx, word ptr ds : [edi+2]
        push edx
        push 0
        public_52d494 : nop
        call public_4c4320
        add esp, 0xC
        public_52d49c : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        push eax
        call public_5532d0
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_52d4b5 : nop
        cmp eax, 3
        je public_52d4e1
        cmp eax, 5
        jle public_52d506
        cmp eax, 8
        jg public_52d506
        mov ebx, dword ptr ds : [ebx+8]
        call public_54baf0
        cmp ebx, eax
        jne public_52d506
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x1D0]
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_52d4e1 : nop
        call public_54baf0
        cmp dword ptr ds : [ebx+8], eax
        jne public_52d506
        call public_54bc80
        test al, al
        je public_52d506
        mov eax, dword ptr ds : [ebx+0x14]
        push 0
        push 0
        push 0
        push eax
        call public_428680
        add esp, 0x10
        public_52d506 : nop
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x52d410)
    }
}

#undef public_52d48b
#undef public_52d494
#undef public_52d49c
#undef public_52d4b5
#undef public_52d4e1
#undef public_52d506

#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfd3a0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdc60);
CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cfd3b1 _public_6cfd3b1
#define public_6cfd3c4 _public_6cfd3c4
#define public_6cfd3e0 _public_6cfd3e0
#define public_6cfd3ed _public_6cfd3ed
#define public_6cfd3f5 _public_6cfd3f5
#define public_6cfd3ff _public_6cfd3ff
#define public_6cfd406 _public_6cfd406
#define public_6cfd40a _public_6cfd40a
#define public_6cfd434 _public_6cfd434
#define public_6cfd45e _public_6cfd45e
#define public_6cfd480 _public_6cfd480
#define public_6cfd484 _public_6cfd484
#define public_6cfd4a7 _public_6cfd4a7

PROC_DECLARE(0x6cfd3a0, internal_6cfd3a0, public_6cfd3a0);
extern "C" NAKED register_t __cdecl internal_6cfd3a0()
{
    __asm
    {
        mov edx, dword ptr ds : [public_6d8d874]
        sub esp, 8
        push esi
        mov esi, dword ptr ds : [edx]
        cmp esi, edx
        push edi
        je public_6cfd40a
        public_6cfd3b1 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_6cfd3c4
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_6d8d874]
        public_6cfd3c4 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6cfd3ed
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6cfd406
        lea esp, ss:[esp]
        public_6cfd3e0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6cfd3e0
        jmp public_6cfd406
        public_6cfd3ed : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6cfd3ff
        public_6cfd3f5 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6cfd3f5
        public_6cfd3ff : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6cfd406
        mov esi, eax
        public_6cfd406 : nop
        cmp esi, edx
        jne public_6cfd3b1
        public_6cfd40a : nop
        mov ecx, dword ptr ds : [public_6d8d880]
        test ecx, ecx
        mov eax, dword ptr ds : [edx]
        mov edi, edx
        mov dword ptr ss : [esp+8], eax
        je public_6cfd480
        mov ecx, eax
        cmp eax, ecx
        jne public_6cfd480
        cmp edi, edx
        jne public_6cfd480
        mov edi, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [public_6d8d878]
        cmp edi, eax
        mov esi, edi
        je public_6cfd45e
        public_6cfd434 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov ecx, offset public_6d8d870
        call public_6cfdc60
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6d5ffb0
        mov eax, dword ptr ds : [public_6d8d878]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6cfd434
        mov edx, dword ptr ds : [public_6d8d874]
        public_6cfd45e : nop
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [public_6d8d874]
        mov dword ptr ds : [public_6d8d880], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6d8d874]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_6cfd480 : nop
        cmp eax, edi
        je public_6cfd4a7
        public_6cfd484 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_6d160d0
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_6d8d870
        call public_6d58e50
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_6cfd484
        public_6cfd4a7 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6cfd3a0)
    }
}

#undef public_6cfd3b1
#undef public_6cfd3c4
#undef public_6cfd3e0
#undef public_6cfd3ed
#undef public_6cfd3f5
#undef public_6cfd3ff
#undef public_6cfd406
#undef public_6cfd40a
#undef public_6cfd434
#undef public_6cfd45e
#undef public_6cfd480
#undef public_6cfd484
#undef public_6cfd4a7

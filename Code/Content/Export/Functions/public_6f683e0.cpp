#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f34100);
CLANG_FORWARD_PROC_SYMBOL(public_6f683e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f68417 _public_6f68417
#define public_6f68428 _public_6f68428
#define public_6f68443 _public_6f68443
#define public_6f6847a _public_6f6847a
#define public_6f684ac _public_6f684ac
#define public_6f684e3 _public_6f684e3
#define public_6f684f6 _public_6f684f6
#define public_6f6850a _public_6f6850a
#define public_6f6852f _public_6f6852f
#define public_6f68541 _public_6f68541
#define public_6f68556 _public_6f68556
#define public_6f68562 _public_6f68562
#define public_6f6856a _public_6f6856a

PROC_DECLARE(0x6f683e0, internal_6f683e0, public_6f683e0);
extern "C" NAKED register_t __cdecl internal_6f683e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xB
        push ebx
        push esi
        push edi
        mov edi, ecx
        je public_6f6852f
        cmp eax, 0x39
        je public_6f684e3
        cmp eax, 0x3E
        jne public_6f6856a
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f6856a
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx]
        public_6f68417 : nop
        cmp dword ptr ds : [esi+0x10], ecx
        je public_6f68428
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6f68417
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6f68428 : nop
        mov eax, dword ptr ds : [esi+0x34]
        xor ebx, ebx
        cmp eax, ebx
        jne public_6f68443
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        call public_6f33fd0
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 8
        public_6f68443 : nop
        cmp eax, 1
        jne public_6f6847a
        mov dword ptr ds : [edi+0xC], ebx
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax+0x174]
        lea edi, ds:[esi+0x28]
        push edi
        mov edi, dword ptr ds : [esi+0x24]
        push edi
        mov edi, dword ptr ds : [esi+0x18]
        push edi
        mov edi, dword ptr ds : [esi+0x14]
        lea ecx, ds:[eax+0x174]
        mov eax, dword ptr ds : [eax+4]
        push edi
        push eax
        call dword ptr ds : [edx+8]
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 8
        public_6f6847a : nop
        cmp eax, 2
        jne public_6f684ac
        mov dword ptr ds : [edi+0x10], ebx
        mov edi, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax+0x174]
        push edi
        mov edi, dword ptr ds : [esi+0x1C]
        push edi
        mov edi, dword ptr ds : [esi+0x14]
        lea ecx, ds:[eax+0x174]
        mov eax, dword ptr ds : [eax+4]
        push edi
        push eax
        call dword ptr ds : [edx]
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 8
        public_6f684ac : nop
        cmp eax, 3
        jne public_6f6856a
        mov dword ptr ds : [edi+0x14], ebx
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax+0x174]
        lea edi, ds:[esi+0x28]
        push edi
        mov edi, dword ptr ds : [esi+0x20]
        push edi
        mov edi, dword ptr ds : [esi+0x14]
        lea ecx, ds:[eax+0x174]
        mov eax, dword ptr ds : [eax+4]
        push edi
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 8
        public_6f684e3 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f6856a
        mov edx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edx]
        public_6f684f6 : nop
        mov esi, dword ptr ds : [eax+8]
        cmp dword ptr ds : [esi+4], edx
        je public_6f6850a
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f684f6
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6f6850a : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6f6852f : nop
        mov edi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        je public_6f6856a
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+8]
        xor ebx, ebx
        public_6f68541 : nop
        mov esi, dword ptr ds : [eax+8]
        cmp dword ptr ds : [esi+4], edx
        jne public_6f68556
        mov esi, dword ptr ds : [eax+0xC]
        cmp esi, dword ptr ds : [ecx+0xC]
        jne public_6f68556
        cmp dword ptr ds : [ecx+0x10], ebx
        je public_6f68562
        public_6f68556 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        jne public_6f68541
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6f68562 : nop
        mov ecx, dword ptr ds : [eax+8]
        call public_6f34100
        public_6f6856a : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f683e0)
    }
}

#undef public_6f68417
#undef public_6f68428
#undef public_6f68443
#undef public_6f6847a
#undef public_6f684ac
#undef public_6f684e3
#undef public_6f684f6
#undef public_6f6850a
#undef public_6f6852f
#undef public_6f68541
#undef public_6f68556
#undef public_6f68562
#undef public_6f6856a

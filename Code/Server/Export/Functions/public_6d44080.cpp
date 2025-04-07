#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7720);
CLANG_FORWARD_PROC_SYMBOL(public_6d43600);
CLANG_FORWARD_PROC_SYMBOL(public_6d44080);
CLANG_FORWARD_PROC_SYMBOL(public_6d44170);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);

#define public_6d440b8 _public_6d440b8
#define public_6d440cd _public_6d440cd
#define public_6d440e2 _public_6d440e2
#define public_6d440e8 _public_6d440e8
#define public_6d440f4 _public_6d440f4
#define public_6d440ff _public_6d440ff
#define public_6d4411a _public_6d4411a
#define public_6d44142 _public_6d44142
#define public_6d44148 _public_6d44148
#define public_6d44169 _public_6d44169

PROC_DECLARE(0x6d44080, internal_6d44080, public_6d44080);
extern "C" NAKED register_t __cdecl internal_6d44080()
{
    __asm
    {
        push esi
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d6481c]
        mov eax, dword ptr ss : [esp+8]
        test dword ptr ds : [eax], 0x3FFFFFFF
        jne public_6d44148
        inc dword ptr ds : [public_6d8f764]
        mov ecx, dword ptr ds : [public_6d8f644]
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        push ebx
        push edi
        je public_6d440cd
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x14]
        public_6d440b8 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push edi
        push ebx
        call dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [public_6d8f644]
        cmp esi, ecx
        jne public_6d440b8
        public_6d440cd : nop
        dec dword ptr ds : [public_6d8f764]
        jne public_6d44142
        mov eax, dword ptr ds : [public_6d8f638]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d4411a
        jmp public_6d440e8
        public_6d440e2 : nop
        mov ecx, dword ptr ds : [public_6d8f644]
        public_6d440e8 : nop
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        lea edx, ds:[esi+8]
        je public_6d440ff
        mov edi, dword ptr ds : [edx+0x14]
        public_6d440f4 : nop
        cmp dword ptr ds : [eax+0x1C], edi
        jge public_6d440ff
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6d440f4
        public_6d440ff : nop
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, offset public_6d8f640
        call public_6d44170
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_6d8f638]
        jne public_6d440e2
        public_6d4411a : nop
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_6d8f634
        call public_6d5c540
        mov ecx, dword ptr ds : [public_6d8f638]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, offset public_6d8f634
        call public_6cf7720
        public_6d44142 : nop
        pop edi
        pop ebx
        xor eax, eax
        pop esi
        ret 
        public_6d44148 : nop
        push eax
        call public_6d43600
        add esp, 4
        test eax, eax
        je public_6d44169
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call dword ptr ds : [edx]
        xor eax, eax
        pop esi
        ret 
        public_6d44169 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d44080)
    }
}

#undef public_6d440b8
#undef public_6d440cd
#undef public_6d440e2
#undef public_6d440e8
#undef public_6d440f4
#undef public_6d440ff
#undef public_6d4411a
#undef public_6d44142
#undef public_6d44148
#undef public_6d44169

#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6221250);
CLANG_FORWARD_PROC_SYMBOL(public_6222be0);

#define public_621fbc8 _public_621fbc8
#define public_621fbee _public_621fbee
#define public_621fbf9 _public_621fbf9
#define public_621fc09 _public_621fc09
#define public_621fc1b _public_621fc1b
#define public_621fc34 _public_621fc34
#define public_621fc48 _public_621fc48
#define public_621fc85 _public_621fc85
#define public_621fcb2 _public_621fcb2
#define public_621fcdf _public_621fcdf
#define public_621fcef _public_621fcef

PROC_DECLARE(0x621fba0, internal_621fba0, public_621fba0);
extern "C" NAKED register_t __cdecl internal_621fba0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        cmp eax, 7
        push edi
        jne public_621fc34
        mov esi, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        mov eax, dword ptr ds : [esi+0x10]
        mov edi, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        jle public_621fbf9
        public_621fbc8 : nop
        cmp edi, dword ptr ss : [esp+0x18]
        je public_621fbf9
        mov eax, dword ptr ds : [edi]
        push eax
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        test al, al
        jne public_621fbee
        mov eax, dword ptr ds : [public_6257a3c]
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x5C]
        public_621fbee : nop
        mov eax, dword ptr ds : [esi+4]
        inc ebx
        add edi, 0x10
        cmp ebx, eax
        jl public_621fbc8
        public_621fbf9 : nop
        mov ebx, dword ptr ds : [esi+0x10]
        push ebp
        lea ebp, ds:[esi+8]
        mov esi, ebx
        cmp esi, ebx
        mov edi, dword ptr ss : [ebp+4]
        je public_621fc1b
        public_621fc09 : nop
        push esi
        mov ecx, edi
        call public_6222be0
        add esi, 0x10
        add edi, 0x10
        cmp esi, ebx
        jne public_621fc09
        public_621fc1b : nop
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, ebp
        push edx
        push edi
        call public_6221250
        mov dword ptr ss : [ebp+8], edi
        pop ebp
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_621fc34 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax+0x10]
        cmp esi, ecx
        je public_621fcef
        xor ebx, ebx
        public_621fc48 : nop
        mov edi, dword ptr ds : [esi]
        push edi
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x1C]
        test al, al
        jne public_621fcdf
        test byte ptr ss : [esp+0x18], 1
        je public_621fc85
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0xF]
        mov byte ptr ss : [esp+0xF], bl
        push edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x94]
        cmp byte ptr ss : [esp+0xF], bl
        je public_621fc85
        mov eax, dword ptr ds : [public_6257a3c]
        push edi
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x5C]
        public_621fc85 : nop
        test byte ptr ss : [esp+0x18], 2
        je public_621fcb2
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xF]
        mov byte ptr ss : [esp+0xF], bl
        push ecx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x98]
        cmp byte ptr ss : [esp+0xF], bl
        je public_621fcb2
        mov eax, dword ptr ds : [public_6257a3c]
        push edi
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x5C]
        public_621fcb2 : nop
        test byte ptr ss : [esp+0x18], 4
        je public_621fcdf
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0xF]
        mov byte ptr ss : [esp+0xF], bl
        push edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x90]
        cmp byte ptr ss : [esp+0xF], bl
        je public_621fcdf
        mov eax, dword ptr ds : [public_6257a3c]
        push edi
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x5C]
        public_621fcdf : nop
        mov edx, dword ptr ss : [esp+0x14]
        add esi, 0x10
        cmp esi, dword ptr ds : [edx+0x10]
        jne public_621fc48
        public_621fcef : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x621fba0)
    }
}

#undef public_621fbc8
#undef public_621fbee
#undef public_621fbf9
#undef public_621fc09
#undef public_621fc1b
#undef public_621fc34
#undef public_621fc48
#undef public_621fc85
#undef public_621fcb2
#undef public_621fcdf
#undef public_621fcef

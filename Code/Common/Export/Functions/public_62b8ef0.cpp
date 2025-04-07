#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b8ef0);
CLANG_FORWARD_PROC_SYMBOL(public_62baf00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62b8f20 _public_62b8f20
#define public_62b8f50 _public_62b8f50
#define public_62b8f56 _public_62b8f56
#define public_62b8f8c _public_62b8f8c
#define public_62b8f94 _public_62b8f94
#define public_62b8fa9 _public_62b8fa9
#define public_62b8fd5 _public_62b8fd5

PROC_DECLARE(0x62b8ef0, internal_62b8ef0, public_62b8ef0);
extern "C" NAKED register_t __cdecl internal_62b8ef0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        cmp ebp, eax
        push esi
        push edi
        je public_62b8fd5
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [esi]
        cmp edi, esi
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], eax
        je public_62b8f50
        lea esp, ss:[esp]
        public_62b8f20 : nop
        cmp eax, dword ptr ss : [esp+0x10]
        je public_62b8f50
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        add eax, 8
        push eax
        lea ecx, ds:[edi+8]
        call dword ptr ds : [public_63991a8]
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [edi]
        cmp edi, esi
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov eax, ecx
        jne public_62b8f20
        public_62b8f50 : nop
        cmp edi, esi
        mov ebx, edi
        je public_62b8f8c
        public_62b8f56 : nop
        mov edi, ebx
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [ebx]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], edx
        push 1
        lea ecx, ds:[edi+8]
        call dword ptr ds : [public_63991b8]
        push edi
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp ebx, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_62b8f56
        mov eax, dword ptr ss : [esp+0x18]
        public_62b8f8c : nop
        cmp eax, dword ptr ss : [esp+0x10]
        mov edi, eax
        je public_62b8fd5
        public_62b8f94 : nop
        mov ebx, dword ptr ds : [esi+4]
        push 0x18
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_62b8fa9
        mov ebx, eax
        public_62b8fa9 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[edi+8]
        push ecx
        add eax, 8
        push eax
        call public_62baf00
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_62b8f94
        public_62b8fd5 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62b8ef0)
    }
}

#undef public_62b8f20
#undef public_62b8f50
#undef public_62b8f56
#undef public_62b8f8c
#undef public_62b8f94
#undef public_62b8fa9
#undef public_62b8fd5

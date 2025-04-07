#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d228e0);

#define public_6d24b8d _public_6d24b8d
#define public_6d24b91 _public_6d24b91
#define public_6d24ba4 _public_6d24ba4
#define public_6d24ba8 _public_6d24ba8
#define public_6d24bac _public_6d24bac
#define public_6d24bfb _public_6d24bfb
#define public_6d24bfe _public_6d24bfe
#define public_6d24c17 _public_6d24c17
#define public_6d24c1c _public_6d24c1c
#define public_6d24c24 _public_6d24c24
#define public_6d24c3c _public_6d24c3c
#define public_6d24c50 _public_6d24c50
#define public_6d24c5a _public_6d24c5a
#define public_6d24c5c _public_6d24c5c
#define public_6d24c76 _public_6d24c76
#define public_6d24c89 _public_6d24c89

PROC_DECLARE(0x6d24b40, internal_6d24b40, public_6d24b40);
extern "C" NAKED register_t __cdecl internal_6d24b40()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push edi
        mov edi, dword ptr ds : [eax]
        mov esi, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi]
        push ebp
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d24ba8
        push ebp
        lea edx, ss:[esp+0x24]
        push edx
        call public_6d228e0
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        or edx, 0xFFFFFFFF
        cmp esi, edx
        je public_6d24b8d
        cmp ecx, edx
        je public_6d24b8d
        add esi, ecx
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6d24b91
        public_6d24b8d : nop
        mov dword ptr ss : [esp+0x10], edx
        public_6d24b91 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, edx
        je public_6d24ba4
        cmp ecx, edx
        je public_6d24ba4
        add eax, ecx
        jmp public_6d24bac
        public_6d24ba4 : nop
        mov eax, edx
        jmp public_6d24bac
        public_6d24ba8 : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_6d24bac : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, eax
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x18], ecx
        cmp eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x1C], esi
        je public_6d24c5a
        mov esi, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi]
        push ebp
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d24c1c
        push ebp
        lea edx, ss:[esp+0x2C]
        push edx
        call public_6d228e0
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, 0xFFFFFFFF
        mov edx, dword ptr ds : [eax]
        je public_6d24bfb
        cmp edx, 0xFFFFFFFF
        je public_6d24bfb
        add ecx, edx
        jmp public_6d24bfe
        public_6d24bfb : nop
        or ecx, 0xFFFFFFFF
        public_6d24bfe : nop
        mov dword ptr ss : [esp+0x20], ecx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, 0xFFFFFFFF
        je public_6d24c17
        cmp edx, 0xFFFFFFFF
        je public_6d24c17
        add eax, edx
        jmp public_6d24c24
        public_6d24c17 : nop
        or eax, 0xFFFFFFFF
        jmp public_6d24c24
        public_6d24c1c : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        public_6d24c24 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x20], ecx
        cmp ecx, edx
        mov dword ptr ss : [esp+0x24], eax
        lea ecx, ss:[esp+0x20]
        jb public_6d24c3c
        lea ecx, ss:[esp+0x18]
        public_6d24c3c : nop
        mov edi, dword ptr ds : [ecx]
        cmp dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], edi
        lea eax, ss:[esp+0x24]
        jb public_6d24c50
        lea eax, ss:[esp+0x1C]
        public_6d24c50 : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], eax
        mov esi, eax
        jmp public_6d24c5c
        public_6d24c5a : nop
        xor edi, edi
        public_6d24c5c : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_6d24c89
        cmp dword ptr ds : [eax+4], 0xFFFFFFFF
        jne public_6d24c89
        mov edx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6d24c89
        public_6d24c76 : nop
        mov ecx, dword ptr ds : [ebx+0x30]
        cmp ecx, dword ptr ds : [eax+8]
        jb public_6d24c89
        inc ecx
        mov dword ptr ds : [ebx+0x30], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d24c76
        public_6d24c89 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ebx+0x1C], edi
        mov dword ptr ds : [ebx+0x20], esi
        mov dword ptr ds : [eax], edi
        pop edi
        mov dword ptr ds : [eax+4], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6d24b40)
    }
}

#undef public_6d24b8d
#undef public_6d24b91
#undef public_6d24ba4
#undef public_6d24ba8
#undef public_6d24bac
#undef public_6d24bfb
#undef public_6d24bfe
#undef public_6d24c17
#undef public_6d24c1c
#undef public_6d24c24
#undef public_6d24c3c
#undef public_6d24c50
#undef public_6d24c5a
#undef public_6d24c5c
#undef public_6d24c76
#undef public_6d24c89

#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_49a8f0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);

#define public_49a925 _public_49a925
#define public_49a930 _public_49a930
#define public_49a965 _public_49a965
#define public_49a978 _public_49a978
#define public_49a9b3 _public_49a9b3
#define public_49a9d1 _public_49a9d1
#define public_49a9d8 _public_49a9d8
#define public_49a9e8 _public_49a9e8
#define public_49aa05 _public_49aa05
#define public_49aa21 _public_49aa21

PROC_DECLARE(0x49a8f0, internal_49a8f0, public_49a8f0);
extern "C" NAKED register_t __cdecl internal_49a8f0()
{
    __asm
    {
        sub esp, 0x120
        mov eax, dword ptr ss : [esp+0x124]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        call public_4c4ff0
        mov edi, dword ptr ds : [eax]
        xor ebx, ebx
        add esp, 4
        cmp edi, ebx
        mov dword ptr ss : [esp+0x10], edi
        jne public_49a930
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x120
        ret 4
        public_49a925 : nop
        mov edi, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_49a930 : nop
        movzx eax, word ptr ds : [edi+8]
        cmp eax, 0x42
        je public_49a965
        cmp eax, 0x4E
        je public_49aa05
        cmp eax, 0x53
        jne public_49a9e8
        mov eax, dword ptr ds : [edi+4]
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x120
        ret 4
        public_49a965 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x14], ecx
        call dword ptr ds : [public_5c63ec]
        mov esi, eax
        cmp esi, ebx
        je public_49a9e8
        public_49a978 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ss : [esp+0x1C], bl
        mov dword ptr ss : [esp+0x74], ebx
        mov byte ptr ss : [esp+0x78], bl
        mov dword ptr ss : [esp+0xA4], ebx
        mov byte ptr ss : [esp+0xA8], bl
        mov dword ptr ss : [esp+0xE8], ebx
        mov byte ptr ss : [esp+0xEC], bl
        call dword ptr ds : [edx+0x3C]
        mov ebp, eax
        xor edi, edi
        cmp ebp, ebx
        jbe public_49a9d8
        public_49a9b3 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x40]
        test al, al
        je public_49a9d1
        mov edx, dword ptr ss : [esp+0x14]
        cmp dword ptr ss : [esp+0x98], edx
        je public_49aa21
        public_49a9d1 : nop
        inc edi
        cmp edi, ebp
        jb public_49a9b3
        xor ebx, ebx
        public_49a9d8 : nop
        call dword ptr ds : [public_5c63e8]
        mov esi, eax
        cmp esi, ebx
        jne public_49a978
        mov edi, dword ptr ss : [esp+0x10]
        public_49a9e8 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x10], edi
        jne public_49a925
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x120
        ret 4
        public_49aa05 : nop
        mov edi, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        push ecx
        call dword ptr ds : [public_5c6094]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x120
        ret 4
        public_49aa21 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x120
        ret 4
        UNREACHABLE_TRAP(0x49a8f0)
    }
}

#undef public_49a925
#undef public_49a930
#undef public_49a965
#undef public_49a978
#undef public_49a9b3
#undef public_49a9d1
#undef public_49a9d8
#undef public_49a9e8
#undef public_49aa05
#undef public_49aa21

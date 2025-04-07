#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec4920);
CLANG_FORWARD_PROC_SYMBOL(public_6ec4d20);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ec6710);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec4d55 _public_6ec4d55
#define public_6ec4d89 _public_6ec4d89
#define public_6ec4d92 _public_6ec4d92
#define public_6ec4d99 _public_6ec4d99
#define public_6ec4dc5 _public_6ec4dc5
#define public_6ec4dd0 _public_6ec4dd0
#define public_6ec4df0 _public_6ec4df0

PROC_DECLARE(0x6ec4d20, internal_6ec4d20, public_6ec4d20);
extern "C" NAKED register_t __cdecl internal_6ec4d20()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_6ec4dc5
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6ec4dc5
        cmp ebx, eax
        jne public_6ec4dc5
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ec4d99
        public_6ec4d55 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ec5b70
        cmp dword ptr ds : [public_6ed57e0], 0x7FFFFFFF
        mov edi, dword ptr ds : [edi]
        jge public_6ec4d89
        mov ecx, dword ptr ds : [public_6ed57d4]
        mov dword ptr ds : [ebx], ecx
        mov eax, dword ptr ds : [public_6ed57e0]
        inc eax
        mov dword ptr ds : [public_6ed57d4], ebx
        mov dword ptr ds : [public_6ed57e0], eax
        jmp public_6ec4d92
        public_6ec4d89 : nop
        push ebx
        call public_6ed0c50
        add esp, 4
        public_6ec4d92 : nop
        cmp edi, dword ptr ds : [esi+8]
        mov ebx, edi
        jne public_6ec4d55
        public_6ec4d99 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        pop ebx
        ret 0xC
        public_6ec4dc5 : nop
        cmp ecx, ebx
        je public_6ec4df0
        lea esp, ss:[esp]
        public_6ec4dd0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6ec6710
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6ec4920
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6ec4dd0
        public_6ec4df0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec4d20)
    }
}

#undef public_6ec4d55
#undef public_6ec4d89
#undef public_6ec4d92
#undef public_6ec4d99
#undef public_6ec4dc5
#undef public_6ec4dd0
#undef public_6ec4df0

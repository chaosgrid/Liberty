#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d580d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5af80);

#define public_6d580e8 _public_6d580e8
#define public_6d58102 _public_6d58102
#define public_6d58105 _public_6d58105
#define public_6d5810a _public_6d5810a
#define public_6d58135 _public_6d58135
#define public_6d58168 _public_6d58168
#define public_6d58171 _public_6d58171
#define public_6d581a6 _public_6d581a6

PROC_DECLARE(0x6d580d0, internal_6d580d0, public_6d580d0);
extern "C" NAKED register_t __cdecl internal_6d580d0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, dword ptr ds : [edi+8]
        mov al, 1
        je public_6d5810a
        public_6d580e8 : nop
        lea eax, ds:[esi+0xC]
        push eax
        mov ecx, ebp
        mov ebx, esi
        call public_6d5af80
        test eax, eax
        setl al
        test al, al
        je public_6d58102
        mov esi, dword ptr ds : [esi]
        jmp public_6d58105
        public_6d58102 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6d58105 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6d580e8
        public_6d5810a : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6d58135
        push ebp
        push ebx
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call public_6d5a1f0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6d58135 : nop
        test al, al
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6d58171
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx]
        jne public_6d58168
        push ebp
        push ebx
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_6d5a1f0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6d58168 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6d5a8d0
        public_6d58171 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add ecx, 0xC
        push ebp
        call public_6d5af80
        test eax, eax
        jge public_6d581a6
        push ebp
        push ebx
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_6d5a1f0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_6d581a6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d580d0)
    }
}

#undef public_6d580e8
#undef public_6d58102
#undef public_6d58105
#undef public_6d5810a
#undef public_6d58135
#undef public_6d58168
#undef public_6d58171
#undef public_6d581a6

#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae340);
CLANG_FORWARD_PROC_SYMBOL(public_5ae680);
CLANG_FORWARD_PROC_SYMBOL(public_5b6c70);

#define public_5b6c90 _public_5b6c90
#define public_5b6ca3 _public_5b6ca3
#define public_5b6ca6 _public_5b6ca6
#define public_5b6caa _public_5b6caa
#define public_5b6ce3 _public_5b6ce3
#define public_5b6cf0 _public_5b6cf0
#define public_5b6cf8 _public_5b6cf8
#define public_5b6d1c _public_5b6d1c

PROC_DECLARE(0x5b6c70, internal_5b6c70, public_5b6c70);
extern "C" NAKED register_t __cdecl internal_5b6c70()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ecx
        push edi
        mov edi, edx
        mov al, 1
        je public_5b6caa
        lea esp, ss:[esp]
        public_5b6c90 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_5b6ca3
        mov esi, dword ptr ds : [esi]
        jmp public_5b6ca6
        public_5b6ca3 : nop
        mov esi, dword ptr ds : [esi+8]
        public_5b6ca6 : nop
        cmp esi, ecx
        jne public_5b6c90
        public_5b6caa : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_5b6cf8
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_5b6cf0
        cmp edi, dword ptr ds : [edx]
        jne public_5b6ce3
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_5ae340
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
        public_5b6ce3 : nop
        lea ecx, ss:[esp+0x1C]
        call public_5ae680
        mov ecx, dword ptr ss : [esp+0x1C]
        public_5b6cf0 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jae public_5b6d1c
        public_5b6cf8 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_5ae340
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
        public_5b6d1c : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x5b6c70)
    }
}

#undef public_5b6c90
#undef public_5b6ca3
#undef public_5b6ca6
#undef public_5b6caa
#undef public_5b6ce3
#undef public_5b6cf0
#undef public_5b6cf8
#undef public_5b6d1c

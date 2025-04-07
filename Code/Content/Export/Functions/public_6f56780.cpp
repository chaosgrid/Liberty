#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f56780);
CLANG_FORWARD_PROC_SYMBOL(public_6f56c20);

#define public_6f567a0 _public_6f567a0
#define public_6f567b3 _public_6f567b3
#define public_6f567b6 _public_6f567b6
#define public_6f567ba _public_6f567ba
#define public_6f567f3 _public_6f567f3
#define public_6f56800 _public_6f56800
#define public_6f56808 _public_6f56808
#define public_6f5682c _public_6f5682c

PROC_DECLARE(0x6f56780, internal_6f56780, public_6f56780);
extern "C" NAKED register_t __cdecl internal_6f56780()
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
        je public_6f567ba
        lea esp, ss:[esp]
        public_6f567a0 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_6f567b3
        mov esi, dword ptr ds : [esi]
        jmp public_6f567b6
        public_6f567b3 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f567b6 : nop
        cmp esi, ecx
        jne public_6f567a0
        public_6f567ba : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_6f56808
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6f56800
        cmp edi, dword ptr ds : [edx]
        jne public_6f567f3
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6f56c20
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
        public_6f567f3 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6f4e3f0
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6f56800 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jae public_6f5682c
        public_6f56808 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6f56c20
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
        public_6f5682c : nop
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
        UNREACHABLE_TRAP(0x6f56780)
    }
}

#undef public_6f567a0
#undef public_6f567b3
#undef public_6f567b6
#undef public_6f567ba
#undef public_6f567f3
#undef public_6f56800
#undef public_6f56808
#undef public_6f5682c

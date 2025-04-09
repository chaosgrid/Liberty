#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404e40);
CLANG_FORWARD_PROC_SYMBOL(public_405550);
CLANG_FORWARD_PROC_SYMBOL(public_4057a0);

#define public_404e60 _public_404e60
#define public_404e73 _public_404e73
#define public_404e76 _public_404e76
#define public_404e7a _public_404e7a
#define public_404eb3 _public_404eb3
#define public_404ec0 _public_404ec0
#define public_404ec8 _public_404ec8
#define public_404eec _public_404eec

PROC_DECLARE(0x404e40, internal_404e40, public_404e40);
extern "C" NAKED register_t __cdecl internal_404e40()
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
        je public_404e7a
        lea esp, ss:[esp]
        public_404e60 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setb al
        test al, al
        je public_404e73
        mov esi, dword ptr ds : [esi]
        jmp public_404e76
        public_404e73 : nop
        mov esi, dword ptr ds : [esi+8]
        public_404e76 : nop
        cmp esi, ecx
        jne public_404e60
        public_404e7a : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_404ec8
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_404ec0
        cmp edi, dword ptr ds : [edx]
        jne public_404eb3
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_405550
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
        public_404eb3 : nop
        lea ecx, ss:[esp+0x1C]
        call public_4057a0
        mov ecx, dword ptr ss : [esp+0x1C]
        public_404ec0 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jae public_404eec
        public_404ec8 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_405550
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
        public_404eec : nop
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
        UNREACHABLE_TRAP(0x404e40)
    }
}

#undef public_404e60
#undef public_404e73
#undef public_404e76
#undef public_404e7a
#undef public_404eb3
#undef public_404ec0
#undef public_404ec8
#undef public_404eec

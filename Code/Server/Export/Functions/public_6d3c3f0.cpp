#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d3c420 _public_6d3c420
#define public_6d3c43f _public_6d3c43f
#define public_6d3c453 _public_6d3c453
#define public_6d3c488 _public_6d3c488
#define public_6d3c498 _public_6d3c498
#define public_6d3c4b0 _public_6d3c4b0
#define public_6d3c4c7 _public_6d3c4c7
#define public_6d3c4d7 _public_6d3c4d7
#define public_6d3c4e7 _public_6d3c4e7
#define public_6d3c4ef _public_6d3c4ef
#define public_6d3c503 _public_6d3c503
#define public_6d3c505 _public_6d3c505
#define public_6d3c512 _public_6d3c512

PROC_DECLARE(0x6d3c3f0, internal_6d3c3f0, public_6d3c3f0);
extern "C" NAKED register_t __cdecl internal_6d3c3f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x10]
        mov ebx, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [esi+0x10]
        xor ebp, ebp
        cmp ecx, eax
        push edi
        je public_6d3c43f
        lea esp, ss:[esp]
        public_6d3c420 : nop
        mov di, word ptr ds : [edx]
        test di, di
        je public_6d3c4ef
        cmp word ptr ds : [ecx], di
        jne public_6d3c4ef
        add ecx, 2
        add edx, 2
        cmp ecx, eax
        jne public_6d3c420
        public_6d3c43f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x10], edx
        sub edx, ecx
        test edx, 0xFFFFFFFE
        jne public_6d3c488
        mov ebp, dword ptr ds : [ebx+0x10]
        public_6d3c453 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov edi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, edi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3c503
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3c505
        public_6d3c488 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_6d3c4e7
        mov ebp, 1
        cmp eax, ebp
        jbe public_6d3c453
        public_6d3c498 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+0x18], eax
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        cmp edx, ecx
        mov eax, dword ptr ds : [esi+0x10]
        je public_6d3c4c7
        mov edi, edi
        public_6d3c4b0 : nop
        mov di, word ptr ds : [eax]
        test di, di
        je public_6d3c4d7
        cmp word ptr ds : [edx], di
        jne public_6d3c4d7
        add edx, 2
        add eax, 2
        cmp edx, ecx
        jne public_6d3c4b0
        public_6d3c4c7 : nop
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [ebx+0xC]
        inc ebp
        cmp ebp, eax
        jb public_6d3c498
        jmp public_6d3c453
        public_6d3c4d7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], ecx
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6d3c4e7 : nop
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_6d3c453
        public_6d3c4ef : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_6d3c453
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6d3c503 : nop
        mov eax, edx
        public_6d3c505 : nop
        test eax, eax
        je public_6d3c512
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ebp
        public_6d3c512 : nop
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d3c3f0)
    }
}

#undef public_6d3c420
#undef public_6d3c43f
#undef public_6d3c453
#undef public_6d3c488
#undef public_6d3c498
#undef public_6d3c4b0
#undef public_6d3c4c7
#undef public_6d3c4d7
#undef public_6d3c4e7
#undef public_6d3c4ef
#undef public_6d3c503
#undef public_6d3c505
#undef public_6d3c512

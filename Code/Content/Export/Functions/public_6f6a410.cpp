#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30960);
CLANG_FORWARD_PROC_SYMBOL(public_6f31000);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a410);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f6a424 _public_6f6a424
#define public_6f6a43b _public_6f6a43b
#define public_6f6a453 _public_6f6a453
#define public_6f6a45e _public_6f6a45e
#define public_6f6a474 _public_6f6a474
#define public_6f6a483 _public_6f6a483
#define public_6f6a49c _public_6f6a49c
#define public_6f6a4b5 _public_6f6a4b5
#define public_6f6a4db _public_6f6a4db
#define public_6f6a4e3 _public_6f6a4e3
#define public_6f6a4fb _public_6f6a4fb
#define public_6f6a503 _public_6f6a503
#define public_6f6a519 _public_6f6a519
#define public_6f6a529 _public_6f6a529
#define public_6f6a53f _public_6f6a53f
#define public_6f6a550 _public_6f6a550
#define public_6f6a565 _public_6f6a565
#define public_6f6a575 _public_6f6a575
#define public_6f6a589 _public_6f6a589
#define public_6f6a594 _public_6f6a594
#define public_6f6a5aa _public_6f6a5aa
#define public_6f6a5bb _public_6f6a5bb
#define public_6f6a5cf _public_6f6a5cf
#define public_6f6a5e5 _public_6f6a5e5
#define public_6f6a5ed _public_6f6a5ed
#define public_6f6a612 _public_6f6a612
#define public_6f6a62f _public_6f6a62f

PROC_DECLARE(0x6f6a410, internal_6f6a410, public_6f6a410);
extern "C" NAKED register_t __cdecl internal_6f6a410()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp ebx, eax
        je public_6f6a62f
        push ebp
        push esi
        push edi
        public_6f6a424 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, ebx
        je public_6f6a612
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        jne public_6f6a43b
        xor ebp, ebp
        jmp public_6f6a453
        public_6f6a43b : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edi
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebp, edx
        public_6f6a453 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f6a45e
        xor edx, edx
        jmp public_6f6a474
        public_6f6a45e : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f6a474 : nop
        cmp ebp, edx
        ja public_6f6a4db
        mov ebp, dword ptr ds : [ebx+8]
        mov eax, edi
        cmp eax, ebp
        mov edx, ecx
        je public_6f6a49c
        public_6f6a483 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x44
        mov ecx, 0x11
        add edx, 0x44
        cmp eax, ebp
        rep movsd
        jne public_6f6a483
        mov esi, dword ptr ss : [esp+0x1C]
        public_6f6a49c : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6f6a4b5
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        imul edx, 0x44
        add edx, eax
        mov dword ptr ds : [esi+8], edx
        jmp public_6f6a612
        public_6f6a4b5 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        mov eax, dword ptr ds : [esi+4]
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        imul edx, 0x44
        add edx, eax
        mov dword ptr ds : [esi+8], edx
        jmp public_6f6a612
        public_6f6a4db : nop
        test edi, edi
        jne public_6f6a4e3
        xor ebp, ebp
        jmp public_6f6a4fb
        public_6f6a4e3 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, edi
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebp, edx
        public_6f6a4fb : nop
        test ecx, ecx
        jne public_6f6a503
        xor edx, edx
        jmp public_6f6a519
        public_6f6a503 : nop
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f6a519 : nop
        cmp ebp, edx
        ja public_6f6a5bb
        test ecx, ecx
        jne public_6f6a529
        xor edx, edx
        jmp public_6f6a53f
        public_6f6a529 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f6a53f : nop
        imul edx, 0x44
        add edx, edi
        mov eax, edi
        cmp eax, edx
        mov ebp, ecx
        je public_6f6a565
        lea esp, ss:[esp]
        public_6f6a550 : nop
        mov esi, eax
        mov edi, ebp
        add eax, 0x44
        mov ecx, 0x11
        add ebp, 0x44
        cmp eax, edx
        rep movsd
        jne public_6f6a550
        public_6f6a565 : nop
        mov ebp, dword ptr ds : [ebx+8]
        cmp edx, ebp
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edx
        je public_6f6a589
        public_6f6a575 : nop
        push esi
        push edi
        call public_6f31000
        add esi, 0x44
        add esp, 8
        add edi, 0x44
        cmp esi, ebp
        jne public_6f6a575
        public_6f6a589 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6f6a594
        xor edx, edx
        jmp public_6f6a5aa
        public_6f6a594 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f6a5aa : nop
        mov eax, dword ptr ss : [esp+0x1C]
        imul edx, 0x44
        add edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+8], edx
        mov esi, eax
        jmp public_6f6a612
        public_6f6a5bb : nop
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        jne public_6f6a5cf
        xor edx, edx
        jmp public_6f6a5e5
        public_6f6a5cf : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f6a5e5 : nop
        test edx, edx
        mov eax, edx
        jge public_6f6a5ed
        xor eax, eax
        public_6f6a5ed : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6f30960
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6f6a612 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 0x10
        add ebx, 0x10
        cmp ebx, eax
        mov dword ptr ss : [esp+0x1C], esi
        jne public_6f6a424
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6f6a62f : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f6a410)
    }
}

#undef public_6f6a424
#undef public_6f6a43b
#undef public_6f6a453
#undef public_6f6a45e
#undef public_6f6a474
#undef public_6f6a483
#undef public_6f6a49c
#undef public_6f6a4b5
#undef public_6f6a4db
#undef public_6f6a4e3
#undef public_6f6a4fb
#undef public_6f6a503
#undef public_6f6a519
#undef public_6f6a529
#undef public_6f6a53f
#undef public_6f6a550
#undef public_6f6a565
#undef public_6f6a575
#undef public_6f6a589
#undef public_6f6a594
#undef public_6f6a5aa
#undef public_6f6a5bb
#undef public_6f6a5cf
#undef public_6f6a5e5
#undef public_6f6a5ed
#undef public_6f6a612
#undef public_6f6a62f

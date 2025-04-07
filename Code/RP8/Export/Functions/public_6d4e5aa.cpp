#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d317dd);
CLANG_FORWARD_PROC_SYMBOL(public_6d45f86);
CLANG_FORWARD_PROC_SYMBOL(public_6d4d7bb);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e1e1);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e28a);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e4f8);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e588);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e5aa);

#define public_6d4e5cb _public_6d4e5cb
#define public_6d4e5e8 _public_6d4e5e8
#define public_6d4e5f7 _public_6d4e5f7
#define public_6d4e5fe _public_6d4e5fe
#define public_6d4e624 _public_6d4e624
#define public_6d4e641 _public_6d4e641
#define public_6d4e667 _public_6d4e667
#define public_6d4e67f _public_6d4e67f
#define public_6d4e683 _public_6d4e683
#define public_6d4e684 _public_6d4e684
#define public_6d4e68c _public_6d4e68c
#define public_6d4e6a8 _public_6d4e6a8

PROC_DECLARE(0x6d4e5aa, internal_6d4e5aa, public_6d4e5aa);
extern "C" NAKED register_t __cdecl internal_6d4e5aa()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [esi+0x4C], 0
        push edi
        mov edi, dword ptr ds : [esi+0x1A4]
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ss : [ebp+8], eax
        je public_6d4e5cb
        mov dword ptr ds : [esi+0x4C], 2
        public_6d4e5cb : nop
        cmp byte ptr ss : [ebp+0xC], 0
        je public_6d4e5e8
        mov dword ptr ds : [edi+4], offset _public_6d4d7bb
        mov dword ptr ds : [edi+8], offset _public_6d4e588
        mov byte ptr ds : [edi+0x1C], 1
        jmp public_6d4e684
        public_6d4e5e8 : nop
        cmp dword ptr ds : [esi+0x4C], 2
        jne public_6d4e5f7
        mov dword ptr ds : [edi+4], offset _public_6d4e28a
        jmp public_6d4e5fe
        public_6d4e5f7 : nop
        mov dword ptr ds : [edi+4], offset _public_6d4e1e1
        public_6d4e5fe : nop
        xor eax, eax
        push ebx
        mov dword ptr ds : [edi+8], offset _public_6d317dd
        mov ebx, dword ptr ds : [esi+0x70]
        inc eax
        cmp ebx, eax
        jge public_6d4e624
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x37
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4e624 : nop
        mov eax, 0x100
        cmp ebx, eax
        jle public_6d4e641
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x38
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4e641 : nop
        cmp dword ptr ds : [esi+0x4C], 2
        jne public_6d4e683
        mov eax, dword ptr ds : [esi+0x5C]
        inc eax
        inc eax
        lea ebx, ds:[eax+eax*2]
        shl ebx, 1
        cmp dword ptr ds : [edi+0x20], 0
        jne public_6d4e667
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push 1
        push esi
        call dword ptr ds : [eax+4]
        add esp, 0xC
        mov dword ptr ds : [edi+0x20], eax
        public_6d4e667 : nop
        push ebx
        push dword ptr ds : [edi+0x20]
        call public_6d45f86
        cmp dword ptr ds : [edi+0x28], 0
        pop ecx
        pop ecx
        jne public_6d4e67f
        mov eax, esi
        call public_6d4e4f8
        public_6d4e67f : nop
        and byte ptr ds : [edi+0x24], 0
        public_6d4e683 : nop
        pop ebx
        public_6d4e684 : nop
        cmp byte ptr ds : [edi+0x1C], 0
        je public_6d4e6a8
        xor esi, esi
        public_6d4e68c : nop
        mov eax, dword ptr ss : [ebp+8]
        push 0x1000
        push dword ptr ds : [eax+esi*4]
        call public_6d45f86
        inc esi
        cmp esi, 0x20
        pop ecx
        pop ecx
        jl public_6d4e68c
        and byte ptr ds : [edi+0x1C], 0
        public_6d4e6a8 : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4e5aa)
    }
}

#undef public_6d4e5cb
#undef public_6d4e5e8
#undef public_6d4e5f7
#undef public_6d4e5fe
#undef public_6d4e624
#undef public_6d4e641
#undef public_6d4e667
#undef public_6d4e67f
#undef public_6d4e683
#undef public_6d4e684
#undef public_6d4e68c
#undef public_6d4e6a8

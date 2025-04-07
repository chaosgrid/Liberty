#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6f310f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f56f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ee40);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7ee62 _public_6f7ee62
#define public_6f7ee7a _public_6f7ee7a
#define public_6f7ee85 _public_6f7ee85
#define public_6f7ee9b _public_6f7ee9b
#define public_6f7eeb0 _public_6f7eeb0
#define public_6f7eec2 _public_6f7eec2
#define public_6f7eed0 _public_6f7eed0
#define public_6f7eee4 _public_6f7eee4
#define public_6f7eeff _public_6f7eeff
#define public_6f7ef2d _public_6f7ef2d
#define public_6f7ef35 _public_6f7ef35
#define public_6f7ef4d _public_6f7ef4d
#define public_6f7ef55 _public_6f7ef55
#define public_6f7ef6b _public_6f7ef6b
#define public_6f7ef7b _public_6f7ef7b
#define public_6f7ef91 _public_6f7ef91
#define public_6f7efa0 _public_6f7efa0
#define public_6f7efba _public_6f7efba
#define public_6f7efd0 _public_6f7efd0
#define public_6f7efec _public_6f7efec
#define public_6f7f007 _public_6f7f007
#define public_6f7f035 _public_6f7f035
#define public_6f7f040 _public_6f7f040
#define public_6f7f04e _public_6f7f04e
#define public_6f7f065 _public_6f7f065
#define public_6f7f07b _public_6f7f07b
#define public_6f7f083 _public_6f7f083
#define public_6f7f0a1 _public_6f7f0a1
#define public_6f7f0b5 _public_6f7f0b5
#define public_6f7f0c7 _public_6f7f0c7

PROC_DECLARE(0x6f7ee40, internal_6f7ee40, public_6f7ee40);
extern "C" NAKED register_t __cdecl internal_6f7ee40()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        cmp ebx, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_6f7f0c7
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        jne public_6f7ee62
        xor edi, edi
        jmp public_6f7ee7a
        public_6f7ee62 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6f7ee7a : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6f7ee85
        xor edx, edx
        jmp public_6f7ee9b
        public_6f7ee85 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7ee9b : nop
        cmp edi, edx
        ja public_6f7ef2d
        mov ebx, dword ptr ss : [ebp+8]
        cmp esi, ebx
        mov edi, ecx
        je public_6f7eec2
        lea esp, ss:[esp]
        public_6f7eeb0 : nop
        push esi
        mov ecx, edi
        call public_6f7f7f0
        add esi, 0x14
        add edi, 0x14
        cmp esi, ebx
        jne public_6f7eeb0
        public_6f7eec2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        cmp edi, ebx
        mov esi, edi
        je public_6f7eee4
        nop 
        public_6f7eed0 : nop
        push 0
        mov ecx, esi
        call public_6f56f30
        add esi, 0x14
        cmp esi, ebx
        jne public_6f7eed0
        mov eax, dword ptr ss : [esp+0x10]
        public_6f7eee4 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6f7eeff
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        lea edx, ds:[edx+edx*4]
        lea edx, ds:[ecx+edx*4]
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        pop ecx
        ret 4
        public_6f7eeff : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        mov eax, 0x66666667
        imul ecx
        mov eax, dword ptr ss : [esp+0x10]
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        lea edx, ds:[edx+edx*4]
        lea edx, ds:[ecx+edx*4]
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        pop ecx
        ret 4
        public_6f7ef2d : nop
        test esi, esi
        jne public_6f7ef35
        xor edi, edi
        jmp public_6f7ef4d
        public_6f7ef35 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6f7ef4d : nop
        test ecx, ecx
        jne public_6f7ef55
        xor edx, edx
        jmp public_6f7ef6b
        public_6f7ef55 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7ef6b : nop
        cmp edi, edx
        ja public_6f7f035
        test ecx, ecx
        jne public_6f7ef7b
        xor edx, edx
        jmp public_6f7ef91
        public_6f7ef7b : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7ef91 : nop
        lea edx, ds:[edx+edx*4]
        lea edi, ds:[esi+edx*4]
        cmp esi, edi
        mov ebx, ecx
        je public_6f7efba
        lea ecx, ds:[ecx]
        public_6f7efa0 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[esi+4]
        push ecx
        lea ecx, ds:[ebx+4]
        mov dword ptr ds : [ebx], eax
        call public_6eb6560
        add esi, 0x14
        add ebx, 0x14
        cmp esi, edi
        jne public_6f7efa0
        public_6f7efba : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp edi, ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov esi, edi
        je public_6f7efec
        mov edi, edi
        public_6f7efd0 : nop
        push esi
        push ebx
        call public_6f310f0
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 0x14
        add esp, 8
        add ebx, 0x14
        cmp esi, eax
        jne public_6f7efd0
        mov eax, dword ptr ss : [esp+0x10]
        public_6f7efec : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6f7f007
        pop edi
        lea ecx, ds:[edx+edx*4]
        mov edx, dword ptr ds : [eax+4]
        pop esi
        lea ecx, ds:[edx+ecx*4]
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        pop ecx
        ret 4
        public_6f7f007 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        lea ecx, ds:[edx+edx*4]
        mov edx, dword ptr ds : [eax+4]
        pop esi
        lea ecx, ds:[edx+ecx*4]
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        pop ecx
        ret 4
        public_6f7f035 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, ecx
        cmp esi, edi
        je public_6f7f04e
        mov edi, edi
        public_6f7f040 : nop
        mov ecx, esi
        call public_6f98760
        add esi, 0x14
        cmp esi, edi
        jne public_6f7f040
        public_6f7f04e : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        test eax, eax
        jne public_6f7f065
        xor edx, edx
        jmp public_6f7f07b
        public_6f7f065 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7f07b : nop
        test edx, edx
        mov eax, edx
        jge public_6f7f083
        xor eax, eax
        public_6f7f083 : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_6fa912a
        mov dword ptr ds : [ebx+4], eax
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_6f7f0b5
        public_6f7f0a1 : nop
        push esi
        push edi
        call public_6f310f0
        add esi, 0x14
        add esp, 8
        add edi, 0x14
        cmp esi, ebx
        jne public_6f7f0a1
        public_6f7f0b5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f7f0c7 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f7ee40)
    }
}

#undef public_6f7ee62
#undef public_6f7ee7a
#undef public_6f7ee85
#undef public_6f7ee9b
#undef public_6f7eeb0
#undef public_6f7eec2
#undef public_6f7eed0
#undef public_6f7eee4
#undef public_6f7eeff
#undef public_6f7ef2d
#undef public_6f7ef35
#undef public_6f7ef4d
#undef public_6f7ef55
#undef public_6f7ef6b
#undef public_6f7ef7b
#undef public_6f7ef91
#undef public_6f7efa0
#undef public_6f7efba
#undef public_6f7efd0
#undef public_6f7efec
#undef public_6f7f007
#undef public_6f7f035
#undef public_6f7f040
#undef public_6f7f04e
#undef public_6f7f065
#undef public_6f7f07b
#undef public_6f7f083
#undef public_6f7f0a1
#undef public_6f7f0b5
#undef public_6f7f0c7

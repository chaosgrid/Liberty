#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f199f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f19a33 _public_6f19a33
#define public_6f19a48 _public_6f19a48
#define public_6f19a50 _public_6f19a50
#define public_6f19a70 _public_6f19a70
#define public_6f19a74 _public_6f19a74
#define public_6f19a79 _public_6f19a79
#define public_6f19a88 _public_6f19a88
#define public_6f19ab1 _public_6f19ab1
#define public_6f19abd _public_6f19abd
#define public_6f19ad3 _public_6f19ad3
#define public_6f19ae0 _public_6f19ae0
#define public_6f19b00 _public_6f19b00
#define public_6f19b04 _public_6f19b04
#define public_6f19b09 _public_6f19b09
#define public_6f19b18 _public_6f19b18
#define public_6f19b1c _public_6f19b1c
#define public_6f19b37 _public_6f19b37
#define public_6f19b54 _public_6f19b54
#define public_6f19b6d _public_6f19b6d

PROC_DECLARE(0x6f199f0, internal_6f199f0, public_6f199f0);
extern "C" NAKED register_t __cdecl internal_6f199f0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        lea eax, ds:[ebx+0xC]
        push edi
        push eax
        mov byte ptr ss : [esp+0x17], 1
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f19ab1
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+0xC]
        push esi
        push edx
        push eax
        call dword ptr ds : [public_6fb34cc]
        add esp, 0xC
        test eax, eax
        je public_6f19a33
        mov byte ptr ss : [esp+0x13], 0
        public_6f19a33 : nop
        test esi, esi
        jne public_6f19abd
        mov ebp, dword ptr ds : [ebx+0x144]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6f19ab1
        public_6f19a48 : nop
        lea esi, ss:[esp+0x24]
        lea eax, ds:[edi+0xC]
        nop 
        public_6f19a50 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6f19a74
        test cl, cl
        je public_6f19a70
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6f19a74
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f19a50
        public_6f19a70 : nop
        xor eax, eax
        jmp public_6f19a79
        public_6f19a74 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f19a79 : nop
        test eax, eax
        sete al
        test al, al
        jne public_6f19a88
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6f19a48
        public_6f19a88 : nop
        cmp edi, ebp
        je public_6f19ab1
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        push edi
        mov dword ptr ds : [edx+4], eax
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+0x148]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+0x148], eax
        public_6f19ab1 : nop
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x3C
        public_6f19abd : nop
        cmp esi, 1
        jne public_6f19b6d
        mov ebp, dword ptr ds : [ebx+0x144]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6f19b1c
        public_6f19ad3 : nop
        lea esi, ss:[esp+0x24]
        lea eax, ds:[edi+0xC]
        lea ebx, ds:[ebx]
        public_6f19ae0 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6f19b04
        test cl, cl
        je public_6f19b00
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6f19b04
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f19ae0
        public_6f19b00 : nop
        xor eax, eax
        jmp public_6f19b09
        public_6f19b04 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f19b09 : nop
        test eax, eax
        sete al
        test al, al
        jne public_6f19b18
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6f19ad3
        public_6f19b18 : nop
        cmp edi, ebp
        jne public_6f19ab1
        public_6f19b1c : nop
        mov esi, dword ptr ds : [ebx+0x144]
        mov edi, dword ptr ds : [esi+4]
        push 0x3C
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f19b37
        mov edi, eax
        public_6f19b37 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6f19b54
        mov ecx, 0xD
        lea esi, ss:[esp+0x20]
        rep movsd
        public_6f19b54 : nop
        mov eax, dword ptr ds : [ebx+0x148]
        pop edi
        pop esi
        inc eax
        mov dword ptr ds : [ebx+0x148], eax
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        pop ecx
        ret 0x3C
        public_6f19b6d : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 0x3C
        UNREACHABLE_TRAP(0x6f199f0)
    }
}

#undef public_6f19a33
#undef public_6f19a48
#undef public_6f19a50
#undef public_6f19a70
#undef public_6f19a74
#undef public_6f19a79
#undef public_6f19a88
#undef public_6f19ab1
#undef public_6f19abd
#undef public_6f19ad3
#undef public_6f19ae0
#undef public_6f19b00
#undef public_6f19b04
#undef public_6f19b09
#undef public_6f19b18
#undef public_6f19b1c
#undef public_6f19b37
#undef public_6f19b54
#undef public_6f19b6d

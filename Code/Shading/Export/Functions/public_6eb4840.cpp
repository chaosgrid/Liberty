#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eb4862 _public_6eb4862
#define public_6eb4882 _public_6eb4882
#define public_6eb4886 _public_6eb4886
#define public_6eb488b _public_6eb488b
#define public_6eb491a _public_6eb491a
#define public_6eb4931 _public_6eb4931
#define public_6eb4949 _public_6eb4949
#define public_6eb4950 _public_6eb4950
#define public_6eb4962 _public_6eb4962
#define public_6eb4974 _public_6eb4974

PROC_DECLARE(0x6eb4840, internal_6eb4840, public_6eb4840);
extern "C" NAKED register_t __cdecl internal_6eb4840()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        xor ebx, ebx
        xor ecx, ecx
        cmp eax, 0x14
        push edi
        jne public_6eb4962
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_6eb4862 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_6eb4886
        cmp al, bl
        je public_6eb4882
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_6eb4886
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_6eb4862
        public_6eb4882 : nop
        xor eax, eax
        jmp public_6eb488b
        public_6eb4886 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eb488b : nop
        cmp eax, ebx
        jne public_6eb4962
        push 0x7C
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_6eb4950
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov byte ptr ds : [esi+0x64], bl
        mov byte ptr ds : [esi+0x65], bl
        lea edx, ds:[esi+0x20]
        xor eax, eax
        mov ecx, 0x11
        mov edi, edx
        rep stosd
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov byte ptr ds : [esi+0x68], 1
        mov byte ptr ds : [esi+0x69], 1
        lea eax, ds:[esi+0x70]
        mov dword ptr ds : [eax], offset public_6ed160c
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6ed1598
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x6C], ecx
        jne public_6eb4949
        mov dword ptr ds : [esi+0x6C], eax
        public_6eb491a : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_6eb4974
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_6eb4931
        mov dword ptr ds : [eax], ebx
        public_6eb4931 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6eb4949 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6eb491a
        public_6eb4950 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], ebx
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_6eb4962 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_6eb4974 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb4840)
    }
}

#undef public_6eb4862
#undef public_6eb4882
#undef public_6eb4886
#undef public_6eb488b
#undef public_6eb491a
#undef public_6eb4931
#undef public_6eb4949
#undef public_6eb4950
#undef public_6eb4962
#undef public_6eb4974

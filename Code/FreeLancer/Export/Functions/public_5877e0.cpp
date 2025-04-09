#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5877e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5877f5 _public_5877f5
#define public_587813 _public_587813
#define public_587825 _public_587825
#define public_58783b _public_58783b
#define public_587872 _public_587872
#define public_58787f _public_58787f
#define public_587895 _public_587895
#define public_5878b5 _public_5878b5
#define public_5878be _public_5878be
#define public_5878d3 _public_5878d3
#define public_5878e7 _public_5878e7
#define public_587904 _public_587904
#define public_587921 _public_587921
#define public_587955 _public_587955

PROC_DECLARE(0x5877e0, internal_5877e0, public_5877e0);
extern "C" NAKED register_t __cdecl internal_5877e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ss : [esp+8]
        je public_587955
        push ebx
        push ebp
        push esi
        push edi
        lea ebp, ds:[eax+8]
        public_5877f5 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [edx]
        add edi, 4
        mov ebx, eax
        cmp esi, ebx
        jae public_587813
        mov ebx, esi
        public_587813 : nop
        lea ecx, ss:[ebp-4]
        cmp ecx, edi
        jne public_58787f
        cmp dword ptr ss : [ebp+4], ebx
        jae public_587825
        call dword ptr ds : [public_5c7064]
        public_587825 : nop
        lea edi, ss:[ebp-4]
        mov ecx, edi
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+4]
        sub eax, ebx
        cmp eax, esi
        jae public_58783b
        mov esi, eax
        public_58783b : nop
        test esi, esi
        jbe public_587872
        mov edx, dword ptr ss : [ebp]
        sub eax, esi
        add ebx, edx
        push eax
        lea eax, ds:[ebx+esi]
        push eax
        push ebx
        call dword ptr ds : [public_5c709c]
        mov ebx, dword ptr ss : [ebp+4]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_587872
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c706c]
        public_587872 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c7068]
        jmp public_587921
        public_58787f : nop
        xor esi, esi
        cmp ebx, esi
        jbe public_5878e7
        cmp ebx, eax
        jne public_5878e7
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_587895
        mov eax, dword ptr ds : [public_5c7078]
        public_587895 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_5878e7
        mov eax, dword ptr ss : [ebp]
        cmp eax, esi
        je public_5878be
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_5878b5
        cmp cl, 0xFF
        je public_5878b5
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_5878be
        public_5878b5 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5878be : nop
        mov dword ptr ss : [ebp], esi
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_5878d3
        mov eax, dword ptr ds : [public_5c7078]
        public_5878d3 : nop
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+4], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+8], edx
        inc byte ptr ds : [eax-1]
        jmp public_587921
        public_5878e7 : nop
        push 1
        push ebx
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_587921
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        jne public_587904
        mov esi, dword ptr ds : [public_5c7078]
        public_587904 : nop
        mov edi, dword ptr ss : [ebp]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ss : [ebp+4], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_587921 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp+0xC], edx
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [ebp+0x10], ecx
        mov edx, dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, 0x20
        mov dword ptr ss : [ebp+0x14], edx
        add ebp, 0x20
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_5877f5
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_587955 : nop
        ret 
        UNREACHABLE_TRAP(0x5877e0)
    }
}

#undef public_5877f5
#undef public_587813
#undef public_587825
#undef public_58783b
#undef public_587872
#undef public_58787f
#undef public_587895
#undef public_5878b5
#undef public_5878be
#undef public_5878d3
#undef public_5878e7
#undef public_587904
#undef public_587921
#undef public_587955

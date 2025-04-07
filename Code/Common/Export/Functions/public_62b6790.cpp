#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62b67bc _public_62b67bc
#define public_62b67cd _public_62b67cd
#define public_62b67e0 _public_62b67e0
#define public_62b6817 _public_62b6817
#define public_62b6824 _public_62b6824
#define public_62b683a _public_62b683a
#define public_62b685a _public_62b685a
#define public_62b6865 _public_62b6865
#define public_62b687a _public_62b687a
#define public_62b688e _public_62b688e
#define public_62b68aa _public_62b68aa
#define public_62b68c7 _public_62b68c7
#define public_62b68cb _public_62b68cb

PROC_DECLARE(0x62b6790, internal_62b6790, public_62b6790);
extern "C" NAKED register_t __cdecl internal_62b6790()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0xC]
        add esi, 4
        mov ebx, ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], edi
        lea ebp, ds:[edi+4]
        jae public_62b67bc
        mov ebx, eax
        public_62b67bc : nop
        cmp ebp, esi
        jne public_62b6824
        mov esi, eax
        cmp dword ptr ss : [ebp+8], ebx
        jae public_62b67cd
        call dword ptr ds : [public_63991c4]
        public_62b67cd : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_62b67e0
        mov esi, eax
        public_62b67e0 : nop
        test esi, esi
        jbe public_62b6817
        mov edx, dword ptr ss : [ebp+4]
        sub eax, esi
        add ebx, edx
        push eax
        lea eax, ds:[ebx+esi]
        push eax
        push ebx
        call dword ptr ds : [public_6399330]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62b6817
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_62b6817 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        jmp public_62b68cb
        public_62b6824 : nop
        xor edx, edx
        cmp ebx, edx
        jbe public_62b688e
        cmp ebx, ecx
        jne public_62b688e
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        jne public_62b683a
        mov eax, dword ptr ds : [public_63991d0]
        public_62b683a : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_62b688e
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edx
        je public_62b6865
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_62b685a
        cmp cl, 0xFF
        je public_62b685a
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62b6865
        public_62b685a : nop
        push eax
        call public_6391d5a
        add esp, 4
        xor edx, edx
        public_62b6865 : nop
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        jne public_62b687a
        mov eax, dword ptr ds : [public_63991d0]
        public_62b687a : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_62b68cb
        public_62b688e : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62b68c7
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_62b68aa
        mov esi, dword ptr ds : [public_63991d0]
        public_62b68aa : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_62b68c7 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_62b68cb : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [edi+0x14], edx
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [edi+0x1C], edx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62b6790)
    }
}

#undef public_62b67bc
#undef public_62b67cd
#undef public_62b67e0
#undef public_62b6817
#undef public_62b6824
#undef public_62b683a
#undef public_62b685a
#undef public_62b6865
#undef public_62b687a
#undef public_62b688e
#undef public_62b68aa
#undef public_62b68c7
#undef public_62b68cb

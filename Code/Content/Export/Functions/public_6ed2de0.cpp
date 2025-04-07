#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2de0);

#define public_6ed2df7 _public_6ed2df7
#define public_6ed2e00 _public_6ed2e00
#define public_6ed2e13 _public_6ed2e13
#define public_6ed2e2b _public_6ed2e2b
#define public_6ed2e4e _public_6ed2e4e
#define public_6ed2e70 _public_6ed2e70
#define public_6ed2e82 _public_6ed2e82
#define public_6ed2e98 _public_6ed2e98
#define public_6ed2ecf _public_6ed2ecf
#define public_6ed2edc _public_6ed2edc
#define public_6ed2ef0 _public_6ed2ef0
#define public_6ed2f15 _public_6ed2f15
#define public_6ed2f29 _public_6ed2f29
#define public_6ed2f4d _public_6ed2f4d
#define public_6ed2f6a _public_6ed2f6a
#define public_6ed2f88 _public_6ed2f88

PROC_DECLARE(0x6ed2de0, internal_6ed2de0, public_6ed2de0);
extern "C" NAKED register_t __cdecl internal_6ed2de0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        cmp ecx, dword ptr ss : [esp+8]
        je public_6ed2f88
        push ebx
        push ebp
        push esi
        push edi
        lea ebp, ds:[ecx+0x34]
        jmp public_6ed2e00
        public_6ed2df7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        nop 
        lea esp, ss:[esp]
        public_6ed2e00 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea esi, ds:[eax+4]
        test esi, esi
        jne public_6ed2e13
        mov dword ptr ds : [ecx], esi
        mov byte ptr ss : [ebp-0x30], 0
        jmp public_6ed2e4e
        public_6ed2e13 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_6ed2e2b
        mov eax, 0x1F
        public_6ed2e2b : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        lea edx, ss:[ebp-0x30]
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [edx+eax], 0
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        public_6ed2e4e : nop
        mov edx, dword ptr ds : [eax+0x24]
        mov dword ptr ss : [ebp-0x10], edx
        mov ecx, dword ptr ds : [eax+0x28]
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ds : [public_6fb3304]
        mov ecx, dword ptr ds : [eax+0x34]
        mov esi, dword ptr ds : [edx]
        add eax, 0x2C
        mov ebx, ecx
        cmp esi, ebx
        jae public_6ed2e70
        mov ebx, esi
        public_6ed2e70 : nop
        lea edx, ss:[ebp-8]
        cmp edx, eax
        jne public_6ed2edc
        cmp dword ptr ss : [ebp], ebx
        jae public_6ed2e82
        call dword ptr ds : [public_6fb32e4]
        public_6ed2e82 : nop
        lea edi, ss:[ebp-8]
        mov ecx, edi
        call dword ptr ds : [public_6fb32e8]
        mov eax, dword ptr ss : [ebp]
        sub eax, ebx
        cmp eax, esi
        jae public_6ed2e98
        mov esi, eax
        public_6ed2e98 : nop
        test esi, esi
        jbe public_6ed2ecf
        mov ecx, dword ptr ss : [ebp-4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_6fb3388]
        mov ebx, dword ptr ss : [ebp]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb3300]
        test al, al
        je public_6ed2ecf
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb32ec]
        public_6ed2ecf : nop
        mov ecx, edi
        call dword ptr ds : [public_6fb32e8]
        jmp public_6ed2f6a
        public_6ed2edc : nop
        test ebx, ebx
        jbe public_6ed2f29
        cmp ebx, ecx
        jne public_6ed2f29
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_6ed2ef0
        mov eax, dword ptr ds : [public_6fb32f4]
        public_6ed2ef0 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6ed2f29
        push 1
        lea ecx, ss:[ebp-8]
        call dword ptr ds : [public_6fb32f8]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x30]
        add eax, 0x2C
        test ecx, ecx
        jne public_6ed2f15
        mov ecx, dword ptr ds : [public_6fb32f4]
        public_6ed2f15 : nop
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [ebp+4], eax
        inc byte ptr ds : [ecx-1]
        jmp public_6ed2f6a
        public_6ed2f29 : nop
        push 1
        push ebx
        lea ecx, ss:[ebp-8]
        call dword ptr ds : [public_6fb3300]
        test al, al
        je public_6ed2f6a
        mov ecx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [ecx+0x30]
        test esi, esi
        lea eax, ds:[ecx+0x2C]
        jne public_6ed2f4d
        mov esi, dword ptr ds : [public_6fb32f4]
        public_6ed2f4d : nop
        mov edi, dword ptr ss : [ebp-4]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp], ebx
        mov byte ptr ds : [ebx+eax], 0
        public_6ed2f6a : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, 0x3C
        add ebp, 0x3C
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6ed2df7
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6ed2f88 : nop
        ret 
        UNREACHABLE_TRAP(0x6ed2de0)
    }
}

#undef public_6ed2df7
#undef public_6ed2e00
#undef public_6ed2e13
#undef public_6ed2e2b
#undef public_6ed2e4e
#undef public_6ed2e70
#undef public_6ed2e82
#undef public_6ed2e98
#undef public_6ed2ecf
#undef public_6ed2edc
#undef public_6ed2ef0
#undef public_6ed2f15
#undef public_6ed2f29
#undef public_6ed2f4d
#undef public_6ed2f6a
#undef public_6ed2f88

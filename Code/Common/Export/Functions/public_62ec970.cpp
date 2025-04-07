#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ec970);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62ec9bb _public_62ec9bb
#define public_62ec9d5 _public_62ec9d5
#define public_62ec9d7 _public_62ec9d7
#define public_62ec9f0 _public_62ec9f0
#define public_62eca0a _public_62eca0a
#define public_62eca0c _public_62eca0c
#define public_62eca1f _public_62eca1f
#define public_62eca55 _public_62eca55
#define public_62eca5b _public_62eca5b
#define public_62eca67 _public_62eca67
#define public_62eca69 _public_62eca69
#define public_62eca6e _public_62eca6e
#define public_62eca75 _public_62eca75
#define public_62eca80 _public_62eca80
#define public_62eca82 _public_62eca82
#define public_62eca91 _public_62eca91

PROC_DECLARE(0x62ec970, internal_62ec970, public_62ec970);
extern "C" NAKED register_t __cdecl internal_62ec970()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        xor ebx, ebx
        cmp ebp, ebx
        push edi
        mov esi, ecx
        je public_62eca55
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov edi, eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        cmp eax, edi
        jne public_62ec9bb
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        lea edi, ds:[esi+0x14]
        je public_62eca75
        push ebx
        jmp public_62eca6e
        public_62ec9bb : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_62ec9f0
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62ec9f0
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_62ec9d5
        lea ecx, ds:[eax-8]
        jmp public_62ec9d7
        public_62ec9d5 : nop
        xor ecx, ecx
        public_62ec9d7 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov edi, eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        cmp edi, eax
        je public_62ec9f0
        mov byte ptr ds : [esi+0xC5], bl
        public_62ec9f0 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_62eca1f
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62eca1f
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_62eca0a
        lea ecx, ds:[eax-8]
        jmp public_62eca0c
        public_62eca0a : nop
        xor ecx, ecx
        public_62eca0c : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov edi, eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        cmp eax, edi
        je public_62eca5b
        public_62eca1f : nop
        mov byte ptr ds : [esi+0xBC], bl
        mov byte ptr ds : [esi+0xBD], bl
        mov byte ptr ds : [esi+0xBE], bl
        mov byte ptr ds : [esi+0xBF], bl
        mov byte ptr ds : [esi+0xC0], bl
        mov byte ptr ds : [esi+0xC1], bl
        mov byte ptr ds : [esi+0xC2], bl
        mov byte ptr ds : [esi+0xC3], bl
        mov byte ptr ds : [esi+0xC4], bl
        public_62eca55 : nop
        mov byte ptr ds : [esi+0xC5], bl
        public_62eca5b : nop
        cmp ebp, ebx
        lea edi, ds:[esi+0x14]
        je public_62eca67
        lea eax, ss:[ebp+8]
        jmp public_62eca69
        public_62eca67 : nop
        xor eax, eax
        public_62eca69 : nop
        cmp eax, dword ptr ds : [edi]
        je public_62eca75
        push eax
        public_62eca6e : nop
        mov ecx, edi
        call public_6341610
        public_62eca75 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        je public_62eca80
        lea eax, ds:[edi-8]
        jmp public_62eca82
        public_62eca80 : nop
        xor eax, eax
        public_62eca82 : nop
        mov esi, dword ptr ds : [esi+8]
        add esi, 8
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        je public_62eca91
        lea ebx, ds:[esi-8]
        public_62eca91 : nop
        mov edx, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        lea ecx, ds:[ebx+4]
        pop ebp
        pop ebx
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [edx+0x24]
        UNREACHABLE_TRAP(0x62ec970)
    }
}

#undef public_62ec9bb
#undef public_62ec9d5
#undef public_62ec9d7
#undef public_62ec9f0
#undef public_62eca0a
#undef public_62eca0c
#undef public_62eca1f
#undef public_62eca55
#undef public_62eca5b
#undef public_62eca67
#undef public_62eca69
#undef public_62eca6e
#undef public_62eca75
#undef public_62eca80
#undef public_62eca82
#undef public_62eca91

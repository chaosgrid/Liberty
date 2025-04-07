#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f86);
CLANG_FORWARD_PROC_SYMBOL(public_6d469fc);
CLANG_FORWARD_PROC_SYMBOL(public_6d46b0f);

#define public_6d46b30 _public_6d46b30
#define public_6d46b44 _public_6d46b44
#define public_6d46b47 _public_6d46b47
#define public_6d46b58 _public_6d46b58
#define public_6d46b6d _public_6d46b6d
#define public_6d46b81 _public_6d46b81
#define public_6d46b92 _public_6d46b92
#define public_6d46b9f _public_6d46b9f
#define public_6d46bc0 _public_6d46bc0
#define public_6d46bc5 _public_6d46bc5
#define public_6d46bc7 _public_6d46bc7
#define public_6d46bd0 _public_6d46bd0
#define public_6d46be5 _public_6d46be5
#define public_6d46bf5 _public_6d46bf5
#define public_6d46bfb _public_6d46bfb
#define public_6d46c13 _public_6d46c13
#define public_6d46c19 _public_6d46c19
#define public_6d46c1d _public_6d46c1d

PROC_DECLARE(0x6d46b0f, internal_6d46b0f, public_6d46b0f);
extern "C" NAKED register_t __cdecl internal_6d46b0f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        lea ebx, ds:[ecx+eax]
        cmp ebx, dword ptr ds : [esi+4]
        push edi
        ja public_6d46b30
        cmp eax, dword ptr ds : [esi+0xC]
        ja public_6d46b30
        cmp dword ptr ds : [esi], 0
        jne public_6d46b44
        public_6d46b30 : nop
        mov edi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [eax+0x14], 0x14
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax]
        pop ecx
        jmp public_6d46b47
        public_6d46b44 : nop
        mov edi, dword ptr ss : [ebp+8]
        public_6d46b47 : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp dword ptr ss : [ebp+0x10], eax
        jb public_6d46b58
        mov ecx, dword ptr ds : [esi+0x10]
        add ecx, eax
        cmp ebx, ecx
        jbe public_6d46b9f
        public_6d46b58 : nop
        cmp byte ptr ds : [esi+0x22], 0
        jne public_6d46b6d
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [eax+0x14], 0x44
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax]
        pop ecx
        public_6d46b6d : nop
        cmp byte ptr ds : [esi+0x21], 0
        je public_6d46b81
        push 1
        push edi
        call public_6d469fc
        and byte ptr ds : [esi+0x21], 0
        pop ecx
        pop ecx
        public_6d46b81 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, dword ptr ds : [esi+0x18]
        ja public_6d46b92
        mov eax, ebx
        sub eax, dword ptr ds : [esi+0x10]
        jns public_6d46b92
        xor eax, eax
        public_6d46b92 : nop
        push 0
        push edi
        mov dword ptr ds : [esi+0x18], eax
        call public_6d469fc
        pop ecx
        pop ecx
        public_6d46b9f : nop
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, ebx
        jae public_6d46c13
        cmp eax, dword ptr ss : [ebp+0x10]
        jae public_6d46bc5
        cmp byte ptr ss : [ebp+0x18], 0
        je public_6d46bc0
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [eax+0x14], 0x14
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax]
        pop ecx
        public_6d46bc0 : nop
        mov edi, dword ptr ss : [ebp+0x10]
        jmp public_6d46bc7
        public_6d46bc5 : nop
        mov edi, eax
        public_6d46bc7 : nop
        cmp byte ptr ss : [ebp+0x18], 0
        je public_6d46bd0
        mov dword ptr ds : [esi+0x1C], ebx
        public_6d46bd0 : nop
        cmp byte ptr ds : [esi+0x20], 0
        je public_6d46bfb
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+0x14], eax
        mov eax, dword ptr ds : [esi+0x18]
        sub edi, eax
        sub ebx, eax
        jmp public_6d46bf5
        public_6d46be5 : nop
        push dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [esi]
        push dword ptr ds : [eax+edi*4]
        call public_6d45f86
        pop ecx
        pop ecx
        inc edi
        public_6d46bf5 : nop
        cmp edi, ebx
        jb public_6d46be5
        jmp public_6d46c13
        public_6d46bfb : nop
        cmp byte ptr ss : [ebp+0x18], 0
        jne public_6d46c19
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x14], 0x14
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        pop ecx
        public_6d46c13 : nop
        cmp byte ptr ss : [ebp+0x18], 0
        je public_6d46c1d
        public_6d46c19 : nop
        mov byte ptr ds : [esi+0x21], 1
        public_6d46c1d : nop
        mov eax, dword ptr ss : [ebp+0x10]
        sub eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi]
        pop edi
        pop esi
        lea eax, ds:[ecx+eax*4]
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d46b0f)
    }
}

#undef public_6d46b30
#undef public_6d46b44
#undef public_6d46b47
#undef public_6d46b58
#undef public_6d46b6d
#undef public_6d46b81
#undef public_6d46b92
#undef public_6d46b9f
#undef public_6d46bc0
#undef public_6d46bc5
#undef public_6d46bc7
#undef public_6d46bd0
#undef public_6d46be5
#undef public_6d46bf5
#undef public_6d46bfb
#undef public_6d46c13
#undef public_6d46c19
#undef public_6d46c1d

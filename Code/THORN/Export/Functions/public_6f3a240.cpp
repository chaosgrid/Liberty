#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3a240);

#define public_6f3a262 _public_6f3a262
#define public_6f3a26e _public_6f3a26e
#define public_6f3a286 _public_6f3a286
#define public_6f3a2a8 _public_6f3a2a8
#define public_6f3a2b8 _public_6f3a2b8
#define public_6f3a2c1 _public_6f3a2c1
#define public_6f3a2c7 _public_6f3a2c7
#define public_6f3a2d3 _public_6f3a2d3
#define public_6f3a2e3 _public_6f3a2e3
#define public_6f3a2f0 _public_6f3a2f0
#define public_6f3a300 _public_6f3a300
#define public_6f3a30c _public_6f3a30c
#define public_6f3a313 _public_6f3a313
#define public_6f3a320 _public_6f3a320

PROC_DECLARE(0x6f3a240, internal_6f3a240, public_6f3a240);
extern "C" NAKED register_t __cdecl internal_6f3a240()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ds : [edi]
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC0]
        lea eax, ds:[edi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], ebp
        je public_6f3a26e
        mov edx, edi
        sub edx, eax
        public_6f3a262 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebx
        add eax, 4
        cmp eax, ecx
        jne public_6f3a262
        public_6f3a26e : nop
        add dword ptr ds : [esi+0xC0], 0xFFFFFFFC
        mov ebx, dword ptr ds : [esi+0xDC]
        cmp ebx, dword ptr ds : [esi+0xE0]
        je public_6f3a2d3
        lea edi, ds:[ebx+4]
        public_6f3a286 : nop
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, ebp
        jne public_6f3a2c1
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0xA4]
        push edx
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0xE0]
        cmp edi, ecx
        mov eax, edi
        je public_6f3a2b8
        mov edx, ebx
        sub edx, edi
        public_6f3a2a8 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebp
        add eax, 4
        cmp eax, ecx
        jne public_6f3a2a8
        mov ebp, dword ptr ss : [esp+0x10]
        public_6f3a2b8 : nop
        add dword ptr ds : [esi+0xE0], 0xFFFFFFFC
        jmp public_6f3a2c7
        public_6f3a2c1 : nop
        add ebx, 4
        add edi, 4
        public_6f3a2c7 : nop
        cmp ebx, dword ptr ds : [esi+0xE0]
        jne public_6f3a286
        mov edi, dword ptr ss : [esp+0x18]
        public_6f3a2d3 : nop
        mov ecx, dword ptr ds : [esi+0xCC]
        mov eax, dword ptr ds : [esi+0xD0]
        cmp ecx, eax
        je public_6f3a313
        public_6f3a2e3 : nop
        cmp dword ptr ds : [ecx], ebp
        je public_6f3a2f0
        add ecx, 4
        cmp ecx, eax
        jne public_6f3a2e3
        jmp public_6f3a313
        public_6f3a2f0 : nop
        mov edx, dword ptr ds : [esi+0xD0]
        lea eax, ds:[ecx+4]
        cmp eax, edx
        je public_6f3a30c
        sub ecx, eax
        nop 
        public_6f3a300 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], ebx
        add eax, 4
        cmp eax, edx
        jne public_6f3a300
        public_6f3a30c : nop
        add dword ptr ds : [esi+0xD0], 0xFFFFFFFC
        public_6f3a313 : nop
        test ebp, ebp
        je public_6f3a320
        mov eax, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [eax]
        public_6f3a320 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f3a240)
    }
}

#undef public_6f3a262
#undef public_6f3a26e
#undef public_6f3a286
#undef public_6f3a2a8
#undef public_6f3a2b8
#undef public_6f3a2c1
#undef public_6f3a2c7
#undef public_6f3a2d3
#undef public_6f3a2e3
#undef public_6f3a2f0
#undef public_6f3a300
#undef public_6f3a30c
#undef public_6f3a313
#undef public_6f3a320

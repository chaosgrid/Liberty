#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d49f69);
CLANG_FORWARD_PROC_SYMBOL(public_6d4a192);

#define public_6d4a1ba _public_6d4a1ba
#define public_6d4a1f7 _public_6d4a1f7
#define public_6d4a1ff _public_6d4a1ff
#define public_6d4a211 _public_6d4a211
#define public_6d4a22e _public_6d4a22e
#define public_6d4a25c _public_6d4a25c
#define public_6d4a275 _public_6d4a275
#define public_6d4a278 _public_6d4a278
#define public_6d4a294 _public_6d4a294
#define public_6d4a2a3 _public_6d4a2a3
#define public_6d4a2bc _public_6d4a2bc
#define public_6d4a2e3 _public_6d4a2e3
#define public_6d4a2e8 _public_6d4a2e8
#define public_6d4a311 _public_6d4a311
#define public_6d4a31e _public_6d4a31e
#define public_6d4a32b _public_6d4a32b
#define public_6d4a32c _public_6d4a32c

PROC_DECLARE(0x6d4a192, internal_6d4a192, public_6d4a192);
extern "C" NAKED register_t __cdecl internal_6d4a192()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x34
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp+8], 0
        cmp dword ptr ds : [esi+0x120], 0
        push edi
        mov edi, dword ptr ds : [esi+0x184]
        jle public_6d4a1f7
        lea eax, ds:[esi+0x124]
        mov dword ptr ss : [ebp-4], eax
        public_6d4a1ba : nop
        mov eax, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0xC]
        mov ebx, dword ptr ds : [esi+0x80]
        mov eax, dword ptr ds : [eax+4]
        imul ebx, ecx
        mov edx, dword ptr ds : [esi+4]
        push 1
        push ecx
        push ebx
        push dword ptr ds : [edi+eax*4+0x48]
        push esi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [ebp+8]
        add dword ptr ss : [ebp-4], 4
        add esp, 0x14
        mov dword ptr ss : [ebp+ecx*4-0x34], eax
        inc ecx
        cmp ecx, dword ptr ds : [esi+0x120]
        mov dword ptr ss : [ebp+8], ecx
        jl public_6d4a1ba
        public_6d4a1f7 : nop
        mov eax, dword ptr ds : [edi+0x18]
        jmp public_6d4a2e8
        public_6d4a1ff : nop
        mov ebx, dword ptr ds : [edi+0x14]
        cmp ebx, dword ptr ds : [esi+0x134]
        mov dword ptr ss : [ebp-0x1C], ebx
        jae public_6d4a2e3
        public_6d4a211 : nop
        xor eax, eax
        cmp dword ptr ds : [esi+0x120], eax
        mov dword ptr ss : [ebp-8], eax
        mov dword ptr ss : [ebp+8], eax
        jle public_6d4a2bc
        lea eax, ds:[esi+0x124]
        mov dword ptr ss : [ebp-0x18], eax
        public_6d4a22e : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [ecx+0x34]
        and dword ptr ss : [ebp-0x14], 0
        mov eax, ebx
        imul eax, dword ptr ss : [ebp-0x1C]
        cmp dword ptr ds : [ecx+0x38], 0
        jle public_6d4a2a3
        mov edx, dword ptr ss : [ebp-4]
        shl eax, 7
        mov dword ptr ss : [ebp-0x20], eax
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+eax*4-0x34]
        lea eax, ds:[eax+edx*4]
        mov dword ptr ss : [ebp-0x10], eax
        public_6d4a25c : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [eax]
        add edx, dword ptr ss : [ebp-0x20]
        and dword ptr ss : [ebp-0xC], 0
        test ebx, ebx
        jle public_6d4a294
        mov eax, dword ptr ss : [ebp-8]
        lea ebx, ds:[edi+eax*4+0x20]
        jmp public_6d4a278
        public_6d4a275 : nop
        mov ebx, dword ptr ss : [ebp-0x24]
        public_6d4a278 : nop
        inc dword ptr ss : [ebp-8]
        mov dword ptr ds : [ebx], edx
        add ebx, 4
        add edx, 0x80
        inc dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x24], ebx
        mov ebx, dword ptr ds : [ecx+0x34]
        cmp dword ptr ss : [ebp-0xC], ebx
        jl public_6d4a275
        public_6d4a294 : nop
        inc dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x14]
        add dword ptr ss : [ebp-0x10], 4
        cmp eax, dword ptr ds : [ecx+0x38]
        jl public_6d4a25c
        public_6d4a2a3 : nop
        inc dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+8]
        add dword ptr ss : [ebp-0x18], 4
        cmp eax, dword ptr ds : [esi+0x120]
        jl public_6d4a22e
        mov ebx, dword ptr ss : [ebp-0x1C]
        public_6d4a2bc : nop
        mov ecx, dword ptr ds : [esi+0x194]
        lea eax, ds:[edi+0x20]
        push eax
        push esi
        call dword ptr ds : [ecx+4]
        test al, al
        pop ecx
        pop ecx
        je public_6d4a311
        inc ebx
        cmp ebx, dword ptr ds : [esi+0x134]
        mov dword ptr ss : [ebp-0x1C], ebx
        jb public_6d4a211
        mov eax, dword ptr ss : [ebp-4]
        public_6d4a2e3 : nop
        and dword ptr ds : [edi+0x14], 0
        inc eax
        public_6d4a2e8 : nop
        cmp eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [ebp-4], eax
        jl public_6d4a1ff
        lea eax, ds:[esi+0x80]
        inc dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x118]
        jae public_6d4a31e
        mov ecx, esi
        call public_6d49f69
        push 3
        jmp public_6d4a32b
        public_6d4a311 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edi+0x18], eax
        mov dword ptr ds : [edi+0x14], ebx
        xor eax, eax
        jmp public_6d4a32c
        public_6d4a31e : nop
        mov eax, dword ptr ds : [esi+0x18C]
        push esi
        call dword ptr ds : [eax+0xC]
        pop ecx
        push 4
        public_6d4a32b : nop
        pop eax
        public_6d4a32c : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4a192)
    }
}

#undef public_6d4a1ba
#undef public_6d4a1f7
#undef public_6d4a1ff
#undef public_6d4a211
#undef public_6d4a22e
#undef public_6d4a25c
#undef public_6d4a275
#undef public_6d4a278
#undef public_6d4a294
#undef public_6d4a2a3
#undef public_6d4a2bc
#undef public_6d4a2e3
#undef public_6d4a2e8
#undef public_6d4a311
#undef public_6d4a31e
#undef public_6d4a32b
#undef public_6d4a32c

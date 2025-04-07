#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4cd5);
CLANG_FORWARD_PROC_SYMBOL(public_6ef795c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7b03);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7bab);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7cbc);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8031);
CLANG_FORWARD_PROC_SYMBOL(public_6ef810c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8162);
CLANG_FORWARD_PROC_SYMBOL(public_6efa015);

#define public_6ef797c _public_6ef797c
#define public_6ef7981 _public_6ef7981
#define public_6ef79d7 _public_6ef79d7
#define public_6ef79f5 _public_6ef79f5
#define public_6ef7a2c _public_6ef7a2c
#define public_6ef7a51 _public_6ef7a51
#define public_6ef7a63 _public_6ef7a63
#define public_6ef7a82 _public_6ef7a82
#define public_6ef7a91 _public_6ef7a91
#define public_6ef7ab5 _public_6ef7ab5
#define public_6ef7ab8 _public_6ef7ab8
#define public_6ef7ac3 _public_6ef7ac3
#define public_6ef7ad3 _public_6ef7ad3
#define public_6ef7ad8 _public_6ef7ad8
#define public_6ef7afe _public_6ef7afe

PROC_DECLARE(0x6ef795c, internal_6ef795c, public_6ef795c);
extern "C" NAKED register_t __cdecl internal_6ef795c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov eax, dword ptr ss : [ebp+0xC]
        and byte ptr ss : [ebp-0x14], 0
        mov eax, dword ptr ds : [eax+8]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x10], eax
        jl public_6ef797c
        mov ecx, dword ptr ss : [ebp+0x18]
        cmp eax, dword ptr ds : [ecx+4]
        jl public_6ef7981
        public_6ef797c : nop
        call public_6ef8162
        public_6ef7981 : nop
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov ebx, 0xE06D7363
        push edi
        mov edi, 0x19930520
        cmp dword ptr ds : [esi], ebx
        jne public_6ef7ad8
        cmp dword ptr ds : [esi+0x10], 3
        jne public_6ef79f5
        cmp dword ptr ds : [esi+0x14], edi
        jne public_6ef79f5
        cmp dword ptr ds : [esi+0x1C], 0
        jne public_6ef79f5
        mov esi, dword ptr ds : [public_6f010e0]
        test esi, esi
        je public_6ef7ad3
        mov eax, dword ptr ds : [public_6f010e4]
        push 1
        push esi
        mov dword ptr ss : [ebp+0x10], eax
        mov byte ptr ss : [ebp-0x14], 1
        call public_6efa015
        pop ecx
        test eax, eax
        pop ecx
        jne public_6ef79d7
        call public_6ef8162
        public_6ef79d7 : nop
        cmp dword ptr ds : [esi], ebx
        jne public_6ef7ad8
        cmp dword ptr ds : [esi+0x10], 3
        jne public_6ef79f5
        cmp dword ptr ds : [esi+0x14], edi
        jne public_6ef79f5
        cmp dword ptr ds : [esi+0x1C], 0
        jne public_6ef79f5
        call public_6ef8162
        public_6ef79f5 : nop
        cmp dword ptr ds : [esi], ebx
        jne public_6ef7ad8
        cmp dword ptr ds : [esi+0x10], 3
        jne public_6ef7ad8
        cmp dword ptr ds : [esi+0x14], edi
        jne public_6ef7ad8
        mov edi, dword ptr ss : [ebp-0x10]
        lea eax, ss:[ebp-0x18]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push edi
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x18]
        call public_6ef4cd5
        add esp, 0x14
        mov ebx, eax
        public_6ef7a2c : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-0x18]
        jae public_6ef7ac3
        cmp dword ptr ds : [ebx], edi
        jg public_6ef7ab8
        cmp edi, dword ptr ds : [ebx+4]
        jg public_6ef7ab8
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        mov dword ptr ss : [ebp-0xC], eax
        jle public_6ef7ab5
        public_6ef7a51 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [eax+0xC]
        lea edi, ds:[eax+4]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov dword ptr ss : [ebp-8], eax
        jle public_6ef7a82
        public_6ef7a63 : nop
        push dword ptr ds : [esi+0x1C]
        push dword ptr ds : [edi]
        push dword ptr ss : [ebp+8]
        call public_6ef7bab
        add esp, 0xC
        test eax, eax
        jne public_6ef7a91
        dec dword ptr ss : [ebp-8]
        add edi, 4
        cmp dword ptr ss : [ebp-8], eax
        jg public_6ef7a63
        public_6ef7a82 : nop
        dec dword ptr ss : [ebp-0xC]
        add dword ptr ss : [ebp+8], 0x10
        cmp dword ptr ss : [ebp-0xC], 0
        jg public_6ef7a51
        jmp public_6ef7ab5
        public_6ef7a91 : nop
        push dword ptr ss : [ebp-0x14]
        push dword ptr ss : [ebp+0x24]
        push dword ptr ss : [ebp+0x20]
        push ebx
        push dword ptr ds : [edi]
        push dword ptr ss : [ebp+8]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push esi
        call public_6ef7cbc
        add esp, 0x2C
        public_6ef7ab5 : nop
        mov edi, dword ptr ss : [ebp-0x10]
        public_6ef7ab8 : nop
        inc dword ptr ss : [ebp-4]
        add ebx, 0x14
        jmp public_6ef7a2c
        public_6ef7ac3 : nop
        cmp byte ptr ss : [ebp+0x1C], 0
        je public_6ef7ad3
        push 1
        push esi
        call public_6ef8031
        pop ecx
        pop ecx
        public_6ef7ad3 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6ef7ad8 : nop
        cmp byte ptr ss : [ebp+0x1C], 0
        jne public_6ef7afe
        push dword ptr ss : [ebp+0x24]
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp-0x10]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push esi
        call public_6ef7b03
        add esp, 0x20
        jmp public_6ef7ad3
        public_6ef7afe : nop
        jmp public_6ef810c
        UNREACHABLE_TRAP(0x6ef795c)
    }
}

#undef public_6ef797c
#undef public_6ef7981
#undef public_6ef79d7
#undef public_6ef79f5
#undef public_6ef7a2c
#undef public_6ef7a51
#undef public_6ef7a63
#undef public_6ef7a82
#undef public_6ef7a91
#undef public_6ef7ab5
#undef public_6ef7ab8
#undef public_6ef7ac3
#undef public_6ef7ad3
#undef public_6ef7ad8
#undef public_6ef7afe

#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9b54);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9bee);
CLANG_FORWARD_PROC_SYMBOL(public_6efb437);

#define public_6ef9c38 _public_6ef9c38
#define public_6ef9c3f _public_6ef9c3f
#define public_6ef9c4f _public_6ef9c4f
#define public_6ef9c6f _public_6ef9c6f
#define public_6ef9c75 _public_6ef9c75
#define public_6ef9c94 _public_6ef9c94
#define public_6ef9ca9 _public_6ef9ca9
#define public_6ef9ce5 _public_6ef9ce5
#define public_6ef9ce7 _public_6ef9ce7
#define public_6ef9d13 _public_6ef9d13
#define public_6ef9d1e _public_6ef9d1e
#define public_6ef9d40 _public_6ef9d40
#define public_6ef9d4b _public_6ef9d4b
#define public_6ef9d56 _public_6ef9d56
#define public_6ef9d6b _public_6ef9d6b
#define public_6ef9d7d _public_6ef9d7d
#define public_6ef9d82 _public_6ef9d82
#define public_6ef9d93 _public_6ef9d93
#define public_6ef9d96 _public_6ef9d96

PROC_DECLARE(0x6ef9bee, internal_6ef9bee, public_6ef9bee);
extern "C" NAKED register_t __cdecl internal_6ef9bee()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x414
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        cmp ecx, dword ptr ds : [public_6f02640]
        push esi
        push edi
        jae public_6ef9d82
        mov eax, ecx
        mov esi, ecx
        sar eax, 5
        and esi, 0x1F
        lea ebx, ds : [eax*4+public_6f02540]
        shl esi, 3
        mov eax, dword ptr ds : [ebx]
        mov al, byte ptr ds : [eax+esi+4]
        test al, 1
        je public_6ef9d82
        xor edi, edi
        cmp dword ptr ss : [ebp+0x10], edi
        mov dword ptr ss : [ebp-8], edi
        mov dword ptr ss : [ebp-0x10], edi
        jne public_6ef9c3f
        public_6ef9c38 : nop
        xor eax, eax
        jmp public_6ef9d96
        public_6ef9c3f : nop
        test al, 0x20
        je public_6ef9c4f
        push 2
        push edi
        push ecx
        call public_6ef9b54
        add esp, 0xC
        public_6ef9c4f : nop
        mov eax, dword ptr ds : [ebx]
        add eax, esi
        test byte ptr ds : [eax+4], 0x80
        je public_6ef9d1e
        mov eax, dword ptr ss : [ebp+0xC]
        cmp dword ptr ss : [ebp+0x10], edi
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp+8], edi
        jbe public_6ef9d56
        public_6ef9c6f : nop
        lea eax, ss:[ebp-0x414]
        public_6ef9c75 : nop
        mov ecx, dword ptr ss : [ebp-4]
        sub ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, dword ptr ss : [ebp+0x10]
        jae public_6ef9ca9
        mov ecx, dword ptr ss : [ebp-4]
        inc dword ptr ss : [ebp-4]
        mov cl, byte ptr ds : [ecx]
        cmp cl, 0xA
        jne public_6ef9c94
        inc dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [eax], 0xD
        inc eax
        public_6ef9c94 : nop
        mov byte ptr ds : [eax], cl
        inc eax
        mov ecx, eax
        lea edx, ss:[ebp-0x414]
        sub ecx, edx
        cmp ecx, 0x400
        jl public_6ef9c75
        public_6ef9ca9 : nop
        mov edi, eax
        lea eax, ss:[ebp-0x414]
        sub edi, eax
        lea eax, ss:[ebp-0xC]
        push 0
        push eax
        lea eax, ss:[ebp-0x414]
        push edi
        push eax
        mov eax, dword ptr ds : [ebx]
        push dword ptr ds : [eax+esi]
        call dword ptr ds : [public_6efc0cc]
        test eax, eax
        je public_6ef9d13
        mov eax, dword ptr ss : [ebp-0xC]
        add dword ptr ss : [ebp-8], eax
        cmp eax, edi
        jl public_6ef9ce5
        mov eax, dword ptr ss : [ebp-4]
        sub eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ss : [ebp+0x10]
        jb public_6ef9c6f
        public_6ef9ce5 : nop
        xor edi, edi
        public_6ef9ce7 : nop
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, edi
        jne public_6ef9d7d
        cmp dword ptr ss : [ebp+8], edi
        je public_6ef9d56
        push 5
        pop eax
        cmp dword ptr ss : [ebp+8], eax
        jne public_6ef9d4b
        mov dword ptr ds : [public_6f010f0], 9
        mov dword ptr ds : [public_6f010f4], eax
        jmp public_6ef9d93
        public_6ef9d13 : nop
        call dword ptr ds : [public_6efc0d0]
        mov dword ptr ss : [ebp+8], eax
        jmp public_6ef9ce5
        public_6ef9d1e : nop
        lea ecx, ss:[ebp-0xC]
        push edi
        push ecx
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax]
        call dword ptr ds : [public_6efc0cc]
        test eax, eax
        je public_6ef9d40
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp-8], eax
        jmp public_6ef9ce7
        public_6ef9d40 : nop
        call dword ptr ds : [public_6efc0d0]
        mov dword ptr ss : [ebp+8], eax
        jmp public_6ef9ce7
        public_6ef9d4b : nop
        push dword ptr ss : [ebp+8]
        call public_6efb437
        pop ecx
        jmp public_6ef9d93
        public_6ef9d56 : nop
        mov eax, dword ptr ds : [ebx]
        test byte ptr ds : [eax+esi+4], 0x40
        je public_6ef9d6b
        mov eax, dword ptr ss : [ebp+0xC]
        cmp byte ptr ds : [eax], 0x1A
        je public_6ef9c38
        public_6ef9d6b : nop
        mov dword ptr ds : [public_6f010f0], 0x1C
        mov dword ptr ds : [public_6f010f4], edi
        jmp public_6ef9d93
        public_6ef9d7d : nop
        sub eax, dword ptr ss : [ebp-0x10]
        jmp public_6ef9d96
        public_6ef9d82 : nop
        and dword ptr ds : [public_6f010f4], 0
        mov dword ptr ds : [public_6f010f0], 9
        public_6ef9d93 : nop
        or eax, 0xFFFFFFFF
        public_6ef9d96 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef9bee)
    }
}

#undef public_6ef9c38
#undef public_6ef9c3f
#undef public_6ef9c4f
#undef public_6ef9c6f
#undef public_6ef9c75
#undef public_6ef9c94
#undef public_6ef9ca9
#undef public_6ef9ce5
#undef public_6ef9ce7
#undef public_6ef9d13
#undef public_6ef9d1e
#undef public_6ef9d40
#undef public_6ef9d4b
#undef public_6ef9d56
#undef public_6ef9d6b
#undef public_6ef9d7d
#undef public_6ef9d82
#undef public_6ef9d93
#undef public_6ef9d96

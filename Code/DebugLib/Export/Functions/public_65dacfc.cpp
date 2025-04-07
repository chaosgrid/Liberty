#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dacfc);
CLANG_FORWARD_PROC_SYMBOL(public_65daea8);

#define public_65dad09 _public_65dad09
#define public_65dad10 _public_65dad10
#define public_65dad2e _public_65dad2e
#define public_65dad80 _public_65dad80
#define public_65dad94 _public_65dad94
#define public_65dade3 _public_65dade3
#define public_65dadee _public_65dadee
#define public_65dae06 _public_65dae06
#define public_65dae30 _public_65dae30
#define public_65dae5a _public_65dae5a
#define public_65dae5c _public_65dae5c
#define public_65dae60 _public_65dae60
#define public_65dae74 _public_65dae74
#define public_65dae97 _public_65dae97
#define public_65dae9b _public_65dae9b

PROC_DECLARE(0x65dacfc, internal_65dacfc, public_65dacfc);
extern "C" NAKED register_t __cdecl internal_65dacfc()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr ds : [public_65e3460], edi
        jne public_65dad10
        public_65dad09 : nop
        xor eax, eax
        jmp public_65dae5c
        public_65dad10 : nop
        mov esi, dword ptr ss : [esp+0x10]
        push 1
        pop ebx
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, dword ptr ds : [public_65e34f0]
        jne public_65dad2e
        cmp eax, dword ptr ds : [public_65e3500]
        je public_65dae30
        public_65dad2e : nop
        cmp dword ptr ds : [public_65e6178], edi
        je public_65dae06
        movzx ecx, word ptr ds : [public_65e6226]
        push ecx
        cmp word ptr ds : [public_65e6218], di
        movzx ecx, word ptr ds : [public_65e6224]
        push ecx
        movzx ecx, word ptr ds : [public_65e6222]
        push ecx
        movzx ecx, word ptr ds : [public_65e6220]
        push ecx
        jne public_65dad80
        movzx ecx, word ptr ds : [public_65e621c]
        push edi
        push ecx
        movzx ecx, word ptr ds : [public_65e621e]
        push ecx
        movzx ecx, word ptr ds : [public_65e621a]
        push ecx
        push eax
        push ebx
        jmp public_65dad94
        public_65dad80 : nop
        movzx ecx, word ptr ds : [public_65e621e]
        push ecx
        push edi
        movzx ecx, word ptr ds : [public_65e621a]
        push edi
        push ecx
        push eax
        push edi
        public_65dad94 : nop
        push ebx
        call public_65daea8
        movzx eax, word ptr ds : [public_65e61d2]
        add esp, 0x2C
        cmp word ptr ds : [public_65e61c4], di
        push eax
        movzx eax, word ptr ds : [public_65e61d0]
        push eax
        movzx eax, word ptr ds : [public_65e61ce]
        push eax
        movzx eax, word ptr ds : [public_65e61cc]
        push eax
        jne public_65dadee
        movzx eax, word ptr ds : [public_65e61c8]
        push edi
        push eax
        movzx eax, word ptr ds : [public_65e61ca]
        push eax
        movzx eax, word ptr ds : [public_65e61c6]
        push eax
        push dword ptr ds : [esi+0x14]
        push ebx
        public_65dade3 : nop
        push edi
        call public_65daea8
        add esp, 0x2C
        jmp public_65dae30
        public_65dadee : nop
        movzx eax, word ptr ds : [public_65e61ca]
        push eax
        push edi
        movzx eax, word ptr ds : [public_65e61c6]
        push edi
        push eax
        push dword ptr ds : [esi+0x14]
        push edi
        jmp public_65dade3
        public_65dae06 : nop
        push edi
        push edi
        push edi
        push 2
        push edi
        push edi
        push ebx
        push 4
        push eax
        push ebx
        push ebx
        call public_65daea8
        push edi
        push edi
        push edi
        push 2
        push edi
        push edi
        push 5
        push 0xA
        push dword ptr ds : [esi+0x14]
        push ebx
        push edi
        call public_65daea8
        add esp, 0x58
        public_65dae30 : nop
        mov edx, dword ptr ds : [public_65e34f4]
        mov eax, dword ptr ds : [public_65e3504]
        mov ecx, dword ptr ds : [esi+0x1C]
        cmp edx, eax
        jge public_65dae60
        cmp ecx, edx
        jl public_65dad09
        cmp ecx, eax
        jg public_65dad09
        cmp ecx, edx
        jle public_65dae74
        cmp ecx, eax
        jge public_65dae74
        public_65dae5a : nop
        mov eax, ebx
        public_65dae5c : nop
        pop edi
        pop esi
        pop ebx
        ret 
        public_65dae60 : nop
        cmp ecx, eax
        jl public_65dae5a
        cmp ecx, edx
        jg public_65dae5a
        cmp ecx, eax
        jle public_65dae74
        cmp ecx, edx
        jl public_65dad09
        public_65dae74 : nop
        mov eax, dword ptr ds : [esi+8]
        imul eax, 0x3C
        add eax, dword ptr ds : [esi+4]
        imul eax, 0x3C
        add eax, dword ptr ds : [esi]
        imul eax, 0x3E8
        cmp ecx, edx
        jne public_65dae9b
        xor ecx, ecx
        cmp eax, dword ptr ds : [public_65e34f8]
        setge cl
        public_65dae97 : nop
        mov eax, ecx
        jmp public_65dae5c
        public_65dae9b : nop
        xor ecx, ecx
        cmp eax, dword ptr ds : [public_65e3508]
        setl cl
        jmp public_65dae97
        UNREACHABLE_TRAP(0x65dacfc)
    }
}

#undef public_65dad09
#undef public_65dad10
#undef public_65dad2e
#undef public_65dad80
#undef public_65dad94
#undef public_65dade3
#undef public_65dadee
#undef public_65dae06
#undef public_65dae30
#undef public_65dae5a
#undef public_65dae5c
#undef public_65dae60
#undef public_65dae74
#undef public_65dae97
#undef public_65dae9b

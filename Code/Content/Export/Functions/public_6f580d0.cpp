#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f580d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f58d50);

#define public_6f580f0 _public_6f580f0
#define public_6f580fb _public_6f580fb
#define public_6f58103 _public_6f58103
#define public_6f5810e _public_6f5810e
#define public_6f58116 _public_6f58116
#define public_6f58123 _public_6f58123
#define public_6f58131 _public_6f58131
#define public_6f58141 _public_6f58141
#define public_6f58145 _public_6f58145
#define public_6f58160 _public_6f58160
#define public_6f58168 _public_6f58168
#define public_6f58172 _public_6f58172
#define public_6f58177 _public_6f58177
#define public_6f58179 _public_6f58179
#define public_6f58183 _public_6f58183

PROC_DECLARE(0x6f580d0, internal_6f580d0, public_6f580d0);
extern "C" NAKED register_t __cdecl internal_6f580d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fd0de0]
        mov edx, dword ptr ds : [ebx]
        push ebp
        push esi
        xor al, al
        cmp edx, ebx
        push edi
        je public_6f58183
        mov ebp, dword ptr ss : [esp+0x18]
        lea ebx, ds:[ebx]
        public_6f580f0 : nop
        mov ecx, dword ptr ds : [edx+0x14]
        test ecx, ecx
        jne public_6f580fb
        xor esi, esi
        jmp public_6f58103
        public_6f580fb : nop
        mov esi, dword ptr ds : [edx+0x18]
        sub esi, ecx
        sar esi, 2
        public_6f58103 : nop
        mov edi, dword ptr ss : [ebp+4]
        test edi, edi
        jne public_6f5810e
        xor eax, eax
        jmp public_6f58116
        public_6f5810e : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, edi
        sar eax, 2
        public_6f58116 : nop
        cmp esi, eax
        jne public_6f58145
        mov eax, dword ptr ds : [edx+0x18]
        cmp ecx, eax
        je public_6f58131
        sub edi, ecx
        public_6f58123 : nop
        mov esi, dword ptr ds : [ecx]
        cmp esi, dword ptr ds : [edi+ecx]
        jne public_6f58141
        add ecx, 4
        cmp ecx, eax
        jne public_6f58123
        public_6f58131 : nop
        mov ecx, dword ptr ds : [edx+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 
        public_6f58141 : nop
        cmp ecx, eax
        je public_6f58131
        public_6f58145 : nop
        mov eax, dword ptr ds : [edx+8]
        mov cl, byte ptr ds : [eax+0x21]
        test cl, cl
        jne public_6f58160
        push eax
        call public_6f58d50
        mov ebx, dword ptr ds : [public_6fd0de0]
        add esp, 4
        jmp public_6f58177
        public_6f58160 : nop
        mov eax, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f58172
        public_6f58168 : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax+4]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f58168
        public_6f58172 : nop
        cmp dword ptr ds : [edx+8], eax
        je public_6f58179
        public_6f58177 : nop
        mov edx, eax
        public_6f58179 : nop
        cmp edx, ebx
        jne public_6f580f0
        xor al, al
        public_6f58183 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f580d0)
    }
}

#undef public_6f580f0
#undef public_6f580fb
#undef public_6f58103
#undef public_6f5810e
#undef public_6f58116
#undef public_6f58123
#undef public_6f58131
#undef public_6f58141
#undef public_6f58145
#undef public_6f58160
#undef public_6f58168
#undef public_6f58172
#undef public_6f58177
#undef public_6f58179
#undef public_6f58183

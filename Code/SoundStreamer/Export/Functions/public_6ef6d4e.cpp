#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6d4e);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6f62);
CLANG_FORWARD_PROC_SYMBOL(public_6ef85b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef99ba);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9a31);

#define public_6ef6d89 _public_6ef6d89
#define public_6ef6db9 _public_6ef6db9
#define public_6ef6dc7 _public_6ef6dc7
#define public_6ef6dde _public_6ef6dde
#define public_6ef6de0 _public_6ef6de0
#define public_6ef6e0a _public_6ef6e0a
#define public_6ef6e10 _public_6ef6e10
#define public_6ef6e12 _public_6ef6e12
#define public_6ef6e25 _public_6ef6e25

PROC_DECLARE(0x6ef6d4e, internal_6ef6d4e, public_6ef6d4e);
extern "C" NAKED register_t __cdecl internal_6ef6d4e()
{
    __asm
    {
        cmp byte ptr ds : [public_6f010cc], 0
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        je public_6ef6d89
        mov eax, dword ptr ds : [public_6f010d0]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [public_6f010c8]
        cmp eax, ebx
        jne public_6ef6db9
        xor ecx, ecx
        cmp dword ptr ds : [esi], 0x2D
        sete cl
        add ecx, eax
        add ecx, ebp
        mov eax, ecx
        mov byte ptr ds : [eax], 0x30
        and byte ptr ds : [eax+1], 0
        jmp public_6ef6db9
        public_6ef6d89 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        push ecx
        fld qword ptr ds : [eax]
        fstp qword ptr ss : [esp]
        call public_6ef9a31
        mov ebx, dword ptr ss : [esp+0x24]
        mov esi, eax
        push esi
        mov eax, dword ptr ds : [esi+4]
        add eax, ebx
        push eax
        xor eax, eax
        cmp dword ptr ds : [esi], 0x2D
        sete al
        add eax, ebp
        push eax
        call public_6ef99ba
        add esp, 0x14
        public_6ef6db9 : nop
        cmp dword ptr ds : [esi], 0x2D
        mov edi, ebp
        jne public_6ef6dc7
        mov byte ptr ss : [ebp], 0x2D
        lea edi, ss:[ebp+1]
        public_6ef6dc7 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jg public_6ef6dde
        push 1
        push edi
        call public_6ef6f62
        pop ecx
        mov byte ptr ds : [edi], 0x30
        pop ecx
        inc edi
        jmp public_6ef6de0
        public_6ef6dde : nop
        add edi, eax
        public_6ef6de0 : nop
        test ebx, ebx
        jle public_6ef6e25
        push 1
        push edi
        call public_6ef6f62
        mov al, byte ptr ds : [public_6f00614]
        pop ecx
        mov byte ptr ds : [edi], al
        mov esi, dword ptr ds : [esi+4]
        inc edi
        pop ecx
        test esi, esi
        jge public_6ef6e25
        cmp byte ptr ds : [public_6f010cc], 0
        je public_6ef6e0a
        neg esi
        jmp public_6ef6e10
        public_6ef6e0a : nop
        neg esi
        cmp ebx, esi
        jl public_6ef6e12
        public_6ef6e10 : nop
        mov ebx, esi
        public_6ef6e12 : nop
        push ebx
        push edi
        call public_6ef6f62
        push ebx
        push 0x30
        push edi
        call public_6ef85b0
        add esp, 0x14
        public_6ef6e25 : nop
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ef6d4e)
    }
}

#undef public_6ef6d89
#undef public_6ef6db9
#undef public_6ef6dc7
#undef public_6ef6dde
#undef public_6ef6de0
#undef public_6ef6e0a
#undef public_6ef6e10
#undef public_6ef6e12
#undef public_6ef6e25

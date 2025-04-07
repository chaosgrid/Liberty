#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2950);
CLANG_FORWARD_PROC_SYMBOL(public_6ef403c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4410);

#define public_6ef4422 _public_6ef4422
#define public_6ef4440 _public_6ef4440
#define public_6ef4447 _public_6ef4447
#define public_6ef444b _public_6ef444b
#define public_6ef4459 _public_6ef4459
#define public_6ef4464 _public_6ef4464
#define public_6ef4476 _public_6ef4476
#define public_6ef4481 _public_6ef4481
#define public_6ef4486 _public_6ef4486
#define public_6ef448e _public_6ef448e
#define public_6ef4490 _public_6ef4490

PROC_DECLARE(0x6ef4410, internal_6ef4410, public_6ef4410);
extern "C" NAKED register_t __cdecl internal_6ef4410()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        cmp edi, 0xFFFFFFFD
        jbe public_6ef4422
        call public_6ef403c
        public_6ef4422 : nop
        mov ecx, dword ptr ds : [esi+4]
        xor edx, edx
        cmp ecx, edx
        je public_6ef444b
        mov al, byte ptr ds : [ecx-1]
        cmp al, dl
        je public_6ef444b
        cmp al, 0xFF
        je public_6ef444b
        cmp edi, edx
        jne public_6ef4486
        dec al
        push edx
        mov byte ptr ds : [ecx-1], al
        public_6ef4440 : nop
        mov ecx, esi
        call public_6ef2800
        public_6ef4447 : nop
        xor al, al
        jmp public_6ef4490
        public_6ef444b : nop
        cmp edi, edx
        jne public_6ef4464
        cmp byte ptr ss : [esp+0x10], dl
        je public_6ef4459
        push 1
        jmp public_6ef4440
        public_6ef4459 : nop
        cmp ecx, edx
        je public_6ef4447
        mov dword ptr ds : [esi+8], edx
        mov byte ptr ds : [ecx], dl
        jmp public_6ef4447
        public_6ef4464 : nop
        cmp byte ptr ss : [esp+0x10], dl
        je public_6ef4481
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 0x1F
        ja public_6ef4476
        cmp eax, edi
        jae public_6ef448e
        public_6ef4476 : nop
        push 1
        mov ecx, esi
        call public_6ef2800
        jmp public_6ef4486
        public_6ef4481 : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_6ef448e
        public_6ef4486 : nop
        push edi
        mov ecx, esi
        call public_6ef2950
        public_6ef448e : nop
        mov al, 1
        public_6ef4490 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ef4410)
    }
}

#undef public_6ef4422
#undef public_6ef4440
#undef public_6ef4447
#undef public_6ef444b
#undef public_6ef4459
#undef public_6ef4464
#undef public_6ef4476
#undef public_6ef4481
#undef public_6ef4486
#undef public_6ef448e
#undef public_6ef4490

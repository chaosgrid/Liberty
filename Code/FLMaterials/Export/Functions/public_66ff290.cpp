#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f7900);
CLANG_FORWARD_PROC_SYMBOL(public_66ff290);

#define public_66ff2ac _public_66ff2ac
#define public_66ff2bd _public_66ff2bd
#define public_66ff2cc _public_66ff2cc
#define public_66ff2d7 _public_66ff2d7
#define public_66ff2e2 _public_66ff2e2
#define public_66ff2e9 _public_66ff2e9
#define public_66ff319 _public_66ff319
#define public_66ff32a _public_66ff32a
#define public_66ff339 _public_66ff339
#define public_66ff34b _public_66ff34b
#define public_66ff367 _public_66ff367
#define public_66ff378 _public_66ff378
#define public_66ff387 _public_66ff387
#define public_66ff396 _public_66ff396
#define public_66ff3a2 _public_66ff3a2
#define public_66ff3a9 _public_66ff3a9

PROC_DECLARE(0x66ff290, internal_66ff290, public_66ff290);
extern "C" NAKED register_t __cdecl internal_66ff290()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, eax
        and ecx, 0xC
        xor ebx, ebx
        cmp cl, 0xC
        push edi
        jne public_66ff2ac
        mov ebx, 0x1C
        jmp public_66ff2cc
        public_66ff2ac : nop
        mov edx, eax
        and edx, 4
        cmp dl, 4
        jne public_66ff2bd
        mov ebx, 0x10
        jmp public_66ff2cc
        public_66ff2bd : nop
        mov ecx, eax
        and ecx, 2
        cmp cl, 2
        jne public_66ff2cc
        mov ebx, 0xC
        public_66ff2cc : nop
        xor ebp, ebp
        test al, 0x10
        je public_66ff2d7
        mov ebp, 0xC
        public_66ff2d7 : nop
        xor edi, edi
        test al, 0x40
        je public_66ff2e2
        mov edi, 4
        public_66ff2e2 : nop
        test al, al
        jns public_66ff2e9
        add edi, 4
        public_66ff2e9 : nop
        push eax
        call public_66f7900
        mov edx, dword ptr ss : [esp+0x18]
        add eax, edi
        mov dword ptr ds : [esi+0x6C], edx
        mov edx, dword ptr ss : [esp+0x1C]
        add eax, ebp
        mov ecx, edx
        add eax, ebx
        and ecx, 0xC
        add esp, 4
        xor edi, edi
        cmp ecx, 0xC
        mov dword ptr ds : [esi+0x70], eax
        jne public_66ff319
        mov edi, 0x1C
        jmp public_66ff339
        public_66ff319 : nop
        mov ebx, edx
        and ebx, 4
        cmp bl, 4
        jne public_66ff32a
        mov edi, 0x10
        jmp public_66ff339
        public_66ff32a : nop
        mov ebx, edx
        and ebx, 2
        cmp bl, 2
        jne public_66ff339
        mov edi, 0xC
        public_66ff339 : nop
        mov ebx, edx
        xor ebp, ebp
        and ebx, 0x10
        mov dword ptr ss : [esp+0x18], ebx
        je public_66ff34b
        mov ebp, 0xC
        public_66ff34b : nop
        mov ebx, dword ptr ss : [esp+0x14]
        add ebp, edi
        add ebp, ebx
        xor edi, edi
        cmp ecx, 0xC
        mov dword ptr ds : [esi+0x74], ebp
        mov dword ptr ds : [esi+0x78], eax
        jne public_66ff367
        mov edi, 0x1C
        jmp public_66ff387
        public_66ff367 : nop
        mov ecx, edx
        and ecx, 4
        cmp cl, 4
        jne public_66ff378
        mov edi, 0x10
        jmp public_66ff387
        public_66ff378 : nop
        mov ecx, edx
        and ecx, 2
        cmp cl, 2
        jne public_66ff387
        mov edi, 0xC
        public_66ff387 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        xor ebp, ebp
        test ecx, ecx
        je public_66ff396
        mov ebp, 0xC
        public_66ff396 : nop
        xor ecx, ecx
        test dl, 0x40
        je public_66ff3a2
        mov ecx, 4
        public_66ff3a2 : nop
        test dl, dl
        jns public_66ff3a9
        add ecx, 4
        public_66ff3a9 : nop
        add ecx, ebp
        add ecx, edi
        add ecx, ebx
        pop edi
        mov dword ptr ds : [esi+0x7C], ecx
        mov dword ptr ds : [esi+0x80], eax
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66ff290)
    }
}

#undef public_66ff2ac
#undef public_66ff2bd
#undef public_66ff2cc
#undef public_66ff2d7
#undef public_66ff2e2
#undef public_66ff2e9
#undef public_66ff319
#undef public_66ff32a
#undef public_66ff339
#undef public_66ff34b
#undef public_66ff367
#undef public_66ff378
#undef public_66ff387
#undef public_66ff396
#undef public_66ff3a2
#undef public_66ff3a9

#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1b40);
CLANG_FORWARD_PROC_SYMBOL(public_6ee1de0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee56e0);

#define public_6ee8330 _public_6ee8330
#define public_6ee8354 _public_6ee8354
#define public_6ee8358 _public_6ee8358
#define public_6ee835d _public_6ee835d
#define public_6ee83c4 _public_6ee83c4
#define public_6ee83df _public_6ee83df
#define public_6ee8400 _public_6ee8400
#define public_6ee8407 _public_6ee8407
#define public_6ee841a _public_6ee841a
#define public_6ee842b _public_6ee842b

PROC_DECLARE(0x6ee8310, internal_6ee8310, public_6ee8310);
extern "C" NAKED register_t __cdecl internal_6ee8310()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        xor edi, edi
        cmp eax, 0x14
        jne public_6ee841a
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        push ebx
        public_6ee8330 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ee8358
        test cl, cl
        je public_6ee8354
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ee8358
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ee8330
        public_6ee8354 : nop
        xor eax, eax
        jmp public_6ee835d
        public_6ee8358 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ee835d : nop
        test eax, eax
        pop ebx
        jne public_6ee841a
        push 1
        push 0x14C
        call dword ptr ds : [public_6ee90a4]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_6ee8407
        mov ecx, esi
        call public_6ee1b40
        lea eax, ds:[esi+0x140]
        mov dword ptr ds : [eax], offset public_6ee95c0
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6ee94e0
        mov dword ptr ds : [esi+4], offset public_6ee94d0
        mov dword ptr ds : [esi+8], offset public_6ee94c0
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov dword ptr ds : [esi+0x13C], ecx
        jne public_6ee8400
        mov dword ptr ds : [esi+0x13C], eax
        public_6ee83c4 : nop
        push ebp
        mov ecx, esi
        call public_6ee56e0
        mov edi, eax
        test edi, edi
        je public_6ee842b
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6ee83df
        mov dword ptr ds : [eax], 0
        public_6ee83df : nop
        mov ecx, esi
        call public_6ee1de0
        push esi
        call dword ptr ds : [public_6ee90b0]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6ee8400 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6ee83c4
        public_6ee8407 : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        xor ecx, ecx
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_6ee841a : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        public_6ee842b : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ee8310)
    }
}

#undef public_6ee8330
#undef public_6ee8354
#undef public_6ee8358
#undef public_6ee835d
#undef public_6ee83c4
#undef public_6ee83df
#undef public_6ee8400
#undef public_6ee8407
#undef public_6ee841a
#undef public_6ee842b

#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea94c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eac320 _public_6eac320
#define public_6eac329 _public_6eac329
#define public_6eac330 _public_6eac330
#define public_6eac350 _public_6eac350
#define public_6eac354 _public_6eac354
#define public_6eac359 _public_6eac359
#define public_6eac361 _public_6eac361
#define public_6eac373 _public_6eac373
#define public_6eac378 _public_6eac378
#define public_6eac3a2 _public_6eac3a2
#define public_6eac3b7 _public_6eac3b7
#define public_6eac3c0 _public_6eac3c0
#define public_6eac3da _public_6eac3da
#define public_6eac3f0 _public_6eac3f0
#define public_6eac3fe _public_6eac3fe
#define public_6eac42f _public_6eac42f
#define public_6eac431 _public_6eac431
#define public_6eac440 _public_6eac440
#define public_6eac450 _public_6eac450
#define public_6eac45a _public_6eac45a
#define public_6eac462 _public_6eac462
#define public_6eac49c _public_6eac49c
#define public_6eac4a6 _public_6eac4a6
#define public_6eac4b2 _public_6eac4b2
#define public_6eac4c0 _public_6eac4c0

PROC_DECLARE(0x6eac2f0, internal_6eac2f0, public_6eac2f0);
extern "C" NAKED register_t __cdecl internal_6eac2f0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        test ebx, ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x24]
        push edi
        mov byte ptr ss : [esp+0x13], 0
        je public_6eac378
        mov ecx, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, ecx
        mov dword ptr ss : [esp+0x14], ecx
        je public_6eac378
        mov edx, dword ptr ds : [eax]
        add edx, 0x24
        lea esp, ss:[esp]
        public_6eac320 : nop
        cmp edi, 0xFFFFFFFC
        jne public_6eac329
        mov eax, dword ptr ds : [edx]
        jmp public_6eac361
        public_6eac329 : nop
        lea esi, ds:[edi+4]
        lea eax, ds:[edx+4]
        nop 
        public_6eac330 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6eac354
        test cl, cl
        je public_6eac350
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6eac354
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6eac330
        public_6eac350 : nop
        xor eax, eax
        jmp public_6eac359
        public_6eac354 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eac359 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x20]
        public_6eac361 : nop
        test eax, eax
        sete al
        test al, al
        jne public_6eac373
        add edi, 0x3C
        cmp edi, ecx
        jne public_6eac320
        jmp public_6eac378
        public_6eac373 : nop
        mov byte ptr ss : [esp+0x13], 1
        public_6eac378 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        cmp eax, dword ptr ss : [ebp+0x28]
        je public_6eac3b7
        mov cl, byte ptr ss : [esp+0x13]
        test cl, cl
        jne public_6eac3b7
        mov esi, dword ptr ds : [eax]
        add esi, 8
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0xFFFFFFFF
        lea edi, ds:[esi+4]
        je public_6eac3a2
        push edi
        call dword ptr ds : [public_6fb3604]
        add esp, 4
        public_6eac3a2 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [public_6fb3608]
        add esp, 8
        mov dword ptr ds : [edi], 0xFFFFFFFF
        public_6eac3b7 : nop
        mov esi, dword ptr ss : [ebp+0x24]
        cmp esi, dword ptr ss : [ebp+0x28]
        je public_6eac3da
        nop 
        public_6eac3c0 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+4]
        push ebx
        push ecx
        mov ecx, dword ptr ss : [ebp]
        push edx
        call public_6ea94c0
        mov eax, dword ptr ss : [ebp+0x28]
        add esi, 4
        cmp esi, eax
        jne public_6eac3c0
        public_6eac3da : nop
        mov ecx, dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ss : [ebp+0x24]
        lea edi, ss:[ebp+0x20]
        mov eax, ecx
        cmp eax, ecx
        je public_6eac3fe
        lea esp, ss:[esp]
        public_6eac3f0 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], edx
        add eax, 4
        add esi, 4
        cmp eax, ecx
        jne public_6eac3f0
        public_6eac3fe : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        push esi
        mov ecx, edi
        call public_6ea1490
        lea ecx, ss:[ebp+0xC]
        mov dword ptr ds : [edi+8], esi
        mov esi, dword ptr ss : [ebp]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ds:[esi+0x70]
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, dword ptr ds : [esi+0x74]
        je public_6eac42f
        lea esi, ds:[eax+0x10]
        jmp public_6eac431
        public_6eac42f : nop
        xor esi, esi
        public_6eac431 : nop
        mov ebx, dword ptr ss : [ebp+0x14]
        cmp ebx, dword ptr ss : [ebp+0x18]
        je public_6eac4a6
        lea esp, ss:[esp]
        public_6eac440 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov edx, dword ptr ds : [ebx]
        mov edi, dword ptr ss : [ebp+8]
        je public_6eac49c
        mov edi, edi
        public_6eac450 : nop
        cmp dword ptr ds : [eax+8], edi
        jne public_6eac45a
        cmp dword ptr ds : [eax+0xC], edx
        je public_6eac462
        public_6eac45a : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6eac450
        jmp public_6eac49c
        public_6eac462 : nop
        dec dword ptr ds : [eax+0x10]
        jne public_6eac49c
        mov dword ptr ss : [esp+0x14], eax
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+8], eax
        public_6eac49c : nop
        mov eax, dword ptr ss : [ebp+0x18]
        add ebx, 4
        cmp ebx, eax
        jne public_6eac440
        public_6eac4a6 : nop
        mov edx, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, edx
        cmp eax, edx
        je public_6eac4c0
        public_6eac4b2 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6eac4b2
        public_6eac4c0 : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x18], ecx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6eac2f0)
    }
}

#undef public_6eac320
#undef public_6eac329
#undef public_6eac330
#undef public_6eac350
#undef public_6eac354
#undef public_6eac359
#undef public_6eac361
#undef public_6eac373
#undef public_6eac378
#undef public_6eac3a2
#undef public_6eac3b7
#undef public_6eac3c0
#undef public_6eac3da
#undef public_6eac3f0
#undef public_6eac3fe
#undef public_6eac42f
#undef public_6eac431
#undef public_6eac440
#undef public_6eac450
#undef public_6eac45a
#undef public_6eac462
#undef public_6eac49c
#undef public_6eac4a6
#undef public_6eac4b2
#undef public_6eac4c0

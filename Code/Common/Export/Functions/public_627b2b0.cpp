#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

#define public_627b2f0 _public_627b2f0
#define public_627b30a _public_627b30a
#define public_627b3a1 _public_627b3a1
#define public_627b3b1 _public_627b3b1
#define public_627b3e0 _public_627b3e0
#define public_627b402 _public_627b402
#define public_627b41e _public_627b41e
#define public_627b440 _public_627b440
#define public_627b466 _public_627b466
#define public_627b46a _public_627b46a
#define public_627b485 _public_627b485
#define public_627b49c _public_627b49c
#define public_627b4b7 _public_627b4b7
#define public_627b4d2 _public_627b4d2
#define public_627b4f8 _public_627b4f8
#define public_627b559 _public_627b559
#define public_627b564 _public_627b564
#define public_627b593 _public_627b593
#define public_627b5a6 _public_627b5a6
#define public_627b5c5 _public_627b5c5
#define public_627b5e4 _public_627b5e4
#define public_627b603 _public_627b603
#define public_627b634 _public_627b634
#define public_627b63b _public_627b63b

PROC_DECLARE(0x627b2b0, internal_627b2b0, public_627b2b0);
extern "C" NAKED register_t __cdecl internal_627b2b0()
{
    __asm
    {
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x20]
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        push eax
        lea ecx, ss:[esp+0x18]
        xor esi, esi
        push ecx
        mov dword ptr ss : [esp+0x1C], esi
        call public_6334400
        mov edi, dword ptr ss : [esp+0x1C]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 8
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        je public_627b30a
        mov ebx, dword ptr ds : [public_63992f4]
        nop 
        lea esp, ss:[esp]
        public_627b2f0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        movsx eax, byte ptr ds : [esi+edx]
        push eax
        call ebx
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov byte ptr ds : [esi+ecx], al
        inc esi
        cmp esi, edi
        jb public_627b2f0
        public_627b30a : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [public_63992f8]
/*FIXUP push offset public_639b444 @0x627b314*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b444
        push edx
        call esi
/*FIXUP push offset public_639b444 @0x627b31c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b444
        push 0
        mov ebp, eax
        call esi
/*FIXUP push offset public_639b444 @0x627b327*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b444
        push 0
        mov ebx, eax
        call esi
/*FIXUP push offset public_639b444 @0x627b332*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b444
        push 0
        mov dword ptr ss : [esp+0x3C], eax
        call esi
/*FIXUP push offset public_639b444 @0x627b33f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b444
        push 0
        mov dword ptr ss : [esp+0x48], eax
        call esi
/*FIXUP push offset public_639b444 @0x627b34c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b444
        push 0
        mov dword ptr ss : [esp+0x58], eax
        call esi
        add esp, 0x30
        mov edi, offset public_639b440
        mov esi, ebp
        mov ecx, 3
        xor edx, edx
        repe cmpsb
        mov dword ptr ss : [esp+0x18], eax
        je public_627b3a1
        mov edi, offset public_639b43c
        mov esi, ebp
        mov ecx, 3
        xor edx, edx
        repe cmpsb
        je public_627b3a1
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov byte ptr ds : [eax], dl
        call public_6334430
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
        public_627b3a1 : nop
        test eax, eax
        jne public_627b3b1
        mov dword ptr ss : [esp+0x18], offset public_63997b0
        mov eax, dword ptr ss : [esp+0x18]
        public_627b3b1 : nop
        test ebp, ebp
        mov edx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edx], 1
        je public_627b3e0
        test ebx, ebx
        je public_627b3e0
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        je public_627b3e0
        mov ecx, dword ptr ss : [esp+0x20]
        test ecx, ecx
        je public_627b3e0
        mov ecx, dword ptr ss : [esp+0x28]
        test ecx, ecx
        je public_627b3e0
        test eax, eax
        jne public_627b402
        lea esp, ss:[esp]
        public_627b3e0 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0x78
/*FIXUP push offset public_639b408 @0x627b3ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b408
        mov eax, 0x100001
/*FIXUP push offset public_639b3c0 @0x627b3f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b3c0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_627b402 : nop
        mov edi, offset public_639b440
        mov esi, ebp
        mov ecx, 3
        xor eax, eax
        repe cmpsb
        jne public_627b41e
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ss : [ebp+1], 1
        jmp public_627b46a
        public_627b41e : nop
        mov edi, offset public_639b43c
        mov esi, ebp
        mov ecx, 3
        xor edx, edx
        repe cmpsb
        jne public_627b440
        mov eax, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+1], dl
        jmp public_627b466
        lea esp, ss:[esp]
        public_627b440 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push ebp
        push 0x87
/*FIXUP push offset public_639b408 @0x627b451*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b408
        mov eax, 0x100001
/*FIXUP push offset public_639b378 @0x627b45b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b378
        push eax
        call dword ptr ds : [edx]
        add esp, 0x18
        public_627b466 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_627b46a : nop
        mov edi, offset public_639b370
        mov esi, ebx
        mov ecx, 3
        xor eax, eax
        repe cmpsb
        jne public_627b485
        mov dword ptr ss : [ebp+4], 1
        jmp public_627b4f8
        public_627b485 : nop
        mov edi, offset public_639b36c
        mov esi, ebx
        mov ecx, 4
        xor edx, edx
        repe cmpsb
        jne public_627b49c
        mov dword ptr ss : [ebp+4], edx
        jmp public_627b4f8
        public_627b49c : nop
        mov edi, offset public_639b364
        mov esi, ebx
        mov ecx, 5
        xor eax, eax
        repe cmpsb
        jne public_627b4b7
        mov dword ptr ss : [ebp+4], 0xFFFFFFFF
        jmp public_627b4f8
        public_627b4b7 : nop
        mov edi, offset public_639b360
        mov esi, ebx
        mov ecx, 4
        xor edx, edx
        repe cmpsb
        jne public_627b4d2
        mov dword ptr ss : [ebp+4], 2
        jmp public_627b4f8
        public_627b4d2 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push ebx
        push 0x9E
/*FIXUP push offset public_639b408 @0x627b4e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b408
        mov eax, 0x100001
/*FIXUP push offset public_639b308 @0x627b4ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b308
        push eax
        call dword ptr ds : [edx]
        add esp, 0x18
        public_627b4f8 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        lea ecx, ss:[ebp+8]
        push ecx
        call public_6334400
        mov esi, dword ptr ss : [esp+0x28]
        push 0xA
        lea edx, ss:[esp+0x30]
        push edx
        push esi
        mov dword ptr ss : [esp+0x38], 0
        call dword ptr ds : [public_6399344]
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ss : [esp+0x38]
        add esp, 0x14
        test eax, eax
        je public_627b559
        cmp byte ptr ds : [eax], 0
        je public_627b559
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push esi
        push 0xAC
/*FIXUP push offset public_639b408 @0x627b544*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b408
        mov eax, 0x100001
/*FIXUP push offset public_639b2c0 @0x627b54e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b2c0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x18
        public_627b559 : nop
        mov eax, dword ptr ss : [esp+0x28]
        lea esi, ss:[ebp+0x10]
        mov edx, esi
        sub edx, eax
        public_627b564 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_627b564
        xor eax, eax
        mov edi, esi
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        test ebp, ebp
        jle public_627b5a6
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [public_63992fc]
        mov edi, 0xFFFFFFF0
        sub edi, eax
        public_627b593 : nop
        movsx eax, byte ptr ds : [esi]
        push eax
        call ebx
        add esp, 4
        mov byte ptr ds : [esi], al
        inc esi
        lea ecx, ds:[edi+esi]
        cmp ecx, ebp
        jl public_627b593
        public_627b5a6 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, offset public_639b2b8
        mov esi, edx
        mov ecx, 6
        xor eax, eax
        repe cmpsb
        jne public_627b5c5
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], eax
        jmp public_627b63b
        public_627b5c5 : nop
        mov edi, offset public_639b2b0
        mov esi, edx
        mov ecx, 7
        xor eax, eax
        repe cmpsb
        jne public_627b5e4
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], 1
        jmp public_627b63b
        public_627b5e4 : nop
        mov edi, offset public_639b2a8
        mov esi, edx
        mov ecx, 8
        xor eax, eax
        repe cmpsb
        jne public_627b603
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], 2
        jmp public_627b63b
        public_627b603 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [esi+1]
        test al, al
        jne public_627b634
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        push edx
        mov edx, dword ptr ds : [public_6399028]
        push 0xC8
/*FIXUP push offset public_639b408 @0x627b61f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b408
        mov eax, 0x100001
/*FIXUP push offset public_639b230 @0x627b629*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b230
        push eax
        call dword ptr ds : [edx]
        add esp, 0x18
        public_627b634 : nop
        mov dword ptr ds : [esi+0x20], 3
        public_627b63b : nop
        lea eax, ss:[esp+0x14]
        push eax
        call public_6334430
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x627b2b0)
    }
}

#undef public_627b2f0
#undef public_627b30a
#undef public_627b3a1
#undef public_627b3b1
#undef public_627b3e0
#undef public_627b402
#undef public_627b41e
#undef public_627b440
#undef public_627b466
#undef public_627b46a
#undef public_627b485
#undef public_627b49c
#undef public_627b4b7
#undef public_627b4d2
#undef public_627b4f8
#undef public_627b559
#undef public_627b564
#undef public_627b593
#undef public_627b5a6
#undef public_627b5c5
#undef public_627b5e4
#undef public_627b603
#undef public_627b634
#undef public_627b63b

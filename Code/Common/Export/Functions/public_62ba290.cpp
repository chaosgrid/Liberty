#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ba290);
CLANG_FORWARD_PROC_SYMBOL(public_62bae60);
CLANG_FORWARD_PROC_SYMBOL(public_62bb590);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62ba2b4 _public_62ba2b4
#define public_62ba2d2 _public_62ba2d2
#define public_62ba2dd _public_62ba2dd
#define public_62ba2e6 _public_62ba2e6
#define public_62ba2f1 _public_62ba2f1
#define public_62ba30d _public_62ba30d
#define public_62ba324 _public_62ba324
#define public_62ba331 _public_62ba331
#define public_62ba33c _public_62ba33c
#define public_62ba33f _public_62ba33f
#define public_62ba357 _public_62ba357
#define public_62ba362 _public_62ba362
#define public_62ba365 _public_62ba365
#define public_62ba37a _public_62ba37a
#define public_62ba385 _public_62ba385
#define public_62ba390 _public_62ba390
#define public_62ba393 _public_62ba393
#define public_62ba3a7 _public_62ba3a7
#define public_62ba3b3 _public_62ba3b3
#define public_62ba3bf _public_62ba3bf
#define public_62ba3c2 _public_62ba3c2
#define public_62ba3e0 _public_62ba3e0
#define public_62ba41f _public_62ba41f
#define public_62ba432 _public_62ba432
#define public_62ba43d _public_62ba43d
#define public_62ba440 _public_62ba440
#define public_62ba44b _public_62ba44b
#define public_62ba45e _public_62ba45e
#define public_62ba485 _public_62ba485
#define public_62ba49f _public_62ba49f
#define public_62ba4c5 _public_62ba4c5
#define public_62ba4d8 _public_62ba4d8
#define public_62ba4e5 _public_62ba4e5
#define public_62ba4e7 _public_62ba4e7
#define public_62ba4f2 _public_62ba4f2
#define public_62ba509 _public_62ba509
#define public_62ba521 _public_62ba521
#define public_62ba52e _public_62ba52e
#define public_62ba530 _public_62ba530
#define public_62ba53c _public_62ba53c
#define public_62ba566 _public_62ba566
#define public_62ba57e _public_62ba57e
#define public_62ba58e _public_62ba58e
#define public_62ba598 _public_62ba598
#define public_62ba5bb _public_62ba5bb
#define public_62ba5ce _public_62ba5ce
#define public_62ba5d9 _public_62ba5d9
#define public_62ba5dc _public_62ba5dc
#define public_62ba5e6 _public_62ba5e6
#define public_62ba60f _public_62ba60f
#define public_62ba622 _public_62ba622
#define public_62ba62f _public_62ba62f
#define public_62ba631 _public_62ba631
#define public_62ba634 _public_62ba634
#define public_62ba637 _public_62ba637
#define public_62ba63e _public_62ba63e

PROC_DECLARE(0x62ba290, internal_62ba290, public_62ba290);
extern "C" NAKED register_t __cdecl internal_62ba290()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_62bae60
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_62ba2d2
        mov eax, dword ptr ds : [esi+8]
        public_62ba2b4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_62ba357
        mov dword ptr ds : [ecx+4], eax
        jmp public_62ba365
        public_62ba2d2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_62ba2dd
        mov eax, edx
        jmp public_62ba2b4
        public_62ba2dd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        jne public_62ba2f1
        public_62ba2e6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        je public_62ba2e6
        public_62ba2f1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_62ba2b4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62ba30d
        mov dword ptr ds : [eax+4], ecx
        jmp public_62ba324
        public_62ba30d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_62ba324 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_62ba331
        mov dword ptr ds : [edx+4], ecx
        jmp public_62ba33f
        public_62ba331 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_62ba33c
        mov dword ptr ds : [edx], ecx
        jmp public_62ba33f
        public_62ba33c : nop
        mov dword ptr ds : [edx+8], ecx
        public_62ba33f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x50]
        mov dl, byte ptr ds : [ecx+0x50]
        mov byte ptr ds : [ecx+0x50], bl
        mov byte ptr ds : [esi+0x50], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_62ba3c2
        public_62ba357 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_62ba362
        mov dword ptr ds : [ecx], eax
        jmp public_62ba365
        public_62ba362 : nop
        mov dword ptr ds : [ecx+8], eax
        public_62ba365 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_62ba393
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62ba37a
        mov edx, dword ptr ds : [esi+4]
        jmp public_62ba390
        public_62ba37a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        mov edx, eax
        jne public_62ba390
        public_62ba385 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        je public_62ba385
        public_62ba390 : nop
        mov dword ptr ss : [ebp], edx
        public_62ba393 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_62ba3c2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62ba3a7
        mov edx, dword ptr ds : [esi+4]
        jmp public_62ba3bf
        public_62ba3a7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        mov edx, eax
        jne public_62ba3bf
        public_62ba3b3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x51]
        test bl, bl
        je public_62ba3b3
        public_62ba3bf : nop
        mov dword ptr ss : [ebp+8], edx
        public_62ba3c2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x50]
        mov bl, 1
        cmp cl, bl
        jne public_62ba63e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_62ba637
        nop 
        public_62ba3e0 : nop
        cmp byte ptr ds : [eax+0x50], bl
        jne public_62ba637
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_62ba49f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_62ba44b
        mov byte ptr ds : [ecx+0x50], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x50], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62ba41f
        mov dword ptr ds : [esi+4], ecx
        public_62ba41f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62ba432
        mov dword ptr ds : [esi+4], edx
        jmp public_62ba440
        public_62ba432 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62ba43d
        mov dword ptr ds : [esi], edx
        jmp public_62ba440
        public_62ba43d : nop
        mov dword ptr ds : [esi+8], edx
        public_62ba440 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62ba44b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_62ba45e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x50], bl
        je public_62ba509
        public_62ba45e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_62ba53c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x50], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x50], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62ba485
        mov dword ptr ds : [esi+4], ecx
        public_62ba485 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62ba521
        mov dword ptr ds : [esi+4], edx
        jmp public_62ba530
        public_62ba49f : nop
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_62ba4f2
        mov byte ptr ds : [ecx+0x50], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62ba4c5
        mov dword ptr ds : [esi+4], ecx
        public_62ba4c5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62ba4d8
        mov dword ptr ds : [esi+4], edx
        jmp public_62ba4e7
        public_62ba4d8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62ba4e5
        mov dword ptr ds : [esi+8], edx
        jmp public_62ba4e7
        public_62ba4e5 : nop
        mov dword ptr ds : [esi], edx
        public_62ba4e7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_62ba4f2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_62ba598
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_62ba598
        public_62ba509 : nop
        mov byte ptr ds : [ecx+0x50], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_62ba3e0
        jmp public_62ba637
        public_62ba521 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62ba52e
        mov dword ptr ds : [esi+8], edx
        jmp public_62ba530
        public_62ba52e : nop
        mov dword ptr ds : [esi], edx
        public_62ba530 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62ba53c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x50]
        mov byte ptr ds : [ecx+0x50], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x50], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x50], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62ba566
        mov dword ptr ds : [esi+4], ecx
        public_62ba566 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62ba57e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62ba634
        public_62ba57e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62ba58e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62ba634
        public_62ba58e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62ba634
        public_62ba598 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x50], bl
        jne public_62ba5e6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x50], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x50], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62ba5bb
        mov dword ptr ds : [esi+4], ecx
        public_62ba5bb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62ba5ce
        mov dword ptr ds : [esi+4], edx
        jmp public_62ba5dc
        public_62ba5ce : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62ba5d9
        mov dword ptr ds : [esi], edx
        jmp public_62ba5dc
        public_62ba5d9 : nop
        mov dword ptr ds : [esi+8], edx
        public_62ba5dc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_62ba5e6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x50]
        mov byte ptr ds : [ecx+0x50], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x50], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x50], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62ba60f
        mov dword ptr ds : [esi+4], ecx
        public_62ba60f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62ba622
        mov dword ptr ds : [esi+4], edx
        jmp public_62ba631
        public_62ba622 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62ba62f
        mov dword ptr ds : [esi+8], edx
        jmp public_62ba631
        public_62ba62f : nop
        mov dword ptr ds : [esi], edx
        public_62ba631 : nop
        mov dword ptr ds : [edx+8], ecx
        public_62ba634 : nop
        mov dword ptr ds : [ecx+4], edx
        public_62ba637 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x50], bl
        public_62ba63e : nop
        lea ecx, ds:[esi+0xC]
        call public_62bb590
        push esi
        call public_6391d5a
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62ba290)
    }
}

#undef public_62ba2b4
#undef public_62ba2d2
#undef public_62ba2dd
#undef public_62ba2e6
#undef public_62ba2f1
#undef public_62ba30d
#undef public_62ba324
#undef public_62ba331
#undef public_62ba33c
#undef public_62ba33f
#undef public_62ba357
#undef public_62ba362
#undef public_62ba365
#undef public_62ba37a
#undef public_62ba385
#undef public_62ba390
#undef public_62ba393
#undef public_62ba3a7
#undef public_62ba3b3
#undef public_62ba3bf
#undef public_62ba3c2
#undef public_62ba3e0
#undef public_62ba41f
#undef public_62ba432
#undef public_62ba43d
#undef public_62ba440
#undef public_62ba44b
#undef public_62ba45e
#undef public_62ba485
#undef public_62ba49f
#undef public_62ba4c5
#undef public_62ba4d8
#undef public_62ba4e5
#undef public_62ba4e7
#undef public_62ba4f2
#undef public_62ba509
#undef public_62ba521
#undef public_62ba52e
#undef public_62ba530
#undef public_62ba53c
#undef public_62ba566
#undef public_62ba57e
#undef public_62ba58e
#undef public_62ba598
#undef public_62ba5bb
#undef public_62ba5ce
#undef public_62ba5d9
#undef public_62ba5dc
#undef public_62ba5e6
#undef public_62ba60f
#undef public_62ba622
#undef public_62ba62f
#undef public_62ba631
#undef public_62ba634
#undef public_62ba637
#undef public_62ba63e

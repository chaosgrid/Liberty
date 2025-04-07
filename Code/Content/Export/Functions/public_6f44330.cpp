#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea76e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f44330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f44354 _public_6f44354
#define public_6f44372 _public_6f44372
#define public_6f4437d _public_6f4437d
#define public_6f44386 _public_6f44386
#define public_6f44391 _public_6f44391
#define public_6f443ad _public_6f443ad
#define public_6f443c4 _public_6f443c4
#define public_6f443d1 _public_6f443d1
#define public_6f443dc _public_6f443dc
#define public_6f443df _public_6f443df
#define public_6f443f7 _public_6f443f7
#define public_6f44402 _public_6f44402
#define public_6f44405 _public_6f44405
#define public_6f4441a _public_6f4441a
#define public_6f44425 _public_6f44425
#define public_6f44430 _public_6f44430
#define public_6f44433 _public_6f44433
#define public_6f44447 _public_6f44447
#define public_6f44453 _public_6f44453
#define public_6f4445f _public_6f4445f
#define public_6f44462 _public_6f44462
#define public_6f44480 _public_6f44480
#define public_6f444bf _public_6f444bf
#define public_6f444d2 _public_6f444d2
#define public_6f444dd _public_6f444dd
#define public_6f444e0 _public_6f444e0
#define public_6f444eb _public_6f444eb
#define public_6f444fe _public_6f444fe
#define public_6f44525 _public_6f44525
#define public_6f4453f _public_6f4453f
#define public_6f44565 _public_6f44565
#define public_6f44578 _public_6f44578
#define public_6f44585 _public_6f44585
#define public_6f44587 _public_6f44587
#define public_6f44592 _public_6f44592
#define public_6f445a9 _public_6f445a9
#define public_6f445c1 _public_6f445c1
#define public_6f445ce _public_6f445ce
#define public_6f445d0 _public_6f445d0
#define public_6f445dc _public_6f445dc
#define public_6f44606 _public_6f44606
#define public_6f4461e _public_6f4461e
#define public_6f4462e _public_6f4462e
#define public_6f44638 _public_6f44638
#define public_6f4465b _public_6f4465b
#define public_6f4466e _public_6f4466e
#define public_6f44679 _public_6f44679
#define public_6f4467c _public_6f4467c
#define public_6f44686 _public_6f44686
#define public_6f446af _public_6f446af
#define public_6f446c2 _public_6f446c2
#define public_6f446cf _public_6f446cf
#define public_6f446d1 _public_6f446d1
#define public_6f446d4 _public_6f446d4
#define public_6f446d7 _public_6f446d7
#define public_6f446da _public_6f446da

PROC_DECLARE(0x6f44330, internal_6f44330, public_6f44330);
extern "C" NAKED register_t __cdecl internal_6f44330()
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
        call public_6ea76e0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f44372
        mov eax, dword ptr ds : [esi+8]
        public_6f44354 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f443f7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f44405
        public_6f44372 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f4437d
        mov eax, edx
        jmp public_6f44354
        public_6f4437d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        jne public_6f44391
        public_6f44386 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        je public_6f44386
        public_6f44391 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f44354
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f443ad
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f443c4
        public_6f443ad : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f443c4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f443d1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f443df
        public_6f443d1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f443dc
        mov dword ptr ds : [edx], ecx
        jmp public_6f443df
        public_6f443dc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f443df : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x54]
        mov dl, byte ptr ds : [ecx+0x54]
        mov byte ptr ds : [ecx+0x54], bl
        mov byte ptr ds : [esi+0x54], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f44462
        public_6f443f7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f44402
        mov dword ptr ds : [ecx], eax
        jmp public_6f44405
        public_6f44402 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f44405 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f44433
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f4441a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f44430
        public_6f4441a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        mov edx, eax
        jne public_6f44430
        public_6f44425 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        je public_6f44425
        public_6f44430 : nop
        mov dword ptr ss : [ebp], edx
        public_6f44433 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f44462
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f44447
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f4445f
        public_6f44447 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        mov edx, eax
        jne public_6f4445f
        public_6f44453 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x55]
        test bl, bl
        je public_6f44453
        public_6f4445f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f44462 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x54]
        mov bl, 1
        cmp dl, bl
        jne public_6f446da
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f446d7
        nop 
        public_6f44480 : nop
        cmp byte ptr ds : [eax+0x54], bl
        jne public_6f446d7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f4453f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_6f444eb
        mov byte ptr ds : [ecx+0x54], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f444bf
        mov dword ptr ds : [esi+4], ecx
        public_6f444bf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f444d2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f444e0
        public_6f444d2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f444dd
        mov dword ptr ds : [esi], edx
        jmp public_6f444e0
        public_6f444dd : nop
        mov dword ptr ds : [esi+8], edx
        public_6f444e0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f444eb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_6f444fe
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x54], bl
        je public_6f445a9
        public_6f444fe : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_6f445dc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x54], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x54], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f44525
        mov dword ptr ds : [esi+4], ecx
        public_6f44525 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f445c1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f445d0
        public_6f4453f : nop
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_6f44592
        mov byte ptr ds : [ecx+0x54], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f44565
        mov dword ptr ds : [esi+4], ecx
        public_6f44565 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f44578
        mov dword ptr ds : [esi+4], edx
        jmp public_6f44587
        public_6f44578 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f44585
        mov dword ptr ds : [esi+8], edx
        jmp public_6f44587
        public_6f44585 : nop
        mov dword ptr ds : [esi], edx
        public_6f44587 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f44592 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_6f44638
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_6f44638
        public_6f445a9 : nop
        mov byte ptr ds : [ecx+0x54], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f44480
        jmp public_6f446d7
        public_6f445c1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f445ce
        mov dword ptr ds : [esi+8], edx
        jmp public_6f445d0
        public_6f445ce : nop
        mov dword ptr ds : [esi], edx
        public_6f445d0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f445dc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x54]
        mov byte ptr ds : [ecx+0x54], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x54], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x54], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f44606
        mov dword ptr ds : [esi+4], ecx
        public_6f44606 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4461e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f446d4
        public_6f4461e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4462e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f446d4
        public_6f4462e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f446d4
        public_6f44638 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x54], bl
        jne public_6f44686
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x54], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x54], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4465b
        mov dword ptr ds : [esi+4], ecx
        public_6f4465b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4466e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4467c
        public_6f4466e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f44679
        mov dword ptr ds : [esi], edx
        jmp public_6f4467c
        public_6f44679 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f4467c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f44686 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x54]
        mov byte ptr ds : [ecx+0x54], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x54], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x54], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f446af
        mov dword ptr ds : [esi+4], ecx
        public_6f446af : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f446c2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f446d1
        public_6f446c2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f446cf
        mov dword ptr ds : [esi+8], edx
        jmp public_6f446d1
        public_6f446cf : nop
        mov dword ptr ds : [esi], edx
        public_6f446d1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f446d4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f446d7 : nop
        mov byte ptr ds : [eax+0x54], bl
        public_6f446da : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f44330)
    }
}

#undef public_6f44354
#undef public_6f44372
#undef public_6f4437d
#undef public_6f44386
#undef public_6f44391
#undef public_6f443ad
#undef public_6f443c4
#undef public_6f443d1
#undef public_6f443dc
#undef public_6f443df
#undef public_6f443f7
#undef public_6f44402
#undef public_6f44405
#undef public_6f4441a
#undef public_6f44425
#undef public_6f44430
#undef public_6f44433
#undef public_6f44447
#undef public_6f44453
#undef public_6f4445f
#undef public_6f44462
#undef public_6f44480
#undef public_6f444bf
#undef public_6f444d2
#undef public_6f444dd
#undef public_6f444e0
#undef public_6f444eb
#undef public_6f444fe
#undef public_6f44525
#undef public_6f4453f
#undef public_6f44565
#undef public_6f44578
#undef public_6f44585
#undef public_6f44587
#undef public_6f44592
#undef public_6f445a9
#undef public_6f445c1
#undef public_6f445ce
#undef public_6f445d0
#undef public_6f445dc
#undef public_6f44606
#undef public_6f4461e
#undef public_6f4462e
#undef public_6f44638
#undef public_6f4465b
#undef public_6f4466e
#undef public_6f44679
#undef public_6f4467c
#undef public_6f44686
#undef public_6f446af
#undef public_6f446c2
#undef public_6f446cf
#undef public_6f446d1
#undef public_6f446d4
#undef public_6f446d7
#undef public_6f446da

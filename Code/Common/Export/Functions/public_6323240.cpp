#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63221f0);
CLANG_FORWARD_PROC_SYMBOL(public_6323240);
CLANG_FORWARD_PROC_SYMBOL(public_63238a0);

#define public_6323264 _public_6323264
#define public_6323282 _public_6323282
#define public_632328d _public_632328d
#define public_63232a0 _public_63232a0
#define public_63232ae _public_63232ae
#define public_63232ca _public_63232ca
#define public_63232e1 _public_63232e1
#define public_63232ee _public_63232ee
#define public_63232f9 _public_63232f9
#define public_63232fc _public_63232fc
#define public_6323320 _public_6323320
#define public_632332b _public_632332b
#define public_632332e _public_632332e
#define public_6323343 _public_6323343
#define public_6323351 _public_6323351
#define public_632335f _public_632335f
#define public_6323362 _public_6323362
#define public_6323376 _public_6323376
#define public_6323385 _public_6323385
#define public_6323394 _public_6323394
#define public_6323397 _public_6323397
#define public_63233c0 _public_63233c0
#define public_632340b _public_632340b
#define public_632341e _public_632341e
#define public_6323429 _public_6323429
#define public_632342c _public_632342c
#define public_6323437 _public_6323437
#define public_6323450 _public_6323450
#define public_6323480 _public_6323480
#define public_632349a _public_632349a
#define public_63234c9 _public_63234c9
#define public_63234dc _public_63234dc
#define public_63234e9 _public_63234e9
#define public_63234eb _public_63234eb
#define public_63234f6 _public_63234f6
#define public_6323513 _public_6323513
#define public_632352e _public_632352e
#define public_632353b _public_632353b
#define public_632353d _public_632353d
#define public_6323549 _public_6323549
#define public_632357f _public_632357f
#define public_6323597 _public_6323597
#define public_63235a7 _public_63235a7
#define public_63235b1 _public_63235b1
#define public_63235dd _public_63235dd
#define public_63235f0 _public_63235f0
#define public_63235fb _public_63235fb
#define public_63235fe _public_63235fe
#define public_6323608 _public_6323608
#define public_632363d _public_632363d
#define public_6323650 _public_6323650
#define public_632365d _public_632365d
#define public_632365f _public_632365f
#define public_6323662 _public_6323662
#define public_6323665 _public_6323665
#define public_632366f _public_632366f

PROC_DECLARE(0x6323240, internal_6323240, public_6323240);
extern "C" NAKED register_t __cdecl internal_6323240()
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
        call public_63238a0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6323282
        mov eax, dword ptr ds : [esi+8]
        public_6323264 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6323320
        mov dword ptr ds : [ecx+4], eax
        jmp public_632332e
        public_6323282 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_632328d
        mov eax, edx
        jmp public_6323264
        public_632328d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x9D]
        test bl, bl
        jne public_63232ae
        lea esp, ss:[esp]
        public_63232a0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x9D]
        test bl, bl
        je public_63232a0
        public_63232ae : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6323264
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_63232ca
        mov dword ptr ds : [eax+4], ecx
        jmp public_63232e1
        public_63232ca : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_63232e1 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_63232ee
        mov dword ptr ds : [edx+4], ecx
        jmp public_63232fc
        public_63232ee : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_63232f9
        mov dword ptr ds : [edx], ecx
        jmp public_63232fc
        public_63232f9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_63232fc : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x9C]
        mov dl, byte ptr ds : [ecx+0x9C]
        mov byte ptr ds : [ecx+0x9C], bl
        mov byte ptr ds : [esi+0x9C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6323397
        public_6323320 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_632332b
        mov dword ptr ds : [ecx], eax
        jmp public_632332e
        public_632332b : nop
        mov dword ptr ds : [ecx+8], eax
        public_632332e : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6323362
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6323343
        mov edx, dword ptr ds : [esi+4]
        jmp public_632335f
        public_6323343 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x9D]
        test bl, bl
        mov edx, eax
        jne public_632335f
        public_6323351 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x9D]
        test bl, bl
        je public_6323351
        public_632335f : nop
        mov dword ptr ss : [ebp], edx
        public_6323362 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6323397
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6323376
        mov edx, dword ptr ds : [esi+4]
        jmp public_6323394
        public_6323376 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x9D]
        test bl, bl
        mov edx, eax
        jne public_6323394
        public_6323385 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x9D]
        test bl, bl
        je public_6323385
        public_6323394 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6323397 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x9C]
        mov ebx, 1
        cmp cl, bl
        jne public_632366f
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6323665
        lea ebx, ds:[ebx]
        public_63233c0 : nop
        cmp byte ptr ds : [eax+0x9C], bl
        jne public_6323665
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_632349a
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x9C]
        test dl, dl
        jne public_6323437
        mov byte ptr ds : [ecx+0x9C], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x9C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_632340b
        mov dword ptr ds : [esi+4], ecx
        public_632340b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_632341e
        mov dword ptr ds : [esi+4], edx
        jmp public_632342c
        public_632341e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6323429
        mov dword ptr ds : [esi], edx
        jmp public_632342c
        public_6323429 : nop
        mov dword ptr ds : [esi+8], edx
        public_632342c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6323437 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x9C], bl
        jne public_6323450
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x9C], bl
        je public_6323513
        public_6323450 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x9C], bl
        jne public_6323549
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x9C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x9C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6323480
        mov dword ptr ds : [esi+4], ecx
        public_6323480 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_632352e
        mov dword ptr ds : [esi+4], edx
        jmp public_632353d
        public_632349a : nop
        mov dl, byte ptr ds : [ecx+0x9C]
        test dl, dl
        jne public_63234f6
        mov byte ptr ds : [ecx+0x9C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x9C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_63234c9
        mov dword ptr ds : [esi+4], ecx
        public_63234c9 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63234dc
        mov dword ptr ds : [esi+4], edx
        jmp public_63234eb
        public_63234dc : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_63234e9
        mov dword ptr ds : [esi+8], edx
        jmp public_63234eb
        public_63234e9 : nop
        mov dword ptr ds : [esi], edx
        public_63234eb : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_63234f6 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x9C], bl
        jne public_63235b1
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x9C], bl
        jne public_63235b1
        public_6323513 : nop
        mov byte ptr ds : [ecx+0x9C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_63233c0
        jmp public_6323665
        public_632352e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_632353b
        mov dword ptr ds : [esi+8], edx
        jmp public_632353d
        public_632353b : nop
        mov dword ptr ds : [esi], edx
        public_632353d : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6323549 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x9C]
        mov byte ptr ds : [ecx+0x9C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x9C], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x9C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_632357f
        mov dword ptr ds : [esi+4], ecx
        public_632357f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6323597
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6323662
        public_6323597 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_63235a7
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6323662
        public_63235a7 : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6323662
        public_63235b1 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x9C], bl
        jne public_6323608
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x9C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x9C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_63235dd
        mov dword ptr ds : [esi+4], ecx
        public_63235dd : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_63235f0
        mov dword ptr ds : [esi+4], edx
        jmp public_63235fe
        public_63235f0 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_63235fb
        mov dword ptr ds : [esi], edx
        jmp public_63235fe
        public_63235fb : nop
        mov dword ptr ds : [esi+8], edx
        public_63235fe : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6323608 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x9C]
        mov byte ptr ds : [ecx+0x9C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x9C], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x9C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_632363d
        mov dword ptr ds : [esi+4], ecx
        public_632363d : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6323650
        mov dword ptr ds : [esi+4], edx
        jmp public_632365f
        public_6323650 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_632365d
        mov dword ptr ds : [esi+8], edx
        jmp public_632365f
        public_632365d : nop
        mov dword ptr ds : [esi], edx
        public_632365f : nop
        mov dword ptr ds : [edx+8], ecx
        public_6323662 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6323665 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x9C], bl
        public_632366f : nop
        lea ecx, ds:[esi+0xC]
        call public_63221f0
        mov edx, dword ptr ds : [public_6401818]
        push esi
        push ebx
        push edx
        call dword ptr ds : [public_63990ec]
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
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
        UNREACHABLE_TRAP(0x6323240)
    }
}

#undef public_6323264
#undef public_6323282
#undef public_632328d
#undef public_63232a0
#undef public_63232ae
#undef public_63232ca
#undef public_63232e1
#undef public_63232ee
#undef public_63232f9
#undef public_63232fc
#undef public_6323320
#undef public_632332b
#undef public_632332e
#undef public_6323343
#undef public_6323351
#undef public_632335f
#undef public_6323362
#undef public_6323376
#undef public_6323385
#undef public_6323394
#undef public_6323397
#undef public_63233c0
#undef public_632340b
#undef public_632341e
#undef public_6323429
#undef public_632342c
#undef public_6323437
#undef public_6323450
#undef public_6323480
#undef public_632349a
#undef public_63234c9
#undef public_63234dc
#undef public_63234e9
#undef public_63234eb
#undef public_63234f6
#undef public_6323513
#undef public_632352e
#undef public_632353b
#undef public_632353d
#undef public_6323549
#undef public_632357f
#undef public_6323597
#undef public_63235a7
#undef public_63235b1
#undef public_63235dd
#undef public_63235f0
#undef public_63235fb
#undef public_63235fe
#undef public_6323608
#undef public_632363d
#undef public_6323650
#undef public_632365d
#undef public_632365f
#undef public_6323662
#undef public_6323665
#undef public_632366f

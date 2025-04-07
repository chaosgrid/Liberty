#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4180);
CLANG_FORWARD_PROC_SYMBOL(public_6ef44b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef52d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);

#define public_6ef52fe _public_6ef52fe
#define public_6ef5307 _public_6ef5307
#define public_6ef5326 _public_6ef5326
#define public_6ef533b _public_6ef533b
#define public_6ef5347 _public_6ef5347
#define public_6ef5356 _public_6ef5356
#define public_6ef5373 _public_6ef5373
#define public_6ef5383 _public_6ef5383
#define public_6ef5389 _public_6ef5389
#define public_6ef5393 _public_6ef5393
#define public_6ef5398 _public_6ef5398
#define public_6ef53a7 _public_6ef53a7
#define public_6ef53b5 _public_6ef53b5
#define public_6ef53bb _public_6ef53bb
#define public_6ef53c2 _public_6ef53c2
#define public_6ef53c4 _public_6ef53c4
#define public_6ef53d9 _public_6ef53d9
#define public_6ef53ee _public_6ef53ee
#define public_6ef53f6 _public_6ef53f6
#define public_6ef5404 _public_6ef5404
#define public_6ef540a _public_6ef540a
#define public_6ef5411 _public_6ef5411
#define public_6ef5413 _public_6ef5413
#define public_6ef5428 _public_6ef5428
#define public_6ef5435 _public_6ef5435
#define public_6ef5450 _public_6ef5450
#define public_6ef5494 _public_6ef5494
#define public_6ef54ad _public_6ef54ad
#define public_6ef54b9 _public_6ef54b9
#define public_6ef54bd _public_6ef54bd
#define public_6ef54bf _public_6ef54bf
#define public_6ef54c1 _public_6ef54c1
#define public_6ef54c4 _public_6ef54c4

PROC_DECLARE(0x6ef52d0, internal_6ef52d0, public_6ef52d0);
extern "C" NAKED register_t __cdecl internal_6ef52d0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x10]
        mov esi, 0xBF800000
        cmp eax, esi
        push edi
        je public_6ef52fe
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [ebp+0x10]
        fcomp dword ptr ss : [ebp+0xC]
        fnstsw ax
        test ah, 1
        je public_6ef52fe
        xor bl, bl
        mov byte ptr ss : [esp+0x13], bl
        jmp public_6ef5307
        public_6ef52fe : nop
        mov byte ptr ss : [esp+0x13], 1
        mov bl, byte ptr ss : [esp+0x13]
        public_6ef5307 : nop
        lea eax, ss:[ebp+4]
        push eax
        call public_6f75f30
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [ebp+0x10]
        add esp, 4
        cmp eax, esi
        jne public_6ef533b
        mov esi, dword ptr ss : [ebp+0x30]
        cmp esi, dword ptr ss : [ebp+0x34]
        je public_6ef533b
        public_6ef5326 : nop
        push esi
        mov ecx, ebp
        call public_6ef4180
        mov eax, dword ptr ss : [ebp+0x34]
        add esi, 0x80
        cmp esi, eax
        jne public_6ef5326
        public_6ef533b : nop
        mov esi, dword ptr ss : [ebp+0x30]
        cmp esi, dword ptr ss : [ebp+0x34]
        je public_6ef53ee
        public_6ef5347 : nop
        mov ebx, dword ptr ds : [esi+0x64]
        cmp ebx, dword ptr ds : [esi+0x68]
        mov dword ptr ss : [esp+0x14], ebx
        je public_6ef5398
        lea edi, ds:[ebx+4]
        public_6ef5356 : nop
        mov ecx, dword ptr ds : [ebx]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        call public_6f73930
        test eax, eax
        jne public_6ef5389
        mov ecx, dword ptr ds : [esi+0x68]
        cmp edi, ecx
        mov eax, edi
        je public_6ef5383
        mov edx, ebx
        sub edx, edi
        public_6ef5373 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebx
        add eax, 4
        cmp eax, ecx
        jne public_6ef5373
        mov ebx, dword ptr ss : [esp+0x14]
        public_6ef5383 : nop
        add dword ptr ds : [esi+0x68], 0xFFFFFFFC
        jmp public_6ef5393
        public_6ef5389 : nop
        add ebx, 4
        mov dword ptr ss : [esp+0x14], ebx
        add edi, 4
        public_6ef5393 : nop
        cmp ebx, dword ptr ds : [esi+0x68]
        jne public_6ef5356
        public_6ef5398 : nop
        mov cl, byte ptr ss : [esp+0x13]
        test cl, cl
        je public_6ef53a7
        mov dword ptr ds : [esi+0x78], 0
        public_6ef53a7 : nop
        mov eax, dword ptr ds : [esi+4]
        sub eax, 0
        je public_6ef53bb
        dec eax
        je public_6ef53b5
        dec eax
        jmp public_6ef53c2
        public_6ef53b5 : nop
        test cl, cl
        je public_6ef53d9
        jmp public_6ef53c4
        public_6ef53bb : nop
        cmp dword ptr ss : [ebp+0x10], 0xBF800000
        public_6ef53c2 : nop
        jne public_6ef53d9
        public_6ef53c4 : nop
        cmp dword ptr ds : [esi], 1
        je public_6ef53d9
        mov ecx, ebp
        push esi
        call public_6ef44b0
        test al, al
        je public_6ef54ad
        public_6ef53d9 : nop
        mov eax, dword ptr ss : [ebp+0x34]
        add esi, 0x80
        cmp esi, eax
        jne public_6ef5347
        mov bl, byte ptr ss : [esp+0x13]
        public_6ef53ee : nop
        mov esi, dword ptr ss : [ebp+0x30]
        cmp esi, dword ptr ss : [ebp+0x34]
        je public_6ef5435
        public_6ef53f6 : nop
        mov eax, dword ptr ds : [esi+4]
        sub eax, 0
        je public_6ef540a
        dec eax
        je public_6ef5404
        dec eax
        jmp public_6ef5411
        public_6ef5404 : nop
        test bl, bl
        je public_6ef5428
        jmp public_6ef5413
        public_6ef540a : nop
        cmp dword ptr ss : [ebp+0x10], 0xBF800000
        public_6ef5411 : nop
        jne public_6ef5428
        public_6ef5413 : nop
        cmp dword ptr ds : [esi], 1
        jne public_6ef5428
        mov ecx, ebp
        push esi
        call public_6ef44b0
        test al, al
        je public_6ef54ad
        public_6ef5428 : nop
        mov eax, dword ptr ss : [ebp+0x34]
        add esi, 0x80
        cmp esi, eax
        jne public_6ef53f6
        public_6ef5435 : nop
        test bl, bl
        je public_6ef54c4
        mov esi, dword ptr ss : [ebp+0x20]
        fld dword ptr ds : [public_6fb444c]
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, esi
        je public_6ef54bd
        lea ecx, ds:[ecx]
        public_6ef5450 : nop
        fadd dword ptr ds : [eax+0x10]
        add eax, 0x14
        cmp eax, esi
        jne public_6ef5450
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6ef54bf
        call dword ptr ds : [public_6fb3370]
        mov ecx, dword ptr ss : [ebp+0x1C]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6fb4448]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_6fb444c]
        je public_6ef54bd
        public_6ef5494 : nop
        fadd dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [esp+0x18]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_6ef54b9
        add ecx, 0x14
        cmp ecx, esi
        jne public_6ef5494
        jmp public_6ef54bd
        public_6ef54ad : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 4
        public_6ef54b9 : nop
        fstp st(0)
        jmp public_6ef54c1
        public_6ef54bd : nop
        fstp st(0)
        public_6ef54bf : nop
        mov ecx, esi
        public_6ef54c1 : nop
        mov dword ptr ss : [ebp+0x28], ecx
        public_6ef54c4 : nop
        mov edx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], edx
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6ef52d0)
    }
}

#undef public_6ef52fe
#undef public_6ef5307
#undef public_6ef5326
#undef public_6ef533b
#undef public_6ef5347
#undef public_6ef5356
#undef public_6ef5373
#undef public_6ef5383
#undef public_6ef5389
#undef public_6ef5393
#undef public_6ef5398
#undef public_6ef53a7
#undef public_6ef53b5
#undef public_6ef53bb
#undef public_6ef53c2
#undef public_6ef53c4
#undef public_6ef53d9
#undef public_6ef53ee
#undef public_6ef53f6
#undef public_6ef5404
#undef public_6ef540a
#undef public_6ef5411
#undef public_6ef5413
#undef public_6ef5428
#undef public_6ef5435
#undef public_6ef5450
#undef public_6ef5494
#undef public_6ef54ad
#undef public_6ef54b9
#undef public_6ef54bd
#undef public_6ef54bf
#undef public_6ef54c1
#undef public_6ef54c4

#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7ddb);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7e39);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7e67);
CLANG_FORWARD_PROC_SYMBOL(public_6ad842c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9257);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9477);

#define public_6ad848e _public_6ad848e
#define public_6ad8492 _public_6ad8492
#define public_6ad84a3 _public_6ad84a3
#define public_6ad84b8 _public_6ad84b8
#define public_6ad84d1 _public_6ad84d1
#define public_6ad84e0 _public_6ad84e0
#define public_6ad84fa _public_6ad84fa
#define public_6ad8509 _public_6ad8509
#define public_6ad8518 _public_6ad8518
#define public_6ad8521 _public_6ad8521
#define public_6ad8526 _public_6ad8526
#define public_6ad8537 _public_6ad8537
#define public_6ad8598 _public_6ad8598
#define public_6ad85b2 _public_6ad85b2
#define public_6ad85b5 _public_6ad85b5
#define public_6ad85bd _public_6ad85bd
#define public_6ad85d3 _public_6ad85d3
#define public_6ad85f0 _public_6ad85f0
#define public_6ad85fd _public_6ad85fd
#define public_6ad860d _public_6ad860d
#define public_6ad865a _public_6ad865a
#define public_6ad8667 _public_6ad8667
#define public_6ad8676 _public_6ad8676
#define public_6ad867a _public_6ad867a
#define public_6ad867e _public_6ad867e
#define public_6ad8680 _public_6ad8680
#define public_6ad868f _public_6ad868f
#define public_6ad8692 _public_6ad8692
#define public_6ad8697 _public_6ad8697
#define public_6ad86a3 _public_6ad86a3
#define public_6ad86a7 _public_6ad86a7
#define public_6ad86b6 _public_6ad86b6

PROC_DECLARE(0x6ad842c, internal_6ad842c, public_6ad842c);
extern "C" NAKED register_t __cdecl internal_6ad842c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        mov eax, dword ptr ss : [ebp+0x10]
        push ebx
        mov ebx, dword ptr ss : [ebp+0x1C]
        push esi
        mov ecx, eax
        mov esi, 0x7FFF
        and ecx, 0x8000
        and eax, esi
        test cx, cx
        push edi
        mov byte ptr ss : [ebp-0x1C], 0xCC
        mov byte ptr ss : [ebp-0x1B], 0xCC
        mov byte ptr ss : [ebp-0x1A], 0xCC
        mov byte ptr ss : [ebp-0x19], 0xCC
        mov byte ptr ss : [ebp-0x18], 0xCC
        mov byte ptr ss : [ebp-0x17], 0xCC
        mov byte ptr ss : [ebp-0x16], 0xCC
        mov byte ptr ss : [ebp-0x15], 0xCC
        mov byte ptr ss : [ebp-0x14], 0xCC
        mov byte ptr ss : [ebp-0x13], 0xCC
        mov byte ptr ss : [ebp-0x12], 0xFB
        mov byte ptr ss : [ebp-0x11], 0x3F
        mov dword ptr ss : [ebp-4], 1
        mov edx, eax
        je public_6ad848e
        mov byte ptr ds : [ebx+2], 0x2D
        jmp public_6ad8492
        public_6ad848e : nop
        mov byte ptr ds : [ebx+2], 0x20
        public_6ad8492 : nop
        mov edi, dword ptr ss : [ebp+0xC]
        test dx, dx
        jne public_6ad84b8
        test edi, edi
        jne public_6ad84b8
        cmp dword ptr ss : [ebp+8], edi
        jne public_6ad84b8
        public_6ad84a3 : nop
        and word ptr ds : [ebx], 0
        mov byte ptr ds : [ebx+2], 0x20
        mov byte ptr ds : [ebx+3], 1
        mov byte ptr ds : [ebx+4], 0x30
        jmp public_6ad86b6
        public_6ad84b8 : nop
        cmp dx, si
        jne public_6ad8537
        mov eax, 0x80000000
        mov word ptr ds : [ebx], 1
        cmp edi, eax
        jne public_6ad84d1
        cmp dword ptr ss : [ebp+8], 0
        je public_6ad84e0
        public_6ad84d1 : nop
        test edi, 0x40000000
        jne public_6ad84e0
/*FIXUP push offset public_6adaf30 @0x6ad84d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaf30
        jmp public_6ad8526
        public_6ad84e0 : nop
        test cx, cx
        je public_6ad84fa
        cmp edi, 0xC0000000
        jne public_6ad84fa
        cmp dword ptr ss : [ebp+8], 0
        jne public_6ad8521
/*FIXUP push offset public_6adaf28 @0x6ad84f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaf28
        jmp public_6ad8509
        public_6ad84fa : nop
        cmp edi, eax
        jne public_6ad8521
        cmp dword ptr ss : [ebp+8], 0
        jne public_6ad8521
/*FIXUP push offset public_6adaf20 @0x6ad8504*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaf20
        public_6ad8509 : nop
        lea eax, ds:[ebx+4]
        push eax
        call public_6ad3f40
        pop ecx
        mov byte ptr ds : [ebx+3], 5
        pop ecx
        public_6ad8518 : nop
        and dword ptr ss : [ebp-4], 0
        jmp public_6ad868f
/*FIXUP public_6ad8521 : nop
        push offset public_6adaf18 @0x6ad8521*/
  FIXUP public_6ad8521 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaf18
        public_6ad8526 : nop
        lea eax, ds:[ebx+4]
        push eax
        call public_6ad3f40
        pop ecx
        mov byte ptr ds : [ebx+3], 6
        pop ecx
        jmp public_6ad8518
        public_6ad8537 : nop
        movzx eax, dx
        mov ecx, edi
        mov esi, eax
        shr ecx, 0x18
        imul eax, 0x4D10
        shr esi, 8
        and word ptr ss : [ebp-0x10], 0
        push 1
        lea ecx, ds:[esi+ecx*2]
        mov word ptr ss : [ebp-6], dx
        imul ecx, 0x4D
        mov dword ptr ss : [ebp-0xA], edi
        lea esi, ds:[ecx+eax-0x134312F4]
        mov eax, dword ptr ss : [ebp+8]
        sar esi, 0x10
        mov dword ptr ss : [ebp-0xE], eax
        movsx eax, si
        neg eax
        push eax
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6ad9477
        add esp, 0xC
        cmp word ptr ss : [ebp-6], 0x3FFF
        jb public_6ad8598
        lea eax, ss:[ebp-0x1C]
        inc esi
        push eax
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6ad9257
        pop ecx
        pop ecx
        public_6ad8598 : nop
        test byte ptr ss : [ebp+0x18], 1
        mov word ptr ds : [ebx], si
        je public_6ad85b2
        mov edi, dword ptr ss : [ebp+0x14]
        movsx eax, si
        add edi, eax
        test edi, edi
        jg public_6ad85b5
        jmp public_6ad84a3
        public_6ad85b2 : nop
        mov edi, dword ptr ss : [ebp+0x14]
        public_6ad85b5 : nop
        cmp edi, 0x15
        jle public_6ad85bd
        push 0x15
        pop edi
        public_6ad85bd : nop
        movzx esi, word ptr ss : [ebp-6]
        sub esi, 0x3FFE
        and word ptr ss : [ebp-6], 0
        mov dword ptr ss : [ebp+0x1C], 8
        public_6ad85d3 : nop
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6ad7e39
        dec dword ptr ss : [ebp+0x1C]
        pop ecx
        jne public_6ad85d3
        test esi, esi
        jge public_6ad85fd
        neg esi
        and esi, 0xFF
        jle public_6ad85fd
        public_6ad85f0 : nop
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6ad7e67
        dec esi
        pop ecx
        jne public_6ad85f0
        public_6ad85fd : nop
        lea ecx, ds:[edi+1]
        lea eax, ds:[ebx+4]
        test ecx, ecx
        mov dword ptr ss : [ebp+0x1C], eax
        jle public_6ad865a
        mov dword ptr ss : [ebp+0x14], ecx
        public_6ad860d : nop
        lea esi, ss:[ebp-0x10]
        lea edi, ss:[ebp+8]
        movsd 
        movsd 
        lea eax, ss:[ebp-0x10]
        push eax
        movsd 
        call public_6ad7e39
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6ad7e39
        lea eax, ss:[ebp+8]
        push eax
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6ad7ddb
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6ad7e39
        mov al, byte ptr ss : [ebp-5]
        mov ecx, dword ptr ss : [ebp+0x1C]
        and byte ptr ss : [ebp-5], 0
        add esp, 0x14
        add al, 0x30
        inc dword ptr ss : [ebp+0x1C]
        dec dword ptr ss : [ebp+0x14]
        mov byte ptr ds : [ecx], al
        jne public_6ad860d
        mov eax, dword ptr ss : [ebp+0x1C]
        public_6ad865a : nop
        mov cl, byte ptr ds : [eax-1]
        dec eax
        dec eax
        cmp cl, 0x35
        lea ecx, ds:[ebx+4]
        jl public_6ad8697
        public_6ad8667 : nop
        cmp eax, ecx
        jb public_6ad867a
        cmp byte ptr ds : [eax], 0x39
        jne public_6ad8676
        mov byte ptr ds : [eax], 0x30
        dec eax
        jmp public_6ad8667
        public_6ad8676 : nop
        cmp eax, ecx
        jae public_6ad867e
        public_6ad867a : nop
        inc eax
        inc word ptr ds : [ebx]
        public_6ad867e : nop
        inc byte ptr ds : [eax]
        public_6ad8680 : nop
        sub al, bl
        sub al, 3
        mov byte ptr ds : [ebx+3], al
        movsx eax, al
        and byte ptr ds : [eax+ebx+4], 0
        public_6ad868f : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6ad8692 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6ad8697 : nop
        cmp eax, ecx
        jb public_6ad86a7
        cmp byte ptr ds : [eax], 0x30
        jne public_6ad86a3
        dec eax
        jmp public_6ad8697
        public_6ad86a3 : nop
        cmp eax, ecx
        jae public_6ad8680
        public_6ad86a7 : nop
        and word ptr ds : [ebx], 0
        mov byte ptr ds : [ebx+2], 0x20
        mov byte ptr ds : [ebx+3], 1
        mov byte ptr ds : [ecx], 0x30
        public_6ad86b6 : nop
        and byte ptr ds : [ebx+5], 0
        push 1
        pop eax
        jmp public_6ad8692
        UNREACHABLE_TRAP(0x6ad842c)
    }
}

#undef public_6ad848e
#undef public_6ad8492
#undef public_6ad84a3
#undef public_6ad84b8
#undef public_6ad84d1
#undef public_6ad84e0
#undef public_6ad84fa
#undef public_6ad8509
#undef public_6ad8518
#undef public_6ad8521
#undef public_6ad8526
#undef public_6ad8537
#undef public_6ad8598
#undef public_6ad85b2
#undef public_6ad85b5
#undef public_6ad85bd
#undef public_6ad85d3
#undef public_6ad85f0
#undef public_6ad85fd
#undef public_6ad860d
#undef public_6ad865a
#undef public_6ad8667
#undef public_6ad8676
#undef public_6ad867a
#undef public_6ad867e
#undef public_6ad8680
#undef public_6ad868f
#undef public_6ad8692
#undef public_6ad8697
#undef public_6ad86a3
#undef public_6ad86a7
#undef public_6ad86b6

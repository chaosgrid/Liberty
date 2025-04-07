#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad24de);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3817);
CLANG_FORWARD_PROC_SYMBOL(public_6ad6435);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8b91);

#define public_6ad644d _public_6ad644d
#define public_6ad6465 _public_6ad6465
#define public_6ad6474 _public_6ad6474
#define public_6ad647d _public_6ad647d
#define public_6ad648b _public_6ad648b
#define public_6ad6490 _public_6ad6490
#define public_6ad6496 _public_6ad6496
#define public_6ad64c8 _public_6ad64c8
#define public_6ad64db _public_6ad64db
#define public_6ad64de _public_6ad64de
#define public_6ad64f2 _public_6ad64f2
#define public_6ad64fa _public_6ad64fa
#define public_6ad650a _public_6ad650a
#define public_6ad6522 _public_6ad6522
#define public_6ad652d _public_6ad652d
#define public_6ad6539 _public_6ad6539
#define public_6ad654d _public_6ad654d
#define public_6ad6558 _public_6ad6558
#define public_6ad656b _public_6ad656b
#define public_6ad658a _public_6ad658a
#define public_6ad6590 _public_6ad6590
#define public_6ad6599 _public_6ad6599
#define public_6ad65a6 _public_6ad65a6
#define public_6ad65bd _public_6ad65bd
#define public_6ad65c3 _public_6ad65c3
#define public_6ad65de _public_6ad65de
#define public_6ad65e7 _public_6ad65e7
#define public_6ad65fe _public_6ad65fe
#define public_6ad660e _public_6ad660e
#define public_6ad6617 _public_6ad6617
#define public_6ad6625 _public_6ad6625
#define public_6ad662a _public_6ad662a
#define public_6ad6633 _public_6ad6633
#define public_6ad6635 _public_6ad6635

PROC_DECLARE(0x6ad6435, internal_6ad6435, public_6ad6435);
extern "C" NAKED register_t __cdecl internal_6ad6435()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push ebx
        and dword ptr ss : [ebp-8], 0
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov bl, byte ptr ds : [edi]
        lea esi, ds:[edi+1]
        mov dword ptr ss : [ebp-4], esi
        public_6ad644d : nop
        cmp dword ptr ds : [public_6addc10], 1
        jle public_6ad6465
        movzx eax, bl
        push 8
        push eax
        call public_6ad3817
        pop ecx
        pop ecx
        jmp public_6ad6474
        public_6ad6465 : nop
        mov ecx, dword ptr ds : [public_6add750]
        movzx eax, bl
        mov al, byte ptr ds : [ecx+eax*2]
        and eax, 8
        public_6ad6474 : nop
        test eax, eax
        je public_6ad647d
        mov bl, byte ptr ds : [esi]
        inc esi
        jmp public_6ad644d
        public_6ad647d : nop
        cmp bl, 0x2D
        mov dword ptr ss : [ebp-4], esi
        jne public_6ad648b
        or dword ptr ss : [ebp+0x14], 2
        jmp public_6ad6490
        public_6ad648b : nop
        cmp bl, 0x2B
        jne public_6ad6496
        public_6ad6490 : nop
        mov bl, byte ptr ds : [esi]
        inc esi
        mov dword ptr ss : [ebp-4], esi
        public_6ad6496 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jl public_6ad662a
        cmp eax, 1
        je public_6ad662a
        cmp eax, 0x24
        jg public_6ad662a
        push 0x10
        test eax, eax
        pop ecx
        jne public_6ad64de
        cmp bl, 0x30
        je public_6ad64c8
        mov dword ptr ss : [ebp+0x10], 0xA
        jmp public_6ad64fa
        public_6ad64c8 : nop
        mov al, byte ptr ds : [esi]
        cmp al, 0x78
        je public_6ad64db
        cmp al, 0x58
        je public_6ad64db
        mov dword ptr ss : [ebp+0x10], 8
        jmp public_6ad64fa
        public_6ad64db : nop
        mov dword ptr ss : [ebp+0x10], ecx
        public_6ad64de : nop
        cmp dword ptr ss : [ebp+0x10], ecx
        jne public_6ad64fa
        cmp bl, 0x30
        jne public_6ad64fa
        mov al, byte ptr ds : [esi]
        cmp al, 0x78
        je public_6ad64f2
        cmp al, 0x58
        jne public_6ad64fa
        public_6ad64f2 : nop
        mov bl, byte ptr ds : [esi+1]
        inc esi
        inc esi
        mov dword ptr ss : [ebp-4], esi
        public_6ad64fa : nop
        or eax, 0xFFFFFFFF
        xor edx, edx
        div dword ptr ss : [ebp+0x10]
        mov edi, 0x103
        mov dword ptr ss : [ebp-0xC], eax
        public_6ad650a : nop
        cmp dword ptr ds : [public_6addc10], 1
        movzx esi, bl
        jle public_6ad6522
        push 4
        push esi
        call public_6ad3817
        pop ecx
        pop ecx
        jmp public_6ad652d
        public_6ad6522 : nop
        mov eax, dword ptr ds : [public_6add750]
        mov al, byte ptr ds : [eax+esi*2]
        and eax, 4
        public_6ad652d : nop
        test eax, eax
        je public_6ad6539
        movsx ecx, bl
        sub ecx, 0x30
        jmp public_6ad656b
        public_6ad6539 : nop
        cmp dword ptr ds : [public_6addc10], 1
        jle public_6ad654d
        push edi
        push esi
        call public_6ad3817
        pop ecx
        pop ecx
        jmp public_6ad6558
        public_6ad654d : nop
        mov eax, dword ptr ds : [public_6add750]
        mov ax, word ptr ds : [eax+esi*2]
        and eax, edi
        public_6ad6558 : nop
        test eax, eax
        je public_6ad65a6
        movsx eax, bl
        push eax
        call public_6ad8b91
        pop ecx
        mov ecx, eax
        sub ecx, 0x37
        public_6ad656b : nop
        cmp ecx, dword ptr ss : [ebp+0x10]
        jae public_6ad65a6
        mov esi, dword ptr ss : [ebp-8]
        or dword ptr ss : [ebp+0x14], 8
        cmp esi, dword ptr ss : [ebp-0xC]
        jb public_6ad6590
        jne public_6ad658a
        or eax, 0xFFFFFFFF
        xor edx, edx
        div dword ptr ss : [ebp+0x10]
        cmp ecx, edx
        jbe public_6ad6590
        public_6ad658a : nop
        or dword ptr ss : [ebp+0x14], 4
        jmp public_6ad6599
        public_6ad6590 : nop
        imul esi, dword ptr ss : [ebp+0x10]
        add esi, ecx
        mov dword ptr ss : [ebp-8], esi
        public_6ad6599 : nop
        mov eax, dword ptr ss : [ebp-4]
        inc dword ptr ss : [ebp-4]
        mov bl, byte ptr ds : [eax]
        jmp public_6ad650a
        public_6ad65a6 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        dec dword ptr ss : [ebp-4]
        mov ebx, dword ptr ss : [ebp+0xC]
        test al, 8
        jne public_6ad65c3
        test ebx, ebx
        je public_6ad65bd
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        public_6ad65bd : nop
        and dword ptr ss : [ebp-8], 0
        jmp public_6ad660e
        public_6ad65c3 : nop
        test al, 4
        mov esi, 0x7FFFFFFF
        jne public_6ad65e7
        test al, 1
        jne public_6ad660e
        and eax, 2
        je public_6ad65de
        cmp dword ptr ss : [ebp-8], 0x80000000
        ja public_6ad65e7
        public_6ad65de : nop
        test eax, eax
        jne public_6ad660e
        cmp dword ptr ss : [ebp-8], esi
        jbe public_6ad660e
        public_6ad65e7 : nop
        call public_6ad24de
        test byte ptr ss : [ebp+0x14], 1
        mov dword ptr ds : [eax], 0x22
        je public_6ad65fe
        or dword ptr ss : [ebp-8], 0xFFFFFFFF
        jmp public_6ad660e
        public_6ad65fe : nop
        mov eax, dword ptr ss : [ebp+0x14]
        and al, 2
        neg al
        sbb eax, eax
        neg eax
        add eax, esi
        mov dword ptr ss : [ebp-8], eax
        public_6ad660e : nop
        test ebx, ebx
        je public_6ad6617
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ebx], eax
        public_6ad6617 : nop
        test byte ptr ss : [ebp+0x14], 2
        je public_6ad6625
        mov eax, dword ptr ss : [ebp-8]
        neg eax
        mov dword ptr ss : [ebp-8], eax
        public_6ad6625 : nop
        mov eax, dword ptr ss : [ebp-8]
        jmp public_6ad6635
        public_6ad662a : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6ad6633
        mov dword ptr ds : [eax], edi
        public_6ad6633 : nop
        xor eax, eax
        public_6ad6635 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad6435)
    }
}

#undef public_6ad644d
#undef public_6ad6465
#undef public_6ad6474
#undef public_6ad647d
#undef public_6ad648b
#undef public_6ad6490
#undef public_6ad6496
#undef public_6ad64c8
#undef public_6ad64db
#undef public_6ad64de
#undef public_6ad64f2
#undef public_6ad64fa
#undef public_6ad650a
#undef public_6ad6522
#undef public_6ad652d
#undef public_6ad6539
#undef public_6ad654d
#undef public_6ad6558
#undef public_6ad656b
#undef public_6ad658a
#undef public_6ad6590
#undef public_6ad6599
#undef public_6ad65a6
#undef public_6ad65bd
#undef public_6ad65c3
#undef public_6ad65de
#undef public_6ad65e7
#undef public_6ad65fe
#undef public_6ad660e
#undef public_6ad6617
#undef public_6ad6625
#undef public_6ad662a
#undef public_6ad6633
#undef public_6ad6635

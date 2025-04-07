#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7880);
CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);
CLANG_FORWARD_PROC_SYMBOL(public_65d8120);
CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65daa54);
CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65dd010);
CLANG_FORWARD_PROC_SYMBOL(public_65dd100);
CLANG_FORWARD_PROC_SYMBOL(public_65dddb9);
CLANG_FORWARD_PROC_SYMBOL(public_65dde44);

#define public_65daae2 _public_65daae2
#define public_65dab06 _public_65dab06
#define public_65dab12 _public_65dab12
#define public_65dab4e _public_65dab4e
#define public_65dab56 _public_65dab56
#define public_65dab92 _public_65dab92
#define public_65dabb5 _public_65dabb5
#define public_65dac14 _public_65dac14
#define public_65dac2b _public_65dac2b
#define public_65dac39 _public_65dac39
#define public_65dac3c _public_65dac3c
#define public_65dac5a _public_65dac5a
#define public_65dac67 _public_65dac67
#define public_65dac82 _public_65dac82
#define public_65dac8f _public_65dac8f
#define public_65dac9d _public_65dac9d
#define public_65dacc5 _public_65dacc5
#define public_65daccf _public_65daccf
#define public_65dacd6 _public_65dacd6

PROC_DECLARE(0x65daa54, internal_65daa54, public_65daa54);
extern "C" NAKED register_t __cdecl internal_65daa54()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        push 0xC
        pop edi
        xor ebx, ebx
        push edi
        mov dword ptr ss : [ebp-8], ebx
        call public_65dceab
        or dword ptr ds : [public_65e3500], 0xFFFFFFFF
        or dword ptr ds : [public_65e34f0], 0xFFFFFFFF
        mov dword ptr ds : [public_65e6178], ebx
        mov dword ptr ss : [esp], offset public_65e1798
        call public_65dde44
        mov esi, eax
        pop ecx
        cmp esi, ebx
        jne public_65dab92
        push edi
        call public_65dcf0c
        mov dword ptr ss : [esp], offset public_65e6180
        call dword ptr ds : [public_65e1044]
        cmp eax, 0xFFFFFFFF
        je public_65dacd6
        mov eax, dword ptr ds : [public_65e6180]
        mov ecx, dword ptr ds : [public_65e61d4]
        imul eax, 0x3C
        cmp word ptr ds : [public_65e61c6], bx
        push 1
        pop edx
        mov dword ptr ds : [public_65e345c], eax
        mov dword ptr ds : [public_65e6178], edx
        je public_65daae2
        mov esi, ecx
        imul esi, 0x3C
        add eax, esi
        mov dword ptr ds : [public_65e345c], eax
        public_65daae2 : nop
        cmp word ptr ds : [public_65e621a], bx
        je public_65dab06
        mov eax, dword ptr ds : [public_65e6228]
        cmp eax, ebx
        je public_65dab06
        sub eax, ecx
        mov dword ptr ds : [public_65e3460], edx
        imul eax, 0x3C
        mov dword ptr ds : [public_65e3464], eax
        jmp public_65dab12
        public_65dab06 : nop
        mov dword ptr ds : [public_65e3460], ebx
        mov dword ptr ds : [public_65e3464], ebx
        public_65dab12 : nop
        lea eax, ss:[ebp-4]
        mov esi, dword ptr ds : [public_65e1094]
        push eax
        push ebx
        push 0x3F
        mov edi, 0x220
        push dword ptr ds : [public_65e34e8]
        push 0xFFFFFFFF
/*FIXUP push offset public_65e6184 @0x65dab2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e6184
        push edi
        push dword ptr ds : [public_65e63f8]
        call esi
        test eax, eax
        je public_65dab4e
        cmp dword ptr ss : [ebp-4], ebx
        jne public_65dab4e
        mov eax, dword ptr ds : [public_65e34e8]
        and byte ptr ds : [eax+0x3F], 0
        jmp public_65dab56
        public_65dab4e : nop
        mov eax, dword ptr ds : [public_65e34e8]
        and byte ptr ds : [eax], 0
        public_65dab56 : nop
        lea eax, ss:[ebp-4]
        push eax
        push ebx
        push 0x3F
        push dword ptr ds : [public_65e34ec]
        push 0xFFFFFFFF
/*FIXUP push offset public_65e61d8 @0x65dab65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e61d8
        push edi
        push dword ptr ds : [public_65e63f8]
        call esi
        test eax, eax
        je public_65dacc5
        cmp dword ptr ss : [ebp-4], ebx
        jne public_65dacc5
        mov eax, dword ptr ds : [public_65e34ec]
        and byte ptr ds : [eax+0x3F], 0
        jmp public_65dacd6
        public_65dab92 : nop
        cmp byte ptr ds : [esi], 0
        je public_65daccf
        mov eax, dword ptr ds : [public_65e622c]
        cmp eax, ebx
        je public_65dabb5
        push eax
        push esi
        call public_65dd100
        pop ecx
        test eax, eax
        pop ecx
        je public_65daccf
        public_65dabb5 : nop
        push dword ptr ds : [public_65e622c]
        call public_65d7f23
        push esi
        call public_65d8120
        inc eax
        push eax
        call public_65d8535
        add esp, 0xC
        cmp eax, ebx
        mov dword ptr ds : [public_65e622c], eax
        je public_65daccf
        push esi
        push eax
        call public_65dd010
        push edi
        call public_65dcf0c
        push 3
        push esi
        push dword ptr ds : [public_65e34e8]
        call public_65d7880
        mov eax, dword ptr ds : [public_65e34e8]
        add esi, 3
        add esp, 0x18
        and byte ptr ds : [eax+3], 0
        cmp byte ptr ds : [esi], 0x2D
        jne public_65dac14
        mov dword ptr ss : [ebp-8], 1
        inc esi
        public_65dac14 : nop
        push esi
        call public_65dddb9
        pop ecx
        mov bl, 0x30
        mov ecx, eax
        imul ecx, 0xE10
        mov dword ptr ds : [public_65e345c], ecx
        public_65dac2b : nop
        mov al, byte ptr ds : [esi]
        cmp al, 0x2B
        je public_65dac39
        cmp al, bl
        jl public_65dac3c
        cmp al, 0x39
        jg public_65dac3c
        public_65dac39 : nop
        inc esi
        jmp public_65dac2b
        public_65dac3c : nop
        cmp byte ptr ds : [esi], 0x3A
        jne public_65dac8f
        inc esi
        push esi
        call public_65dddb9
        imul eax, 0x3C
        pop ecx
        mov ecx, dword ptr ds : [public_65e345c]
        add ecx, eax
        mov dword ptr ds : [public_65e345c], ecx
        public_65dac5a : nop
        mov al, byte ptr ds : [esi]
        cmp al, bl
        jl public_65dac67
        cmp al, 0x39
        jg public_65dac67
        inc esi
        jmp public_65dac5a
        public_65dac67 : nop
        cmp byte ptr ds : [esi], 0x3A
        jne public_65dac8f
        inc esi
        push esi
        call public_65dddb9
        pop ecx
        mov ecx, dword ptr ds : [public_65e345c]
        add ecx, eax
        mov dword ptr ds : [public_65e345c], ecx
        public_65dac82 : nop
        mov al, byte ptr ds : [esi]
        cmp al, bl
        jl public_65dac8f
        cmp al, 0x39
        jg public_65dac8f
        inc esi
        jmp public_65dac82
        public_65dac8f : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_65dac9d
        neg ecx
        mov dword ptr ds : [public_65e345c], ecx
        public_65dac9d : nop
        movsx eax, byte ptr ds : [esi]
        test eax, eax
        mov dword ptr ds : [public_65e3460], eax
        je public_65dacc5
        push 3
        push esi
        push dword ptr ds : [public_65e34ec]
        call public_65d7880
        mov eax, dword ptr ds : [public_65e34ec]
        add esp, 0xC
        and byte ptr ds : [eax+3], 0
        jmp public_65dacd6
        public_65dacc5 : nop
        mov eax, dword ptr ds : [public_65e34ec]
        and byte ptr ds : [eax], 0
        jmp public_65dacd6
        public_65daccf : nop
        push edi
        call public_65dcf0c
        pop ecx
        public_65dacd6 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65daa54)
    }
}

#undef public_65daae2
#undef public_65dab06
#undef public_65dab12
#undef public_65dab4e
#undef public_65dab56
#undef public_65dab92
#undef public_65dabb5
#undef public_65dac14
#undef public_65dac2b
#undef public_65dac39
#undef public_65dac3c
#undef public_65dac5a
#undef public_65dac67
#undef public_65dac82
#undef public_65dac8f
#undef public_65dac9d
#undef public_65dacc5
#undef public_65daccf
#undef public_65dacd6

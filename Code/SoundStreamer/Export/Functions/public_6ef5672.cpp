#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef46b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5645);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5672);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8f78);
CLANG_FORWARD_PROC_SYMBOL(public_6ef91b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9270);
CLANG_FORWARD_PROC_SYMBOL(public_6ef92f0);

#define public_6ef56b5 _public_6ef56b5
#define public_6ef56e4 _public_6ef56e4
#define public_6ef56f2 _public_6ef56f2
#define public_6ef56f7 _public_6ef56f7
#define public_6ef5719 _public_6ef5719
#define public_6ef573a _public_6ef573a
#define public_6ef5748 _public_6ef5748
#define public_6ef574d _public_6ef574d
#define public_6ef5762 _public_6ef5762
#define public_6ef577b _public_6ef577b
#define public_6ef5784 _public_6ef5784
#define public_6ef5785 _public_6ef5785
#define public_6ef5789 _public_6ef5789
#define public_6ef57a4 _public_6ef57a4
#define public_6ef57b7 _public_6ef57b7

PROC_DECLARE(0x6ef5672, internal_6ef5672, public_6ef5672);
extern "C" NAKED register_t __cdecl internal_6ef5672()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x122C
        call public_6ef46b0
        lea eax, ss:[ebp-0x98]
        push ebx
        push eax
        mov dword ptr ss : [ebp-0x98], 0x94
        call dword ptr ds : [public_6efc010]
        test eax, eax
        je public_6ef56b5
        cmp dword ptr ss : [ebp-0x88], 2
        jne public_6ef56b5
        cmp dword ptr ss : [ebp-0x94], 5
        jb public_6ef56b5
        push 1
        pop eax
        jmp public_6ef57b7
        public_6ef56b5 : nop
        lea eax, ss:[ebp-0x122C]
        push 0x1090
        push eax
/*FIXUP push offset public_6efc330 @0x6ef56c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc330
        call dword ptr ds : [public_6efc09c]
        test eax, eax
        je public_6ef57a4
        xor ebx, ebx
        lea ecx, ss:[ebp-0x122C]
        cmp byte ptr ss : [ebp-0x122C], bl
        je public_6ef56f7
        public_6ef56e4 : nop
        mov al, byte ptr ds : [ecx]
        cmp al, 0x61
        jl public_6ef56f2
        cmp al, 0x7A
        jg public_6ef56f2
        sub al, 0x20
        mov byte ptr ds : [ecx], al
        public_6ef56f2 : nop
        inc ecx
        cmp byte ptr ds : [ecx], bl
        jne public_6ef56e4
        public_6ef56f7 : nop
        lea eax, ss:[ebp-0x122C]
        push 0x16
        push eax
/*FIXUP push offset public_6efc318 @0x6ef5700*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc318
        call public_6ef92f0
        add esp, 0xC
        test eax, eax
        jne public_6ef5719
        lea eax, ss:[ebp-0x122C]
        jmp public_6ef5762
        public_6ef5719 : nop
        lea eax, ss:[ebp-0x19C]
        push 0x104
        push eax
        push ebx
        call dword ptr ds : [public_6efc00c]
        cmp byte ptr ss : [ebp-0x19C], bl
        lea ecx, ss:[ebp-0x19C]
        je public_6ef574d
        public_6ef573a : nop
        mov al, byte ptr ds : [ecx]
        cmp al, 0x61
        jl public_6ef5748
        cmp al, 0x7A
        jg public_6ef5748
        sub al, 0x20
        mov byte ptr ds : [ecx], al
        public_6ef5748 : nop
        inc ecx
        cmp byte ptr ds : [ecx], bl
        jne public_6ef573a
        public_6ef574d : nop
        lea eax, ss:[ebp-0x19C]
        push eax
        lea eax, ss:[ebp-0x122C]
        push eax
        call public_6ef9270
        pop ecx
        pop ecx
        public_6ef5762 : nop
        cmp eax, ebx
        je public_6ef57a4
        push 0x2C
        push eax
        call public_6ef91b0
        pop ecx
        cmp eax, ebx
        pop ecx
        je public_6ef57a4
        inc eax
        mov ecx, eax
        cmp byte ptr ds : [eax], bl
        je public_6ef5789
        public_6ef577b : nop
        cmp byte ptr ds : [ecx], 0x3B
        jne public_6ef5784
        mov byte ptr ds : [ecx], bl
        jmp public_6ef5785
        public_6ef5784 : nop
        inc ecx
        public_6ef5785 : nop
        cmp byte ptr ds : [ecx], bl
        jne public_6ef577b
        public_6ef5789 : nop
        push 0xA
        push ebx
        push eax
        call public_6ef8f78
        add esp, 0xC
        cmp eax, 2
        je public_6ef57b7
        cmp eax, 3
        je public_6ef57b7
        cmp eax, 1
        je public_6ef57b7
        public_6ef57a4 : nop
        lea eax, ss:[ebp-4]
        push eax
        call public_6ef5645
        cmp byte ptr ss : [ebp-4], 6
        pop ecx
        sbb eax, eax
        add eax, 3
        public_6ef57b7 : nop
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef5672)
    }
}

#undef public_6ef56b5
#undef public_6ef56e4
#undef public_6ef56f2
#undef public_6ef56f7
#undef public_6ef5719
#undef public_6ef573a
#undef public_6ef5748
#undef public_6ef574d
#undef public_6ef5762
#undef public_6ef577b
#undef public_6ef5784
#undef public_6ef5785
#undef public_6ef5789
#undef public_6ef57a4
#undef public_6ef57b7

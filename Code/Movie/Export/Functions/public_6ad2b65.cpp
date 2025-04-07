#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2b38);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2b65);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad641e);
CLANG_FORWARD_PROC_SYMBOL(public_6ad6650);
CLANG_FORWARD_PROC_SYMBOL(public_6ad6710);

#define public_6ad2ba8 _public_6ad2ba8
#define public_6ad2bd7 _public_6ad2bd7
#define public_6ad2be5 _public_6ad2be5
#define public_6ad2bea _public_6ad2bea
#define public_6ad2c0c _public_6ad2c0c
#define public_6ad2c2d _public_6ad2c2d
#define public_6ad2c3b _public_6ad2c3b
#define public_6ad2c40 _public_6ad2c40
#define public_6ad2c55 _public_6ad2c55
#define public_6ad2c6e _public_6ad2c6e
#define public_6ad2c77 _public_6ad2c77
#define public_6ad2c78 _public_6ad2c78
#define public_6ad2c7c _public_6ad2c7c
#define public_6ad2c97 _public_6ad2c97
#define public_6ad2caa _public_6ad2caa

PROC_DECLARE(0x6ad2b65, internal_6ad2b65, public_6ad2b65);
extern "C" NAKED register_t __cdecl internal_6ad2b65()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x122C
        call public_6acf7c0
        lea eax, ss:[ebp-0x98]
        push ebx
        push eax
        mov dword ptr ss : [ebp-0x98], 0x94
        call dword ptr ds : [public_6ada060]
        test eax, eax
        je public_6ad2ba8
        cmp dword ptr ss : [ebp-0x88], 2
        jne public_6ad2ba8
        cmp dword ptr ss : [ebp-0x94], 5
        jb public_6ad2ba8
        push 1
        pop eax
        jmp public_6ad2caa
        public_6ad2ba8 : nop
        lea eax, ss:[ebp-0x122C]
        push 0x1090
        push eax
/*FIXUP push offset public_6adab3c @0x6ad2bb4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adab3c
        call dword ptr ds : [public_6ada0d0]
        test eax, eax
        je public_6ad2c97
        xor ebx, ebx
        lea ecx, ss:[ebp-0x122C]
        cmp byte ptr ss : [ebp-0x122C], bl
        je public_6ad2bea
        public_6ad2bd7 : nop
        mov al, byte ptr ds : [ecx]
        cmp al, 0x61
        jl public_6ad2be5
        cmp al, 0x7A
        jg public_6ad2be5
        sub al, 0x20
        mov byte ptr ds : [ecx], al
        public_6ad2be5 : nop
        inc ecx
        cmp byte ptr ds : [ecx], bl
        jne public_6ad2bd7
        public_6ad2bea : nop
        lea eax, ss:[ebp-0x122C]
        push 0x16
        push eax
/*FIXUP push offset public_6adab24 @0x6ad2bf3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adab24
        call public_6ad5fb0
        add esp, 0xC
        test eax, eax
        jne public_6ad2c0c
        lea eax, ss:[ebp-0x122C]
        jmp public_6ad2c55
        public_6ad2c0c : nop
        lea eax, ss:[ebp-0x19C]
        push 0x104
        push eax
        push ebx
        call dword ptr ds : [public_6ada0e4]
        cmp byte ptr ss : [ebp-0x19C], bl
        lea ecx, ss:[ebp-0x19C]
        je public_6ad2c40
        public_6ad2c2d : nop
        mov al, byte ptr ds : [ecx]
        cmp al, 0x61
        jl public_6ad2c3b
        cmp al, 0x7A
        jg public_6ad2c3b
        sub al, 0x20
        mov byte ptr ds : [ecx], al
        public_6ad2c3b : nop
        inc ecx
        cmp byte ptr ds : [ecx], bl
        jne public_6ad2c2d
        public_6ad2c40 : nop
        lea eax, ss:[ebp-0x19C]
        push eax
        lea eax, ss:[ebp-0x122C]
        push eax
        call public_6ad6710
        pop ecx
        pop ecx
        public_6ad2c55 : nop
        cmp eax, ebx
        je public_6ad2c97
        push 0x2C
        push eax
        call public_6ad6650
        pop ecx
        cmp eax, ebx
        pop ecx
        je public_6ad2c97
        inc eax
        mov ecx, eax
        cmp byte ptr ds : [eax], bl
        je public_6ad2c7c
        public_6ad2c6e : nop
        cmp byte ptr ds : [ecx], 0x3B
        jne public_6ad2c77
        mov byte ptr ds : [ecx], bl
        jmp public_6ad2c78
        public_6ad2c77 : nop
        inc ecx
        public_6ad2c78 : nop
        cmp byte ptr ds : [ecx], bl
        jne public_6ad2c6e
        public_6ad2c7c : nop
        push 0xA
        push ebx
        push eax
        call public_6ad641e
        add esp, 0xC
        cmp eax, 2
        je public_6ad2caa
        cmp eax, 3
        je public_6ad2caa
        cmp eax, 1
        je public_6ad2caa
        public_6ad2c97 : nop
        lea eax, ss:[ebp-4]
        push eax
        call public_6ad2b38
        cmp byte ptr ss : [ebp-4], 6
        pop ecx
        sbb eax, eax
        add eax, 3
        public_6ad2caa : nop
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad2b65)
    }
}

#undef public_6ad2ba8
#undef public_6ad2bd7
#undef public_6ad2be5
#undef public_6ad2bea
#undef public_6ad2c0c
#undef public_6ad2c2d
#undef public_6ad2c3b
#undef public_6ad2c40
#undef public_6ad2c55
#undef public_6ad2c6e
#undef public_6ad2c77
#undef public_6ad2c78
#undef public_6ad2c7c
#undef public_6ad2c97
#undef public_6ad2caa

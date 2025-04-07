#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7990);
CLANG_FORWARD_PROC_SYMBOL(public_65db7fc);
CLANG_FORWARD_PROC_SYMBOL(public_65db829);
CLANG_FORWARD_PROC_SYMBOL(public_65de2b5);
CLANG_FORWARD_PROC_SYMBOL(public_65de4e0);
CLANG_FORWARD_PROC_SYMBOL(public_65de560);
CLANG_FORWARD_PROC_SYMBOL(public_65de5a0);

#define public_65db86c _public_65db86c
#define public_65db89b _public_65db89b
#define public_65db8a9 _public_65db8a9
#define public_65db8ae _public_65db8ae
#define public_65db8d0 _public_65db8d0
#define public_65db8f1 _public_65db8f1
#define public_65db8ff _public_65db8ff
#define public_65db904 _public_65db904
#define public_65db919 _public_65db919
#define public_65db932 _public_65db932
#define public_65db93b _public_65db93b
#define public_65db93c _public_65db93c
#define public_65db940 _public_65db940
#define public_65db95b _public_65db95b
#define public_65db96e _public_65db96e

PROC_DECLARE(0x65db829, internal_65db829, public_65db829);
extern "C" NAKED register_t __cdecl internal_65db829()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x122C
        call public_65de5a0
        lea eax, ss:[ebp-0x98]
        push ebx
        push eax
        mov dword ptr ss : [ebp-0x98], 0x94
        call dword ptr ds : [public_65e10c0]
        test eax, eax
        je public_65db86c
        cmp dword ptr ss : [ebp-0x88], 2
        jne public_65db86c
        cmp dword ptr ss : [ebp-0x94], 5
        jb public_65db86c
        push 1
        pop eax
        jmp public_65db96e
        public_65db86c : nop
        lea eax, ss:[ebp-0x122C]
        push 0x1090
        push eax
/*FIXUP push offset public_65e17b4 @0x65db878*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e17b4
        call dword ptr ds : [public_65e10bc]
        test eax, eax
        je public_65db95b
        xor ebx, ebx
        lea ecx, ss:[ebp-0x122C]
        cmp byte ptr ss : [ebp-0x122C], bl
        je public_65db8ae
        public_65db89b : nop
        mov al, byte ptr ds : [ecx]
        cmp al, 0x61
        jl public_65db8a9
        cmp al, 0x7A
        jg public_65db8a9
        sub al, 0x20
        mov byte ptr ds : [ecx], al
        public_65db8a9 : nop
        inc ecx
        cmp byte ptr ds : [ecx], bl
        jne public_65db89b
        public_65db8ae : nop
        lea eax, ss:[ebp-0x122C]
        push 0x16
        push eax
/*FIXUP push offset public_65e179c @0x65db8b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e179c
        call public_65de560
        add esp, 0xC
        test eax, eax
        jne public_65db8d0
        lea eax, ss:[ebp-0x122C]
        jmp public_65db919
        public_65db8d0 : nop
        lea eax, ss:[ebp-0x19C]
        push 0x104
        push eax
        push ebx
        call dword ptr ds : [public_65e100c]
        cmp byte ptr ss : [ebp-0x19C], bl
        lea ecx, ss:[ebp-0x19C]
        je public_65db904
        public_65db8f1 : nop
        mov al, byte ptr ds : [ecx]
        cmp al, 0x61
        jl public_65db8ff
        cmp al, 0x7A
        jg public_65db8ff
        sub al, 0x20
        mov byte ptr ds : [ecx], al
        public_65db8ff : nop
        inc ecx
        cmp byte ptr ds : [ecx], bl
        jne public_65db8f1
        public_65db904 : nop
        lea eax, ss:[ebp-0x19C]
        push eax
        lea eax, ss:[ebp-0x122C]
        push eax
        call public_65de4e0
        pop ecx
        pop ecx
        public_65db919 : nop
        cmp eax, ebx
        je public_65db95b
        push 0x2C
        push eax
        call public_65d7990
        pop ecx
        cmp eax, ebx
        pop ecx
        je public_65db95b
        inc eax
        mov ecx, eax
        cmp byte ptr ds : [eax], bl
        je public_65db940
        public_65db932 : nop
        cmp byte ptr ds : [ecx], 0x3B
        jne public_65db93b
        mov byte ptr ds : [ecx], bl
        jmp public_65db93c
        public_65db93b : nop
        inc ecx
        public_65db93c : nop
        cmp byte ptr ds : [ecx], bl
        jne public_65db932
        public_65db940 : nop
        push 0xA
        push ebx
        push eax
        call public_65de2b5
        add esp, 0xC
        cmp eax, 2
        je public_65db96e
        cmp eax, 3
        je public_65db96e
        cmp eax, 1
        je public_65db96e
        public_65db95b : nop
        lea eax, ss:[ebp-4]
        push eax
        call public_65db7fc
        cmp byte ptr ss : [ebp-4], 6
        pop ecx
        sbb eax, eax
        add eax, 3
        public_65db96e : nop
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65db829)
    }
}

#undef public_65db86c
#undef public_65db89b
#undef public_65db8a9
#undef public_65db8ae
#undef public_65db8d0
#undef public_65db8f1
#undef public_65db8ff
#undef public_65db904
#undef public_65db919
#undef public_65db932
#undef public_65db93b
#undef public_65db93c
#undef public_65db940
#undef public_65db95b
#undef public_65db96e

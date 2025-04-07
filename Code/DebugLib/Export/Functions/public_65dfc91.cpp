#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7990);
CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65dfc91);

#define public_65dfcae _public_65dfcae
#define public_65dfcb9 _public_65dfcb9
#define public_65dfce8 _public_65dfce8
#define public_65dfcf0 _public_65dfcf0
#define public_65dfcf3 _public_65dfcf3
#define public_65dfcff _public_65dfcff
#define public_65dfd0c _public_65dfd0c
#define public_65dfd24 _public_65dfd24

PROC_DECLARE(0x65dfc91, internal_65dfc91, public_65dfc91);
extern "C" NAKED register_t __cdecl internal_65dfc91()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp dword ptr ds : [public_65e66dc], 0
        push ebx
        push esi
        jne public_65dfcae
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_65d7990
        pop ecx
        pop ecx
        jmp public_65dfd24
        public_65dfcae : nop
        push 0x19
        call public_65dceab
        mov esi, dword ptr ss : [ebp+8]
        pop ecx
        public_65dfcb9 : nop
        movzx bx, byte ptr ds : [esi]
        test bx, bx
        je public_65dfd0c
        movzx eax, bl
        test byte ptr ds : [eax+public_65e67e1], 4
        je public_65dfce8
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        je public_65dfcf3
        movzx ecx, bx
        movzx eax, al
        shl ecx, 8
        or ecx, eax
        cmp dword ptr ss : [ebp+0xC], ecx
        je public_65dfcff
        jmp public_65dfcf0
        public_65dfce8 : nop
        movzx eax, bx
        cmp dword ptr ss : [ebp+0xC], eax
        je public_65dfd0c
        public_65dfcf0 : nop
        inc esi
        jmp public_65dfcb9
        public_65dfcf3 : nop
        push 0x19
        call public_65dcf0c
        pop ecx
        xor eax, eax
        jmp public_65dfd24
        public_65dfcff : nop
        push 0x19
        call public_65dcf0c
        pop ecx
        lea eax, ds:[esi-1]
        jmp public_65dfd24
        public_65dfd0c : nop
        push 0x19
        call public_65dcf0c
        mov eax, dword ptr ss : [ebp+0xC]
        pop ecx
        movzx ecx, bx
        sub eax, ecx
        neg eax
        sbb eax, eax
        not eax
        and eax, esi
        public_65dfd24 : nop
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65dfc91)
    }
}

#undef public_65dfcae
#undef public_65dfcb9
#undef public_65dfce8
#undef public_65dfcf0
#undef public_65dfcf3
#undef public_65dfcff
#undef public_65dfd0c
#undef public_65dfd24

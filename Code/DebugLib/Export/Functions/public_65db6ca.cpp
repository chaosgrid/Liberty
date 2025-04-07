#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);
CLANG_FORWARD_PROC_SYMBOL(public_65d8200);
CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65db6ca);

#define public_65db6f9 _public_65db6f9
#define public_65db718 _public_65db718
#define public_65db721 _public_65db721
#define public_65db731 _public_65db731
#define public_65db738 _public_65db738
#define public_65db746 _public_65db746
#define public_65db793 _public_65db793
#define public_65db797 _public_65db797
#define public_65db7a2 _public_65db7a2
#define public_65db7a7 _public_65db7a7
#define public_65db7b7 _public_65db7b7
#define public_65db7bd _public_65db7bd
#define public_65db7c7 _public_65db7c7
#define public_65db7dd _public_65db7dd
#define public_65db7e8 _public_65db7e8
#define public_65db7f3 _public_65db7f3
#define public_65db7f5 _public_65db7f5

PROC_DECLARE(0x65db6ca, internal_65db6ca, public_65db6ca);
extern "C" NAKED register_t __cdecl internal_65db6ca()
{
    __asm
    {
        push ecx
        push ecx
        mov eax, dword ptr ds : [public_65e6360]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_65e10b4]
        push esi
        push edi
        xor ebx, ebx
        xor esi, esi
        xor edi, edi
        cmp eax, ebx
        jne public_65db718
        call ebp
        mov esi, eax
        cmp esi, ebx
        je public_65db6f9
        mov dword ptr ds : [public_65e6360], 1
        jmp public_65db721
        public_65db6f9 : nop
        call dword ptr ds : [public_65e10b0]
        mov edi, eax
        cmp edi, ebx
        je public_65db7f3
        mov dword ptr ds : [public_65e6360], 2
        jmp public_65db7a7
        public_65db718 : nop
        cmp eax, 1
        jne public_65db7a2
        public_65db721 : nop
        cmp esi, ebx
        jne public_65db731
        call ebp
        mov esi, eax
        cmp esi, ebx
        je public_65db7f3
        public_65db731 : nop
        cmp word ptr ds : [esi], bx
        mov eax, esi
        je public_65db746
        public_65db738 : nop
        inc eax
        inc eax
        cmp word ptr ds : [eax], bx
        jne public_65db738
        inc eax
        inc eax
        cmp word ptr ds : [eax], bx
        jne public_65db738
        public_65db746 : nop
        sub eax, esi
        mov edi, dword ptr ds : [public_65e1094]
        sar eax, 1
        push ebx
        push ebx
        inc eax
        push ebx
        push ebx
        push eax
        push esi
        push ebx
        push ebx
        mov dword ptr ss : [esp+0x34], eax
        call edi
        mov ebp, eax
        cmp ebp, ebx
        je public_65db797
        push ebp
        call public_65d8535
        cmp eax, ebx
        pop ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_65db797
        push ebx
        push ebx
        push ebp
        push eax
        push dword ptr ss : [esp+0x24]
        push esi
        push ebx
        push ebx
        call edi
        test eax, eax
        jne public_65db793
        push dword ptr ss : [esp+0x10]
        call public_65d7f23
        pop ecx
        mov dword ptr ss : [esp+0x10], ebx
        public_65db793 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_65db797 : nop
        push esi
        call dword ptr ds : [public_65e1010]
        mov eax, ebx
        jmp public_65db7f5
        public_65db7a2 : nop
        cmp eax, 2
        jne public_65db7f3
        public_65db7a7 : nop
        cmp edi, ebx
        jne public_65db7b7
        call dword ptr ds : [public_65e10b0]
        mov edi, eax
        cmp edi, ebx
        je public_65db7f3
        public_65db7b7 : nop
        cmp byte ptr ds : [edi], bl
        mov eax, edi
        je public_65db7c7
        public_65db7bd : nop
        inc eax
        cmp byte ptr ds : [eax], bl
        jne public_65db7bd
        inc eax
        cmp byte ptr ds : [eax], bl
        jne public_65db7bd
        public_65db7c7 : nop
        sub eax, edi
        inc eax
        mov ebp, eax
        push ebp
        call public_65d8535
        mov esi, eax
        pop ecx
        cmp esi, ebx
        jne public_65db7dd
        xor esi, esi
        jmp public_65db7e8
        public_65db7dd : nop
        push ebp
        push edi
        push esi
        call public_65d8200
        add esp, 0xC
        public_65db7e8 : nop
        push edi
        call dword ptr ds : [public_65e1014]
        mov eax, esi
        jmp public_65db7f5
        public_65db7f3 : nop
        xor eax, eax
        public_65db7f5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65db6ca)
    }
}

#undef public_65db6f9
#undef public_65db718
#undef public_65db721
#undef public_65db731
#undef public_65db738
#undef public_65db746
#undef public_65db793
#undef public_65db797
#undef public_65db7a2
#undef public_65db7a7
#undef public_65db7b7
#undef public_65db7bd
#undef public_65db7c7
#undef public_65db7dd
#undef public_65db7e8
#undef public_65db7f3
#undef public_65db7f5

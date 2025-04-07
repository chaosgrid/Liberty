#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dda42);
CLANG_FORWARD_PROC_SYMBOL(public_65de88a);

#define public_65dda65 _public_65dda65
#define public_65dda67 _public_65dda67
#define public_65dda6b _public_65dda6b
#define public_65dda81 _public_65dda81
#define public_65dda86 _public_65dda86
#define public_65ddaca _public_65ddaca
#define public_65ddad4 _public_65ddad4
#define public_65ddae4 _public_65ddae4

PROC_DECLARE(0x65dda42, internal_65dda42, public_65dda42);
extern "C" NAKED register_t __cdecl internal_65dda42()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        xor ebx, ebx
        cmp esi, ebx
        je public_65dda65
        cmp dword ptr ss : [ebp+0x10], ebx
        je public_65dda65
        mov al, byte ptr ds : [esi]
        cmp al, bl
        jne public_65dda6b
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        je public_65dda65
        mov word ptr ds : [eax], bx
        public_65dda65 : nop
        xor eax, eax
        public_65dda67 : nop
        pop esi
        pop ebx
        pop ebp
        ret 
        public_65dda6b : nop
        cmp dword ptr ds : [public_65e63e8], ebx
        jne public_65dda86
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        je public_65dda81
        movzx ax, al
        mov word ptr ds : [ecx], ax
        public_65dda81 : nop
        push 1
        pop eax
        jmp public_65dda67
        public_65dda86 : nop
        mov ecx, dword ptr ds : [public_65e59d0]
        movzx eax, al
        test byte ptr ds : [ecx+eax*2+1], 0x80
        je public_65ddae4
        mov eax, dword ptr ds : [public_65e5be0]
        cmp eax, 1
        jle public_65ddaca
        cmp dword ptr ss : [ebp+0x10], eax
        jl public_65ddad4
        xor ecx, ecx
        cmp dword ptr ss : [ebp+8], ebx
        setne cl
        push ecx
        push dword ptr ss : [ebp+8]
        push eax
        push esi
        push 9
        push dword ptr ds : [public_65e63f8]
        call dword ptr ds : [public_65e10e8]
        test eax, eax
        mov eax, dword ptr ds : [public_65e5be0]
        jne public_65dda67
        public_65ddaca : nop
        cmp dword ptr ss : [ebp+0x10], eax
        jb public_65ddad4
        cmp byte ptr ds : [esi+1], bl
        jne public_65dda67
        public_65ddad4 : nop
        call public_65de88a
        mov dword ptr ds : [eax], 0x2A
        or eax, 0xFFFFFFFF
        jmp public_65dda67
        public_65ddae4 : nop
        xor eax, eax
        cmp dword ptr ss : [ebp+8], ebx
        setne al
        push eax
        push dword ptr ss : [ebp+8]
        push 1
        push esi
        push 9
        push dword ptr ds : [public_65e63f8]
        call dword ptr ds : [public_65e10e8]
        test eax, eax
        jne public_65dda81
        jmp public_65ddad4
        UNREACHABLE_TRAP(0x65dda42)
    }
}

#undef public_65dda65
#undef public_65dda67
#undef public_65dda6b
#undef public_65dda81
#undef public_65dda86
#undef public_65ddaca
#undef public_65ddad4
#undef public_65ddae4

#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65ddb90);
CLANG_FORWARD_PROC_SYMBOL(public_65defd3);
CLANG_FORWARD_PROC_SYMBOL(public_65dfd53);

#define public_65dfd80 _public_65dfd80
#define public_65dfda2 _public_65dfda2
#define public_65dfdac _public_65dfdac
#define public_65dfdb0 _public_65dfdb0
#define public_65dfdb4 _public_65dfdb4
#define public_65dfdd8 _public_65dfdd8
#define public_65dfde1 _public_65dfde1
#define public_65dfe0c _public_65dfe0c
#define public_65dfe19 _public_65dfe19

PROC_DECLARE(0x65dfd53, internal_65dfd53, public_65dfd53);
extern "C" NAKED register_t __cdecl internal_65dfd53()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr ds : [public_65e63e8], 0
        push ebx
        push esi
        push edi
        jne public_65dfd80
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, 0x41
        jl public_65dfe19
        cmp eax, 0x5A
        jg public_65dfe19
        add eax, 0x20
        jmp public_65dfe19
        public_65dfd80 : nop
        mov ebx, dword ptr ss : [ebp+8]
        mov edi, 0x100
        push 1
        cmp ebx, edi
        pop esi
        jge public_65dfdb4
        cmp dword ptr ds : [public_65e5be0], esi
        jle public_65dfda2
        push esi
        push ebx
        call public_65ddb90
        pop ecx
        pop ecx
        jmp public_65dfdac
        public_65dfda2 : nop
        mov eax, dword ptr ds : [public_65e59d0]
        mov al, byte ptr ds : [eax+ebx*2]
        and eax, esi
        public_65dfdac : nop
        test eax, eax
        jne public_65dfdb4
        public_65dfdb0 : nop
        mov eax, ebx
        jmp public_65dfe19
        public_65dfdb4 : nop
        mov edx, dword ptr ds : [public_65e59d0]
        mov eax, ebx
        sar eax, 8
        movzx ecx, al
        test byte ptr ds : [edx+ecx*2+1], 0x80
        je public_65dfdd8
        and byte ptr ss : [ebp+0xA], 0
        push 2
        mov byte ptr ss : [ebp+8], al
        mov byte ptr ss : [ebp+9], bl
        pop eax
        jmp public_65dfde1
        public_65dfdd8 : nop
        and byte ptr ss : [ebp+9], 0
        mov byte ptr ss : [ebp+8], bl
        mov eax, esi
        public_65dfde1 : nop
        push esi
        push 0
        lea ecx, ss:[ebp-4]
        push 3
        push ecx
        push eax
        lea eax, ss:[ebp+8]
        push eax
        push edi
        push dword ptr ds : [public_65e63e8]
        call public_65defd3
        add esp, 0x20
        test eax, eax
        je public_65dfdb0
        cmp eax, esi
        jne public_65dfe0c
        movzx eax, byte ptr ss : [ebp-4]
        jmp public_65dfe19
        public_65dfe0c : nop
        movzx eax, byte ptr ss : [ebp-3]
        movzx ecx, byte ptr ss : [ebp-4]
        shl eax, 8
        or eax, ecx
        public_65dfe19 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65dfd53)
    }
}

#undef public_65dfd80
#undef public_65dfda2
#undef public_65dfdac
#undef public_65dfdb0
#undef public_65dfdb4
#undef public_65dfdd8
#undef public_65dfde1
#undef public_65dfe0c
#undef public_65dfe19

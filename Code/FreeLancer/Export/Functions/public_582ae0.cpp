#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d660);
CLANG_FORWARD_PROC_SYMBOL(public_580290);
CLANG_FORWARD_PROC_SYMBOL(public_580d00);
CLANG_FORWARD_PROC_SYMBOL(public_5811b0);
CLANG_FORWARD_PROC_SYMBOL(public_59d960);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_582b21 _public_582b21
#define public_582b41 _public_582b41
#define public_582b7b _public_582b7b
#define public_582bc7 _public_582bc7
#define public_582c07 _public_582c07
#define public_582c0d _public_582c0d
#define public_582c41 _public_582c41
#define public_582c4c _public_582c4c

PROC_DECLARE(0x582ae0, internal_582ae0, public_582ae0);
extern "C" NAKED register_t __cdecl internal_582ae0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_5a17b0
        mov al, byte ptr ds : [esi+0x66D]
        xor ebx, ebx
        cmp al, bl
        jne public_582b21
        push esi
        call public_59d960
        add esp, 4
        mov byte ptr ds : [public_67c4c4], bl
        pop edi
        mov byte ptr ds : [esi+0x674], bl
        mov byte ptr ds : [esi+0x675], bl
        mov byte ptr ds : [esi+0x676], bl
        mov byte ptr ds : [esi+0x677], bl
        pop esi
        pop ebx
        ret 
        public_582b21 : nop
        cmp byte ptr ds : [esi+0x674], bl
        je public_582b41
        mov eax, dword ptr ds : [public_616844]
        mov ecx, dword ptr ds : [public_616840]
        push eax
        push ecx
        mov ecx, esi
        call public_5811b0
        pop edi
        pop esi
        pop ebx
        ret 
        public_582b41 : nop
        cmp byte ptr ds : [esi+0x675], bl
        je public_582b7b
        call public_42d660
        fsub dword ptr ds : [esi+0x670]
        fcomp qword ptr ds : [public_5c9858]
        fnstsw ax
        test ah, 0x41
        jne public_582c4c
        mov ecx, esi
        call public_580d00
        call public_42d660
        fstp dword ptr ds : [esi+0x670]
        pop edi
        pop esi
        pop ebx
        ret 
        public_582b7b : nop
        cmp byte ptr ds : [esi+0x676], bl
        je public_582bc7
        call public_42d660
        fsub dword ptr ds : [esi+0x670]
        fcomp qword ptr ds : [public_5c9858]
        fnstsw ax
        test ah, 0x41
        jne public_582c4c
        mov eax, dword ptr ds : [esi+0x664]
        mov ecx, dword ptr ds : [esi+0x65C]
        cmp eax, ecx
        jge public_582c41
        mov edx, dword ptr ds : [esi+0x668]
        add eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi+0x664], eax
        jle public_582c0d
        jmp public_582c07
        public_582bc7 : nop
        cmp byte ptr ds : [esi+0x677], bl
        je public_582c4c
        call public_42d660
        fsub dword ptr ds : [esi+0x670]
        fcomp qword ptr ds : [public_5c9858]
        fnstsw ax
        test ah, 0x41
        jne public_582c4c
        mov eax, dword ptr ds : [esi+0x664]
        mov ecx, dword ptr ds : [esi+0x658]
        cmp eax, ecx
        jle public_582c41
        sub eax, dword ptr ds : [esi+0x668]
        cmp eax, ecx
        mov dword ptr ds : [esi+0x664], eax
        jge public_582c0d
        public_582c07 : nop
        mov dword ptr ds : [esi+0x664], ecx
        public_582c0d : nop
        mov ecx, esi
        call public_580290
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_582c41
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        cmp edi, ebx
        je public_582c41
        mov ecx, dword ptr ds : [esi+0x664]
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [edi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        mov ecx, edi
        push 0x3E
        call dword ptr ds : [ebx+0xA8]
        public_582c41 : nop
        call public_42d660
        fstp dword ptr ds : [esi+0x670]
        public_582c4c : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x582ae0)
    }
}

#undef public_582b21
#undef public_582b41
#undef public_582b7b
#undef public_582bc7
#undef public_582c07
#undef public_582c0d
#undef public_582c41
#undef public_582c4c

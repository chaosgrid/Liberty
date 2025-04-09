#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57db50);

#define public_57da6c _public_57da6c
#define public_57da73 _public_57da73
#define public_57da7a _public_57da7a
#define public_57da81 _public_57da81
#define public_57dac9 _public_57dac9
#define public_57db06 _public_57db06
#define public_57db10 _public_57db10
#define public_57db13 _public_57db13
#define public_57db16 _public_57db16
#define public_57db44 _public_57db44

PROC_DECLARE(0x57da40, internal_57da40, public_57da40);
extern "C" NAKED register_t __cdecl internal_57da40()
{
    __asm
    {
        mov edx, dword ptr ds : [public_67c400]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, edi
        shr eax, 0x10
        and edi, 0xFFFF
        test edx, edx
        je public_57da6c
        mov ecx, dword ptr ds : [public_67c404]
        sub ecx, edx
        sar ecx, 2
        cmp eax, ecx
        jb public_57da73
        public_57da6c : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 
        public_57da73 : nop
        mov esi, dword ptr ds : [edx+eax*4]
        test esi, esi
        jne public_57da81
        public_57da7a : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 
        public_57da81 : nop
        xor eax, eax
        mov ax, di
        push 0
        push eax
        push 0x17
        push esi
        call dword ptr ds : [public_5c6f7c]
        mov ebx, eax
        test ebx, ebx
        je public_57dac9
        push ebx
        push esi
        call dword ptr ds : [public_5c6f10]
        push ebx
        push esi
        mov ebp, eax
        call dword ptr ds : [public_5c6ee4]
        test eax, eax
        je public_57dac9
        push eax
        call dword ptr ds : [public_5c6ee0]
        test eax, eax
        je public_57dac9
        shr ebp, 1
        cmp word ptr ds : [eax], 0xFEFF
        mov esi, ebp
        mov edi, eax
        jne public_57db16
        dec esi
        jmp public_57db13
        public_57dac9 : nop
        mov ebx, edi
        shr edi, 4
        and ebx, 0xF
        xor ecx, ecx
        inc edi
        mov cx, di
        push 0
        push ecx
        push 6
        push esi
        call dword ptr ds : [public_5c6f7c]
        test eax, eax
        je public_57da7a
        push eax
        push esi
        call dword ptr ds : [public_5c6ee4]
        test eax, eax
        je public_57da7a
        push eax
        call dword ptr ds : [public_5c6ee0]
        test eax, eax
        je public_57da7a
        test ebx, ebx
        jbe public_57db10
        public_57db06 : nop
        dec ebx
        movzx edx, word ptr ds : [eax]
        lea eax, ds:[eax+edx*2+2]
        jne public_57db06
        public_57db10 : nop
        movzx esi, word ptr ds : [eax]
        public_57db13 : nop
        lea edi, ds:[eax+2]
        public_57db16 : nop
        mov eax, dword ptr ds : [public_5c6c50]
        mov ebx, dword ptr ss : [esp+0x18]
        lea ecx, ds:[esi+esi]
        push ecx
        push edi
        push ebx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_5c6c4c]
        test al, al
        jne public_57db44
        push 1
        push ebx
        push esi
        push edi
        call public_57db50
        add esp, 0x10
        public_57db44 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x57da40)
    }
}

#undef public_57da6c
#undef public_57da73
#undef public_57da7a
#undef public_57da81
#undef public_57dac9
#undef public_57db06
#undef public_57db10
#undef public_57db13
#undef public_57db16
#undef public_57db44

#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7a90);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0830);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ea7aae _public_6ea7aae
#define public_6ea7ab0 _public_6ea7ab0
#define public_6ea7ae0 _public_6ea7ae0
#define public_6ea7aff _public_6ea7aff
#define public_6ea7b24 _public_6ea7b24
#define public_6ea7b28 _public_6ea7b28
#define public_6ea7b48 _public_6ea7b48

PROC_DECLARE(0x6ea7a90, internal_6ea7a90, public_6ea7a90);
extern "C" NAKED register_t __cdecl internal_6ea7a90()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fcee58]
        mov al, 1
        test al, cl
        jne public_6ea7aae
        or cl, al
        mov byte ptr ds : [public_6fcee58], cl
        mov ecx, offset public_6fcee5c
        jmp public_6ea7ab0
        public_6ea7aae : nop
        ret 
        nop 
        public_6ea7ab0 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6ea7b24
        mov ecx, eax
        cmp eax, ecx
        jne public_6ea7b24
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ea7aff
        nop 
        lea esp, ss:[esp]
        public_6ea7ae0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6eb0830
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ea7ae0
        public_6ea7aff : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6f1df30
        jmp public_6ea7b48
        public_6ea7b24 : nop
        cmp eax, edi
        je public_6ea7b48
        public_6ea7b28 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f1fa00
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f20e00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6ea7b28
        public_6ea7b48 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ea7a90)
    }
}

#undef public_6ea7aae
#undef public_6ea7ab0
#undef public_6ea7ae0
#undef public_6ea7aff
#undef public_6ea7b24
#undef public_6ea7b28
#undef public_6ea7b48

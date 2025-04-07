#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7980);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0870);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0f80);
CLANG_FORWARD_PROC_SYMBOL(public_6eb21b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ea7990 _public_6ea7990
#define public_6ea79c0 _public_6ea79c0
#define public_6ea79e8 _public_6ea79e8
#define public_6ea7a0d _public_6ea7a0d
#define public_6ea7a11 _public_6ea7a11
#define public_6ea7a31 _public_6ea7a31

PROC_DECLARE(0x6ea7980, internal_6ea7980, public_6ea7980);
extern "C" NAKED register_t __cdecl internal_6ea7980()
{
    __asm
    {
        mov ecx, offset public_6fcee70
        jmp public_6ea7990
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6ea7990 : nop
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
        je public_6ea7a0d
        mov ecx, eax
        cmp eax, ecx
        jne public_6ea7a0d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ea79e8
        nop 
        lea esp, ss:[esp]
        public_6ea79c0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6eb0cc0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6eb21b0
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ea79c0
        public_6ea79e8 : nop
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
        jmp public_6ea7a31
        public_6ea7a0d : nop
        cmp eax, edi
        je public_6ea7a31
        public_6ea7a11 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6eb0f80
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6eb0870
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6ea7a11
        public_6ea7a31 : nop
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
        UNREACHABLE_TRAP(0x6ea7980)
    }
}

#undef public_6ea7990
#undef public_6ea79c0
#undef public_6ea79e8
#undef public_6ea7a0d
#undef public_6ea7a11
#undef public_6ea7a31

#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad04ec);
CLANG_FORWARD_PROC_SYMBOL(public_6ad078e);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3f40);

#define public_6ad051a _public_6ad051a
#define public_6ad0527 _public_6ad0527
#define public_6ad053e _public_6ad053e
#define public_6ad0562 _public_6ad0562
#define public_6ad0576 _public_6ad0576
#define public_6ad058d _public_6ad058d
#define public_6ad05a4 _public_6ad05a4
#define public_6ad05a7 _public_6ad05a7

PROC_DECLARE(0x6ad04ec, internal_6ad04ec, public_6ad04ec);
extern "C" NAKED register_t __cdecl internal_6ad04ec()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        xor ebx, ebx
        cmp byte ptr ss : [ebp+0x18], bl
        push esi
        mov esi, dword ptr ss : [ebp+0x14]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        je public_6ad051a
        xor eax, eax
        cmp dword ptr ss : [ebp+0xC], ebx
        setg al
        push eax
        xor eax, eax
        cmp dword ptr ds : [esi], 0x2D
        sete al
        add eax, edi
        push eax
        call public_6ad078e
        pop ecx
        pop ecx
        public_6ad051a : nop
        cmp dword ptr ds : [esi], 0x2D
        mov eax, edi
        jne public_6ad0527
        mov byte ptr ds : [edi], 0x2D
        lea eax, ds:[edi+1]
        public_6ad0527 : nop
        cmp dword ptr ss : [ebp+0xC], ebx
        jle public_6ad053e
        mov dl, byte ptr ds : [eax+1]
        lea ecx, ds:[eax+1]
        mov byte ptr ds : [eax], dl
        mov eax, ecx
        mov cl, byte ptr ds : [public_6addc14]
        mov byte ptr ds : [eax], cl
        public_6ad053e : nop
        xor ecx, ecx
        cmp byte ptr ss : [ebp+0x18], bl
/*FIXUP push offset public_6ada9d0 @0x6ad0543*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada9d0
        sete cl
        add ecx, eax
        add ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6ad3f40
        cmp dword ptr ss : [ebp+0x10], ebx
        pop ecx
        pop ecx
        mov ecx, eax
        je public_6ad0562
        mov byte ptr ds : [ecx], 0x45
        public_6ad0562 : nop
        mov eax, dword ptr ds : [esi+0xC]
        inc ecx
        cmp byte ptr ds : [eax], 0x30
        je public_6ad05a7
        mov ebx, dword ptr ds : [esi+4]
        dec ebx
        jns public_6ad0576
        neg ebx
        mov byte ptr ds : [ecx], 0x2D
        public_6ad0576 : nop
        inc ecx
        cmp ebx, 0x64
        jl public_6ad058d
        mov eax, ebx
        push 0x64
        cdq 
        pop esi
        idiv esi
        add byte ptr ds : [ecx], al
        mov eax, ebx
        cdq 
        idiv esi
        mov ebx, edx
        public_6ad058d : nop
        inc ecx
        cmp ebx, 0xA
        jl public_6ad05a4
        mov eax, ebx
        push 0xA
        cdq 
        pop esi
        idiv esi
        add byte ptr ds : [ecx], al
        mov eax, ebx
        cdq 
        idiv esi
        mov ebx, edx
        public_6ad05a4 : nop
        add byte ptr ds : [ecx+1], bl
        public_6ad05a7 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad04ec)
    }
}

#undef public_6ad051a
#undef public_6ad0527
#undef public_6ad053e
#undef public_6ad0562
#undef public_6ad0576
#undef public_6ad058d
#undef public_6ad05a4
#undef public_6ad05a7

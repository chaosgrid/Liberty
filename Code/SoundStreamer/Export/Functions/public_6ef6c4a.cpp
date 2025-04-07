#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6c4a);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6f62);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8da0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef99ba);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9a31);

#define public_6ef6c7f _public_6ef6c7f
#define public_6ef6cb7 _public_6ef6cb7
#define public_6ef6cc3 _public_6ef6cc3
#define public_6ef6cdb _public_6ef6cdb
#define public_6ef6d02 _public_6ef6d02
#define public_6ef6d16 _public_6ef6d16
#define public_6ef6d2d _public_6ef6d2d
#define public_6ef6d44 _public_6ef6d44
#define public_6ef6d47 _public_6ef6d47

PROC_DECLARE(0x6ef6c4a, internal_6ef6c4a, public_6ef6c4a);
extern "C" NAKED register_t __cdecl internal_6ef6c4a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp byte ptr ds : [public_6f010cc], 0
        push ebx
        push esi
        je public_6ef6c7f
        mov ebx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [public_6f010c8]
        xor ecx, ecx
        mov esi, eax
        test ebx, ebx
        setg cl
        push ecx
        xor ecx, ecx
        cmp dword ptr ds : [eax], 0x2D
        sete cl
        add ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6ef6f62
        pop ecx
        pop ecx
        jmp public_6ef6cb7
        public_6ef6c7f : nop
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push ecx
        fld qword ptr ds : [eax]
        fstp qword ptr ss : [esp]
        call public_6ef9a31
        mov ebx, dword ptr ss : [ebp+0x10]
        mov esi, eax
        push esi
        mov edx, dword ptr ss : [ebp+0xC]
        lea eax, ds:[ebx+1]
        push eax
        xor eax, eax
        cmp dword ptr ds : [esi], 0x2D
        sete al
        xor ecx, ecx
        test ebx, ebx
        setg cl
        add edx, eax
        add ecx, edx
        push ecx
        call public_6ef99ba
        add esp, 0x14
        public_6ef6cb7 : nop
        cmp dword ptr ds : [esi], 0x2D
        mov eax, dword ptr ss : [ebp+0xC]
        jne public_6ef6cc3
        mov byte ptr ds : [eax], 0x2D
        inc eax
        public_6ef6cc3 : nop
        test ebx, ebx
        jle public_6ef6cdb
        mov cl, byte ptr ds : [eax+1]
        push edi
        lea edi, ds:[eax+1]
        mov byte ptr ds : [eax], cl
        mov cl, byte ptr ds : [public_6f00614]
        mov eax, edi
        pop edi
        mov byte ptr ds : [eax], cl
        public_6ef6cdb : nop
        xor ecx, ecx
/*FIXUP push offset public_6efc390 @0x6ef6cdd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc390
        cmp byte ptr ds : [public_6f010cc], cl
        sete cl
        add ecx, eax
        add ecx, ebx
        push ecx
        call public_6ef8da0
        cmp dword ptr ss : [ebp+0x14], 0
        pop ecx
        pop ecx
        mov ecx, eax
        je public_6ef6d02
        mov byte ptr ds : [ecx], 0x45
        public_6ef6d02 : nop
        mov eax, dword ptr ds : [esi+0xC]
        inc ecx
        cmp byte ptr ds : [eax], 0x30
        je public_6ef6d47
        mov ebx, dword ptr ds : [esi+4]
        dec ebx
        jns public_6ef6d16
        neg ebx
        mov byte ptr ds : [ecx], 0x2D
        public_6ef6d16 : nop
        inc ecx
        cmp ebx, 0x64
        jl public_6ef6d2d
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
        public_6ef6d2d : nop
        inc ecx
        cmp ebx, 0xA
        jl public_6ef6d44
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
        public_6ef6d44 : nop
        add byte ptr ds : [ecx+1], bl
        public_6ef6d47 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ef6c4a)
    }
}

#undef public_6ef6c7f
#undef public_6ef6cb7
#undef public_6ef6cc3
#undef public_6ef6cdb
#undef public_6ef6d02
#undef public_6ef6d16
#undef public_6ef6d2d
#undef public_6ef6d44
#undef public_6ef6d47

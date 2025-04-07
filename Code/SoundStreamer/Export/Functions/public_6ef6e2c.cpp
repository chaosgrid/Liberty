#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6e2c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6ec7);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6eee);
CLANG_FORWARD_PROC_SYMBOL(public_6ef99ba);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9a31);

#define public_6ef6e99 _public_6ef6e99
#define public_6ef6ea3 _public_6ef6ea3
#define public_6ef6eb2 _public_6ef6eb2
#define public_6ef6ec2 _public_6ef6ec2

PROC_DECLARE(0x6ef6e2c, internal_6ef6e2c, public_6ef6e2c);
extern "C" NAKED register_t __cdecl internal_6ef6e2c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        push ecx
        push ecx
        fld qword ptr ds : [edi]
        fstp qword ptr ss : [esp]
        call public_6ef9a31
        mov dword ptr ds : [public_6f010c8], eax
        mov ecx, dword ptr ds : [eax+4]
        dec ecx
        mov ebx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [public_6f010d0], ecx
        xor ecx, ecx
        cmp dword ptr ds : [eax], 0x2D
        push eax
        push ebx
        sete cl
        add ecx, dword ptr ss : [ebp+0xC]
        mov esi, ecx
        push esi
        call public_6ef99ba
        mov eax, dword ptr ds : [public_6f010c8]
        add esp, 0x14
        mov ecx, dword ptr ds : [eax+4]
        dec ecx
        cmp dword ptr ds : [public_6f010d0], ecx
        setl cl
        mov byte ptr ds : [public_6f010d4], cl
        mov eax, dword ptr ds : [eax+4]
        dec eax
        cmp eax, 0xFFFFFFFC
        mov dword ptr ds : [public_6f010d0], eax
        jl public_6ef6eb2
        cmp eax, ebx
        jge public_6ef6eb2
        test cl, cl
        je public_6ef6ea3
        public_6ef6e99 : nop
        mov al, byte ptr ds : [esi]
        inc esi
        test al, al
        jne public_6ef6e99
        and byte ptr ds : [esi-2], al
        public_6ef6ea3 : nop
        push ebx
        push dword ptr ss : [ebp+0xC]
        push edi
        call public_6ef6eee
        add esp, 0xC
        jmp public_6ef6ec2
        public_6ef6eb2 : nop
        push dword ptr ss : [ebp+0x14]
        push ebx
        push dword ptr ss : [ebp+0xC]
        push edi
        call public_6ef6ec7
        add esp, 0x10
        public_6ef6ec2 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ef6e2c)
    }
}

#undef public_6ef6e99
#undef public_6ef6ea3
#undef public_6ef6eb2
#undef public_6ef6ec2

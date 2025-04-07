#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6fa2);
CLANG_FORWARD_PROC_SYMBOL(public_6ef77f8);

#define public_6ef7811 _public_6ef7811
#define public_6ef781c _public_6ef781c
#define public_6ef7829 _public_6ef7829

PROC_DECLARE(0x6ef77f8, internal_6ef77f8, public_6ef77f8);
extern "C" NAKED register_t __cdecl internal_6ef77f8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+0xC]
        dec dword ptr ds : [ecx+4]
        js public_6ef7811
        mov edx, dword ptr ds : [ecx]
        mov al, byte ptr ss : [ebp+8]
        mov byte ptr ds : [edx], al
        inc dword ptr ds : [ecx]
        movzx eax, al
        jmp public_6ef781c
        public_6ef7811 : nop
        push ecx
        push dword ptr ss : [ebp+8]
        call public_6ef6fa2
        pop ecx
        pop ecx
        public_6ef781c : nop
        cmp eax, 0xFFFFFFFF
        mov eax, dword ptr ss : [ebp+0x10]
        jne public_6ef7829
        or dword ptr ds : [eax], 0xFFFFFFFF
        pop ebp
        ret 
        public_6ef7829 : nop
        inc dword ptr ds : [eax]
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ef77f8)
    }
}

#undef public_6ef7811
#undef public_6ef781c
#undef public_6ef7829

#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef46e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5230);
CLANG_FORWARD_PROC_SYMBOL(public_6ef99ba);

#define public_6ef99dd _public_6ef99dd
#define public_6ef99e9 _public_6ef99e9
#define public_6ef99ec _public_6ef99ec
#define public_6ef99f7 _public_6ef99f7
#define public_6ef9a03 _public_6ef9a03
#define public_6ef9a0e _public_6ef9a0e
#define public_6ef9a10 _public_6ef9a10
#define public_6ef9a1a _public_6ef9a1a
#define public_6ef9a2c _public_6ef9a2c

PROC_DECLARE(0x6ef99ba, internal_6ef99ba, public_6ef99ba);
extern "C" NAKED register_t __cdecl internal_6ef99ba()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov edx, dword ptr ss : [ebp+0x10]
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edx+0xC]
        push edi
        lea edi, ds:[esi+1]
        mov byte ptr ds : [esi], 0x30
        test ebx, ebx
        mov eax, edi
        jle public_6ef99f7
        mov dword ptr ss : [ebp+8], ebx
        xor ebx, ebx
        public_6ef99dd : nop
        mov dl, byte ptr ds : [ecx]
        test dl, dl
        je public_6ef99e9
        movsx edx, dl
        inc ecx
        jmp public_6ef99ec
        public_6ef99e9 : nop
        push 0x30
        pop edx
        public_6ef99ec : nop
        mov byte ptr ds : [eax], dl
        inc eax
        dec dword ptr ss : [ebp+8]
        jne public_6ef99dd
        mov edx, dword ptr ss : [ebp+0x10]
        public_6ef99f7 : nop
        and byte ptr ds : [eax], 0
        test ebx, ebx
        jl public_6ef9a10
        cmp byte ptr ds : [ecx], 0x35
        jl public_6ef9a10
        public_6ef9a03 : nop
        dec eax
        cmp byte ptr ds : [eax], 0x39
        jne public_6ef9a0e
        mov byte ptr ds : [eax], 0x30
        jmp public_6ef9a03
        public_6ef9a0e : nop
        inc byte ptr ds : [eax]
        public_6ef9a10 : nop
        cmp byte ptr ds : [esi], 0x31
        jne public_6ef9a1a
        inc dword ptr ds : [edx+4]
        jmp public_6ef9a2c
        public_6ef9a1a : nop
        push edi
        call public_6ef5230
        inc eax
        push eax
        push edi
        push esi
        call public_6ef46e0
        add esp, 0x10
        public_6ef9a2c : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ef99ba)
    }
}

#undef public_6ef99dd
#undef public_6ef99e9
#undef public_6ef99ec
#undef public_6ef99f7
#undef public_6ef9a03
#undef public_6ef9a0e
#undef public_6ef9a10
#undef public_6ef9a1a
#undef public_6ef9a2c

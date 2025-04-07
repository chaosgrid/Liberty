#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efab53);
CLANG_FORWARD_PROC_SYMBOL(public_6efabb1);
CLANG_FORWARD_PROC_SYMBOL(public_6efac0c);

#define public_6efac33 _public_6efac33
#define public_6efac80 _public_6efac80
#define public_6efacad _public_6efacad
#define public_6efacb2 _public_6efacb2
#define public_6efacc7 _public_6efacc7

PROC_DECLARE(0x6efac0c, internal_6efac0c, public_6efac0c);
extern "C" NAKED register_t __cdecl internal_6efac0c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        xor edx, edx
        cmp eax, edx
        push esi
        mov dword ptr ss : [ebp-4], 0x404E
        mov dword ptr ds : [ebx], edx
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [ebx+8], edx
        jbe public_6efac80
        push edi
        mov dword ptr ss : [ebp+0x10], eax
        public_6efac33 : nop
        mov esi, ebx
        lea edi, ss:[ebp-0x10]
        movsd 
        movsd 
        push ebx
        movsd 
        call public_6efabb1
        push ebx
        call public_6efabb1
        lea eax, ss:[ebp-0x10]
        push eax
        push ebx
        call public_6efab53
        push ebx
        call public_6efabb1
        mov eax, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp-0xC], 0
        and dword ptr ss : [ebp-8], 0
        movsx eax, byte ptr ds : [eax]
        mov dword ptr ss : [ebp-0x10], eax
        lea eax, ss:[ebp-0x10]
        push eax
        push ebx
        call public_6efab53
        add esp, 0x1C
        inc dword ptr ss : [ebp+8]
        dec dword ptr ss : [ebp+0x10]
        jne public_6efac33
        xor edx, edx
        pop edi
        public_6efac80 : nop
        cmp dword ptr ds : [ebx+8], edx
        jne public_6efacad
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, ecx
        shr eax, 0x10
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [ebx]
        mov esi, eax
        shr esi, 0x10
        shl ecx, 0x10
        or esi, ecx
        shl eax, 0x10
        add dword ptr ss : [ebp-4], 0xFFF0
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [ebx], eax
        jmp public_6efac80
        public_6efacad : nop
        mov esi, 0x8000
        public_6efacb2 : nop
        test dword ptr ds : [ebx+8], esi
        jne public_6efacc7
        push ebx
        call public_6efabb1
        add dword ptr ss : [ebp-4], 0xFFFF
        pop ecx
        jmp public_6efacb2
        public_6efacc7 : nop
        mov ax, word ptr ss : [ebp-4]
        pop esi
        mov word ptr ds : [ebx+0xA], ax
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6efac0c)
    }
}

#undef public_6efac33
#undef public_6efac80
#undef public_6efacad
#undef public_6efacb2
#undef public_6efacc7

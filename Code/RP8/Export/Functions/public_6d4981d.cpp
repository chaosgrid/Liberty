#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4981d);

#define public_6d4982b _public_6d4982b
#define public_6d49848 _public_6d49848
#define public_6d498ff _public_6d498ff
#define public_6d49905 _public_6d49905
#define public_6d4991f _public_6d4991f

PROC_DECLARE(0x6d4981d, internal_6d4981d, public_6d4981d);
extern "C" NAKED register_t __cdecl internal_6d4981d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov edx, dword ptr ss : [ebp+0xC]
        test edx, edx
        jne public_6d4982b
        xor eax, eax
        pop ebp
        ret 
        public_6d4982b : nop
        cmp dword ptr ss : [ebp+0x10], 8
        push esi
        mov esi, dword ptr ss : [ebp+8]
        not esi
        mov ecx, 0xFF
        jb public_6d498ff
        mov eax, dword ptr ss : [ebp+0x10]
        push ebx
        shr eax, 3
        push edi
        public_6d49848 : nop
        xor ebx, ebx
        mov bl, byte ptr ds : [edx]
        mov edi, esi
        shr edi, 8
        sub dword ptr ss : [ebp+0x10], 8
        xor ebx, esi
        and ebx, ecx
        mov esi, dword ptr ds : [ebx*4+public_6d61a80]
        xor ebx, ebx
        xor esi, edi
        inc edx
        mov bl, byte ptr ds : [edx]
        xor ebx, esi
        and ebx, ecx
        mov edi, dword ptr ds : [ebx*4+public_6d61a80]
        xor ebx, ebx
        shr esi, 8
        xor edi, esi
        inc edx
        mov bl, byte ptr ds : [edx]
        xor ebx, edi
        and ebx, ecx
        mov esi, dword ptr ds : [ebx*4+public_6d61a80]
        xor ebx, ebx
        shr edi, 8
        xor esi, edi
        inc edx
        mov bl, byte ptr ds : [edx]
        xor ebx, esi
        and ebx, ecx
        mov edi, dword ptr ds : [ebx*4+public_6d61a80]
        xor ebx, ebx
        shr esi, 8
        xor edi, esi
        inc edx
        mov bl, byte ptr ds : [edx]
        xor ebx, edi
        and ebx, ecx
        mov esi, dword ptr ds : [ebx*4+public_6d61a80]
        xor ebx, ebx
        shr edi, 8
        xor esi, edi
        inc edx
        mov bl, byte ptr ds : [edx]
        xor ebx, esi
        and ebx, ecx
        mov edi, dword ptr ds : [ebx*4+public_6d61a80]
        shr esi, 8
        xor edi, esi
        xor ebx, ebx
        inc edx
        mov bl, byte ptr ds : [edx]
        xor ebx, edi
        and ebx, ecx
        mov esi, dword ptr ds : [ebx*4+public_6d61a80]
        shr edi, 8
        xor esi, edi
        xor ebx, ebx
        inc edx
        mov bl, byte ptr ds : [edx]
        xor ebx, esi
        and ebx, ecx
        mov edi, dword ptr ds : [ebx*4+public_6d61a80]
        shr esi, 8
        xor esi, edi
        inc edx
        dec eax
        jne public_6d49848
        pop edi
        pop ebx
        public_6d498ff : nop
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d4991f
        public_6d49905 : nop
        xor eax, eax
        mov al, byte ptr ds : [edx]
        xor eax, esi
        and eax, ecx
        mov eax, dword ptr ds : [eax*4+public_6d61a80]
        shr esi, 8
        xor esi, eax
        inc edx
        dec dword ptr ss : [ebp+0x10]
        jne public_6d49905
        public_6d4991f : nop
        mov eax, esi
        not eax
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4981d)
    }
}

#undef public_6d4982b
#undef public_6d49848
#undef public_6d498ff
#undef public_6d49905
#undef public_6d4991f

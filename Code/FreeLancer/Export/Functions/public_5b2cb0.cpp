#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ac710);
CLANG_FORWARD_PROC_SYMBOL(public_5b2cb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73d4);

#define public_5b2cd4 _public_5b2cd4
#define public_5b2ce5 _public_5b2ce5
#define public_5b2cf8 _public_5b2cf8
#define public_5b2d16 _public_5b2d16
#define public_5b2d23 _public_5b2d23
#define public_5b2d3c _public_5b2d3c
#define public_5b2d43 _public_5b2d43
#define public_5b2d53 _public_5b2d53

PROC_DECLARE(0x5b2cb0, internal_5b2cb0, public_5b2cb0);
extern "C" NAKED register_t __cdecl internal_5b2cb0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [ebp]
        push edi
        xor edi, edi
        test eax, eax
        jbe public_5b2d53
        push ebx
        mov bl, byte ptr ss : [esp+0x10]
        add ebp, 4
        cmp edi, eax
        push esi
        jb public_5b2cd4
        xor esi, esi
        jmp public_5b2cf8
        public_5b2cd4 : nop
        mov esi, dword ptr ss : [ebp]
        mov al, byte ptr ds : [esi]
        cmp al, 0x2B
        je public_5b2ce5
        cmp al, 0x2D
        je public_5b2ce5
        xor bl, bl
        jmp public_5b2d43
        public_5b2ce5 : nop
        movsx eax, byte ptr ds : [esi+1]
        push eax
        call dword ptr ds : [public_5c70c8]
        add esp, 4
        mov bl, al
        add esi, 2
        public_5b2cf8 : nop
        cmp bl, 0x47
        je public_5b2d3c
        cmp bl, 0x67
        je public_5b2d3c
        cmp bl, 0x50
        je public_5b2d23
        cmp bl, 0x70
        je public_5b2d23
        cmp bl, 0x53
        je public_5b2d16
        cmp bl, 0x73
        jne public_5b2d43
        public_5b2d16 : nop
        push esi
        mov ecx, offset public_67e7b8
        call public_5ac710
        jmp public_5b2d43
        public_5b2d23 : nop
        push esi
        call dword ptr ds : [public_5c70c4]
        add esp, 4
        test eax, eax
        je public_5b2d43
        push eax
        call public_5b73d4
        add esp, 4
        jmp public_5b2d43
        public_5b2d3c : nop
        mov byte ptr ds : [public_67ecc0], 1
        public_5b2d43 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        inc edi
        add ebp, 4
        cmp edi, eax
        jb public_5b2cd4
        pop esi
        pop ebx
        public_5b2d53 : nop
        pop edi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x5b2cb0)
    }
}

#undef public_5b2cd4
#undef public_5b2ce5
#undef public_5b2cf8
#undef public_5b2d16
#undef public_5b2d23
#undef public_5b2d3c
#undef public_5b2d43
#undef public_5b2d53

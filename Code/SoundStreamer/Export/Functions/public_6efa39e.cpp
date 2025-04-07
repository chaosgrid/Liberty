#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efa39e);
CLANG_FORWARD_PROC_SYMBOL(public_6efa79a);
CLANG_FORWARD_PROC_SYMBOL(public_6efa8e3);

#define public_6efa3c8 _public_6efa3c8
#define public_6efa3e7 _public_6efa3e7
#define public_6efa40e _public_6efa40e
#define public_6efa419 _public_6efa419
#define public_6efa494 _public_6efa494
#define public_6efa4aa _public_6efa4aa
#define public_6efa4b2 _public_6efa4b2
#define public_6efa4c7 _public_6efa4c7
#define public_6efa4ce _public_6efa4ce
#define public_6efa4d7 _public_6efa4d7
#define public_6efa4de _public_6efa4de
#define public_6efa4f4 _public_6efa4f4
#define public_6efa4fc _public_6efa4fc
#define public_6efa514 _public_6efa514
#define public_6efa51b _public_6efa51b
#define public_6efa520 _public_6efa520

PROC_DECLARE(0x6efa39e, internal_6efa39e, public_6efa39e);
extern "C" NAKED register_t __cdecl internal_6efa39e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x514
        lea eax, ss:[ebp-0x14]
        push esi
        push eax
        push dword ptr ds : [public_6f012d8]
        call dword ptr ds : [public_6efc02c]
        cmp eax, 1
        jne public_6efa4d7
        xor eax, eax
        mov esi, 0x100
        public_6efa3c8 : nop
        mov byte ptr ss : [ebp+eax-0x114], al
        inc eax
        cmp eax, esi
        jb public_6efa3c8
        mov al, byte ptr ss : [ebp-0xE]
        mov byte ptr ss : [ebp-0x114], 0x20
        test al, al
        je public_6efa419
        push ebx
        push edi
        lea edx, ss:[ebp-0xD]
        public_6efa3e7 : nop
        movzx ecx, byte ptr ds : [edx]
        movzx eax, al
        cmp eax, ecx
        ja public_6efa40e
        sub ecx, eax
        lea edi, ss:[ebp+eax-0x114]
        inc ecx
        mov eax, 0x20202020
        mov ebx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, ebx
        and ecx, 3
        rep stosb
        public_6efa40e : nop
        inc edx
        inc edx
        mov al, byte ptr ds : [edx-1]
        test al, al
        jne public_6efa3e7
        pop edi
        pop ebx
        public_6efa419 : nop
        push 0
        lea eax, ss:[ebp-0x514]
        push dword ptr ds : [public_6f01504]
        push dword ptr ds : [public_6f012d8]
        push eax
        lea eax, ss:[ebp-0x114]
        push esi
        push eax
        push 1
        call public_6efa79a
        push 0
        lea eax, ss:[ebp-0x214]
        push dword ptr ds : [public_6f012d8]
        push esi
        push eax
        lea eax, ss:[ebp-0x114]
        push esi
        push eax
        push esi
        push dword ptr ds : [public_6f01504]
        call public_6efa8e3
        push 0
        lea eax, ss:[ebp-0x314]
        push dword ptr ds : [public_6f012d8]
        push esi
        push eax
        lea eax, ss:[ebp-0x114]
        push esi
        push eax
        push 0x200
        push dword ptr ds : [public_6f01504]
        call public_6efa8e3
        add esp, 0x5C
        xor eax, eax
        lea ecx, ss:[ebp-0x514]
        public_6efa494 : nop
        mov dx, word ptr ds : [ecx]
        test dl, 1
        je public_6efa4b2
        or byte ptr ds : [eax+public_6f01401], 0x10
        mov dl, byte ptr ss : [ebp+eax-0x214]
        public_6efa4aa : nop
        mov byte ptr ds : [eax+public_6f01300], dl
        jmp public_6efa4ce
        public_6efa4b2 : nop
        test dl, 2
        je public_6efa4c7
        or byte ptr ds : [eax+public_6f01401], 0x20
        mov dl, byte ptr ss : [ebp+eax-0x314]
        jmp public_6efa4aa
        public_6efa4c7 : nop
        and byte ptr ds : [eax+public_6f01300], 0
        public_6efa4ce : nop
        inc eax
        inc ecx
        inc ecx
        cmp eax, esi
        jb public_6efa494
        jmp public_6efa520
        public_6efa4d7 : nop
        xor eax, eax
        mov esi, 0x100
        public_6efa4de : nop
        cmp eax, 0x41
        jb public_6efa4fc
        cmp eax, 0x5A
        ja public_6efa4fc
        or byte ptr ds : [eax+public_6f01401], 0x10
        mov cl, al
        add cl, 0x20
        public_6efa4f4 : nop
        mov byte ptr ds : [eax+public_6f01300], cl
        jmp public_6efa51b
        public_6efa4fc : nop
        cmp eax, 0x61
        jb public_6efa514
        cmp eax, 0x7A
        ja public_6efa514
        or byte ptr ds : [eax+public_6f01401], 0x20
        mov cl, al
        sub cl, 0x20
        jmp public_6efa4f4
        public_6efa514 : nop
        and byte ptr ds : [eax+public_6f01300], 0
        public_6efa51b : nop
        inc eax
        cmp eax, esi
        jb public_6efa4de
        public_6efa520 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6efa39e)
    }
}

#undef public_6efa3c8
#undef public_6efa3e7
#undef public_6efa40e
#undef public_6efa419
#undef public_6efa494
#undef public_6efa4aa
#undef public_6efa4b2
#undef public_6efa4c7
#undef public_6efa4ce
#undef public_6efa4d7
#undef public_6efa4de
#undef public_6efa4f4
#undef public_6efa4fc
#undef public_6efa514
#undef public_6efa51b
#undef public_6efa520

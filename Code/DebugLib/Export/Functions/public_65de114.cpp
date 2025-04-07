#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de114);
CLANG_FORWARD_PROC_SYMBOL(public_65deb9f);
CLANG_FORWARD_PROC_SYMBOL(public_65defd3);

#define public_65de13e _public_65de13e
#define public_65de15d _public_65de15d
#define public_65de184 _public_65de184
#define public_65de18f _public_65de18f
#define public_65de20a _public_65de20a
#define public_65de220 _public_65de220
#define public_65de228 _public_65de228
#define public_65de23d _public_65de23d
#define public_65de244 _public_65de244
#define public_65de24d _public_65de24d
#define public_65de254 _public_65de254
#define public_65de26a _public_65de26a
#define public_65de272 _public_65de272
#define public_65de28a _public_65de28a
#define public_65de291 _public_65de291
#define public_65de296 _public_65de296

PROC_DECLARE(0x65de114, internal_65de114, public_65de114);
extern "C" NAKED register_t __cdecl internal_65de114()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x514
        lea eax, ss:[ebp-0x14]
        push esi
        push eax
        push dword ptr ds : [public_65e66cc]
        call dword ptr ds : [public_65e1104]
        cmp eax, 1
        jne public_65de24d
        xor eax, eax
        mov esi, 0x100
        public_65de13e : nop
        mov byte ptr ss : [ebp+eax-0x114], al
        inc eax
        cmp eax, esi
        jb public_65de13e
        mov al, byte ptr ss : [ebp-0xE]
        mov byte ptr ss : [ebp-0x114], 0x20
        test al, al
        je public_65de18f
        push ebx
        push edi
        lea edx, ss:[ebp-0xD]
        public_65de15d : nop
        movzx ecx, byte ptr ds : [edx]
        movzx eax, al
        cmp eax, ecx
        ja public_65de184
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
        public_65de184 : nop
        inc edx
        inc edx
        mov al, byte ptr ds : [edx-1]
        test al, al
        jne public_65de15d
        pop edi
        pop ebx
        public_65de18f : nop
        push 0
        lea eax, ss:[ebp-0x514]
        push dword ptr ds : [public_65e68e4]
        push dword ptr ds : [public_65e66cc]
        push eax
        lea eax, ss:[ebp-0x114]
        push esi
        push eax
        push 1
        call public_65deb9f
        push 0
        lea eax, ss:[ebp-0x214]
        push dword ptr ds : [public_65e66cc]
        push esi
        push eax
        lea eax, ss:[ebp-0x114]
        push esi
        push eax
        push esi
        push dword ptr ds : [public_65e68e4]
        call public_65defd3
        push 0
        lea eax, ss:[ebp-0x314]
        push dword ptr ds : [public_65e66cc]
        push esi
        push eax
        lea eax, ss:[ebp-0x114]
        push esi
        push eax
        push 0x200
        push dword ptr ds : [public_65e68e4]
        call public_65defd3
        add esp, 0x5C
        xor eax, eax
        lea ecx, ss:[ebp-0x514]
        public_65de20a : nop
        mov dx, word ptr ds : [ecx]
        test dl, 1
        je public_65de228
        or byte ptr ds : [eax+public_65e67e1], 0x10
        mov dl, byte ptr ss : [ebp+eax-0x214]
        public_65de220 : nop
        mov byte ptr ds : [eax+public_65e66e0], dl
        jmp public_65de244
        public_65de228 : nop
        test dl, 2
        je public_65de23d
        or byte ptr ds : [eax+public_65e67e1], 0x20
        mov dl, byte ptr ss : [ebp+eax-0x314]
        jmp public_65de220
        public_65de23d : nop
        and byte ptr ds : [eax+public_65e66e0], 0
        public_65de244 : nop
        inc eax
        inc ecx
        inc ecx
        cmp eax, esi
        jb public_65de20a
        jmp public_65de296
        public_65de24d : nop
        xor eax, eax
        mov esi, 0x100
        public_65de254 : nop
        cmp eax, 0x41
        jb public_65de272
        cmp eax, 0x5A
        ja public_65de272
        or byte ptr ds : [eax+public_65e67e1], 0x10
        mov cl, al
        add cl, 0x20
        public_65de26a : nop
        mov byte ptr ds : [eax+public_65e66e0], cl
        jmp public_65de291
        public_65de272 : nop
        cmp eax, 0x61
        jb public_65de28a
        cmp eax, 0x7A
        ja public_65de28a
        or byte ptr ds : [eax+public_65e67e1], 0x20
        mov cl, al
        sub cl, 0x20
        jmp public_65de26a
        public_65de28a : nop
        and byte ptr ds : [eax+public_65e66e0], 0
        public_65de291 : nop
        inc eax
        cmp eax, esi
        jb public_65de254
        public_65de296 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x65de114)
    }
}

#undef public_65de13e
#undef public_65de15d
#undef public_65de184
#undef public_65de18f
#undef public_65de20a
#undef public_65de220
#undef public_65de228
#undef public_65de23d
#undef public_65de244
#undef public_65de24d
#undef public_65de254
#undef public_65de26a
#undef public_65de272
#undef public_65de28a
#undef public_65de291
#undef public_65de296

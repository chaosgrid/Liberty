#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7980);
CLANG_FORWARD_PROC_SYMBOL(public_65d7990);

#define public_65d79a8 _public_65d79a8
#define public_65d79bb _public_65d79bb
#define public_65d79c6 _public_65d79c6
#define public_65d7a02 _public_65d7a02
#define public_65d7a04 _public_65d7a04
#define public_65d7a08 _public_65d7a08
#define public_65d7a30 _public_65d7a30
#define public_65d7a37 _public_65d7a37
#define public_65d7a3e _public_65d7a3e
#define public_65d7a45 _public_65d7a45

PROC_DECLARE(0x65d7990, internal_65d7990, public_65d7990);
extern "C" NAKED register_t __cdecl internal_65d7990()
{
    __asm
    {
        xor eax, eax
        mov al, byte ptr ss : [esp+8]
        push ebx
        mov ebx, eax
        shl eax, 8
        mov edx, dword ptr ss : [esp+8]
        test edx, 3
        je public_65d79bb
        public_65d79a8 : nop
        mov cl, byte ptr ds : [edx]
        inc edx
        cmp cl, bl
        je public_65d7980
        test cl, cl
        je public_65d7a04
        test edx, 3
        jne public_65d79a8
        public_65d79bb : nop
        or ebx, eax
        push edi
        mov eax, ebx
        shl ebx, 0x10
        push esi
        or ebx, eax
        public_65d79c6 : nop
        mov ecx, dword ptr ds : [edx]
        mov edi, 0x7EFEFEFF
        mov eax, ecx
        mov esi, edi
        xor ecx, ebx
        add esi, eax
        add edi, ecx
        xor ecx, 0xFFFFFFFF
        xor eax, 0xFFFFFFFF
        xor ecx, edi
        xor eax, esi
        add edx, 4
        and ecx, 0x81010100
        jne public_65d7a08
        and eax, 0x81010100
        je public_65d79c6
        and eax, 0x1010100
        jne public_65d7a02
        and esi, 0x80000000
        jne public_65d79c6
        public_65d7a02 : nop
        pop esi
        pop edi
        public_65d7a04 : nop
        pop ebx
        xor eax, eax
        ret 
        public_65d7a08 : nop
        mov eax, dword ptr ds : [edx-4]
        cmp al, bl
        je public_65d7a45
        test al, al
        je public_65d7a02
        cmp ah, bl
        je public_65d7a3e
        test ah, ah
        je public_65d7a02
        shr eax, 0x10
        cmp al, bl
        je public_65d7a37
        test al, al
        je public_65d7a02
        cmp ah, bl
        je public_65d7a30
        test ah, ah
        je public_65d7a02
        jmp public_65d79c6
        public_65d7a30 : nop
        pop esi
        pop edi
        lea eax, ds:[edx-1]
        pop ebx
        ret 
        public_65d7a37 : nop
        lea eax, ds:[edx-2]
        pop esi
        pop edi
        pop ebx
        ret 
        public_65d7a3e : nop
        lea eax, ds:[edx-3]
        pop esi
        pop edi
        pop ebx
        ret 
        public_65d7a45 : nop
        lea eax, ds:[edx-4]
        pop esi
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65d7990)
    }
}

#undef public_65d79a8
#undef public_65d79bb
#undef public_65d79c6
#undef public_65d7a02
#undef public_65d7a04
#undef public_65d7a08
#undef public_65d7a30
#undef public_65d7a37
#undef public_65d7a3e
#undef public_65d7a45

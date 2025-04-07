#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0b80);
CLANG_FORWARD_PROC_SYMBOL(public_6ec0d50);

#define public_6ec0d96 _public_6ec0d96
#define public_6ec0d9e _public_6ec0d9e
#define public_6ec0da8 _public_6ec0da8
#define public_6ec0db8 _public_6ec0db8
#define public_6ec0dc2 _public_6ec0dc2
#define public_6ec0dd2 _public_6ec0dd2
#define public_6ec0dda _public_6ec0dda
#define public_6ec0de4 _public_6ec0de4
#define public_6ec0df4 _public_6ec0df4
#define public_6ec0dfc _public_6ec0dfc
#define public_6ec0e06 _public_6ec0e06
#define public_6ec0e17 _public_6ec0e17
#define public_6ec0e2b _public_6ec0e2b
#define public_6ec0e35 _public_6ec0e35
#define public_6ec0e39 _public_6ec0e39
#define public_6ec0e41 _public_6ec0e41

PROC_DECLARE(0x6ec0d50, internal_6ec0d50, public_6ec0d50);
extern "C" NAKED register_t __cdecl internal_6ec0d50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [edi], ecx
        je public_6ec0e41
        test ecx, ecx
        je public_6ec0e41
        mov eax, dword ptr ds : [ebx+0x1C]
        dec eax
        je public_6ec0dc2
        dec eax
        jne public_6ec0e06
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[eax-1]
        test eax, ecx
        je public_6ec0da8
        xor ecx, ecx
        cmp eax, 1
        je public_6ec0d9e
        public_6ec0d96 : nop
        shr eax, 1
        inc ecx
        cmp eax, 1
        jne public_6ec0d96
        public_6ec0d9e : nop
        inc ecx
        mov edx, 1
        shl edx, cl
        mov dword ptr ds : [esi], edx
        public_6ec0da8 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ds:[eax-1]
        test eax, ecx
        je public_6ec0e06
        xor ecx, ecx
        cmp eax, 1
        je public_6ec0dfc
        public_6ec0db8 : nop
        shr eax, 1
        inc ecx
        cmp eax, 1
        jne public_6ec0db8
        jmp public_6ec0dfc
        public_6ec0dc2 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[eax-1]
        test eax, ecx
        je public_6ec0de4
        xor ecx, ecx
        cmp eax, 1
        je public_6ec0dda
        public_6ec0dd2 : nop
        shr eax, 1
        inc ecx
        cmp eax, 1
        jne public_6ec0dd2
        public_6ec0dda : nop
        inc ecx
        mov edx, 1
        shl edx, cl
        mov dword ptr ds : [esi], edx
        public_6ec0de4 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ds:[eax-1]
        test eax, ecx
        je public_6ec0e06
        xor ecx, ecx
        cmp eax, 1
        je public_6ec0dfc
        public_6ec0df4 : nop
        shr eax, 1
        inc ecx
        cmp eax, 1
        jne public_6ec0df4
        public_6ec0dfc : nop
        mov edx, 1
        inc ecx
        shl edx, cl
        mov dword ptr ds : [edi], edx
        public_6ec0e06 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        dec eax
        je public_6ec0e17
        dec eax
        je public_6ec0e2b
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x10
        public_6ec0e17 : nop
        mov ecx, ebx
        call public_6ec0b80
        mov eax, dword ptr ds : [esi]
        cmp eax, dword ptr ds : [edi]
        je public_6ec0e39
        mov eax, dword ptr ds : [ebx+0x30]
        test eax, eax
        je public_6ec0e39
        public_6ec0e2b : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi]
        cmp eax, ecx
        ja public_6ec0e35
        mov eax, ecx
        public_6ec0e35 : nop
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [edi], eax
        public_6ec0e39 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x10
        public_6ec0e41 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ec0d50)
    }
}

#undef public_6ec0d96
#undef public_6ec0d9e
#undef public_6ec0da8
#undef public_6ec0db8
#undef public_6ec0dc2
#undef public_6ec0dd2
#undef public_6ec0dda
#undef public_6ec0de4
#undef public_6ec0df4
#undef public_6ec0dfc
#undef public_6ec0e06
#undef public_6ec0e17
#undef public_6ec0e2b
#undef public_6ec0e35
#undef public_6ec0e39
#undef public_6ec0e41

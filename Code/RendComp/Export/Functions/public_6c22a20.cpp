#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c25e30);
CLANG_FORWARD_PROC_SYMBOL(public_6c261b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c26610);
CLANG_FORWARD_PROC_SYMBOL(public_6c28f50);

#define public_6c22a32 _public_6c22a32
#define public_6c22a3b _public_6c22a3b
#define public_6c22a56 _public_6c22a56
#define public_6c22a7f _public_6c22a7f
#define public_6c22aa1 _public_6c22aa1
#define public_6c22ac7 _public_6c22ac7
#define public_6c22aed _public_6c22aed
#define public_6c22b24 _public_6c22b24
#define public_6c22b57 _public_6c22b57
#define public_6c22b8a _public_6c22b8a
#define public_6c22bbd _public_6c22bbd
#define public_6c22bf0 _public_6c22bf0
#define public_6c22c09 _public_6c22c09
#define public_6c22c3b _public_6c22c3b

PROC_DECLARE(0x6c22a20, internal_6c22a20, public_6c22a20);
extern "C" NAKED register_t __cdecl internal_6c22a20()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x1E8]
        cmp eax, dword ptr ds : [esi+0x14]
        push edi
        jne public_6c22a3b
        public_6c22a32 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6c22a3b : nop
        mov ebx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push ebx
        call public_6c28f50
        test al, al
        jne public_6c22a56
        pop edi
        pop esi
        mov eax, 0xFFFFFFF8
        pop ebx
        ret 8
        public_6c22a56 : nop
        mov ecx, esi
        call public_6c26610
        test bl, 1
        je public_6c22a7f
        test byte ptr ds : [esi+0x1EC], 1
        jne public_6c22a7f
        push 1
        mov ecx, esi
        call public_6c25e30
        test eax, eax
        jl public_6c22a32
        or dword ptr ds : [esi+0x1EC], 1
        public_6c22a7f : nop
        test bl, 8
        je public_6c22aa1
        test byte ptr ds : [esi+0x1EC], 8
        jne public_6c22aa1
        push 8
        mov ecx, esi
        call public_6c25e30
        test eax, eax
        jl public_6c22a32
        or dword ptr ds : [esi+0x1EC], 8
        public_6c22aa1 : nop
        test bl, 2
        je public_6c22ac7
        test byte ptr ds : [esi+0x1EC], 2
        jne public_6c22ac7
        push 2
        mov ecx, esi
        call public_6c25e30
        test eax, eax
        jl public_6c22a32
        or dword ptr ds : [esi+0x1EC], 2
        public_6c22ac7 : nop
        test bl, 4
        je public_6c22aed
        test byte ptr ds : [esi+0x1EC], 4
        jne public_6c22aed
        push 4
        mov ecx, esi
        call public_6c25e30
        test eax, eax
        jl public_6c22a32
        or dword ptr ds : [esi+0x1EC], 4
        public_6c22aed : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, 0x10
        test bl, cl
        je public_6c22b24
        test byte ptr ds : [esi+0x1EC], bl
        jne public_6c22b24
        push ebx
        mov ecx, esi
        call public_6c25e30
        test eax, eax
        jl public_6c22a32
        mov eax, dword ptr ds : [esi+0x1EC]
        mov ecx, dword ptr ss : [esp+0x14]
        or eax, ebx
        mov dword ptr ds : [esi+0x1EC], eax
        public_6c22b24 : nop
        mov edi, 0x4000
        test edi, ecx
        je public_6c22b57
        test dword ptr ds : [esi+0x1EC], edi
        jne public_6c22b57
        push edi
        mov ecx, esi
        call public_6c25e30
        test eax, eax
        jl public_6c22a32
        mov eax, dword ptr ds : [esi+0x1EC]
        mov ecx, dword ptr ss : [esp+0x14]
        or eax, edi
        mov dword ptr ds : [esi+0x1EC], eax
        public_6c22b57 : nop
        mov edi, 0x8000
        test edi, ecx
        je public_6c22b8a
        test dword ptr ds : [esi+0x1EC], edi
        jne public_6c22b8a
        push edi
        mov ecx, esi
        call public_6c25e30
        test eax, eax
        jl public_6c22a32
        mov eax, dword ptr ds : [esi+0x1EC]
        mov ecx, dword ptr ss : [esp+0x14]
        or eax, edi
        mov dword ptr ds : [esi+0x1EC], eax
        public_6c22b8a : nop
        mov edi, 0x10000
        test edi, ecx
        je public_6c22bbd
        test dword ptr ds : [esi+0x1EC], edi
        jne public_6c22bbd
        push edi
        mov ecx, esi
        call public_6c25e30
        test eax, eax
        jl public_6c22a32
        mov eax, dword ptr ds : [esi+0x1EC]
        mov ecx, dword ptr ss : [esp+0x14]
        or eax, edi
        mov dword ptr ds : [esi+0x1EC], eax
        public_6c22bbd : nop
        mov edi, 0x20000
        test edi, ecx
        je public_6c22bf0
        test dword ptr ds : [esi+0x1EC], edi
        jne public_6c22bf0
        push edi
        mov ecx, esi
        call public_6c25e30
        test eax, eax
        jl public_6c22a32
        mov eax, dword ptr ds : [esi+0x1EC]
        mov ecx, dword ptr ss : [esp+0x14]
        or eax, edi
        mov dword ptr ds : [esi+0x1EC], eax
        public_6c22bf0 : nop
        test cl, cl
        jns public_6c22c09
        mov eax, dword ptr ds : [esi+0x1EC]
        test al, al
        js public_6c22c09
        or eax, 0x80
        mov dword ptr ds : [esi+0x1EC], eax
        public_6c22c09 : nop
        mov edi, 0x100
        test edi, ecx
        je public_6c22c3b
        test dword ptr ds : [esi+0x1EC], edi
        jne public_6c22c3b
        mov ecx, esi
        call public_6c261b0
        test eax, eax
        jl public_6c22a32
        mov eax, dword ptr ds : [esi+0x1EC]
        mov ecx, dword ptr ss : [esp+0x14]
        or eax, edi
        mov dword ptr ds : [esi+0x1EC], eax
        public_6c22c3b : nop
        mov eax, dword ptr ds : [esi+0x1EC]
        and eax, ecx
        sub eax, ecx
        pop edi
        neg eax
        pop esi
        sbb eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6c22a20)
    }
}

#undef public_6c22a32
#undef public_6c22a3b
#undef public_6c22a56
#undef public_6c22a7f
#undef public_6c22aa1
#undef public_6c22ac7
#undef public_6c22aed
#undef public_6c22b24
#undef public_6c22b57
#undef public_6c22b8a
#undef public_6c22bbd
#undef public_6c22bf0
#undef public_6c22c09
#undef public_6c22c3b

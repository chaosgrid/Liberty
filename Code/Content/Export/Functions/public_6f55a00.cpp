#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f55cd0);

#define public_6f55a32 _public_6f55a32
#define public_6f55a55 _public_6f55a55
#define public_6f55a74 _public_6f55a74
#define public_6f55a7b _public_6f55a7b
#define public_6f55a81 _public_6f55a81
#define public_6f55a94 _public_6f55a94
#define public_6f55a9a _public_6f55a9a
#define public_6f55aad _public_6f55aad
#define public_6f55ab8 _public_6f55ab8
#define public_6f55b25 _public_6f55b25
#define public_6f55b34 _public_6f55b34
#define public_6f55b3b _public_6f55b3b
#define public_6f55b52 _public_6f55b52
#define public_6f55b57 _public_6f55b57
#define public_6f55b63 _public_6f55b63
#define public_6f55b76 _public_6f55b76
#define public_6f55ba8 _public_6f55ba8
#define public_6f55bc7 _public_6f55bc7
#define public_6f55bd0 _public_6f55bd0
#define public_6f55bea _public_6f55bea
#define public_6f55c03 _public_6f55c03
#define public_6f55c26 _public_6f55c26
#define public_6f55c45 _public_6f55c45
#define public_6f55c4c _public_6f55c4c
#define public_6f55c52 _public_6f55c52
#define public_6f55c65 _public_6f55c65
#define public_6f55c6b _public_6f55c6b
#define public_6f55c7c _public_6f55c7c
#define public_6f55c82 _public_6f55c82
#define public_6f55c90 _public_6f55c90
#define public_6f55caf _public_6f55caf
#define public_6f55cbf _public_6f55cbf

PROC_DECLARE(0x6f55a00, internal_6f55a00, public_6f55a00);
extern "C" NAKED register_t __cdecl internal_6f55a00()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        mov eax, ebx
        sub eax, ebp
        sar eax, 3
        cmp eax, 0x10
        push esi
        push edi
        jg public_6f55aad
        cmp ebp, ebx
        je public_6f55cbf
        lea ecx, ss:[ebp+8]
        cmp ecx, ebx
        je public_6f55cbf
        public_6f55a32 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x2C], esi
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [ebp+4]
        fnstsw ax
        test ah, 5
        jnp public_6f55a7b
        mov ebx, esi
        mov edi, edx
        mov dword ptr ss : [esp+0x24], ebx
        mov esi, ecx
        mov edx, ecx
        public_6f55a55 : nop
        fld dword ptr ss : [esp+0x24]
        sub edx, 8
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 5
        jp public_6f55a74
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], eax
        mov esi, edx
        jmp public_6f55a55
        public_6f55a74 : nop
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], ebx
        jmp public_6f55a9a
        public_6f55a7b : nop
        cmp ebp, ecx
        mov eax, ecx
        je public_6f55a94
        public_6f55a81 : nop
        mov edi, dword ptr ds : [eax-8]
        sub eax, 8
        cmp eax, ebp
        mov dword ptr ds : [eax+8], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+0xC], edi
        jne public_6f55a81
        public_6f55a94 : nop
        mov dword ptr ss : [ebp], edx
        mov dword ptr ss : [ebp+4], esi
        public_6f55a9a : nop
        mov eax, dword ptr ss : [esp+0x38]
        add ecx, 8
        cmp ecx, eax
        jne public_6f55a32
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        public_6f55aad : nop
        cmp eax, 0x10
        mov edi, ebp
        jle public_6f55bea
        public_6f55ab8 : nop
        mov edx, dword ptr ds : [ebx-4]
        mov ecx, dword ptr ds : [ebx-8]
        mov eax, ebx
        sub eax, edi
        sar eax, 3
        mov dword ptr ss : [esp+0x14], edx
        cdq 
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr ds : [edi+eax*8+4]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ds:[edi+eax*8]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x24], edx
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], eax
        fcomp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x20], eax
        fnstsw ax
        test ah, 5
        jp public_6f55b25
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jnp public_6f55b52
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6f55b34
        mov eax, dword ptr ds : [ebx-8]
        mov ecx, dword ptr ds : [ebx-4]
        jmp public_6f55b57
        public_6f55b25 : nop
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6f55b3b
        public_6f55b34 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        jmp public_6f55b57
        public_6f55b3b : nop
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6f55b52
        mov eax, dword ptr ds : [ebx-8]
        mov ecx, dword ptr ds : [ebx-4]
        jmp public_6f55b57
        public_6f55b52 : nop
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ecx+4]
        public_6f55b57 : nop
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, ebx
        mov esi, edi
        public_6f55b63 : nop
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_6f55b76
        add esi, 8
        jmp public_6f55b63
        public_6f55b76 : nop
        fld dword ptr ss : [esp+0x1C]
        sub ecx, 8
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 5
        jnp public_6f55b76
        cmp ecx, esi
        jbe public_6f55ba8
        mov ebp, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], ebp
        mov ebp, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], edx
        add esi, 8
        jmp public_6f55b63
        public_6f55ba8 : nop
        mov eax, ebx
        mov ecx, esi
        sub eax, esi
        sub ecx, edi
        and eax, 0xFFFFFFF8
        and ecx, 0xFFFFFFF8
        cmp eax, ecx
        push 0
        jg public_6f55bc7
        push ebx
        push esi
        call public_6f55cd0
        mov ebx, esi
        jmp public_6f55bd0
        public_6f55bc7 : nop
        push esi
        push edi
        call public_6f55cd0
        mov edi, esi
        public_6f55bd0 : nop
        mov edx, ebx
        sub edx, edi
        and edx, 0xFFFFFFF8
        add esp, 0xC
        cmp edx, 0x80
        jg public_6f55ab8
        mov ebx, dword ptr ss : [esp+0x38]
        public_6f55bea : nop
        lea eax, ss:[ebp+0x80]
        cmp ebp, eax
        je public_6f55c7c
        lea ecx, ss:[ebp+8]
        cmp ecx, eax
        je public_6f55c7c
        public_6f55c03 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x2C], esi
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [ebp+4]
        fnstsw ax
        test ah, 5
        jnp public_6f55c4c
        mov ebx, esi
        mov edi, edx
        mov dword ptr ss : [esp+0x24], ebx
        mov esi, ecx
        mov edx, ecx
        public_6f55c26 : nop
        fld dword ptr ss : [esp+0x24]
        sub edx, 8
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 5
        jp public_6f55c45
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], eax
        mov esi, edx
        jmp public_6f55c26
        public_6f55c45 : nop
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], ebx
        jmp public_6f55c6b
        public_6f55c4c : nop
        cmp ebp, ecx
        mov eax, ecx
        je public_6f55c65
        public_6f55c52 : nop
        mov edi, dword ptr ds : [eax-8]
        sub eax, 8
        cmp eax, ebp
        mov dword ptr ds : [eax+8], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+0xC], edi
        jne public_6f55c52
        public_6f55c65 : nop
        mov dword ptr ss : [ebp], edx
        mov dword ptr ss : [ebp+4], esi
        public_6f55c6b : nop
        add ecx, 8
        lea eax, ss:[ebp+0x80]
        cmp ecx, eax
        jne public_6f55c03
        mov ebx, dword ptr ss : [esp+0x38]
        public_6f55c7c : nop
        mov ecx, eax
        cmp ecx, ebx
        je public_6f55cbf
        public_6f55c82 : nop
        mov ebx, dword ptr ds : [ecx+4]
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x2C], ebx
        mov edx, ecx
        mov esi, ecx
        nop 
        public_6f55c90 : nop
        fld dword ptr ss : [esp+0x2C]
        sub esi, 8
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_6f55caf
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov edx, esi
        jmp public_6f55c90
        public_6f55caf : nop
        mov eax, dword ptr ss : [esp+0x38]
        add ecx, 8
        cmp ecx, eax
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [edx+4], ebx
        jne public_6f55c82
        public_6f55cbf : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f55a00)
    }
}

#undef public_6f55a32
#undef public_6f55a55
#undef public_6f55a74
#undef public_6f55a7b
#undef public_6f55a81
#undef public_6f55a94
#undef public_6f55a9a
#undef public_6f55aad
#undef public_6f55ab8
#undef public_6f55b25
#undef public_6f55b34
#undef public_6f55b3b
#undef public_6f55b52
#undef public_6f55b57
#undef public_6f55b63
#undef public_6f55b76
#undef public_6f55ba8
#undef public_6f55bc7
#undef public_6f55bd0
#undef public_6f55bea
#undef public_6f55c03
#undef public_6f55c26
#undef public_6f55c45
#undef public_6f55c4c
#undef public_6f55c52
#undef public_6f55c65
#undef public_6f55c6b
#undef public_6f55c7c
#undef public_6f55c82
#undef public_6f55c90
#undef public_6f55caf
#undef public_6f55cbf

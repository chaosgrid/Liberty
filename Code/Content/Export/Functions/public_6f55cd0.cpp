#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55cd0);

#define public_6f55cf0 _public_6f55cf0
#define public_6f55d56 _public_6f55d56
#define public_6f55d65 _public_6f55d65
#define public_6f55d6c _public_6f55d6c
#define public_6f55d83 _public_6f55d83
#define public_6f55d88 _public_6f55d88
#define public_6f55d94 _public_6f55d94
#define public_6f55da7 _public_6f55da7
#define public_6f55dd5 _public_6f55dd5
#define public_6f55df4 _public_6f55df4
#define public_6f55dfd _public_6f55dfd
#define public_6f55e12 _public_6f55e12

PROC_DECLARE(0x6f55cd0, internal_6f55cd0, public_6f55cd0);
extern "C" NAKED register_t __cdecl internal_6f55cd0()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, ebx
        sub eax, edi
        sar eax, 3
        cmp eax, 0x10
        jle public_6f55e12
        push ebp
        push esi
        nop 
        public_6f55cf0 : nop
        mov edx, dword ptr ds : [ebx-4]
        mov ecx, dword ptr ds : [ebx-8]
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
        jp public_6f55d56
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jnp public_6f55d83
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6f55d65
        mov eax, dword ptr ds : [ebx-8]
        mov ecx, dword ptr ds : [ebx-4]
        jmp public_6f55d88
        public_6f55d56 : nop
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6f55d6c
        public_6f55d65 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        jmp public_6f55d88
        public_6f55d6c : nop
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6f55d83
        mov eax, dword ptr ds : [ebx-8]
        mov ecx, dword ptr ds : [ebx-4]
        jmp public_6f55d88
        public_6f55d83 : nop
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ecx+4]
        public_6f55d88 : nop
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, ebx
        mov esi, edi
        public_6f55d94 : nop
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_6f55da7
        add esi, 8
        jmp public_6f55d94
        public_6f55da7 : nop
        fld dword ptr ss : [esp+0x1C]
        sub ecx, 8
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 5
        jnp public_6f55da7
        cmp ecx, esi
        jbe public_6f55dd5
        mov ebp, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], edx
        add esi, 8
        jmp public_6f55d94
        public_6f55dd5 : nop
        mov eax, ebx
        mov ecx, esi
        sub eax, esi
        sub ecx, edi
        and eax, 0xFFFFFFF8
        and ecx, 0xFFFFFFF8
        cmp eax, ecx
        push 0
        jg public_6f55df4
        push ebx
        push esi
        call public_6f55cd0
        mov ebx, esi
        jmp public_6f55dfd
        public_6f55df4 : nop
        push esi
        push edi
        call public_6f55cd0
        mov edi, esi
        public_6f55dfd : nop
        mov eax, ebx
        sub eax, edi
        sar eax, 3
        add esp, 0xC
        cmp eax, 0x10
        jg public_6f55cf0
        pop esi
        pop ebp
        public_6f55e12 : nop
        pop edi
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f55cd0)
    }
}

#undef public_6f55cf0
#undef public_6f55d56
#undef public_6f55d65
#undef public_6f55d6c
#undef public_6f55d83
#undef public_6f55d88
#undef public_6f55d94
#undef public_6f55da7
#undef public_6f55dd5
#undef public_6f55df4
#undef public_6f55dfd
#undef public_6f55e12

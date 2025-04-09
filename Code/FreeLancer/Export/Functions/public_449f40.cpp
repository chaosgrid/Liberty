#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43ab60);
CLANG_FORWARD_PROC_SYMBOL(public_43ad50);
CLANG_FORWARD_PROC_SYMBOL(public_449f40);

#define public_449f90 _public_449f90
#define public_449f99 _public_449f99
#define public_449f9b _public_449f9b
#define public_449fa2 _public_449fa2
#define public_449fb0 _public_449fb0
#define public_449fb6 _public_449fb6
#define public_449fc3 _public_449fc3
#define public_449fc5 _public_449fc5
#define public_449fd0 _public_449fd0
#define public_449fd3 _public_449fd3
#define public_449fe0 _public_449fe0
#define public_449fed _public_449fed
#define public_449fef _public_449fef
#define public_44a000 _public_44a000
#define public_44a018 _public_44a018
#define public_44a01c _public_44a01c
#define public_44a021 _public_44a021

PROC_DECLARE(0x449f40, internal_449f40, public_449f40);
extern "C" NAKED register_t __cdecl internal_449f40()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        mov edx, dword ptr ds : [esi+0x38]
        push edi
        push edx
        mov ecx, offset public_668708
        xor bl, bl
        call public_43ab60
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x38]
        push eax
        mov ecx, offset public_668708
        mov dword ptr ss : [esp+0x18], edi
        call public_43ad50
        mov dword ptr ss : [esp+0x18], eax
        xor eax, eax
        mov dword ptr ss : [esp+0x10], eax
        xor ecx, ecx
        lea ecx, ds:[ecx]
        public_449f90 : nop
        test ecx, ecx
        jne public_449f99
        mov ecx, dword ptr ds : [edi+4]
        jmp public_449f9b
        public_449f99 : nop
        mov ecx, dword ptr ds : [ecx]
        public_449f9b : nop
        test ecx, ecx
        je public_449fa2
        inc eax
        jmp public_449f90
        public_449fa2 : nop
        xor ebp, ebp
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jle public_44a021
        lea esp, ss:[esp]
        public_449fb0 : nop
        xor edi, edi
        xor edx, edx
        xor ecx, ecx
        public_449fb6 : nop
        test ecx, ecx
        jne public_449fc3
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx+4]
        jmp public_449fc5
        public_449fc3 : nop
        mov ecx, dword ptr ds : [ecx]
        public_449fc5 : nop
        test ecx, ecx
        je public_449fd3
        cmp edx, ebp
        je public_449fd0
        inc edx
        jmp public_449fb6
        public_449fd0 : nop
        mov edi, dword ptr ds : [ecx+8]
        public_449fd3 : nop
        mov esi, dword ptr ds : [edi+0x5C]
        cmp esi, 0xFFFFFFFF
        je public_44a01c
        xor edx, edx
        xor ecx, ecx
        nop 
        public_449fe0 : nop
        test ecx, ecx
        jne public_449fed
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        jmp public_449fef
        public_449fed : nop
        mov ecx, dword ptr ds : [ecx]
        public_449fef : nop
        test ecx, ecx
        je public_44a000
        mov eax, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [eax], esi
        jne public_449fe0
        test ecx, ecx
        je public_44a000
        mov edx, eax
        public_44a000 : nop
        cmp byte ptr ds : [edx+9], 1
        jne public_44a018
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx], ecx
        mov bl, 1
        public_44a018 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_44a01c : nop
        inc ebp
        cmp ebp, eax
        jl public_449fb0
        public_44a021 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x449f40)
    }
}

#undef public_449f90
#undef public_449f99
#undef public_449f9b
#undef public_449fa2
#undef public_449fb0
#undef public_449fb6
#undef public_449fc3
#undef public_449fc5
#undef public_449fd0
#undef public_449fd3
#undef public_449fe0
#undef public_449fed
#undef public_449fef
#undef public_44a000
#undef public_44a018
#undef public_44a01c
#undef public_44a021

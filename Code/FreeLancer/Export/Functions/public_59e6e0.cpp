#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59e6e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_59e706 _public_59e706
#define public_59e724 _public_59e724
#define public_59e740 _public_59e740
#define public_59e758 _public_59e758
#define public_59e760 _public_59e760
#define public_59e77b _public_59e77b
#define public_59e781 _public_59e781
#define public_59e78d _public_59e78d
#define public_59e796 _public_59e796
#define public_59e7a3 _public_59e7a3
#define public_59e7b0 _public_59e7b0
#define public_59e7c2 _public_59e7c2

PROC_DECLARE(0x59e6e0, internal_59e6e0, public_59e6e0);
extern "C" NAKED register_t __cdecl internal_59e6e0()
{
    __asm
    {
        mov eax, 0x1004
        call public_5b7e90
        mov eax, dword ptr ss : [esp+0x1008]
        push ebx
        mov ebx, dword ptr ds : [eax+0xC]
        xor ecx, ecx
        test ebx, ebx
        push esi
        mov dword ptr ss : [esp+8], ecx
        je public_59e7a3
        push ebp
        push edi
        public_59e706 : nop
        test byte ptr ds : [ebx+0x6C], 2
        je public_59e796
        mov ebp, dword ptr ds : [ebx+0x70]
        test ebp, ebp
        jne public_59e724
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x34]
        mov ecx, dword ptr ss : [esp+0x10]
        jmp public_59e796
        public_59e724 : nop
        test ecx, ecx
        je public_59e781
        mov eax, dword ptr ss : [esp+ecx*4+0x10]
        cmp ebp, dword ptr ds : [eax+0x70]
        ja public_59e781
        xor esi, esi
        test ecx, ecx
        jle public_59e760
        lea edi, ss:[esp+0x14]
        nop 
        lea esp, ss:[esp]
        public_59e740 : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edx+0x70]
        cmp ebp, eax
        jb public_59e760
        jne public_59e758
        fld dword ptr ds : [ebx+0x68]
        fcomp dword ptr ds : [edx+0x68]
        fnstsw ax
        test ah, 5
        jnp public_59e760
        public_59e758 : nop
        inc esi
        add edi, 4
        cmp esi, ecx
        jl public_59e740
        public_59e760 : nop
        sub ecx, esi
        je public_59e77b
        shl ecx, 2
        push ecx
        lea edx, ss:[esp+esi*4+0x18]
        push edx
        lea eax, ss:[esp+esi*4+0x20]
        push eax
        call dword ptr ds : [public_5c709c]
        add esp, 0xC
        public_59e77b : nop
        mov dword ptr ss : [esp+esi*4+0x14], ebx
        jmp public_59e78d
        public_59e781 : nop
        cmp ecx, 0x400
        jae public_59e796
        mov dword ptr ss : [esp+ecx*4+0x14], ebx
        public_59e78d : nop
        mov ecx, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [esp+0x10], ecx
        public_59e796 : nop
        mov ebx, dword ptr ds : [ebx+8]
        test ebx, ebx
        jne public_59e706
        pop edi
        pop ebp
        public_59e7a3 : nop
        xor esi, esi
        test ecx, ecx
        jle public_59e7c2
        lea esp, ss:[esp]
        public_59e7b0 : nop
        mov ecx, dword ptr ss : [esp+esi*4+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x34]
        mov eax, dword ptr ss : [esp+8]
        inc esi
        cmp esi, eax
        jl public_59e7b0
        public_59e7c2 : nop
        pop esi
        pop ebx
        add esp, 0x1004
        ret 
        UNREACHABLE_TRAP(0x59e6e0)
    }
}

#undef public_59e706
#undef public_59e724
#undef public_59e740
#undef public_59e758
#undef public_59e760
#undef public_59e77b
#undef public_59e781
#undef public_59e78d
#undef public_59e796
#undef public_59e7a3
#undef public_59e7b0
#undef public_59e7c2

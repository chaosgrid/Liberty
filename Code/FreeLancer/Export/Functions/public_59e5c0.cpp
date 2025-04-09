#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59e5c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_59e5e0 _public_59e5e0
#define public_59e5fe _public_59e5fe
#define public_59e615 _public_59e615
#define public_59e62d _public_59e62d
#define public_59e635 _public_59e635
#define public_59e650 _public_59e650
#define public_59e656 _public_59e656
#define public_59e662 _public_59e662
#define public_59e66b _public_59e66b
#define public_59e678 _public_59e678
#define public_59e680 _public_59e680
#define public_59e692 _public_59e692

PROC_DECLARE(0x59e5c0, internal_59e5c0, public_59e5c0);
extern "C" NAKED register_t __cdecl internal_59e5c0()
{
    __asm
    {
        mov eax, 0x1004
        call public_5b7e90
        push ebx
        mov ebx, dword ptr ds : [ecx+0xC]
        xor edx, edx
        test ebx, ebx
        push esi
        mov dword ptr ss : [esp+8], edx
        je public_59e678
        push ebp
        push edi
        nop 
        public_59e5e0 : nop
        test byte ptr ds : [ebx+0x6C], 2
        je public_59e66b
        mov ebp, dword ptr ds : [ebx+0x70]
        test ebp, ebp
        jne public_59e5fe
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x34]
        mov edx, dword ptr ss : [esp+0x10]
        jmp public_59e66b
        public_59e5fe : nop
        test edx, edx
        je public_59e656
        mov ecx, dword ptr ss : [esp+edx*4+0x10]
        cmp ebp, dword ptr ds : [ecx+0x70]
        ja public_59e656
        xor esi, esi
        test edx, edx
        jle public_59e635
        lea edi, ss:[esp+0x14]
        public_59e615 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx+0x70]
        cmp ebp, eax
        jb public_59e635
        jne public_59e62d
        fld dword ptr ds : [ebx+0x68]
        fcomp dword ptr ds : [ecx+0x68]
        fnstsw ax
        test ah, 5
        jnp public_59e635
        public_59e62d : nop
        inc esi
        add edi, 4
        cmp esi, edx
        jl public_59e615
        public_59e635 : nop
        sub edx, esi
        je public_59e650
        shl edx, 2
        push edx
        lea eax, ss:[esp+esi*4+0x18]
        push eax
        lea ecx, ss:[esp+esi*4+0x20]
        push ecx
        call dword ptr ds : [public_5c709c]
        add esp, 0xC
        public_59e650 : nop
        mov dword ptr ss : [esp+esi*4+0x14], ebx
        jmp public_59e662
        public_59e656 : nop
        cmp edx, 0x400
        jae public_59e66b
        mov dword ptr ss : [esp+edx*4+0x14], ebx
        public_59e662 : nop
        mov edx, dword ptr ss : [esp+0x10]
        inc edx
        mov dword ptr ss : [esp+0x10], edx
        public_59e66b : nop
        mov ebx, dword ptr ds : [ebx+8]
        test ebx, ebx
        jne public_59e5e0
        pop edi
        pop ebp
        public_59e678 : nop
        xor esi, esi
        test edx, edx
        jle public_59e692
        mov edi, edi
        public_59e680 : nop
        mov ecx, dword ptr ss : [esp+esi*4+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x34]
        mov eax, dword ptr ss : [esp+8]
        inc esi
        cmp esi, eax
        jl public_59e680
        public_59e692 : nop
        pop esi
        pop ebx
        add esp, 0x1004
        ret 
        UNREACHABLE_TRAP(0x59e5c0)
    }
}

#undef public_59e5e0
#undef public_59e5fe
#undef public_59e615
#undef public_59e62d
#undef public_59e635
#undef public_59e650
#undef public_59e656
#undef public_59e662
#undef public_59e66b
#undef public_59e678
#undef public_59e680
#undef public_59e692

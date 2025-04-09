#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42f0b0);
CLANG_FORWARD_PROC_SYMBOL(public_42fdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4304b0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7230);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4f7281 _public_4f7281
#define public_4f7286 _public_4f7286
#define public_4f728e _public_4f728e
#define public_4f7293 _public_4f7293
#define public_4f729f _public_4f729f
#define public_4f72c0 _public_4f72c0
#define public_4f72d4 _public_4f72d4
#define public_4f734f _public_4f734f
#define public_4f7390 _public_4f7390
#define public_4f739d _public_4f739d

PROC_DECLARE(0x4f7230, internal_4f7230, public_4f7230);
extern "C" NAKED register_t __cdecl internal_4f7230()
{
    __asm
    {
        push ecx
        push esi
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_5c69a0]
        mov eax, dword ptr ss : [esp+0xC]
        push 1
        push eax
        call dword ptr ds : [public_5c6028]
        mov ecx, dword ptr ds : [public_674f20]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [public_674f1c]
        sub ecx, eax
        sar ecx, 2
        add esp, 8
        cmp ecx, 1
        mov esi, eax
        jae public_4f734f
        mov edx, dword ptr ds : [public_674f18]
        test edx, edx
        je public_4f7281
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_4f7286
        public_4f7281 : nop
        mov ecx, 1
        public_4f7286 : nop
        test edx, edx
        jne public_4f728e
        xor eax, eax
        jmp public_4f7293
        public_4f728e : nop
        sub eax, edx
        sar eax, 2
        public_4f7293 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jge public_4f729f
        xor eax, eax
        public_4f729f : nop
        push ebx
        push ebp
        lea edx, ds:[eax*4]
        push edi
        push edx
        call public_5b7e84
        mov ebx, dword ptr ds : [public_674f18]
        add esp, 4
        cmp ebx, esi
        mov ebp, eax
        mov edi, ebp
        je public_4f72d4
        public_4f72c0 : nop
        push ebx
        push edi
        call public_4304b0
        add ebx, 4
        add esp, 8
        add edi, 4
        cmp ebx, esi
        jne public_4f72c0
        public_4f72d4 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push edi
        mov ecx, offset public_674f14
        call public_42fdf0
        mov ecx, dword ptr ds : [public_674f1c]
        add edi, 4
        push edi
        push ecx
        push esi
        mov ecx, offset public_674f14
        call public_42f0b0
        mov edx, dword ptr ds : [public_674f1c]
        mov eax, dword ptr ds : [public_674f18]
        push edx
        push eax
        mov ecx, offset public_674f14
        call public_53aaa0
        mov ecx, dword ptr ds : [public_674f18]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[ebp+edx*4]
        add esp, 4
        mov ecx, offset public_674f14
        mov dword ptr ds : [public_674f20], eax
        call public_5ad970
        pop edi
        lea ecx, ss:[ebp+eax*4+4]
        mov dword ptr ds : [public_674f18], ebp
        pop ebp
        pop ebx
        mov dword ptr ds : [public_674f1c], ecx
        pop esi
        pop ecx
        ret 
        public_4f734f : nop
        lea edx, ds:[eax+4]
        push edx
        push eax
        push eax
        mov ecx, offset public_674f14
        call public_42f0b0
        lea eax, ss:[esp+4]
        push eax
        mov eax, dword ptr ds : [public_674f1c]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, offset public_674f14
        call public_42fdf0
        mov ecx, dword ptr ds : [public_674f1c]
        cmp esi, ecx
        mov eax, esi
        je public_4f739d
        nop 
        public_4f7390 : nop
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_4f7390
        public_4f739d : nop
        add dword ptr ds : [public_674f1c], 4
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4f7230)
    }
}

#undef public_4f7281
#undef public_4f7286
#undef public_4f728e
#undef public_4f7293
#undef public_4f729f
#undef public_4f72c0
#undef public_4f72d4
#undef public_4f734f
#undef public_4f7390
#undef public_4f739d

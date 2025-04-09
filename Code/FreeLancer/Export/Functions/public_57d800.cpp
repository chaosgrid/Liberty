#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427730);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_57d800);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_57d816 _public_57d816
#define public_57d81d _public_57d81d
#define public_57d84e _public_57d84e
#define public_57d853 _public_57d853
#define public_57d85b _public_57d85b
#define public_57d860 _public_57d860
#define public_57d86c _public_57d86c
#define public_57d890 _public_57d890
#define public_57d8a4 _public_57d8a4
#define public_57d925 _public_57d925
#define public_57d962 _public_57d962
#define public_57d96f _public_57d96f

PROC_DECLARE(0x57d800, internal_57d800, public_57d800);
extern "C" NAKED register_t __cdecl internal_57d800()
{
    __asm
    {
        mov edx, dword ptr ds : [public_67c400]
        mov eax, dword ptr ds : [public_67c404]
        sub esp, 8
        test edx, edx
        jne public_57d816
        xor ecx, ecx
        jmp public_57d81d
        public_57d816 : nop
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        public_57d81d : nop
        shl ecx, 0x10
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [public_67c408]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0xC], edi
        mov esi, eax
        jae public_57d925
        test edx, edx
        je public_57d84e
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_57d853
        public_57d84e : nop
        mov ecx, 1
        public_57d853 : nop
        test edx, edx
        jne public_57d85b
        xor eax, eax
        jmp public_57d860
        public_57d85b : nop
        sub eax, edx
        sar eax, 2
        public_57d860 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        jge public_57d86c
        xor eax, eax
        public_57d86c : nop
        push ebx
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_5b7e84
        mov ebx, dword ptr ds : [public_67c400]
        add esp, 4
        cmp ebx, esi
        mov ebp, eax
        mov edi, ebp
        je public_57d8a4
        lea esp, ss:[esp]
        public_57d890 : nop
        push ebx
        push edi
        call public_5999b0
        add ebx, 4
        add esp, 8
        add edi, 4
        cmp ebx, esi
        jne public_57d890
        public_57d8a4 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        push 1
        push edi
        mov ecx, offset public_67c3fc
        call public_427730
        mov ecx, dword ptr ds : [public_67c404]
        add edi, 4
        push edi
        push ecx
        push esi
        mov ecx, offset public_67c3fc
        call public_597c70
        mov edx, dword ptr ds : [public_67c404]
        mov eax, dword ptr ds : [public_67c400]
        push edx
        push eax
        mov ecx, offset public_67c3fc
        call public_53aaa0
        mov ecx, dword ptr ds : [public_67c400]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[ebp+edx*4]
        add esp, 4
        mov ecx, offset public_67c3fc
        mov dword ptr ds : [public_67c408], eax
        call public_5ad970
        lea ecx, ss:[ebp+eax*4+4]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_67c400], ebp
        pop ebp
        pop ebx
        pop edi
        mov dword ptr ds : [public_67c404], ecx
        pop esi
        add esp, 8
        ret 
        public_57d925 : nop
        lea edx, ds:[eax+4]
        push edx
        push eax
        push eax
        mov ecx, offset public_67c3fc
        call public_597c70
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ds : [public_67c404]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, offset public_67c3fc
        call public_427730
        mov eax, dword ptr ds : [public_67c404]
        cmp esi, eax
        je public_57d96f
        public_57d962 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], ecx
        add esi, 4
        cmp esi, eax
        jne public_57d962
        public_57d96f : nop
        add dword ptr ds : [public_67c404], 4
        mov eax, edi
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x57d800)
    }
}

#undef public_57d816
#undef public_57d81d
#undef public_57d84e
#undef public_57d853
#undef public_57d85b
#undef public_57d860
#undef public_57d86c
#undef public_57d890
#undef public_57d8a4
#undef public_57d925
#undef public_57d962
#undef public_57d96f

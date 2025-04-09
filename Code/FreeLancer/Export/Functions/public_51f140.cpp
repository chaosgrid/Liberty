#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427730);
CLANG_FORWARD_PROC_SYMBOL(public_51f140);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_51f17b _public_51f17b
#define public_51f180 _public_51f180
#define public_51f188 _public_51f188
#define public_51f18d _public_51f18d
#define public_51f199 _public_51f199
#define public_51f1c0 _public_51f1c0
#define public_51f1d4 _public_51f1d4
#define public_51f23d _public_51f23d
#define public_51f247 _public_51f247
#define public_51f25f _public_51f25f
#define public_51f2a0 _public_51f2a0
#define public_51f2ad _public_51f2ad

PROC_DECLARE(0x51f140, internal_51f140, public_51f140);
extern "C" NAKED register_t __cdecl internal_51f140()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_67531c]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [public_675318]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        push esi
        mov esi, eax
        jae public_51f25f
        mov edx, dword ptr ds : [public_675314]
        test edx, edx
        je public_51f17b
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_51f180
        public_51f17b : nop
        mov ecx, 1
        public_51f180 : nop
        test edx, edx
        jne public_51f188
        xor eax, eax
        jmp public_51f18d
        public_51f188 : nop
        sub eax, edx
        sar eax, 2
        public_51f18d : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+4], eax
        jge public_51f199
        xor eax, eax
        public_51f199 : nop
        push ebx
        push ebp
        lea edx, ds:[eax*4]
        push edi
        push edx
        call public_5b7e84
        mov ebx, dword ptr ds : [public_675314]
        add esp, 4
        cmp ebx, esi
        mov ebp, eax
        mov edi, ebp
        je public_51f1d4
        lea ebx, ds:[ebx]
        public_51f1c0 : nop
        push ebx
        push edi
        call public_5999b0
        add ebx, 4
        add esp, 8
        add edi, 4
        cmp ebx, esi
        jne public_51f1c0
        public_51f1d4 : nop
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push edi
        mov ecx, offset public_675310
        call public_427730
        mov ecx, dword ptr ds : [public_675318]
        add edi, 4
        push edi
        push ecx
        push esi
        mov ecx, offset public_675310
        call public_597c70
        mov edx, dword ptr ds : [public_675318]
        mov eax, dword ptr ds : [public_675314]
        push edx
        push eax
        mov ecx, offset public_675310
        call public_53aaa0
        mov ecx, dword ptr ds : [public_675314]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_675314]
        add esp, 4
        test ecx, ecx
        lea eax, ss:[ebp+edx*4]
        mov dword ptr ds : [public_67531c], eax
        jne public_51f23d
        xor eax, eax
        jmp public_51f247
        public_51f23d : nop
        mov eax, dword ptr ds : [public_675318]
        sub eax, ecx
        sar eax, 2
        public_51f247 : nop
        pop edi
        lea ecx, ss:[ebp+eax*4+4]
        mov dword ptr ds : [public_675314], ebp
        pop ebp
        pop ebx
        mov dword ptr ds : [public_675318], ecx
        pop esi
        pop ecx
        ret 4
        public_51f25f : nop
        lea edx, ds:[eax+4]
        push edx
        push eax
        push eax
        mov ecx, offset public_675310
        call public_597c70
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ds : [public_675318]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, offset public_675310
        call public_427730
        mov ecx, dword ptr ds : [public_675318]
        cmp esi, ecx
        mov eax, esi
        je public_51f2ad
        nop 
        public_51f2a0 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_51f2a0
        public_51f2ad : nop
        add dword ptr ds : [public_675318], 4
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x51f140)
    }
}

#undef public_51f17b
#undef public_51f180
#undef public_51f188
#undef public_51f18d
#undef public_51f199
#undef public_51f1c0
#undef public_51f1d4
#undef public_51f23d
#undef public_51f247
#undef public_51f25f
#undef public_51f2a0
#undef public_51f2ad

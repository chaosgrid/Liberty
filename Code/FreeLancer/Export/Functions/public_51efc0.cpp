#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427730);
CLANG_FORWARD_PROC_SYMBOL(public_51efc0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_51effb _public_51effb
#define public_51f000 _public_51f000
#define public_51f008 _public_51f008
#define public_51f00d _public_51f00d
#define public_51f019 _public_51f019
#define public_51f040 _public_51f040
#define public_51f054 _public_51f054
#define public_51f0bd _public_51f0bd
#define public_51f0c7 _public_51f0c7
#define public_51f0df _public_51f0df
#define public_51f120 _public_51f120
#define public_51f12d _public_51f12d

PROC_DECLARE(0x51efc0, internal_51efc0, public_51efc0);
extern "C" NAKED register_t __cdecl internal_51efc0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_6752fc]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [public_6752f8]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        push esi
        mov esi, eax
        jae public_51f0df
        mov edx, dword ptr ds : [public_6752f4]
        test edx, edx
        je public_51effb
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_51f000
        public_51effb : nop
        mov ecx, 1
        public_51f000 : nop
        test edx, edx
        jne public_51f008
        xor eax, eax
        jmp public_51f00d
        public_51f008 : nop
        sub eax, edx
        sar eax, 2
        public_51f00d : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+4], eax
        jge public_51f019
        xor eax, eax
        public_51f019 : nop
        push ebx
        push ebp
        lea edx, ds:[eax*4]
        push edi
        push edx
        call public_5b7e84
        mov ebx, dword ptr ds : [public_6752f4]
        add esp, 4
        cmp ebx, esi
        mov ebp, eax
        mov edi, ebp
        je public_51f054
        lea ebx, ds:[ebx]
        public_51f040 : nop
        push ebx
        push edi
        call public_5999b0
        add ebx, 4
        add esp, 8
        add edi, 4
        cmp ebx, esi
        jne public_51f040
        public_51f054 : nop
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push edi
        mov ecx, offset public_6752f0
        call public_427730
        mov ecx, dword ptr ds : [public_6752f8]
        add edi, 4
        push edi
        push ecx
        push esi
        mov ecx, offset public_6752f0
        call public_597c70
        mov edx, dword ptr ds : [public_6752f8]
        mov eax, dword ptr ds : [public_6752f4]
        push edx
        push eax
        mov ecx, offset public_6752f0
        call public_53aaa0
        mov ecx, dword ptr ds : [public_6752f4]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_6752f4]
        add esp, 4
        test ecx, ecx
        lea eax, ss:[ebp+edx*4]
        mov dword ptr ds : [public_6752fc], eax
        jne public_51f0bd
        xor eax, eax
        jmp public_51f0c7
        public_51f0bd : nop
        mov eax, dword ptr ds : [public_6752f8]
        sub eax, ecx
        sar eax, 2
        public_51f0c7 : nop
        pop edi
        lea ecx, ss:[ebp+eax*4+4]
        mov dword ptr ds : [public_6752f4], ebp
        pop ebp
        pop ebx
        mov dword ptr ds : [public_6752f8], ecx
        pop esi
        pop ecx
        ret 4
        public_51f0df : nop
        lea edx, ds:[eax+4]
        push edx
        push eax
        push eax
        mov ecx, offset public_6752f0
        call public_597c70
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ds : [public_6752f8]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, offset public_6752f0
        call public_427730
        mov ecx, dword ptr ds : [public_6752f8]
        cmp esi, ecx
        mov eax, esi
        je public_51f12d
        nop 
        public_51f120 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_51f120
        public_51f12d : nop
        add dword ptr ds : [public_6752f8], 4
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x51efc0)
    }
}

#undef public_51effb
#undef public_51f000
#undef public_51f008
#undef public_51f00d
#undef public_51f019
#undef public_51f040
#undef public_51f054
#undef public_51f0bd
#undef public_51f0c7
#undef public_51f0df
#undef public_51f120
#undef public_51f12d

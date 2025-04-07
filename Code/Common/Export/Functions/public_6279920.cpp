#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279920);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6279942 _public_6279942
#define public_6279944 _public_6279944
#define public_6279971 _public_6279971
#define public_6279976 _public_6279976
#define public_627997e _public_627997e
#define public_6279983 _public_6279983
#define public_627998f _public_627998f
#define public_62799b0 _public_62799b0
#define public_62799c4 _public_62799c4
#define public_6279a1c _public_6279a1c
#define public_6279a39 _public_6279a39
#define public_6279a78 _public_6279a78
#define public_6279a99 _public_6279a99
#define public_6279ab0 _public_6279ab0
#define public_6279abf _public_6279abf
#define public_6279ac8 _public_6279ac8
#define public_6279ad5 _public_6279ad5

PROC_DECLARE(0x6279920, internal_6279920, public_6279920);
extern "C" NAKED register_t __cdecl internal_6279920()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        push edi
        push 0xC
        mov esi, ecx
        call public_6391d9c
        xor ebx, ebx
        add esp, 4
        cmp eax, ebx
        je public_6279942
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        jmp public_6279944
        public_6279942 : nop
        xor eax, eax
        public_6279944 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_6279a39
        mov edx, dword ptr ds : [esi+4]
        cmp edx, ebx
        je public_6279971
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6279976
        public_6279971 : nop
        mov ecx, 1
        public_6279976 : nop
        cmp edx, ebx
        jne public_627997e
        xor eax, eax
        jmp public_6279983
        public_627997e : nop
        sub eax, edx
        sar eax, 2
        public_6279983 : nop
        add eax, ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        jge public_627998f
        xor eax, eax
        public_627998f : nop
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_6391d9c
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_62799c4
        lea ecx, ds:[ecx]
        public_62799b0 : nop
        push ebp
        push ebx
        call public_630cd00
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_62799b0
        public_62799c4 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_627f7e0
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        pop ebp
        jne public_6279a1c
        xor ecx, ecx
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_6279a1c : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_6279a39 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6279a99
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0xC]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_627f7e0
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6279ad5
        public_6279a78 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6279a78
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_6279a99 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6279abf
        mov edi, edi
        public_6279ab0 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6279ab0
        public_6279abf : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6279ad5
        public_6279ac8 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6279ac8
        public_6279ad5 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6279920)
    }
}

#undef public_6279942
#undef public_6279944
#undef public_6279971
#undef public_6279976
#undef public_627997e
#undef public_6279983
#undef public_627998f
#undef public_62799b0
#undef public_62799c4
#undef public_6279a1c
#undef public_6279a39
#undef public_6279a78
#undef public_6279a99
#undef public_6279ab0
#undef public_6279abf
#undef public_6279ac8
#undef public_6279ad5

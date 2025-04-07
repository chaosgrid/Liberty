#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427730);
CLANG_FORWARD_PROC_SYMBOL(public_4deb70);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4debaf _public_4debaf
#define public_4debb4 _public_4debb4
#define public_4debbc _public_4debbc
#define public_4debc1 _public_4debc1
#define public_4debcd _public_4debcd
#define public_4debf0 _public_4debf0
#define public_4dec04 _public_4dec04
#define public_4dec6f _public_4dec6f
#define public_4decb0 _public_4decb0
#define public_4decbd _public_4decbd
#define public_4decd4 _public_4decd4
#define public_4dece3 _public_4dece3
#define public_4decf0 _public_4decf0
#define public_4decfb _public_4decfb

PROC_DECLARE(0x4deb70, internal_4deb70, public_4deb70);
extern "C" NAKED register_t __cdecl internal_4deb70()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, edi
        sub ecx, eax
        sub ebp, edx
        sar ebp, 2
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebp
        jae public_4dec6f
        test edx, edx
        je public_4debaf
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_4debb4
        public_4debaf : nop
        mov ecx, 1
        public_4debb4 : nop
        test edx, edx
        jne public_4debbc
        xor eax, eax
        jmp public_4debc1
        public_4debbc : nop
        sub eax, edx
        sar eax, 2
        public_4debc1 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_4debcd
        xor eax, eax
        public_4debcd : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        je public_4dec04
        lea ebx, ds:[ebx]
        public_4debf0 : nop
        push ebx
        push ebp
        call public_5999b0
        add ebx, 4
        add esp, 8
        add ebp, 4
        cmp ebx, edi
        jne public_4debf0
        public_4dec04 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_5999b0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 4
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_597c70
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_53aaa0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x20]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_5ad970
        mov ebp, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edi+eax*4+4]
        mov dword ptr ds : [esi+4], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_4dec6f : nop
        mov edx, eax
        sub edx, edi
        sar edx, 2
        cmp edx, 1
        jae public_4decbd
        lea ecx, ds:[edi+4]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_597c70
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, eax
        sub edx, edi
        sar edx, 2
        push ebx
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_427730
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_4decfb
        public_4decb0 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_4decb0
        jmp public_4decfb
        public_4decbd : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, esi
        call public_597c70
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_4dece3
        public_4decd4 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_4decd4
        public_4dece3 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_4decfb
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_4decf0 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_4decf0
        public_4decfb : nop
        add dword ptr ds : [esi+8], 4
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x4deb70)
    }
}

#undef public_4debaf
#undef public_4debb4
#undef public_4debbc
#undef public_4debc1
#undef public_4debcd
#undef public_4debf0
#undef public_4dec04
#undef public_4dec6f
#undef public_4decb0
#undef public_4decbd
#undef public_4decd4
#undef public_4dece3
#undef public_4decf0
#undef public_4decfb

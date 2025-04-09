#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407100);
CLANG_FORWARD_PROC_SYMBOL(public_41aa50);
CLANG_FORWARD_PROC_SYMBOL(public_427730);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_407130 _public_407130
#define public_40715b _public_40715b
#define public_407165 _public_407165
#define public_4071b8 _public_4071b8
#define public_4071bd _public_4071bd
#define public_4071c5 _public_4071c5
#define public_4071ca _public_4071ca
#define public_4071d6 _public_4071d6
#define public_4071f3 _public_4071f3
#define public_407207 _public_407207
#define public_407269 _public_407269
#define public_4072a8 _public_4072a8
#define public_4072b7 _public_4072b7
#define public_4072d0 _public_4072d0
#define public_4072df _public_4072df
#define public_4072e6 _public_4072e6
#define public_4072f3 _public_4072f3
#define public_4072f7 _public_4072f7
#define public_407306 _public_407306

PROC_DECLARE(0x407100, internal_407100, public_407100);
extern "C" NAKED register_t __cdecl internal_407100()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x50]
        test al, 1
        mov dword ptr ss : [esp+0x10], ebp
        jne public_407306
        or al, 1
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0x24]
        mov byte ptr ss : [ebp+0x50], al
        cmp esi, dword ptr ss : [ebp+0x28]
        push edi
        je public_407165
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        sete bl
        mov edi, edi
        public_407130 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        push ebx
        push eax
        call public_41aa50
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_40715b
        mov eax, dword ptr ss : [ebp+0x38]
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[ebp+0x30]
        push 1
        push eax
        call public_537260
        public_40715b : nop
        mov eax, dword ptr ss : [ebp+0x28]
        add esi, 8
        cmp esi, eax
        jne public_407130
        public_407165 : nop
        mov bl, byte ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ds : [ecx+0xC]
        test bl, bl
        sete dl
        push 0xFFFFFFFF
        push edx
        push eax
        call public_41aa50
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_4072f7
        mov eax, dword ptr ss : [ebp+0x38]
        mov ecx, dword ptr ss : [ebp+0x3C]
        lea esi, ss:[ebp+0x30]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_407269
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_4071b8
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_4071bd
        public_4071b8 : nop
        mov ecx, 1
        public_4071bd : nop
        test edx, edx
        jne public_4071c5
        xor eax, eax
        jmp public_4071ca
        public_4071c5 : nop
        sub eax, edx
        sar eax, 2
        public_4071ca : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_4071d6
        xor eax, eax
        public_4071d6 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_407207
        public_4071f3 : nop
        push ebp
        push ebx
        call public_5999b0
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_4071f3
        public_407207 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_427730
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
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
        mov edx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_5ad970
        mov ebp, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[edi+eax*4+4]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], edi
        jmp public_4072f7
        public_407269 : nop
        mov edx, eax
        sub edx, edi
        sar edx, 2
        cmp edx, 1
        jae public_4072b7
        lea ecx, ds:[edi+4]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_597c70
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        lea edx, ss:[esp+0x10]
        push edx
        sub ecx, edi
        sar ecx, 2
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_427730
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_4072f3
        public_4072a8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_4072a8
        jmp public_4072f3
        public_4072b7 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, esi
        call public_597c70
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_4072df
        mov edi, edi
        public_4072d0 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_4072d0
        public_4072df : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_4072f3
        public_4072e6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_4072e6
        public_4072f3 : nop
        add dword ptr ds : [esi+8], 4
        public_4072f7 : nop
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        pop edi
        pop esi
        pop ebx
        jne public_407306
        or byte ptr ss : [ebp+0x50], 2
        public_407306 : nop
        mov al, 1
        pop ebp
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x407100)
    }
}

#undef public_407130
#undef public_40715b
#undef public_407165
#undef public_4071b8
#undef public_4071bd
#undef public_4071c5
#undef public_4071ca
#undef public_4071d6
#undef public_4071f3
#undef public_407207
#undef public_407269
#undef public_4072a8
#undef public_4072b7
#undef public_4072d0
#undef public_4072df
#undef public_4072e6
#undef public_4072f3
#undef public_4072f7
#undef public_407306

#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_568d10);
CLANG_FORWARD_PROC_SYMBOL(public_569170);
CLANG_FORWARD_PROC_SYMBOL(public_58cbf0);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d4a0);
CLANG_FORWARD_PROC_SYMBOL(public_58d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_595d60);
CLANG_FORWARD_PROC_SYMBOL(public_595dd0);
CLANG_FORWARD_PROC_SYMBOL(public_595de0);
CLANG_FORWARD_PROC_SYMBOL(public_595e10);
CLANG_FORWARD_PROC_SYMBOL(public_599980);
CLANG_FORWARD_PROC_SYMBOL(public_5aaca0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_568d40 _public_568d40
#define public_568d4a _public_568d4a
#define public_568d64 _public_568d64
#define public_568d6f _public_568d6f
#define public_568dd5 _public_568dd5
#define public_568dd8 _public_568dd8
#define public_568e00 _public_568e00
#define public_568e2f _public_568e2f
#define public_568e58 _public_568e58
#define public_568e6f _public_568e6f
#define public_568e80 _public_568e80
#define public_568e90 _public_568e90
#define public_568ecd _public_568ecd
#define public_568ed0 _public_568ed0
#define public_568edc _public_568edc
#define public_568ee1 _public_568ee1
#define public_568ee3 _public_568ee3
#define public_568f0c _public_568f0c
#define public_568f31 _public_568f31
#define public_568f58 _public_568f58

PROC_DECLARE(0x568d10, internal_568d10, public_568d10);
extern "C" NAKED register_t __cdecl internal_568d10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x2B8]
        push edi
        call public_58d4a0
        mov eax, dword ptr ds : [public_67e970]
        xor edi, edi
        test eax, eax
        mov ebx, 1
        mov dword ptr ss : [ebp-4], edi
        je public_568d4a
        lea esp, ss:[esp]
        public_568d40 : nop
        mov eax, dword ptr ds : [eax]
        inc edi
        test eax, eax
        jne public_568d40
        mov dword ptr ss : [ebp-4], edi
        public_568d4a : nop
        mov eax, dword ptr ds : [esi+0x2B8]
        mov ecx, dword ptr ds : [eax+0x4A4]
        add eax, 0x4A0
        test ecx, ecx
        jne public_568d64
        mov dword ptr ss : [ebp-8], ecx
        jmp public_568d6f
        public_568d64 : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [ebp-8], eax
        public_568d6f : nop
        fild dword ptr ss : [ebp-4]
        push ecx
        mov ecx, dword ptr ds : [esi+0x2BC]
        fstp dword ptr ss : [esp]
        push 0
        call public_595d60
        mov eax, dword ptr ss : [ebp-8]
        dec eax
        mov dword ptr ss : [ebp-0x10], eax
        fild dword ptr ss : [ebp-0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+0x2BC]
        fstp dword ptr ss : [esp]
        call public_595de0
        mov ecx, dword ptr ds : [esi+0x2BC]
        push 0x3F800000
        call public_595e10
        mov ecx, dword ptr ds : [esi+0x2BC]
        call public_595dd0
        call public_5b7ec0
        mov dword ptr ds : [esi+0x59C], eax
        cmp edi, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [esi+0x2BC]
        mov cl, byte ptr ds : [eax+0x6C]
        jle public_568dd5
        or cl, 3
        jmp public_568dd8
        public_568dd5 : nop
        and cl, 0xFC
        public_568dd8 : nop
        mov byte ptr ds : [eax+0x6C], cl
        lea eax, ds:[edi*4]
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_5b7e90
        mov eax, dword ptr ss : [ebp-4]
        mov edx, esp
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [ebp-0xC], edx
        jle public_568e2f
        nop 
        lea esp, ss:[esp]
        public_568e00 : nop
        push edi
        mov ecx, offset public_67e7b8
        call public_5aaca0
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx+edi*4], eax
        lea ecx, ds:[esi+0x399]
        push ecx
        push eax
        call dword ptr ds : [public_5c6bd4]
        mov eax, dword ptr ss : [ebp-4]
        add esp, 8
        inc edi
        cmp edi, eax
        jl public_568e00
        mov edx, dword ptr ss : [ebp-0xC]
        test eax, eax
        public_568e2f : nop
        je public_568e6f
        mov ecx, dword ptr ds : [esi+0x390]
        cmp byte ptr ds : [ecx+esi+0x394], 0
        je public_568e58
        mov ecx, dword ptr ds : [ecx*4+public_614b98]
        push ecx
        push 4
        push eax
        push edx
        call dword ptr ds : [public_5c70f4]
        add esp, 0x10
        jmp public_568e80
        public_568e58 : nop
        mov ecx, dword ptr ds : [ecx*4+public_614b84]
        push ecx
        push 4
        push eax
        push edx
        call dword ptr ds : [public_5c70f4]
        add esp, 0x10
        jmp public_568e80
/*FIXUP public_568e6f : nop
        push offset public_67bd40 @0x568e6f*/
  FIXUP public_568e6f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67bd40
        lea ecx, ds:[esi+0x399]
        call dword ptr ds : [public_5c63cc]
        public_568e80 : nop
        mov eax, dword ptr ds : [esi+0x59C]
        cmp eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x10], eax
        jge public_568edc
        mov edi, edi
        public_568e90 : nop
        cmp ebx, dword ptr ss : [ebp-8]
        jae public_568f58
        mov edx, dword ptr ss : [ebp-0xC]
        mov edi, dword ptr ds : [edx+eax*4]
        test edi, edi
        je public_568ed0
        push edi
        push ebx
        mov ecx, esi
        call public_569170
        lea eax, ds:[esi+0x399]
        push eax
        push edi
        call dword ptr ds : [public_5c6bd4]
        add esp, 8
        test al, al
        je public_568ecd
        mov ecx, dword ptr ds : [esi+0x2B8]
        push ebx
        call public_58d4b0
        public_568ecd : nop
        mov eax, dword ptr ss : [ebp-0x10]
        public_568ed0 : nop
        mov ecx, dword ptr ss : [ebp-4]
        inc ebx
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp-0x10], eax
        jl public_568e90
        public_568edc : nop
        cmp ebx, dword ptr ss : [ebp-8]
        jae public_568f58
        public_568ee1 : nop
        xor edi, edi
        public_568ee3 : nop
        mov ecx, dword ptr ds : [esi+0x2B8]
        mov edx, dword ptr ds : [ecx+0x4B4]
        test edx, edx
        je public_568f0c
        mov eax, dword ptr ds : [ecx+0x4B8]
        sub eax, edx
        sar eax, 2
        cmp edi, eax
        jae public_568f0c
        push edi
        push ebx
        call public_58cbf0
        inc edi
        jmp public_568ee3
        public_568f0c : nop
        mov ecx, dword ptr ds : [esi+0x2B8]
        push ebx
        call public_58d0b0
        mov edi, eax
        test edi, edi
        je public_568f31
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        je public_568f31
        call public_599980
        mov dword ptr ds : [edi+8], 0
        public_568f31 : nop
        mov ecx, dword ptr ds : [esi+0x2B8]
        push ebx
        call public_58d0b0
        mov byte ptr ds : [eax+1], 0
        mov ecx, dword ptr ds : [esi+0x2B8]
        push ebx
        call public_58d0b0
        mov byte ptr ds : [eax], 0
        mov eax, dword ptr ss : [ebp-8]
        inc ebx
        cmp ebx, eax
        jb public_568ee1
        public_568f58 : nop
        lea esp, ss:[ebp-0x1C]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x568d10)
    }
}

#undef public_568d40
#undef public_568d4a
#undef public_568d64
#undef public_568d6f
#undef public_568dd5
#undef public_568dd8
#undef public_568e00
#undef public_568e2f
#undef public_568e58
#undef public_568e6f
#undef public_568e80
#undef public_568e90
#undef public_568ecd
#undef public_568ed0
#undef public_568edc
#undef public_568ee1
#undef public_568ee3
#undef public_568f0c
#undef public_568f31
#undef public_568f58

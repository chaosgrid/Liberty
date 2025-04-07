#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7720);
CLANG_FORWARD_PROC_SYMBOL(public_6d05320);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d43680);
CLANG_FORWARD_PROC_SYMBOL(public_6d44170);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d436a0 _public_6d436a0
#define public_6d4370a _public_6d4370a
#define public_6d43735 _public_6d43735
#define public_6d4378b _public_6d4378b
#define public_6d4378d _public_6d4378d
#define public_6d43797 _public_6d43797
#define public_6d437b0 _public_6d437b0
#define public_6d437d0 _public_6d437d0
#define public_6d437f4 _public_6d437f4
#define public_6d4380f _public_6d4380f
#define public_6d43819 _public_6d43819

PROC_DECLARE(0x6d43680, internal_6d43680, public_6d43680);
extern "C" NAKED register_t __cdecl internal_6d43680()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x114
        mov eax, dword ptr ds : [public_6d8f62c]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6d4370a
        mov ebx, dword ptr ds : [public_6d64a84]
        public_6d436a0 : nop
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi+0xC]
        add esi, 8
/*FIXUP push offset public_6d6ad28 @0x6d436a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad28
        push eax
        call ebx
        mov ecx, dword ptr ds : [esi]
        push ecx
        call eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        push 0x104
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [public_6d64a94]
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call dword ptr ds : [public_6d64a90]
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6d5ffb0
        mov edx, dword ptr ds : [public_6d8f648]
        mov eax, dword ptr ds : [public_6d8f62c]
        add esp, 4
        dec edx
        mov dword ptr ds : [public_6d8f648], edx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_6d436a0
        public_6d4370a : nop
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6d8f628
        call public_6cf7720
        mov edx, dword ptr ds : [public_6d8f764]
        mov eax, dword ptr ds : [public_6d8f644]
        inc edx
        mov dword ptr ds : [public_6d8f764], edx
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d43797
        public_6d43735 : nop
        fld dword ptr ds : [esi+0x10]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 1
        jne public_6d4378d
        fld dword ptr ss : [ebp+8]
        fadd dword ptr ds : [esi+0x14]
        fcom dword ptr ds : [esi+0x10]
        fst dword ptr ds : [esi+0x14]
        fnstsw ax
        test ah, 1
        jne public_6d4378b
        fdiv dword ptr ds : [esi+0x10]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6d64bc4]
        fmul dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        lea edx, ss:[esp+0xC]
        push edx
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push 0x20
        call dword ptr ds : [eax]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [esi+0x14]
        jmp public_6d4378d
        public_6d4378b : nop
        fstp st(0)
        public_6d4378d : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_6d8f644]
        jne public_6d43735
        public_6d43797 : nop
        dec dword ptr ds : [public_6d8f764]
        jne public_6d43819
        mov eax, dword ptr ds : [public_6d8f638]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d4380f
        lea ebx, ds:[ebx]
        public_6d437b0 : nop
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_6d8f640
        lea edi, ds:[esi+8]
        call public_6d5c540
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [public_6d8f644]
        je public_6d437f4
        mov edi, edi
        public_6d437d0 : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        cmp ecx, dword ptr ds : [edi+0x14]
        jge public_6d437f4
        push 0
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x14]
        call public_6d1b490
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [public_6d8f644]
        jne public_6d437d0
        public_6d437f4 : nop
        push edi
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, offset public_6d8f640
        call public_6d44170
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_6d8f638]
        jne public_6d437b0
        public_6d4380f : nop
        mov ecx, offset public_6d8f634
        call public_6d05320
        public_6d43819 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d43680)
    }
}

#undef public_6d436a0
#undef public_6d4370a
#undef public_6d43735
#undef public_6d4378b
#undef public_6d4378d
#undef public_6d43797
#undef public_6d437b0
#undef public_6d437d0
#undef public_6d437f4
#undef public_6d4380f
#undef public_6d43819

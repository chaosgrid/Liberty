#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3a960);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b330);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b400);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b490);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cc70);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ceb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f630);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f39849 _public_6f39849
#define public_6f39870 _public_6f39870
#define public_6f3987e _public_6f3987e
#define public_6f398a6 _public_6f398a6
#define public_6f398ae _public_6f398ae
#define public_6f398eb _public_6f398eb
#define public_6f3993d _public_6f3993d
#define public_6f39965 _public_6f39965
#define public_6f3998b _public_6f3998b
#define public_6f39992 _public_6f39992
#define public_6f399d2 _public_6f399d2
#define public_6f39a1f _public_6f39a1f
#define public_6f39a36 _public_6f39a36
#define public_6f39a61 _public_6f39a61
#define public_6f39a6f _public_6f39a6f

PROC_DECLARE(0x6f39820, internal_6f39820, public_6f39820);
extern "C" NAKED register_t __cdecl internal_6f39820()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [edi+0x24]
        add ebp, eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], ebp
        jge public_6f39992
        cmp ebp, esi
        jge public_6f39849
        mov dword ptr ss : [esp+0x14], esi
        mov ebp, esi
        public_6f39849 : nop
        mov ecx, edi
        call public_6f3b490
        mov dword ptr ds : [edi+0x24], esi
        mov ecx, dword ptr ds : [edi+0xD0]
        mov ebx, dword ptr ds : [edi+0xCC]
        lea esi, ds:[edi+0xC8]
        mov eax, ecx
        cmp eax, ecx
        je public_6f3987e
        nop 
        lea esp, ss:[esp]
        public_6f39870 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx], edx
        add eax, 4
        add ebx, 4
        cmp eax, ecx
        jne public_6f39870
        public_6f3987e : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push ebx
        mov ecx, esi
        call public_6f3ceb0
        mov dword ptr ds : [esi+8], ebx
        lea ebx, ds:[edi+0xB8]
        cmp esi, ebx
        je public_6f39992
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6f398a6
        xor ebp, ebp
        jmp public_6f398ae
        public_6f398a6 : nop
        mov ebp, dword ptr ds : [ebx+8]
        sub ebp, eax
        sar ebp, 2
        public_6f398ae : nop
        mov ecx, esi
        call public_6f3bbf0
        cmp ebp, eax
        ja public_6f398eb
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        push edx
        push eax
        push ecx
        call public_6f3f630
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, esi
        call public_6f3ceb0
        mov ecx, ebx
        call public_6f3bbf0
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6f3998b
        public_6f398eb : nop
        mov ecx, ebx
        call public_6f3bbf0
        mov ecx, esi
        mov ebp, eax
        call public_6f3cc70
        cmp ebp, eax
        ja public_6f3993d
        mov ebp, dword ptr ds : [ebx+4]
        mov ecx, esi
        call public_6f3bbf0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        lea ebp, ss:[ebp+eax*4]
        push ebp
        push edx
        call public_6f3f630
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 0xC
        push eax
        push ecx
        push ebp
        mov ecx, esi
        call public_6f3cec0
        mov ecx, ebx
        call public_6f3bbf0
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6f3998b
        public_6f3993d : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6f3ceb0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6f57e26
        add esp, 4
        mov ecx, ebx
        call public_6f3bbf0
        test eax, eax
        jge public_6f39965
        xor eax, eax
        public_6f39965 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6f57e9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push ebx
        mov ecx, esi
        call public_6f3cec0
        mov dword ptr ds : [esi+0xC], eax
        public_6f3998b : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+8], eax
        public_6f39992 : nop
        mov eax, dword ptr ds : [edi+0x24]
        cmp ebp, eax
        mov dword ptr ds : [edi+0x28], ebp
        jb public_6f39a6f
        mov ecx, dword ptr ds : [edi+0x2C]
        cmp ecx, 5
        jl public_6f39a6f
        cmp ecx, 7
        jg public_6f39a6f
        push ebp
        push eax
        mov ecx, edi
        call public_6f3a960
        mov eax, dword ptr ds : [edi+0xEC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f39a1f
        fild dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        public_6f399d2 : nop
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6f39a1f
        fld dword ptr ds : [esi+8]
        call public_6f57f16
        push eax
        mov ecx, edi
        call public_6f3b400
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6f57e26
        mov ecx, dword ptr ds : [edi+0xF0]
        add esp, 4
        dec ecx
        mov dword ptr ds : [edi+0xF0], ecx
        cmp ebx, dword ptr ds : [edi+0xEC]
        mov esi, ebx
        jne public_6f399d2
        public_6f39a1f : nop
        push ebp
        mov ecx, edi
        call public_6f3b400
        mov eax, dword ptr ds : [edi+0x24]
        test eax, eax
        jbe public_6f39a36
        push eax
        mov ecx, edi
        call public_6f3b330
        public_6f39a36 : nop
        cmp ebp, dword ptr ds : [edi+0x20]
        jbe public_6f39a6f
        mov al, byte ptr ds : [edi+0x30]
        test al, al
        je public_6f39a61
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+0x5C]
        mov eax, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [edi]
        push eax
        push edi
        mov dword ptr ds : [edi+0x9C], eax
        call dword ptr ds : [ecx+0x58]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6f39a61 : nop
        mov ecx, edi
        call public_6f3b490
        mov dword ptr ds : [edi+0x2C], 4
        public_6f39a6f : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f39820)
    }
}

#undef public_6f39849
#undef public_6f39870
#undef public_6f3987e
#undef public_6f398a6
#undef public_6f398ae
#undef public_6f398eb
#undef public_6f3993d
#undef public_6f39965
#undef public_6f3998b
#undef public_6f39992
#undef public_6f399d2
#undef public_6f39a1f
#undef public_6f39a36
#undef public_6f39a61
#undef public_6f39a6f

#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635c570);
CLANG_FORWARD_PROC_SYMBOL(public_635c620);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_635c649 _public_635c649
#define public_635c65a _public_635c65a
#define public_635c737 _public_635c737
#define public_635c748 _public_635c748
#define public_635c78a _public_635c78a
#define public_635c7ed _public_635c7ed
#define public_635c83e _public_635c83e
#define public_635c88f _public_635c88f

PROC_DECLARE(0x635c620, internal_635c620, public_635c620);
extern "C" NAKED register_t __cdecl internal_635c620()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        fld dword ptr ss : [ebp+0xC]
        push ebx
        push esi
        fadd st(0), st
        push edi
        mov esi, ecx
        push ecx
        fstp dword ptr ss : [esp]
        call public_635c570
        mov edi, eax
        inc edi
        cmp edi, 0xFFFFFFD8
        jge public_635c649
        mov edi, 0xFFFFFFD8
        public_635c649 : nop
        mov ebx, dword ptr ss : [ebp+8]
        mov eax, 0x29
        sub eax, edi
        lea ecx, ds:[esi+eax*4]
        mov dword ptr ss : [esp+0x18], ecx
        public_635c65a : nop
        mov edx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [edx]
        sub esp, 8
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x10]
        fsub dword ptr ss : [ebp+0xC]
        fmul dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991f8]
        call public_6391dae
        fld dword ptr ss : [ebp+0xC]
        fadd dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [esp+0x18], eax
        fmul dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6399290]
        add esp, 8
        call public_6391dae
        mov ecx, dword ptr ss : [esp+0x10]
        add ecx, 2
        cmp eax, ecx
        jg public_635c737
        fld dword ptr ds : [ebx+0x14]
        sub esp, 8
        fsub dword ptr ss : [ebp+0xC]
        fmul dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991f8]
        call public_6391dae
        fld dword ptr ss : [ebp+0xC]
        fadd dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [esp+0x1C], eax
        fmul dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6399290]
        add esp, 8
        call public_6391dae
        mov edx, dword ptr ss : [esp+0x14]
        add edx, 2
        cmp eax, edx
        jg public_635c737
        fld dword ptr ds : [ebx+0x18]
        sub esp, 8
        fsub dword ptr ss : [ebp+0xC]
        fmul dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991f8]
        call public_6391dae
        fld dword ptr ss : [ebp+0xC]
        fadd dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [esp+0x24], eax
        fmul dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6399290]
        add esp, 8
        call public_6391dae
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ds:[ecx+2]
        cmp eax, edx
        jle public_635c748
        public_635c737 : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc edi
        sub eax, 4
        mov dword ptr ss : [esp+0x18], eax
        jmp public_635c65a
        public_635c748 : nop
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [ebp+0xC]
        fcomp dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x144], eax
        lea eax, ds:[edi-1]
        mov dword ptr ds : [esi+0x150], eax
        fnstsw ax
        mov dword ptr ds : [esi+0x148], edx
        mov dword ptr ds : [esi+0x14C], ecx
        test ah, 1
        mov dword ptr ds : [esi+0x154], edi
        jne public_635c78a
        fld dword ptr ss : [ebp+0xC]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_635c78a : nop
        inc edi
        lea eax, ds:[edi-1]
        mov ecx, 0x28
        sub ecx, eax
        fld dword ptr ds : [esi+ecx*4]
        sub esp, 8
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x10]
        fsub dword ptr ss : [ebp+0x10]
        fmul dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991f8]
        call public_6391dae
        fld dword ptr ss : [ebp+0x10]
        fadd dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [esp+0x18], eax
        fmul dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6399290]
        add esp, 8
        call public_6391dae
        mov edx, dword ptr ss : [esp+0x10]
        add edx, 2
        cmp eax, edx
        jle public_635c7ed
        fld dword ptr ss : [ebp+0xC]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_635c7ed : nop
        fld dword ptr ds : [ebx+0x14]
        sub esp, 8
        fsub dword ptr ss : [ebp+0x10]
        fmul dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991f8]
        call public_6391dae
        fld dword ptr ss : [ebp+0x10]
        fadd dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [esp+0x1C], eax
        fmul dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6399290]
        add esp, 8
        call public_6391dae
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, 2
        cmp eax, ecx
        jle public_635c83e
        fld dword ptr ss : [ebp+0xC]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_635c83e : nop
        fld dword ptr ds : [ebx+0x18]
        sub esp, 8
        fsub dword ptr ss : [ebp+0x10]
        fmul dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_63991f8]
        call public_6391dae
        fld dword ptr ss : [ebp+0x10]
        fadd dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [esp+0x24], eax
        fmul dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6399290]
        add esp, 8
        call public_6391dae
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ds:[ecx+2]
        cmp eax, edx
        jle public_635c88f
        fld dword ptr ss : [ebp+0xC]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_635c88f : nop
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x144], eax
        lea eax, ds:[edi-1]
        mov dword ptr ds : [esi+0x154], edi
        pop edi
        mov dword ptr ds : [esi+0x148], edx
        mov dword ptr ds : [esi+0x14C], ecx
        mov dword ptr ds : [esi+0x150], eax
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x635c620)
    }
}

#undef public_635c649
#undef public_635c65a
#undef public_635c737
#undef public_635c748
#undef public_635c78a
#undef public_635c7ed
#undef public_635c83e
#undef public_635c88f

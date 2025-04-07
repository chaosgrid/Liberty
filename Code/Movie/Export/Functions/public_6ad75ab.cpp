#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad75ab);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8ccc);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8f7f);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9196);
CLANG_FORWARD_PROC_SYMBOL(public_6ad91be);
CLANG_FORWARD_PROC_SYMBOL(public_6ad91de);

#define public_6ad75dc _public_6ad75dc
#define public_6ad75e4 _public_6ad75e4
#define public_6ad75e8 _public_6ad75e8
#define public_6ad75ec _public_6ad75ec
#define public_6ad75f0 _public_6ad75f0
#define public_6ad75f2 _public_6ad75f2
#define public_6ad761d _public_6ad761d
#define public_6ad762f _public_6ad762f
#define public_6ad7646 _public_6ad7646
#define public_6ad766e _public_6ad766e
#define public_6ad7676 _public_6ad7676

PROC_DECLARE(0x6ad75ab, internal_6ad75ab, public_6ad75ab);
extern "C" NAKED register_t __cdecl internal_6ad75ab()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x58
        mov eax, dword ptr ss : [ebp+0x10]
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        movzx ecx, word ptr ds : [eax]
        mov eax, dword ptr ds : [esi]
        push edi
        dec eax
        mov dword ptr ss : [ebp+0x10], ecx
        je public_6ad75f0
        dec eax
        je public_6ad75ec
        dec eax
        je public_6ad75e8
        dec eax
        je public_6ad75e4
        dec eax
        je public_6ad75f0
        dec eax
        dec eax
        je public_6ad75dc
        dec eax
        jne public_6ad7646
        push 0x10
        jmp public_6ad75f2
        public_6ad75dc : nop
        mov dword ptr ds : [esi], 1
        jmp public_6ad7646
        public_6ad75e4 : nop
        push 0x12
        jmp public_6ad75f2
        public_6ad75e8 : nop
        push 0x11
        jmp public_6ad75f2
        public_6ad75ec : nop
        push 4
        jmp public_6ad75f2
        public_6ad75f0 : nop
        push 8
        public_6ad75f2 : nop
        pop ebx
        lea edi, ds:[esi+0x18]
        push ecx
        push edi
        push ebx
        call public_6ad8f7f
        add esp, 0xC
        test eax, eax
        jne public_6ad7646
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, 0x10
        je public_6ad761d
        cmp eax, 0x16
        je public_6ad761d
        cmp eax, 0x1D
        je public_6ad761d
        and dword ptr ss : [ebp-0x20], 0xFFFFFFFE
        jmp public_6ad762f
        public_6ad761d : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        fld qword ptr ds : [esi+0x10]
        and ecx, 0xFFFFFFE3
        fstp qword ptr ss : [ebp-0x30]
        or ecx, 3
        mov dword ptr ss : [ebp-0x20], ecx
        public_6ad762f : nop
        lea ecx, ds:[esi+8]
        push edi
        push ecx
        push eax
        lea eax, ss:[ebp+0x10]
        push ebx
        push eax
        lea eax, ss:[ebp-0x58]
        push eax
        call public_6ad8ccc
        add esp, 0x18
        public_6ad7646 : nop
        push 0xFFFF
        push dword ptr ss : [ebp+0x10]
        call public_6ad91de
        cmp dword ptr ds : [esi], 8
        pop ecx
        pop ecx
        je public_6ad766e
        cmp dword ptr ds : [public_6ae03e8], 0
        jne public_6ad766e
        push esi
        call public_6ad91be
        test eax, eax
        pop ecx
        jne public_6ad7676
        public_6ad766e : nop
        push dword ptr ds : [esi]
        call public_6ad9196
        pop ecx
        public_6ad7676 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad75ab)
    }
}

#undef public_6ad75dc
#undef public_6ad75e4
#undef public_6ad75e8
#undef public_6ad75ec
#undef public_6ad75f0
#undef public_6ad75f2
#undef public_6ad761d
#undef public_6ad762f
#undef public_6ad7646
#undef public_6ad766e
#undef public_6ad7676

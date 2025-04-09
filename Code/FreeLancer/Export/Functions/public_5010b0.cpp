#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410ef0);
CLANG_FORWARD_PROC_SYMBOL(public_4110c0);
CLANG_FORWARD_PROC_SYMBOL(public_4112f0);
CLANG_FORWARD_PROC_SYMBOL(public_411470);
CLANG_FORWARD_PROC_SYMBOL(public_4115b0);
CLANG_FORWARD_PROC_SYMBOL(public_500a80);
CLANG_FORWARD_PROC_SYMBOL(public_500de0);
CLANG_FORWARD_PROC_SYMBOL(public_5012e0);
CLANG_FORWARD_PROC_SYMBOL(public_5374e0);
CLANG_FORWARD_PROC_SYMBOL(public_537a90);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);

#define public_501149 _public_501149
#define public_50114b _public_50114b
#define public_501275 _public_501275
#define public_501283 _public_501283

PROC_DECLARE(0x5010b0, internal_5010b0, public_5010b0);
extern "C" NAKED register_t __cdecl internal_5010b0()
{
    __asm
    {
        sub esp, 0x14
        push esi
        mov esi, ecx
        push 0
        mov dword ptr ds : [esi+0x264], 0
        call public_500a80
        mov eax, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [esi+0x78]
        push 0
        push 0
        push eax
        push ecx
        push edx
        lea ecx, ds:[esi+0x140]
        call public_5012e0
        mov eax, dword ptr ds : [esi+0xAC]
        mov ecx, dword ptr ds : [esi+0xA8]
        mov edx, dword ptr ds : [esi+0x78]
        push 0
        push 3
        push eax
        push ecx
        push edx
        lea ecx, ds:[esi+0x168]
        call public_5012e0
        push 0
        mov ecx, esi
        call public_500de0
        mov eax, dword ptr ds : [esi+0x78]
        push 0
        push 0
        push 0x3F800000
        push 0x3F000000
        push eax
        lea ecx, ds:[esi+0x190]
        call public_5012e0
        push 0x12C
        call public_537a90
        add esp, 4
        test eax, eax
        je public_501149
        mov ecx, eax
        call public_5374e0
        jmp public_50114b
        public_501149 : nop
        xor eax, eax
        public_50114b : nop
        push ebx
        push edi
        push 0
        push 3
        mov ecx, eax
        mov dword ptr ds : [esi+0x2A8], eax
        call public_4110c0
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+0x2A8]
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        call public_410ef0
        mov ecx, dword ptr ds : [esi+0x2A8]
        mov al, 0xFF
        lea edx, ss:[esp+0xC]
        push edx
        mov byte ptr ss : [esp+0x10], al
        mov byte ptr ss : [esp+0x11], al
        mov byte ptr ss : [esp+0x12], al
        call public_4115b0
        mov ecx, dword ptr ds : [esi+0x2A8]
        push 0x48F42400
        call public_4112f0
        mov ebx, dword ptr ds : [public_5c71dc]
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        lea edi, ds:[esi+0x2AC]
        fmul dword ptr ds : [public_5caeec]
        fstp qword ptr ss : [esp+0x14]
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+4], 0xC0A00000
        push edi
        fmul dword ptr ds : [public_5caeec]
        fadd st(0), st
        fsub qword ptr ds : [public_5c89b8]
        fstp dword ptr ds : [edi]
        fld qword ptr ss : [esp+0x18]
        fadd st(0), st
        fsub qword ptr ds : [public_5c89b8]
        fstp dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [edi]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        fld st(0)
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ds : [edi+4]
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi+0x2A8]
        call public_411470
        mov ecx, dword ptr ds : [esi+0x2A8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x2A8]
        pop edi
        pop ebx
        test al, al
        jne public_501275
        call public_537ad0
        mov dword ptr ds : [esi+0x2A8], 0
        pop esi
        add esp, 0x14
        ret 
        public_501275 : nop
        test byte ptr ds : [ecx+0xB4], 8
        je public_501283
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        public_501283 : nop
        pop esi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x5010b0)
    }
}

#undef public_501149
#undef public_50114b
#undef public_501275
#undef public_501283

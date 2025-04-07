#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f1edb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ede0);
CLANG_FORWARD_PROC_SYMBOL(public_6f214e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f21520);
CLANG_FORWARD_PROC_SYMBOL(public_6f22330);
CLANG_FORWARD_PROC_SYMBOL(public_6f22400);
CLANG_FORWARD_PROC_SYMBOL(public_6f227a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f1ee51 _public_6f1ee51
#define public_6f1ee56 _public_6f1ee56
#define public_6f1ee5e _public_6f1ee5e
#define public_6f1ee73 _public_6f1ee73
#define public_6f1ee80 _public_6f1ee80
#define public_6f1eea0 _public_6f1eea0
#define public_6f1eeb4 _public_6f1eeb4
#define public_6f1ef12 _public_6f1ef12
#define public_6f1ef7a _public_6f1ef7a
#define public_6f1efa7 _public_6f1efa7
#define public_6f1efad _public_6f1efad

PROC_DECLARE(0x6f1ede0, internal_6f1ede0, public_6f1ede0);
extern "C" NAKED register_t __cdecl internal_6f1ede0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebp, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        sub ecx, ebp
        mov eax, 0x8D3DCB09
        imul ecx
        add edx, ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        sub ebx, ecx
        mov eax, 0x8D3DCB09
        imul ebx
        add edx, ebx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f1ef12
        test ebp, ebp
        je public_6f1ee51
        mov ebx, ecx
        sub ebx, ebp
        mov eax, 0x8D3DCB09
        imul ebx
        add edx, ebx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebx, edx
        ja public_6f1ee56
        public_6f1ee51 : nop
        mov ebx, 1
        public_6f1ee56 : nop
        test ebp, ebp
        jne public_6f1ee5e
        xor edx, edx
        jmp public_6f1ee73
        public_6f1ee5e : nop
        sub ecx, ebp
        mov eax, 0x8D3DCB09
        imul ecx
        add edx, ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f1ee73 : nop
        lea eax, ds:[edx+ebx]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6f1ee80
        xor eax, eax
        public_6f1ee80 : nop
        imul eax, 0x74
        push eax
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6f1eeb4
        lea esp, ss:[esp]
        public_6f1eea0 : nop
        push ebx
        push ebp
        call public_6f227a0
        add ebx, 0x74
        add esp, 8
        add ebp, 0x74
        cmp ebx, edi
        jne public_6f1eea0
        public_6f1eeb4 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_6f227a0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x74
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6f214e0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        imul eax, 0x74
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6f1edb0
        inc eax
        imul eax, 0x74
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_6f1efad
        public_6f1ef12 : nop
        mov ebx, ecx
        sub ebx, edi
        mov eax, 0x8D3DCB09
        imul ebx
        add edx, ebx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f1ef7a
        lea edx, ds:[edi+0x74]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6f214e0
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x8D3DCB09
        imul ecx
        add edx, ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push ebx
        mov ecx, esi
        call public_6f21520
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_6f22330
        add esp, 0xC
        jmp public_6f1efa7
        public_6f1ef7a : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFF8C
        push ecx
        mov ecx, esi
        call public_6f214e0
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFF8C
        push eax
        push edi
        call public_6f22400
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x74]
        push ecx
        push edi
        call public_6f22330
        add esp, 0x18
        public_6f1efa7 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x74
        public_6f1efad : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        imul eax, 0x74
        pop edi
        pop esi
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f1ede0)
    }
}

#undef public_6f1ee51
#undef public_6f1ee56
#undef public_6f1ee5e
#undef public_6f1ee73
#undef public_6f1ee80
#undef public_6f1eea0
#undef public_6f1eeb4
#undef public_6f1ef12
#undef public_6f1ef7a
#undef public_6f1efa7
#undef public_6f1efad

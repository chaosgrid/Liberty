#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfc00);
CLANG_FORWARD_PROC_SYMBOL(public_6ed03d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0400);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f1da40);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa50);
CLANG_FORWARD_PROC_SYMBOL(public_6f216a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f21830);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f1daab _public_6f1daab
#define public_6f1dab0 _public_6f1dab0
#define public_6f1dab8 _public_6f1dab8
#define public_6f1dacb _public_6f1dacb
#define public_6f1dad8 _public_6f1dad8
#define public_6f1daf4 _public_6f1daf4
#define public_6f1db0e _public_6f1db0e
#define public_6f1db75 _public_6f1db75
#define public_6f1dbdc _public_6f1dbdc
#define public_6f1dc11 _public_6f1dc11
#define public_6f1dc19 _public_6f1dc19

PROC_DECLARE(0x6f1da40, internal_6f1da40, public_6f1da40);
extern "C" NAKED register_t __cdecl internal_6f1da40()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x78787879
        imul ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f1db75
        test ebx, ebx
        je public_6f1daab
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x78787879
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebp, edx
        ja public_6f1dab0
        public_6f1daab : nop
        mov ebp, 1
        public_6f1dab0 : nop
        test ebx, ebx
        jne public_6f1dab8
        xor edx, edx
        jmp public_6f1dacb
        public_6f1dab8 : nop
        sub ecx, ebx
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f1dacb : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6f1dad8
        xor eax, eax
        public_6f1dad8 : nop
        imul eax, 0x88
        push eax
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6f1db0e
        public_6f1daf4 : nop
        push ebx
        push ebp
        call public_6ed2a60
        add ebx, 0x88
        add esp, 8
        add ebp, 0x88
        cmp ebx, edi
        jne public_6f1daf4
        public_6f1db0e : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_6ed2a60
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x88
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6ed0400
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ed03d0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        imul eax, 0x88
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6ecfc00
        inc eax
        imul eax, 0x88
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_6f1dc19
        public_6f1db75 : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x78787879
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f1dbdc
        lea edx, ds:[edi+0x88]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6ed0400
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x78787879
        imul ecx
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
        call public_6f1fa50
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_6f216a0
        add esp, 0xC
        jmp public_6f1dc11
        public_6f1dbdc : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFF78
        push ecx
        mov ecx, esi
        call public_6ed0400
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFF78
        push eax
        push edi
        call public_6f21830
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x88]
        push ecx
        push edi
        call public_6f216a0
        add esp, 0x18
        public_6f1dc11 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x88
        public_6f1dc19 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        imul eax, 0x88
        pop edi
        pop esi
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f1da40)
    }
}

#undef public_6f1daab
#undef public_6f1dab0
#undef public_6f1dab8
#undef public_6f1dacb
#undef public_6f1dad8
#undef public_6f1daf4
#undef public_6f1db0e
#undef public_6f1db75
#undef public_6f1dbdc
#undef public_6f1dc11
#undef public_6f1dc19

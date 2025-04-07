#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401dd0);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_535dd0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);

#define public_535703 _public_535703
#define public_535714 _public_535714
#define public_535717 _public_535717
#define public_53571b _public_53571b
#define public_535744 _public_535744
#define public_53577f _public_53577f
#define public_535788 _public_535788
#define public_5357b6 _public_5357b6
#define public_5357c4 _public_5357c4

PROC_DECLARE(0x5356c0, internal_5356c0, public_5356c0);
extern "C" NAKED register_t __cdecl internal_5356c0()
{
    __asm
    {
        sub esp, 0x2C
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+0xCC]
        mov ecx, dword ptr ds : [public_5c6368]
        mov dx, word ptr ds : [ecx]
        mov ecx, dword ptr ds : [edi+8]
        xor eax, eax
        mov dword ptr ss : [esp+0x30], eax
        mov word ptr ss : [esp+0x28], dx
        mov eax, dword ptr ss : [esp+0x28]
        mov dx, word ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [edi+4]
        mov word ptr ss : [esp+0x2C], dx
        mov esi, dword ptr ds : [eax+4]
        cmp esi, ecx
        mov ebp, eax
        mov al, 1
        je public_53571b
        public_535703 : nop
        cmp dx, word ptr ds : [esi+0xC]
        mov ebp, esi
        setb al
        test al, al
        je public_535714
        mov esi, dword ptr ds : [esi]
        jmp public_535717
        public_535714 : nop
        mov esi, dword ptr ds : [esi+8]
        public_535717 : nop
        cmp esi, ecx
        jne public_535703
        public_53571b : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_535744
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        push ebp
        push esi
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x50], 1
        call public_535dd0
        jmp public_5357c4
        public_535744 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], ebp
        je public_535788
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_53e430
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax]
        jne public_53577f
        lea eax, ss:[esp+0xD]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        push ebp
        push esi
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x21], 1
        call public_535dd0
        jmp public_5357c4
        public_53577f : nop
        lea ecx, ss:[esp+0x10]
        call public_401dd0
        public_535788 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov cx, word ptr ds : [eax+0xC]
        cmp cx, word ptr ss : [esp+0x2C]
        jae public_5357b6
        lea edx, ss:[esp+0xE]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x22], 1
        call public_535dd0
        jmp public_5357c4
        public_5357b6 : nop
        lea edx, ss:[esp+0xF]
        mov byte ptr ss : [esp+0xF], 0
        push edx
        lea eax, ss:[esp+0x14]
        public_5357c4 : nop
        lea ecx, ss:[esp+0x28]
        push eax
        call public_46d660
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x40]
        lea eax, ds:[ecx+0x10]
        mov cx, word ptr ss : [esp+0x44]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        mov word ptr ds : [eax+4], cx
        pop ebp
        add esp, 0x2C
        ret 0xC
        UNREACHABLE_TRAP(0x5356c0)
    }
}

#undef public_535703
#undef public_535714
#undef public_535717
#undef public_53571b
#undef public_535744
#undef public_53577f
#undef public_535788
#undef public_5357b6
#undef public_5357c4

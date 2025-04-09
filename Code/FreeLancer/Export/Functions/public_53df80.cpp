#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4170);
CLANG_FORWARD_PROC_SYMBOL(public_4c4320);
CLANG_FORWARD_PROC_SYMBOL(public_4c4590);
CLANG_FORWARD_PROC_SYMBOL(public_4c45b0);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_548eb0);

#define public_53dfc5 _public_53dfc5
#define public_53dfc7 _public_53dfc7
#define public_53e010 _public_53e010
#define public_53e01b _public_53e01b
#define public_53e065 _public_53e065
#define public_53e07e _public_53e07e
#define public_53e089 _public_53e089

PROC_DECLARE(0x53df80, internal_53df80, public_53df80);
extern "C" NAKED register_t __cdecl internal_53df80()
{
    __asm
    {
        push ebx
        push esi
        push edi
        call dword ptr ds : [public_5c60d0]
        test al, al
        mov esi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x14]
        jne public_53e01b
        push 0
        push ebx
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53e01b
        add eax, 0xC
        test eax, eax
        je public_53dfc5
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        je public_53dfc5
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        je public_53dfc7
        public_53dfc5 : nop
        xor edi, edi
        public_53dfc7 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+2]
        lea ecx, ds:[edi+0xE4]
        push eax
        call dword ptr ds : [public_5c6574]
        test eax, eax
        je public_53e010
        push eax
        call dword ptr ds : [public_5c69a4]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_53e01b
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_5c6a70]
        fld dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [edi]
        fmul dword ptr ds : [eax+0x1C]
        push ecx
        mov ecx, edi
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0x40]
        jmp public_53e01b
        public_53e010 : nop
        mov edx, dword ptr ds : [edi]
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0xB0]
        public_53e01b : nop
        push ebx
        call public_548eb0
        add esp, 4
        test al, al
        je public_53e089
        xor eax, eax
        mov ax, word ptr ds : [esi+2]
        push eax
        call public_4c45b0
        add esp, 4
        test eax, eax
        je public_53e07e
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        jle public_53e065
        fld dword ptr ds : [esi+0x10]
        push 0
        push ecx
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        fstp dword ptr ss : [esp]
        push eax
        lea eax, ds:[esi+8]
        push eax
        push ecx
        call public_4c4590
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_53e065 : nop
        xor edx, edx
        mov dx, word ptr ds : [esi+2]
        push 0xFFFFFFFF
        push edx
        push 0
        call public_4c4320
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_53e07e : nop
        push esi
        push 0
        call public_4c4170
        add esp, 8
        public_53e089 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x53df80)
    }
}

#undef public_53dfc5
#undef public_53dfc7
#undef public_53e010
#undef public_53e01b
#undef public_53e065
#undef public_53e07e
#undef public_53e089

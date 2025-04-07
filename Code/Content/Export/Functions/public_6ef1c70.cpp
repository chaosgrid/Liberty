#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eac4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef0600);
CLANG_FORWARD_PROC_SYMBOL(public_6ef09c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef15b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1810);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f78ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f95e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f98380);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0330);

#define public_6ef1d60 _public_6ef1d60
#define public_6ef1d68 _public_6ef1d68
#define public_6ef1d94 _public_6ef1d94
#define public_6ef1d98 _public_6ef1d98
#define public_6ef1e6d _public_6ef1e6d
#define public_6ef1e9b _public_6ef1e9b
#define public_6ef1ebd _public_6ef1ebd
#define public_6ef1ed3 _public_6ef1ed3

PROC_DECLARE(0x6ef1c70, internal_6ef1c70, public_6ef1c70);
extern "C" NAKED register_t __cdecl internal_6ef1c70()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        mov ebx, ecx
        push esi
        lea esi, ds:[ebx+8]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], 3
        call public_6fa0330
        push esi
        call public_6ef0600
        mov edi, dword ptr ds : [esi]
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ds : [edi+0x64], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x64]
        push ecx
        call dword ptr ds : [public_6fb3358]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+0xC], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x1C], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x14], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0x4C], eax
        mov edi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi+0x4C]
        push ecx
        call public_6f98380
        mov dword ptr ds : [edi+0x3C], eax
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x40], 0x3E19999A
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x44], 0xBE19999A
        mov eax, dword ptr ds : [esi]
        add eax, 0x1C
        push eax
        call public_6eac0c0
        add esp, 0x10
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, eax
        call public_6eac4d0
        mov eax, dword ptr ds : [esi]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        mov ecx, eax
        call public_6f478c0
        mov edi, eax
        mov edx, dword ptr ds : [edi+0x48]
        push edx
        call public_6f4d5e0
        add esp, 4
        mov dword ptr ss : [esp+0x28], 0x42B40000
        call dword ptr ds : [public_6fb36a0]
        test al, al
        jne public_6ef1d94
        mov eax, dword ptr ds : [esi]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        mov ecx, eax
        call public_6f478c0
        mov ecx, eax
        call public_6f78ee0
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6ef1d60
        xor eax, eax
        jmp public_6ef1d68
        public_6ef1d60 : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        public_6ef1d68 : nop
        dec eax
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_6fb7828]
        fadd dword ptr ds : [public_6fb7824]
        fcom dword ptr ds : [public_6fb7820]
        fnstsw ax
        test ah, 0x41
        jne public_6ef1d98
        fstp st(0)
        fld dword ptr ds : [public_6fb7820]
        jmp public_6ef1d98
        public_6ef1d94 : nop
        fld dword ptr ss : [esp+0x28]
        public_6ef1d98 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax+0xC]
        push ecx
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp]
        push ecx
        push edi
        push edx
        mov ecx, ebx
        call public_6ef15b0
        mov edi, eax
        test edi, edi
        je public_6ef1ed3
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [public_6fcf258]
        mov dword ptr ss : [esp+0x34], edi
        call public_6f95e00
        mov ebp, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [public_6fb3470]
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ds : [esi]
        add eax, 0x10
        push eax
        call public_6f75f30
        mov edx, dword ptr ds : [esi]
        mov ebp, eax
        mov dword ptr ds : [edx+0x60], edi
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push edi
        push ecx
        mov dword ptr ss : [esp+0x3C], eax
        call dword ptr ds : [public_6fb3480]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x3C]
        add edx, 0x54
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov edi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi+0x14]
        add esp, 0x10
        push ecx
        lea edx, ds:[edi+0x54]
        push edx
        push ebp
        mov ecx, ebx
        call public_6ef1810
        mov dword ptr ds : [edi+0x18], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x18]
        or ebp, 0xFFFFFFFF
        cmp ecx, ebp
        jne public_6ef1e9b
        add eax, 0x1C
        push eax
        lea eax, ss:[esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x34], 0
        call dword ptr ds : [public_6fb35d8]
        lea ecx, ss:[esp+0x34]
        push ecx
        call public_6f75f30
        add esp, 0xC
        test eax, eax
        jne public_6ef1e6d
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x18], ebp
        jmp public_6ef1e9b
        public_6ef1e6d : nop
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ds : [edi+0x14]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        mov ecx, ebx
        call public_6ef1810
        mov dword ptr ds : [edi+0x18], eax
        public_6ef1e9b : nop
        mov eax, dword ptr ds : [esi]
        cmp dword ptr ds : [eax+0x18], ebp
        pop ebp
        je public_6ef1ebd
        push 0
        mov ecx, ebx
        call public_6ef09c0
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        mov dword ptr ds : [edx], ecx
        pop ebx
        add esp, 0x18
        ret 8
        public_6ef1ebd : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        mov eax, 1
        mov dword ptr ds : [edx], ecx
        pop ebx
        add esp, 0x18
        ret 8
        public_6ef1ed3 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr ds : [edx], ecx
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6ef1c70)
    }
}

#undef public_6ef1d60
#undef public_6ef1d68
#undef public_6ef1d94
#undef public_6ef1d98
#undef public_6ef1e6d
#undef public_6ef1e9b
#undef public_6ef1ebd
#undef public_6ef1ed3

#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec31a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec44a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec4920);
CLANG_FORWARD_PROC_SYMBOL(public_6ec4e00);
CLANG_FORWARD_PROC_SYMBOL(public_6ec60f0);

#define public_6ec3231 _public_6ec3231
#define public_6ec3239 _public_6ec3239
#define public_6ec3250 _public_6ec3250

PROC_DECLARE(0x6ec31a0, internal_6ec31a0, public_6ec31a0);
extern "C" NAKED register_t __cdecl internal_6ec31a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        push ebx
        push esi
        or ebx, 0xFFFFFFFF
        cmp eax, ebx
        push edi
        mov esi, ecx
        je public_6ec3250
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x10]
        lea edi, ds:[esi+0x68]
        push ecx
        mov ecx, edi
        call public_6ec4e00
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+0x6C]
        je public_6ec3250
        mov edx, dword ptr ds : [eax+0x40]
        add eax, 0x40
        dec edx
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x40]
        test ecx, ecx
        mov ebx, edx
        jne public_6ec3250
        mov edx, dword ptr ds : [eax+0x18]
        push 1
        push edx
        mov ecx, esi
        call public_6ec0bd0
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6ec4920
        lea edx, ss:[esp+0x1C]
        lea edi, ds:[esi+0x7C]
        push edx
        mov ecx, edi
        call public_6ec60f0
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6ec3231
        mov edx, dword ptr ss : [esp+0x1C]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6ec3231
        lea eax, ss:[esp+0x10]
        jmp public_6ec3239
        public_6ec3231 : nop
        mov dword ptr ss : [esp+0x14], ecx
        lea eax, ss:[esp+0x14]
        public_6ec3239 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x80]
        je public_6ec3250
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6ec44a0
        public_6ec3250 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6ec31a0)
    }
}

#undef public_6ec3231
#undef public_6ec3239
#undef public_6ec3250

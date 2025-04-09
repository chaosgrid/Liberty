#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432100);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_43da70);
CLANG_FORWARD_PROC_SYMBOL(public_4428e0);
CLANG_FORWARD_PROC_SYMBOL(public_442bf0);
CLANG_FORWARD_PROC_SYMBOL(public_456b40);
CLANG_FORWARD_PROC_SYMBOL(public_5948b0);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b95f3);

#define public_43dad6 _public_43dad6
#define public_43dae6 _public_43dae6
#define public_43db09 _public_43db09

PROC_DECLARE(0x43da70, internal_43da70, public_43da70);
extern "C" NAKED register_t __cdecl internal_43da70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b95f3 @0x43da72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b95f3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_5cb584
        mov dword ptr ds : [esi+0x7C], offset public_5cb574
        mov dword ptr ds : [esi+0x32C], offset public_5cb55c
        mov dword ptr ds : [esi+0x34C], offset public_5cb568
        mov eax, dword ptr ds : [esi+0x3E8]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], 7
        je public_43dad6
        push eax
        call public_43d2a0
        add esp, 4
        mov dword ptr ds : [esi+0x3E8], ebx
        public_43dad6 : nop
        mov ecx, dword ptr ds : [esi+0x38C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_43db09
        public_43dae6 : nop
        mov eax, dword ptr ds : [eax+0x1C]
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ss:[esp+0x10]
        call public_5948b0
        mov ecx, dword ptr ds : [esi+0x38C]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        jne public_43dae6
        public_43db09 : nop
        mov eax, dword ptr ds : [esi+0x38C]
        mov ecx, dword ptr ds : [eax]
        lea ebp, ds:[esi+0x388]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebp
        call public_442bf0
        mov eax, dword ptr ds : [esi+0x3B0]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x3AC]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 6
        call public_432100
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x3A4]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[esi+0x3A0]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 5
        call public_432100
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x24], 4
        call public_4428e0
        mov eax, dword ptr ds : [esi+0x380]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x37C]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 3
        call public_456b40
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        push 1
        lea ecx, ds:[esi+0x36C]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x28], 2
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [esi+0x354]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x354], ebx
        mov dword ptr ds : [esi+0x358], ebx
        mov dword ptr ds : [esi+0x35C], ebx
        mov eax, dword ptr ds : [esi+0x334]
        push eax
        call public_5b7e1d
        add esp, 8
        mov ecx, esi
        mov dword ptr ds : [esi+0x334], ebx
        mov dword ptr ds : [esi+0x338], ebx
        mov dword ptr ds : [esi+0x33C], ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_59fa50
        pop edi
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x43da70)
    }
}

#undef public_43dad6
#undef public_43dae6
#undef public_43db09

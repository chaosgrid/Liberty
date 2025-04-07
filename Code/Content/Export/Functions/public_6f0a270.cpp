#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f07ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0a270);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ea40);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad128);

#define public_6f0a2e9 _public_6f0a2e9
#define public_6f0a331 _public_6f0a331
#define public_6f0a358 _public_6f0a358
#define public_6f0a38e _public_6f0a38e

PROC_DECLARE(0x6f0a270, internal_6f0a270, public_6f0a270);
extern "C" NAKED register_t __cdecl internal_6f0a270()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad128 @0x6f0a272*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad128
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x50]
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        call public_6f07ef0
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ds : [esi], offset public_6fb8490
        mov eax, dword ptr ds : [edi+0x178]
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ds : [esi+0x1B0], eax
        mov byte ptr ds : [esi+0x1B4], 0
        mov byte ptr ds : [esi+0x1B5], 0
        je public_6f0a2e9
        mov eax, dword ptr ds : [ecx+0x170]
        push eax
        lea edx, ds:[esi+0x134]
        push edx
        call public_6eea860
        mov ecx, eax
        call public_6f73ac0
        mov dword ptr ds : [esi+0x168], eax
        public_6f0a2e9 : nop
        mov edx, dword ptr ds : [esi+0x1B0]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea eax, ds:[esi+0x124]
        push eax
        push edx
        call dword ptr ds : [public_6fb3664]
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        test ecx, ecx
        je public_6f0a38e
        call public_6eea860
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        je public_6f0a38e
        push ebx
        mov ebx, dword ptr ds : [esi+0x184]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        push ebp
        lea ebp, ds:[esi+0x180]
        je public_6f0a358
        public_6f0a331 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [ebp+8], ecx
        jne public_6f0a331
        public_6f0a358 : nop
        push 0
        lea eax, ss:[esp+0x5C]
        push eax
        push 0x19
        push ebp
        lea eax, ds:[esi+0x124]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x70], 0x447A0000
        call public_6eb70f0
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        push edx
        call public_6f5ea40
        add esp, 0x1C
        pop ebp
        pop ebx
        public_6f0a38e : nop
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x6f0a270)
    }
}

#undef public_6f0a2e9
#undef public_6f0a331
#undef public_6f0a358
#undef public_6f0a38e

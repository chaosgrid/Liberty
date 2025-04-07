#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4467e0);
CLANG_FORWARD_PROC_SYMBOL(public_4468f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b995b);

#define public_446843 _public_446843
#define public_446845 _public_446845
#define public_446862 _public_446862
#define public_446890 _public_446890
#define public_4468b1 _public_4468b1

PROC_DECLARE(0x4467e0, internal_4467e0, public_4467e0);
extern "C" NAKED register_t __cdecl internal_4467e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b995b @0x4467e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b995b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        push esi
        mov edi, ecx
        call dword ptr ds : [public_5c6020]
        push eax
        call dword ptr ds : [public_5c6200]
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        je public_446890
        push 0x20
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_446843
        mov ecx, esi
        call dword ptr ds : [public_5c61b0]
        mov dword ptr ds : [esi], offset public_5cbd68
        mov ecx, esi
        jmp public_446845
        public_446843 : nop
        xor ecx, ecx
        public_446845 : nop
        mov eax, dword ptr ds : [edi+0x30]
        push eax
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ds : [edi+0x64], ecx
        call dword ptr ds : [public_5c61c8]
        mov esi, dword ptr ds : [ebx+8]
        cmp esi, dword ptr ds : [ebx+0xC]
        je public_4468b1
        public_446862 : nop
        mov ecx, dword ptr ds : [edi+0x64]
        push ecx
        push esi
        mov ecx, edi
        call public_4468f0
        mov eax, dword ptr ds : [ebx+0xC]
        add esi, 0x20
        cmp esi, eax
        jne public_446862
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        lea esp, ss:[esp]
        public_446890 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x158
/*FIXUP push offset public_5cbc74 @0x44689c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbc74
        mov eax, 0x100001
/*FIXUP push offset public_5cbd34 @0x4468a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbd34
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_4468b1 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x4467e0)
    }
}

#undef public_446843
#undef public_446845
#undef public_446862
#undef public_446890
#undef public_4468b1

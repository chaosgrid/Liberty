#include "Alchemy-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_624a928);

#define public_624379b _public_624379b
#define public_62437d6 _public_62437d6

PROC_DECLARE(0x6243770, internal_6243770, public_6243770);
extern "C" NAKED register_t __cdecl internal_6243770()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a928 @0x6243778*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a928
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        xor ebp, ebp
        xor esi, esi
        lea ebx, ds:[eax+0xC]
        public_624379b : nop
        mov dword ptr ss : [esp+0x30], ebp
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x30]
        push edx
        push esi
        push edi
        mov dword ptr ss : [esp+0x30], ebp
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebp
        je public_62437d6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x30], ebp
        public_62437d6 : nop
        inc esi
        add ebx, 4
        cmp esi, 9
        jl public_624379b
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        lea eax, ss:[esp+0x1C]
        push ecx
        push eax
        push edi
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi]
        push eax
        push edx
        push esi
        call dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ds : [edi]
        add esi, 8
        push esi
        push edi
        call dword ptr ds : [eax+0x1C]
        pop edi
        pop esi
        mov ecx, dword ptr ss : [esp+0x14]
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6243770)
    }
}

#undef public_624379b
#undef public_62437d6

#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_447ec0);
CLANG_FORWARD_PROC_SYMBOL(public_447f90);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);

#define public_447fc0 _public_447fc0
#define public_448020 _public_448020
#define public_44817b _public_44817b
#define public_448188 _public_448188
#define public_44819e _public_44819e

PROC_DECLARE(0x447f90, internal_447f90, public_447f90);
extern "C" NAKED register_t __cdecl internal_447f90()
{
    __asm
    {
        sub esp, 0x4C
        push ebx
        push esi
        mov ebx, ecx
        call public_4c4060
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], esi
        call public_4c4060
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_44819e
        push ebp
        push edi
        nop 
        lea esp, ss:[esp]
        public_447fc0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0xC]
        push eax
        call dword ptr ds : [public_5c603c]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_448188
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        cmp eax, 0xC
        jne public_448188
        mov eax, dword ptr ds : [ebx+0x30]
        mov esi, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [eax+0xFC]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x20], ebp
        call dword ptr ds : [public_5c69a0]
        mov edi, 1
        cmp ebp, edi
        mov dword ptr ss : [esp+0x18], edi
        jl public_448188
        lea ebx, ds:[ebx]
        public_448020 : nop
        push edi
        lea ecx, ss:[esp+0x18]
/*FIXUP push offset public_5cbe58 @0x448025*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbe58
        push ecx
        call public_447ec0
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ebx+0x74]
        add esp, 0xC
        push edx
        call dword ptr ds : [public_5c61c4]
        cmp eax, 0xFFFFFFFF
        je public_44817b
        mov ecx, dword ptr ds : [esi+0x78]
        mov ebp, dword ptr ds : [esi+0x60]
        mov esi, dword ptr ds : [ebx+0xA4]
        lea edi, ds:[eax*8]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+edi]
        add esi, edi
        mov dword ptr ss : [esp+0x1C], ecx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x90]
        mov cl, byte ptr ss : [esp+0x30]
        and cl, 0xF8
        mov byte ptr ss : [esp+0x30], cl
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [eax+4]
        or cl, 3
        mov dword ptr ss : [esp+0x38], edx
        mov eax, dword ptr ds : [eax+8]
        mov byte ptr ss : [esp+0x30], cl
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x40], eax
        call public_42ae40
        push 0
        add esi, 4
        push esi
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        call public_428680
        mov esi, dword ptr ds : [ebx+0xA8]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+edi]
        add esp, 0x14
        add esi, edi
        mov dword ptr ss : [esp+0x1C], ebp
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x90]
        mov cl, byte ptr ss : [esp+0x48]
        and cl, 0xF8
        mov byte ptr ss : [esp+0x48], cl
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x58], 0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ds : [eax+4]
        or cl, 3
        mov dword ptr ss : [esp+0x50], edx
        mov eax, dword ptr ds : [eax+8]
        mov byte ptr ss : [esp+0x48], cl
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x58], eax
        call public_42ae40
        push 0
        add esi, 4
        push esi
        lea edx, ss:[esp+0x50]
        push edx
        push eax
        call public_428680
        mov edi, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x38]
        add esp, 0x14
        public_44817b : nop
        inc edi
        cmp edi, ebp
        mov dword ptr ss : [esp+0x18], edi
        jle public_448020
        public_448188 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x10], eax
        jne public_447fc0
        pop edi
        pop ebp
        public_44819e : nop
        pop esi
        pop ebx
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x447f90)
    }
}

#undef public_447fc0
#undef public_448020
#undef public_44817b
#undef public_448188
#undef public_44819e

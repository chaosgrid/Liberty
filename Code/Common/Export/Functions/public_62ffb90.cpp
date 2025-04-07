#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6301640);

#define public_62ffbc0 _public_62ffbc0
#define public_62ffbeb _public_62ffbeb
#define public_62ffc00 _public_62ffc00
#define public_62ffc33 _public_62ffc33

PROC_DECLARE(0x62ffb90, internal_62ffb90, public_62ffb90);
extern "C" NAKED register_t __cdecl internal_62ffb90()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [esi+0xC]
        xor ebp, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], edx
        lea ebx, ds:[ecx+0x34]
        nop 
        public_62ffbc0 : nop
        mov eax, dword ptr ss : [esp+ebp*4+0x18]
        test eax, eax
        je public_62ffc33
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ds:[ebx-4]
        xor edi, edi
        call public_6301640
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [ebx]
        je public_62ffbeb
        lea edi, ds:[eax+0x10]
        public_62ffbeb : nop
        mov edi, dword ptr ds : [edi+0x14]
        test edi, edi
        je public_62ffc33
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_62ffc00
        mov dword ptr ss : [esp+0x10], edi
        jmp public_62ffc33
        public_62ffc00 : nop
        cmp eax, edi
        je public_62ffc33
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        mov edx, dword ptr ds : [esi]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push edx
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0x2A1
/*FIXUP push offset public_63a234c @0x62ffc1e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a234c
        mov eax, 0x100001
/*FIXUP push offset public_63a2378 @0x62ffc28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2378
        push eax
        call dword ptr ds : [edx]
        add esp, 0x20
        public_62ffc33 : nop
        inc ebp
        add ebx, 0x14
        cmp ebp, 4
        jl public_62ffbc0
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62ffb90)
    }
}

#undef public_62ffbc0
#undef public_62ffbeb
#undef public_62ffc00
#undef public_62ffc33

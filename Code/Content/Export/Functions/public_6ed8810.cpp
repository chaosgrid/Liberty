#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6ed8810);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab38b);

#define public_6ed88ed _public_6ed88ed
#define public_6ed893a _public_6ed893a
#define public_6ed8a9c _public_6ed8a9c
#define public_6ed8a9e _public_6ed8a9e
#define public_6ed8aa1 _public_6ed8aa1

PROC_DECLARE(0x6ed8810, internal_6ed8810, public_6ed8810);
extern "C" NAKED register_t __cdecl internal_6ed8810()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab38b @0x6ed8812*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab38b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1A4
        mov eax, dword ptr ss : [esp+0x1B8]
        mov dl, byte ptr ss : [esp+7]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x1C0]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x1C0]
        lea ebp, ds:[ebx+0x14]
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], edi
        lea esi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x1C8]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x1C4], edi
        mov dword ptr ds : [ebx], offset public_6fb6580
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6ed8a9e
        push 0x80
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ed8a9c
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ed8aa1
        mov dword ptr ds : [ebx+0x28], 0x4A3B
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6ed88ed
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 3
        jae public_6ed893a
        public_6ed88ed : nop
        push 0xC
        call public_6fa912a
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ss : [ebp+4]
        push edi
        push edx
        push eax
        mov ecx, ebp
        call public_6eed270
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push edx
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[edi+0xC]
        mov dword ptr ss : [ebp+0xC], ecx
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        lea edx, ds:[edi+eax*4]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+4], edi
/*FIXUP public_6ed893a : nop
        push offset public_6fb6560 @0x6ed893a*/
  FIXUP public_6ed893a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6560
        lea eax, ss:[esp+0x68]
        push 0x40
        push eax
        mov dword ptr ss : [esp+0x6C], 0
        mov byte ptr ss : [esp+0x70], 0
        call public_6ea9f40
        mov ecx, dword ptr ds : [esi]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6ed895b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea edx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x74], eax
        push edx
        lea eax, ss:[esp+0x144]
        push eax
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x38]
        rep movsd
        lea ecx, ss:[esp+0x3C]
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 0x20
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
/*FIXUP push offset public_6fb6548 @0x6ed89a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6548
        lea ecx, ss:[esp+0xAC]
        push 0x40
        push ecx
        mov dword ptr ss : [esp+0xB0], 0
        mov byte ptr ss : [esp+0xB4], 0
        call public_6ea9f40
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        mov dword ptr ss : [esp+0xB4], eax
/*FIXUP push offset public_6fb62ec @0x6ed89d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        lea eax, ss:[esp+0xBC]
        push eax
        lea ecx, ss:[esp+0x188]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0x3C]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x38]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x20
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        mov eax, dword ptr ss : [esp+0x1D0]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        mov dword ptr ss : [esp+0x24], 0
        mov byte ptr ss : [esp+0x28], 0
        call dword ptr ds : [public_6fb3448]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, 0x40
/*FIXUP push offset public_6fb6064 @0x6ed8a4d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        sub ecx, eax
        push ecx
        lea edx, ss:[esp+eax+0x30]
        push edx
        call public_6ea9f40
        add dword ptr ss : [esp+0x30], eax
        lea eax, ss:[esp+0x100]
        mov ecx, 0x11
        lea esi, ss:[esp+0x30]
        lea edi, ss:[esp+0xFC]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x18
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
        jmp public_6ed8aa1
        public_6ed8a9c : nop
        xor edi, edi
        public_6ed8a9e : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ed8aa1 : nop
        mov ecx, dword ptr ss : [esp+0x1B4]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1B0
        ret 0x10
        UNREACHABLE_TRAP(0x6ed8810)
    }
}

#undef public_6ed88ed
#undef public_6ed893a
#undef public_6ed8a9c
#undef public_6ed8a9e
#undef public_6ed8aa1

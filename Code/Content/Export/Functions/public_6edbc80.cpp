#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6edbc80);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb210);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab38b);

#define public_6edbd67 _public_6edbd67
#define public_6edbdb4 _public_6edbdb4
#define public_6edbf35 _public_6edbf35
#define public_6edbf38 _public_6edbf38

PROC_DECLARE(0x6edbc80, internal_6edbc80, public_6edbc80);
extern "C" NAKED register_t __cdecl internal_6edbc80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab38b @0x6edbc82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab38b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1B0
        mov eax, dword ptr ss : [esp+0x1C4]
        mov edx, dword ptr ss : [esp+0x1C0]
        push ebx
        mov ebx, ecx
        mov cl, byte ptr ss : [esp+0xF]
        push ebp
        push esi
        lea ebp, ds:[ebx+0x14]
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], edi
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], edi
        lea esi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], cl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ds : [ebx+0x24], edx
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea eax, ss:[esp+0x1D4]
        push esi
        push eax
        mov dword ptr ss : [esp+0x1D0], edi
        mov dword ptr ds : [ebx], offset public_6fb6a04
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6edbf35
        push 4
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edbf35
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1D4]
        call public_6f73930
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edbf38
        mov dword ptr ds : [ebx+0x28], 0x4A3E
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        je public_6edbd67
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 6
        jae public_6edbdb4
        public_6edbd67 : nop
        push 0x18
        call public_6fa912a
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [ebp+4]
        push esi
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
        lea ecx, ds:[esi+0x18]
        mov dword ptr ss : [ebp+0xC], ecx
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        lea edx, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+4], esi
/*FIXUP public_6edbdb4 : nop
        push offset public_6fb6348 @0x6edbdb4*/
  FIXUP public_6edbdb4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6348
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        mov edx, dword ptr ss : [esp+0x14]
        push edi
        push edx
        lea eax, ss:[esp+0xB8]
        push 1
        push eax
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x38]
        rep movsd
        lea ecx, ss:[esp+0x3C]
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
        mov ecx, dword ptr ss : [esp+0x14]
        push 0
        push ecx
        lea edx, ss:[esp+0x140]
        push 2
        push edx
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x38]
        lea eax, ss:[esp+0x3C]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        push eax
        call esi
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
/*FIXUP push offset public_6fb6314 @0x6edbe65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6314
        call esi
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        lea eax, ss:[esp+0x20]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        mov edx, dword ptr ss : [esp+0x14]
        push 0
        push edx
        lea eax, ss:[esp+0xFC]
        push 3
        push eax
        call public_6eeb210
        mov ecx, 0x11
        mov esi, eax
        lea edi, ss:[esp+0x38]
        rep movsd
        lea ecx, ss:[esp+0x3C]
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
/*FIXUP push offset public_6fb69ec @0x6edbecc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb69ec
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x70], 0
        mov byte ptr ss : [esp+0x74], 0
        call public_6ead640
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6edbeeb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea edx, ss:[esp+0x78]
        push edx
        lea eax, ss:[esp+0x188]
        push eax
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x38]
        rep movsd
        lea ecx, ss:[esp+0x3C]
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
        jmp public_6edbf38
        public_6edbf35 : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6edbf38 : nop
        mov ecx, dword ptr ss : [esp+0x1C0]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1BC
        ret 0xC
        UNREACHABLE_TRAP(0x6edbc80)
    }
}

#undef public_6edbd67
#undef public_6edbdb4
#undef public_6edbf35
#undef public_6edbf38

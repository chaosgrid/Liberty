#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6edfb40);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab38b);

#define public_6edfc1d _public_6edfc1d
#define public_6edfc6a _public_6edfc6a
#define public_6edfdb5 _public_6edfdb5
#define public_6edfdb7 _public_6edfdb7
#define public_6edfdba _public_6edfdba

PROC_DECLARE(0x6edfb40, internal_6edfb40, public_6edfb40);
extern "C" NAKED register_t __cdecl internal_6edfb40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab38b @0x6edfb42*/
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
        mov dword ptr ds : [ebx], offset public_6fb7010
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6edfdb7
        push 0x400
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edfdb5
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edfdba
        mov dword ptr ds : [ebx+0x28], 0x4A3B
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6edfc1d
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 3
        jae public_6edfc6a
        public_6edfc1d : nop
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
/*FIXUP public_6edfc6a : nop
        push offset public_6fb6ff8 @0x6edfc6a*/
  FIXUP public_6edfc6a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6ff8
        lea eax, ss:[esp+0xAC]
        push 0x40
        push eax
        mov dword ptr ss : [esp+0xB0], 0
        mov byte ptr ss : [esp+0xB4], 0
        call public_6ea9f40
        mov ecx, dword ptr ds : [esi]
        push ecx
/*FIXUP push offset public_6fb62ec @0x6edfc94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        lea edx, ss:[esp+0xBC]
        mov dword ptr ss : [esp+0xB8], eax
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
        mov edx, dword ptr ss : [esp+0x1D0]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x24], 0
        mov byte ptr ss : [esp+0x28], 0
        call dword ptr ds : [public_6fb3454]
        lea eax, ss:[esp+0xF4]
        mov ecx, 0x11
        lea esi, ss:[esp+0x24]
        lea edi, ss:[esp+0xF0]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
/*FIXUP push offset public_6fb6fe0 @0x6edfd3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6fe0
        lea eax, ss:[esp+0x68]
        push 0x40
        push eax
        mov dword ptr ss : [esp+0x6C], 0
        mov byte ptr ss : [esp+0x70], 0
        call public_6ea9f40
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6edfd61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea edx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x74], eax
        push edx
        lea eax, ss:[esp+0x188]
        push eax
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x104]
        rep movsd
        lea ecx, ss:[esp+0x108]
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 0x20
        mov dword ptr ss : [esp+0x10], eax
        lea edx, ss:[esp+0x10]
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
        jmp public_6edfdba
        public_6edfdb5 : nop
        xor edi, edi
        public_6edfdb7 : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6edfdba : nop
        mov ecx, dword ptr ss : [esp+0x1B4]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1B0
        ret 0x10
        UNREACHABLE_TRAP(0x6edfb40)
    }
}

#undef public_6edfc1d
#undef public_6edfc6a
#undef public_6edfdb5
#undef public_6edfdb7
#undef public_6edfdba

#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6ed7dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab2ab);

#define public_6ed7e9a _public_6ed7e9a
#define public_6ed7ee7 _public_6ed7ee7
#define public_6ed80ab _public_6ed80ab
#define public_6ed80ad _public_6ed80ad
#define public_6ed80b0 _public_6ed80b0

PROC_DECLARE(0x6ed7dc0, internal_6ed7dc0, public_6ed7dc0);
extern "C" NAKED register_t __cdecl internal_6ed7dc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab2ab @0x6ed7dc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab2ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x270
        mov eax, dword ptr ss : [esp+0x284]
        mov dl, byte ptr ss : [esp+7]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x28C]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x28C]
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
        lea ecx, ss:[esp+0x294]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x290], edi
        mov dword ptr ds : [ebx], offset public_6fb64c0
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6ed80ad
        push 0x40
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ed80ab
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ed80b0
        mov dword ptr ds : [ebx+0x28], 0x4A3C
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6ed7e9a
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 4
        jae public_6ed7ee7
        public_6ed7e9a : nop
        push 0x10
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
        lea ecx, ds:[edi+0x10]
        mov dword ptr ss : [ebp+0xC], ecx
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        lea edx, ds:[edi+eax*4]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+4], edi
/*FIXUP public_6ed7ee7 : nop
        push offset public_6fb6444 @0x6ed7ee7*/
  FIXUP public_6ed7ee7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6444
        lea ecx, ss:[esp+0x130]
        mov dword ptr ss : [esp+0x130], 0
        mov byte ptr ss : [esp+0x134], 0
        call public_6ead640
        mov eax, dword ptr ds : [esi]
        push eax
/*FIXUP push offset public_6fb6064 @0x6ed7f0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x138]
        push ecx
        lea edx, ss:[esp+0x17C]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0x30]
        mov ecx, 0x11
        lea edi, ss:[esp+0x2C]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
/*FIXUP push offset public_6fb64a8 @0x6ed7f57*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb64a8
        lea ecx, ss:[esp+0xA8]
        mov dword ptr ss : [esp+0xA8], 0
        mov byte ptr ss : [esp+0xAC], 0
        call public_6ead640
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
/*FIXUP push offset public_6fb6064 @0x6ed7f7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0xB0]
        push ecx
        lea edx, ss:[esp+0x204]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0x30]
        mov ecx, 0x11
        lea edi, ss:[esp+0x2C]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
/*FIXUP push offset public_6fb6488 @0x6ed7fc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6488
        lea eax, ss:[esp+0x68]
        push 0x40
        push eax
        mov dword ptr ss : [esp+0x6C], 0
        mov byte ptr ss : [esp+0x70], 0
        call public_6ea9f40
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6ed7fea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea edx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x74], eax
        push edx
        lea eax, ss:[esp+0x1CC]
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
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x10]
        push edx
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
/*FIXUP push offset public_6fb6468 @0x6ed8036*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6468
        lea ecx, ss:[esp+0xEC]
        mov dword ptr ss : [esp+0xEC], 0
        mov byte ptr ss : [esp+0xF0], 0
        call public_6ead640
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6ed805e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea edx, ss:[esp+0xF4]
        push edx
        lea eax, ss:[esp+0x248]
        push eax
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x2C]
        rep movsd
        lea ecx, ss:[esp+0x30]
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
        jmp public_6ed80b0
        public_6ed80ab : nop
        xor edi, edi
        public_6ed80ad : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ed80b0 : nop
        mov ecx, dword ptr ss : [esp+0x280]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x27C
        ret 0xC
        UNREACHABLE_TRAP(0x6ed7dc0)
    }
}

#undef public_6ed7e9a
#undef public_6ed7ee7
#undef public_6ed80ab
#undef public_6ed80ad
#undef public_6ed80b0

#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6edcdd0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab42b);

#define public_6edcead _public_6edcead
#define public_6edceeb _public_6edceeb
#define public_6edcfd4 _public_6edcfd4
#define public_6edcfd6 _public_6edcfd6
#define public_6edcfd9 _public_6edcfd9

PROC_DECLARE(0x6edcdd0, internal_6edcdd0, public_6edcdd0);
extern "C" NAKED register_t __cdecl internal_6edcdd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab42b @0x6edcdd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab42b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x160
        mov eax, dword ptr ss : [esp+0x174]
        mov dl, byte ptr ss : [esp+7]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x17C]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x17C]
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
        lea ecx, ss:[esp+0x184]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x180], edi
        mov dword ptr ds : [ebx], offset public_6fb6bdc
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6edcfd6
        push 0x4000
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edcfd4
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edcfd9
        mov dword ptr ds : [ebx+0x28], 0x4A3A
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6edcead
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 2
        jae public_6edceeb
        public_6edcead : nop
        push 8
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
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[edi+8]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[edi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], edi
/*FIXUP public_6edceeb : nop
        push offset public_6fb6bc0 @0x6edceeb*/
  FIXUP public_6edceeb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6bc0
        lea ecx, ss:[esp+0x24]
        push 0x40
        push ecx
        mov dword ptr ss : [esp+0x28], 0
        mov byte ptr ss : [esp+0x2C], 0
        call public_6ea9f40
        mov edx, dword ptr ds : [esi]
        push edx
        mov dword ptr ss : [esp+0x2C], eax
/*FIXUP push offset public_6fb6064 @0x6edcf10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x100]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0xC4]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0xC0]
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
/*FIXUP push offset public_6fb6ba0 @0x6edcf5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6ba0
        lea edx, ss:[esp+0x68]
        push 0x40
        push edx
        mov dword ptr ss : [esp+0x6C], 0
        mov byte ptr ss : [esp+0x70], 0
        call public_6ea9f40
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
/*FIXUP push offset public_6fb6064 @0x6edcf84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x78]
        push ecx
        lea edx, ss:[esp+0x144]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0xC4]
        mov ecx, 0x11
        lea edi, ss:[esp+0xC0]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x20
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
        jmp public_6edcfd9
        public_6edcfd4 : nop
        xor edi, edi
        public_6edcfd6 : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6edcfd9 : nop
        mov ecx, dword ptr ss : [esp+0x170]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x16C
        ret 0xC
        UNREACHABLE_TRAP(0x6edcdd0)
    }
}

#undef public_6edcead
#undef public_6edceeb
#undef public_6edcfd4
#undef public_6edcfd6
#undef public_6edcfd9

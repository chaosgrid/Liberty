#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eddff0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab44b);

#define public_6ede0ca _public_6ede0ca
#define public_6ede108 _public_6ede108
#define public_6ede18e _public_6ede18e
#define public_6ede193 _public_6ede193
#define public_6ede1b0 _public_6ede1b0
#define public_6ede1b2 _public_6ede1b2
#define public_6ede1b5 _public_6ede1b5

PROC_DECLARE(0x6eddff0, internal_6eddff0, public_6eddff0);
extern "C" NAKED register_t __cdecl internal_6eddff0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab44b @0x6eddff2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab44b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xDC
        mov eax, dword ptr ss : [esp+0xF0]
        mov dl, byte ptr ss : [esp+3]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xF8]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0xF8]
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
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x100]
        push esi
        push ecx
        mov dword ptr ss : [esp+0xFC], edi
        mov dword ptr ds : [ebx], offset public_6fb6d78
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6ede1b2
        push 4
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ede1b0
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ede1b5
        mov dword ptr ds : [ebx+0x28], 0x4A3A
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6ede0ca
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 2
        jae public_6ede108
        public_6ede0ca : nop
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
/*FIXUP public_6ede108 : nop
        push offset public_6fb6d5c @0x6ede108*/
  FIXUP public_6ede108 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6d5c
        lea ecx, ss:[esp+0x28]
        push 0x40
        push ecx
        mov dword ptr ss : [esp+0x2C], 0
        mov byte ptr ss : [esp+0x30], 0
        call public_6ea9f40
        mov edx, dword ptr ds : [esi]
        push edx
        mov dword ptr ss : [esp+0x30], eax
/*FIXUP push offset public_6fb6064 @0x6ede12d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0xC0]
        push ecx
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x80]
        lea edx, ss:[esp+0x84]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        push edx
        call esi
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x20
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        cmp dword ptr ss : [esp+0x108], 2
        jne public_6ede18e
/*FIXUP push offset public_6fb6cb0 @0x6ede187*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6cb0
        jmp public_6ede193
/*FIXUP public_6ede18e : nop
        push offset public_6fb6c88 @0x6ede18e*/
  FIXUP public_6ede18e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6c88
        public_6ede193 : nop
        call esi
        add esp, 4
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [ebp+8]
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
        jmp public_6ede1b5
        public_6ede1b0 : nop
        xor edi, edi
        public_6ede1b2 : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ede1b5 : nop
        mov ecx, dword ptr ss : [esp+0xEC]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xE8
        ret 0x10
        UNREACHABLE_TRAP(0x6eddff0)
    }
}

#undef public_6ede0ca
#undef public_6ede108
#undef public_6ede18e
#undef public_6ede193
#undef public_6ede1b0
#undef public_6ede1b2
#undef public_6ede1b5

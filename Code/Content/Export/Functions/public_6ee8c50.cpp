#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8c50);
CLANG_FORWARD_PROC_SYMBOL(public_6eedcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabc58);

#define public_6ee8ca2 _public_6ee8ca2
#define public_6ee8cf2 _public_6ee8cf2
#define public_6ee8d0b _public_6ee8d0b
#define public_6ee8d11 _public_6ee8d11
#define public_6ee8d14 _public_6ee8d14
#define public_6ee8d1e _public_6ee8d1e
#define public_6ee8d30 _public_6ee8d30
#define public_6ee8d4c _public_6ee8d4c
#define public_6ee8d57 _public_6ee8d57

PROC_DECLARE(0x6ee8c50, internal_6ee8c50, public_6ee8c50);
extern "C" NAKED register_t __cdecl internal_6ee8c50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabc58 @0x6ee8c52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabc58
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+4], edi
        call dword ptr ds : [public_6fb36a0]
        test al, al
        jne public_6ee8d57
        mov al, byte ptr ss : [esp+0x3C]
        push ebx
        mov ebx, dword ptr ds : [edi+0x18]
        push esi
        xor esi, esi
        mov byte ptr ss : [esp+0x10], al
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        cmp ebx, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [esp+0x3C], esi
        je public_6ee8d1e
        push ebp
        public_6ee8ca2 : nop
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [ebx+0x10]
        fst dword ptr ds : [ebx+0x10]
        fcomp dword ptr ds : [ebx+0x14]
        fnstsw ax
        test ah, 1
        jne public_6ee8d11
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x2C], edx
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [ebx]
        push edx
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ss : [esp+0x20]
        push 1
        mov dword ptr ss : [esp+0x30], ecx
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6eedcc0
        mov ebp, dword ptr ds : [edi+0x1C]
        lea eax, ds:[ebx+0x18]
        cmp eax, ebp
        je public_6ee8d0b
        mov edx, ebx
        public_6ee8cf2 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x18
        mov ecx, 6
        add edx, 0x18
        cmp eax, ebp
        rep movsd
        jne public_6ee8cf2
        mov edi, dword ptr ss : [esp+0x10]
        public_6ee8d0b : nop
        add dword ptr ds : [edi+0x1C], 0xFFFFFFE8
        jmp public_6ee8d14
        public_6ee8d11 : nop
        add ebx, 0x18
        public_6ee8d14 : nop
        cmp ebx, dword ptr ds : [edi+0x1C]
        jne public_6ee8ca2
        mov esi, dword ptr ss : [esp+0x18]
        pop ebp
        public_6ee8d1e : nop
        cmp esi, dword ptr ss : [esp+0x18]
        je public_6ee8d4c
        mov edi, dword ptr ds : [public_6fb360c]
        lea ebx, ds:[ebx]
        public_6ee8d30 : nop
        push esi
        push 0xB
/*FIXUP push offset public_6fd1c74 @0x6ee8d33*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        call edi
        mov eax, dword ptr ss : [esp+0x24]
        add esi, 0x14
        add esp, 0xC
        cmp esi, eax
        jne public_6ee8d30
        mov esi, dword ptr ss : [esp+0x14]
        public_6ee8d4c : nop
        push esi
        call public_6fa8fe0
        add esp, 4
        pop esi
        pop ebx
        public_6ee8d57 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x6ee8c50)
    }
}

#undef public_6ee8ca2
#undef public_6ee8cf2
#undef public_6ee8d0b
#undef public_6ee8d11
#undef public_6ee8d14
#undef public_6ee8d1e
#undef public_6ee8d30
#undef public_6ee8d4c
#undef public_6ee8d57

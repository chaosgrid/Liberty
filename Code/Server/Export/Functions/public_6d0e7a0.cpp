#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7370);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d616f8);

#define public_6d0e7d7 _public_6d0e7d7
#define public_6d0e82b _public_6d0e82b
#define public_6d0e833 _public_6d0e833
#define public_6d0e837 _public_6d0e837
#define public_6d0e861 _public_6d0e861
#define public_6d0e86c _public_6d0e86c
#define public_6d0e8a1 _public_6d0e8a1
#define public_6d0e8b7 _public_6d0e8b7

PROC_DECLARE(0x6d0e7a0, internal_6d0e7a0, public_6d0e7a0);
extern "C" NAKED register_t __cdecl internal_6d0e7a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d616f8 @0x6d0e7a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d616f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], ebx
        je public_6d0e8b7
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x44]
        xor esi, esi
        public_6d0e7d7 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [ebx+0x40]
        cmp eax, dword ptr ds : [ecx]
        je public_6d0e8a1
        mov edx, dword ptr ds : [edi]
        lea ecx, ds:[ebx+8]
        push edx
        call public_6cf7370
        test al, al
        je public_6d0e8a1
        mov al, byte ptr ss : [esp+0x44]
        mov byte ptr ss : [esp+0x20], al
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], esi
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, esi
        mov ecx, dword ptr ds : [edi]
        mov dx, word ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x18], ecx
        mov word ptr ss : [esp+0x1C], dx
        jne public_6d0e82b
        xor ebp, ebp
        jmp public_6d0e833
        public_6d0e82b : nop
        mov ebp, dword ptr ds : [edi+0x10]
        sub ebp, eax
        sar ebp, 2
        public_6d0e833 : nop
        cmp ebp, esi
        jle public_6d0e86c
        public_6d0e837 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [eax+esi*4]
        push eax
        lea ecx, ds:[ebx+8]
        call public_6cf7370
        test al, al
        je public_6d0e861
        mov eax, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ss : [esp+0x28]
        lea ecx, ds:[eax+esi*4]
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_6cecbd0
        public_6d0e861 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        inc esi
        cmp esi, ebp
        jl public_6d0e837
        xor esi, esi
        public_6d0e86c : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ds : [ebx+0x40]
        push edx
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call public_6d5ffb0
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], esi
        public_6d0e8a1 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6d0e7d7
        pop edi
        pop esi
        pop ebp
        public_6d0e8b7 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x6d0e7a0)
    }
}

#undef public_6d0e7d7
#undef public_6d0e82b
#undef public_6d0e833
#undef public_6d0e837
#undef public_6d0e861
#undef public_6d0e86c
#undef public_6d0e8a1
#undef public_6d0e8b7

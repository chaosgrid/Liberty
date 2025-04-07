#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2edc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f311a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31650);
CLANG_FORWARD_PROC_SYMBOL(public_6f318d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f586d6);

#define public_6f2ee89 _public_6f2ee89
#define public_6f2ee8d _public_6f2ee8d
#define public_6f2eeb0 _public_6f2eeb0

PROC_DECLARE(0x6f2edf0, internal_6f2edf0, public_6f2edf0);
extern "C" NAKED register_t __cdecl internal_6f2edf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f586d6 @0x6f2edf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f586d6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [ebp], offset public_6f5a2c4
        lea esi, ss:[ebp+4]
        push 0x1C
        mov dword ptr ss : [esp+0x28], ebp
        mov byte ptr ds : [esi], al
        call public_6f57e9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        mov cl, byte ptr ss : [esp+0x13]
        mov dl, byte ptr ss : [esp+0x13]
        lea edi, ss:[ebp+0x10]
        mov byte ptr ds : [edi], cl
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], ebx
        mov byte ptr ds : [edi+1], dl
        mov byte ptr ds : [edi+0xC], bl
        call public_6f318d0
        push 0x14
        mov byte ptr ss : [esp+0x3C], 1
        mov dword ptr ss : [ebp], offset public_6f5a280
        mov dword ptr ss : [ebp+0x24], 2
        call public_6f57e9c
        add esp, 4
        cmp eax, ebx
        je public_6f2ee89
        push ebx
        push ebx
        push ebx
        push ebx
        mov ecx, eax
        call public_6f2edc0
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6f2ee8d
        public_6f2ee89 : nop
        mov dword ptr ss : [esp+0x14], ebx
        public_6f2ee8d : nop
        push 0x14
        call public_6f57e9c
        add esp, 4
        cmp eax, ebx
        je public_6f2eeb0
        push ebx
        push ebx
        push 0x3F800000
        push 0x3F800000
        mov ecx, eax
        call public_6f2edc0
        mov ebx, eax
        public_6f2eeb0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x10], 0
        mov dword ptr ds : [ebx+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_6f311a0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6f33dd0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_6f311a0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebx
        push eax
        call public_6f33dd0
        mov edx, dword ptr ds : [esi+8]
        add esp, 8
        inc edx
        mov dword ptr ds : [esi+8], edx
        mov esi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi+0x10]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], 0
        call public_6f31650
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x30]
        call public_6f31ad0
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+0x10], esi
        mov edx, dword ptr ds : [ebx+0x10]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], 0
        call public_6f31650
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        pop esi
        mov eax, ebp
        mov dword ptr ds : [edx+0x10], ebx
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x6f2edf0)
    }
}

#undef public_6f2ee89
#undef public_6f2ee8d
#undef public_6f2eeb0

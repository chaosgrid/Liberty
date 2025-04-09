#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c38b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b807c);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd6e2);

#define public_4c3929 _public_4c3929

PROC_DECLARE(0x4c38b0, internal_4c38b0, public_4c38b0);
extern "C" NAKED register_t __cdecl internal_4c38b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd6e2 @0x4c38b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd6e2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        push edi
        or ecx, 0xFFFFFFFF
        xor ebx, ebx
        mov byte ptr ss : [esp+0x14], al
        xor eax, eax
        mov edi, offset public_5d6ca4
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4c3929
        mov edi, dword ptr ss : [esp+0x18]
        push esi
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d6ca4
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], ebp
        mov byte ptr ds : [eax+ebp], bl
        pop esi
        public_4c3929 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x14], offset public_5c865c
        call dword ptr ds : [public_5c7124]
        mov dl, byte ptr ss : [esp+0x14]
        push ebx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x4C], 1
        mov byte ptr ss : [esp+0x34], dl
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c6f9c]
        mov eax, dword ptr ds : [public_5c6fd4]
/*FIXUP push offset public_5f7ac4 @0x4c3979*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5f7ac4
        lea ecx, ss:[esp+0x28]
        push ecx
        mov byte ptr ss : [esp+0x50], bl
        mov dword ptr ss : [esp+0x2C], eax
        call public_5b807c
        pop edi
        pop ebp
        pop ebx
        UNREACHABLE_TRAP(0x4c38b0)
    }
}

#undef public_4c3929

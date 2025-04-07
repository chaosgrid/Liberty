#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62ab2);

#define public_6d24379 _public_6d24379

PROC_DECLARE(0x6d24300, internal_6d24300, public_6d24300);
extern "C" NAKED register_t __cdecl internal_6d24300()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62ab2 @0x6d24302*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62ab2
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
        mov edi, offset public_6d68f30
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
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d24379
        mov edi, dword ptr ss : [esp+0x18]
        push esi
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6d68f30
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], ebp
        mov byte ptr ds : [eax+ebp], bl
        pop esi
        public_6d24379 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x14], offset public_6d66ee4
        call dword ptr ds : [public_6d64c5c]
        mov dl, byte ptr ss : [esp+0x14]
        push ebx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x4C], 1
        mov byte ptr ss : [esp+0x34], dl
        call dword ptr ds : [public_6d64b74]
        mov eax, dword ptr ds : [public_6d64b80]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_6d64b70]
/*FIXUP push offset public_6d72fc0 @0x6d243c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72fc0
        lea eax, ss:[esp+0x28]
        push eax
        mov byte ptr ss : [esp+0x50], bl
        mov dword ptr ss : [esp+0x2C], offset public_6d68ab0
        call public_6d601a2
        UNREACHABLE_TRAP(0x6d24300)
    }
}

#undef public_6d24379

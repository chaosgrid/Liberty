#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6267e10);
CLANG_FORWARD_PROC_SYMBOL(public_6391df6);
CLANG_FORWARD_JUMP_SYMBOL(public_6392672);

#define public_6267e89 _public_6267e89

PROC_DECLARE(0x6267e10, internal_6267e10, public_6267e10);
extern "C" NAKED register_t __cdecl internal_6267e10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392672 @0x6267e12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392672
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
        mov edi, offset public_63997b4
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
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6267e89
        mov edi, dword ptr ss : [esp+0x18]
        push esi
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_63997b4
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], ebp
        mov byte ptr ds : [eax+ebp], bl
        pop esi
        public_6267e89 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x14], offset public_63997b0
        call dword ptr ds : [public_6399310]
        mov dl, byte ptr ss : [esp+0x14]
        push ebx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x4C], 1
        mov byte ptr ss : [esp+0x34], dl
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_63991a8]
        mov eax, dword ptr ds : [public_6399194]
/*FIXUP push offset public_63ab218 @0x6267ed9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ab218
        lea ecx, ss:[esp+0x28]
        push ecx
        mov byte ptr ss : [esp+0x50], bl
        mov dword ptr ss : [esp+0x2C], eax
        call public_6391df6
        pop edi
        pop ebp
        pop ebx
        UNREACHABLE_TRAP(0x6267e10)
    }
}

#undef public_6267e89

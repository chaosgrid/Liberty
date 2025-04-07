#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f52c70);
CLANG_FORWARD_PROC_SYMBOL(public_6f52f60);
CLANG_FORWARD_PROC_SYMBOL(public_6f53080);
CLANG_FORWARD_PROC_SYMBOL(public_6f53ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf58d);

PROC_DECLARE(0x6f52c70, internal_6f52c70, public_6f52c70);
extern "C" NAKED register_t __cdecl internal_6f52c70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf58d @0x6f52c72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf58d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [ebp]
        mov ebx, ecx
        push esi
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+4]
        push edi
        lea edx, ss:[ebp+8]
        mov dword ptr ds : [ebx+4], ecx
        push edx
        lea ecx, ds:[ebx+8]
        mov dword ptr ss : [esp+0x14], ebx
        call public_6f55880
        mov eax, dword ptr ss : [ebp+0x18]
        lea ecx, ss:[ebp+0x1C]
        push ecx
        lea ecx, ds:[ebx+0x1C]
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ds : [ebx+0x18], eax
        call public_6f55880
        mov edx, dword ptr ss : [ebp+0x2C]
        lea eax, ss:[ebp+0x30]
        push eax
        lea ecx, ds:[ebx+0x30]
        mov byte ptr ss : [esp+0x30], 1
        mov dword ptr ds : [ebx+0x2C], edx
        call public_6f55880
        mov ecx, dword ptr ss : [ebp+0x40]
        lea edx, ss:[ebp+0x44]
        mov dword ptr ds : [ebx+0x40], ecx
        push edx
        lea ecx, ds:[ebx+0x44]
        mov byte ptr ss : [esp+0x30], 2
        call public_6f55880
        mov eax, dword ptr ss : [ebp+0x54]
        lea ecx, ss:[ebp+0x58]
        push ecx
        lea ecx, ds:[ebx+0x58]
        mov byte ptr ss : [esp+0x30], 3
        mov dword ptr ds : [ebx+0x54], eax
        call public_6f55880
        mov edx, dword ptr ss : [ebp+0x68]
        mov dword ptr ds : [ebx+0x68], edx
        mov eax, dword ptr ss : [ebp+0x6C]
        mov dword ptr ds : [ebx+0x6C], eax
        lea ecx, ss:[ebp+0x70]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0x70]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea esi, ss:[ebp+0x7C]
        lea edi, ds:[ebx+0x7C]
        mov ecx, 8
        rep movsd
        mov edx, dword ptr ss : [ebp+0x9C]
        mov dword ptr ds : [ebx+0x9C], edx
        mov eax, dword ptr ss : [ebp+0xA0]
        lea edx, ss:[ebp+0xA4]
        lea ecx, ds:[ebx+0xA4]
        push edx
        mov byte ptr ss : [esp+0x30], 4
        mov dword ptr ds : [ebx+0xA0], eax
        call public_6f55880
        lea eax, ss:[ebp+0xB4]
        lea ecx, ds:[ebx+0xB4]
        push eax
        mov byte ptr ss : [esp+0x30], 5
        call public_6f52f60
        mov byte ptr ss : [esp+0x2C], 6
        lea edx, ss:[ebp+0xC4]
        lea ecx, ds:[ebx+0xC4]
        push edx
        call public_6f52f60
        mov al, byte ptr ss : [ebp+0xD4]
        lea edi, ss:[ebp+0xD4]
        lea esi, ds:[ebx+0xD4]
        push 0x10
        mov byte ptr ss : [esp+0x30], 7
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x34], ecx
        push edx
        mov ecx, edi
        call public_6f1df30
        mov edi, eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6f53ae0
        mov cl, byte ptr ss : [ebp+0xE0]
        lea edi, ss:[ebp+0xE0]
        lea esi, ds:[ebx+0xE0]
        push 0
        mov byte ptr ds : [esi], cl
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], 8
        call public_6f93790
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edx, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], edx
        call public_6f1df30
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov edi, eax
        call public_6f1df30
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [edi]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        mov ecx, esi
        call public_6ed0230
        add ebp, 0xEC
        push ebp
        lea ecx, ds:[ebx+0xEC]
        mov byte ptr ss : [esp+0x30], 9
        call public_6f53080
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x6f52c70)
    }
}

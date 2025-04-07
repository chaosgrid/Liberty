#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8910);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6f21fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23120);
CLANG_FORWARD_PROC_SYMBOL(public_6f23db0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae19b);

#define public_6f23f77 _public_6f23f77

PROC_DECLARE(0x6f23db0, internal_6f23db0, public_6f23db0);
extern "C" NAKED register_t __cdecl internal_6f23db0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae19b @0x6f23db2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae19b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x98
        push ebx
        mov ebx, dword ptr ss : [esp+0xAC]
        mov eax, dword ptr ds : [ebx+0x38]
        push ebp
        push esi
        push edi
        lea esi, ds:[ebx+4]
        mov ecx, 0xD
        lea edi, ss:[esp+0x18]
        rep movsd
        mov cl, byte ptr ds : [ebx+0x3C]
        lea edi, ds:[ebx+0x3C]
        push 0
        mov byte ptr ss : [esp+0x54], cl
        push 0
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x54], eax
        call public_6f93790
        mov esi, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0xA4]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x58], eax
        mov dword ptr ss : [esp+0x5C], 0
        call public_6f1df30
        mov ebp, eax
        lea eax, ss:[esp+0x9C]
        push eax
        lea ecx, ss:[esp+0x54]
        call public_6f1df30
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push edx
        lea ecx, ss:[esp+0x5C]
        call public_6ed0230
        mov al, byte ptr ds : [ebx+0x48]
        mov cl, byte ptr ds : [ebx+0x49]
        mov edx, dword ptr ds : [ebx+0x4C]
        mov byte ptr ss : [esp+0x5C], al
        mov al, byte ptr ds : [ebx+0x50]
        mov byte ptr ss : [esp+0x5D], cl
        mov ecx, dword ptr ds : [ebx+0x54]
        mov byte ptr ss : [esp+0x64], al
        mov dword ptr ss : [esp+0x60], edx
        lea eax, ss:[esp+0x13]
        mov dword ptr ss : [esp+0x68], ecx
        lea edx, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0xB4], 0
        mov dword ptr ss : [esp+0xA4], edx
        call public_6f93460
        lea eax, ds:[ebx+0x58]
        push eax
        lea ecx, ss:[esp+0x70]
        mov byte ptr ss : [esp+0xB4], 1
        call public_6f20230
        mov ecx, dword ptr ds : [ebx+0x64]
        mov dword ptr ss : [esp+0x78], ecx
        lea ebp, ds:[ebx+0x68]
        push ebp
        lea ecx, ss:[esp+0x80]
        mov byte ptr ss : [esp+0xB4], 2
        call public_6f21fd0
        lea eax, ds:[ebx+0x6C]
        push eax
        lea ecx, ss:[esp+0x84]
        mov byte ptr ss : [esp+0xB4], 3
        call public_6f55880
        mov edx, dword ptr ds : [ebx+0x7C]
        mov eax, dword ptr ds : [ebx+0x80]
        mov ecx, dword ptr ds : [ebx+0x84]
        mov dword ptr ss : [esp+0x90], edx
        mov dword ptr ss : [esp+0x94], eax
        mov dword ptr ss : [esp+0x98], ecx
        mov dword ptr ss : [esp+0x14], offset public_6fb60a8
        mov esi, dword ptr ss : [esp+0xBC]
        lea edx, ds:[esi+8]
        push edx
        lea ecx, ds:[ebx+4]
        mov dword ptr ss : [esp+0xB4], 4
        call public_6ed0160
        mov eax, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [ebx+0x38], eax
        lea eax, ds:[esi+0x3C]
        push eax
        mov ecx, edi
        call public_6f93490
        mov cl, byte ptr ds : [esi+0x48]
        mov byte ptr ds : [ebx+0x48], cl
        mov dl, byte ptr ds : [esi+0x49]
        mov byte ptr ds : [ebx+0x49], dl
        mov eax, dword ptr ds : [esi+0x4C]
        mov dword ptr ds : [ebx+0x4C], eax
        mov cl, byte ptr ds : [esi+0x50]
        mov byte ptr ds : [ebx+0x50], cl
        mov edx, dword ptr ds : [esi+0x54]
        lea edi, ds:[esi+0x58]
        push edi
        lea ecx, ds:[ebx+0x58]
        mov dword ptr ds : [ebx+0x54], edx
        call public_6f20230
        mov eax, dword ptr ds : [esi+0x64]
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x64], eax
        call public_6f28e10
        mov ecx, dword ptr ds : [esi+0x68]
        test ecx, ecx
        mov dword ptr ss : [ebp], ecx
        je public_6f23f77
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6f23f77 : nop
        lea ebp, ds:[esi+0x6C]
        push ebp
        lea ecx, ds:[ebx+0x6C]
        call public_6ef8910
        mov eax, dword ptr ds : [esi+0x7C]
        mov dword ptr ds : [ebx+0x7C], eax
        mov ecx, dword ptr ds : [esi+0x80]
        mov dword ptr ds : [ebx+0x80], ecx
        mov edx, dword ptr ds : [esi+0x84]
        lea eax, ss:[esp+0x1C]
        lea ecx, ds:[esi+4]
        push eax
        mov dword ptr ds : [ebx+0x84], edx
        call public_6ed0160
        mov ecx, dword ptr ss : [esp+0x4C]
        lea edx, ss:[esp+0x50]
        mov dword ptr ds : [esi+0x38], ecx
        push edx
        lea ecx, ds:[esi+0x3C]
        call public_6f93490
        mov cl, byte ptr ss : [esp+0x5D]
        mov edx, dword ptr ss : [esp+0x60]
        mov al, byte ptr ss : [esp+0x5C]
        mov byte ptr ds : [esi+0x49], cl
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [esi+0x4C], edx
        mov byte ptr ds : [esi+0x48], al
        mov al, byte ptr ss : [esp+0x64]
        lea edx, ss:[esp+0x6C]
        mov dword ptr ds : [esi+0x54], ecx
        push edx
        mov ecx, edi
        mov byte ptr ds : [esi+0x50], al
        call public_6f20230
        mov eax, dword ptr ss : [esp+0x78]
        lea ecx, ss:[esp+0x7C]
        push ecx
        lea ecx, ds:[esi+0x68]
        mov dword ptr ds : [esi+0x64], eax
        call public_6f23120
        lea edx, ss:[esp+0x80]
        push edx
        mov ecx, ebp
        call public_6ef8910
        mov ecx, dword ptr ss : [esp+0x94]
        mov eax, dword ptr ss : [esp+0x90]
        mov edx, dword ptr ss : [esp+0x98]
        mov dword ptr ds : [esi+0x80], ecx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ds : [esi+0x84], edx
        mov dword ptr ss : [esp+0xB0], 0xFFFFFFFF
        call public_6ed2c20
        mov ecx, dword ptr ss : [esp+0xA8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA4
        ret 
        UNREACHABLE_TRAP(0x6f23db0)
    }
}

#undef public_6f23f77

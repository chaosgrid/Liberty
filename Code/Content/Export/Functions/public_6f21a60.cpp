#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6f21a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f22a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f22a90);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadd9f);

#define public_6f21b77 _public_6f21b77

PROC_DECLARE(0x6f21a60, internal_6f21a60, public_6f21a60);
extern "C" NAKED register_t __cdecl internal_6f21a60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fadd9f @0x6f21a62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadd9f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+4], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x14], 0
        je public_6f21b77
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+4]
        push esi
        mov dword ptr ss : [ebp+4], ecx
        push edi
        lea edi, ss:[ebp+8]
        lea esi, ds:[ebx+8]
        mov ecx, 0xC
        rep movsd
        mov edx, dword ptr ds : [ebx+0x38]
        mov dword ptr ss : [ebp+0x38], edx
        mov al, byte ptr ds : [ebx+0x3C]
        lea esi, ss:[ebp+0x3C]
        push 0x1C
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edi, dword ptr ds : [ebx+0x40]
        mov ecx, dword ptr ds : [edi]
        add esp, 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x2C], ecx
        push edx
        mov ecx, esi
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push edx
        mov ecx, esi
        call public_6f22a20
        mov al, byte ptr ds : [ebx+0x48]
        lea esi, ss:[ebp+0x48]
        push 0x3C
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        xor edi, edi
        mov dword ptr ds : [esi+8], edi
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6f22a90
        mov cl, byte ptr ss : [esp+0x28]
        lea esi, ss:[ebp+0x54]
        push edi
        mov byte ptr ds : [esi], cl
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 2
        mov dword ptr ss : [esp+0x34], esi
        call public_6f93790
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], edi
        lea edx, ds:[ebx+0x54]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 3
        call public_6f20230
        mov eax, dword ptr ds : [ebx+0x60]
        mov dword ptr ss : [ebp+0x60], eax
        mov ecx, dword ptr ds : [ebx+0x64]
        mov dword ptr ss : [ebp+0x64], ecx
        mov edx, dword ptr ds : [ebx+0x68]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x68], edx
        pop ebx
        public_6f21b77 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f21a60)
    }
}

#undef public_6f21b77

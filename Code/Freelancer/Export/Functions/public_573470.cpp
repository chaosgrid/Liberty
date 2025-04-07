#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_573470);
CLANG_FORWARD_PROC_SYMBOL(public_591ba0);
CLANG_FORWARD_PROC_SYMBOL(public_591ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c397b);

PROC_DECLARE(0x573470, internal_573470, public_573470);
extern "C" NAKED register_t __cdecl internal_573470()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c397b @0x573472*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c397b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_5e2ef4
        mov dword ptr ds : [esi+0x7C], offset public_5e2ed8
        mov dword ptr ds : [esi+0x80], offset public_5e2ed0
        mov eax, dword ptr ds : [esi+0x104]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x100]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 7
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0xF8]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[esi+0xF4]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 6
        call public_46c860
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        add esp, 4
        lea ecx, ds:[esi+0x8C]
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE0], ebx
        mov byte ptr ss : [esp+0x1C], bl
        call public_591ef0
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_591ba0
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x573470)
    }
}

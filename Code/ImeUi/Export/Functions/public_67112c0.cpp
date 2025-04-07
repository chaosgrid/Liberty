#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6711000);
CLANG_FORWARD_PROC_SYMBOL(public_6711120);
CLANG_FORWARD_PROC_SYMBOL(public_6711150);
CLANG_FORWARD_PROC_SYMBOL(public_6711180);
CLANG_FORWARD_PROC_SYMBOL(public_67111a0);
CLANG_FORWARD_PROC_SYMBOL(public_6712310);
CLANG_FORWARD_PROC_SYMBOL(public_67145b0);
CLANG_FORWARD_PROC_SYMBOL(public_6715440);
CLANG_FORWARD_PROC_SYMBOL(public_67155e0);
CLANG_FORWARD_PROC_SYMBOL(public_67169dc);
CLANG_FORWARD_JUMP_SYMBOL(public_6716ccb);

#define public_6711372 _public_6711372

PROC_DECLARE(0x67112c0, internal_67112c0, public_67112c0);
extern "C" NAKED register_t __cdecl internal_67112c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6716ccb @0x67112c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6716ccb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov al, byte ptr ss : [esp+0x24]
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0xC
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ds : [esi+4], al
        call public_67169dc
        xor ebx, ebx
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ebx
        mov edi, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [public_67170c4]
        mov edx, dword ptr ds : [public_67170c8]
        push ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov byte ptr ds : [esi+0x14], bl
        mov byte ptr ds : [esi+0x15], bl
        mov dword ptr ds : [esi], offset public_6717158
        push edi
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ds : [public_67193e0], esi
        mov dword ptr ds : [public_671b7ac], offset _public_6711120
        mov dword ptr ds : [public_671b408], ecx
        mov dword ptr ds : [public_671b404], edx
        mov dword ptr ds : [public_671bacc], offset _public_6711150
        mov dword ptr ds : [public_671cef0], offset _public_6711180
        mov dword ptr ds : [public_671cf8c], offset _public_67111a0
        call public_67145b0
        add esp, 0xC
        cmp al, bl
        mov byte ptr ds : [esi+0x17], al
        je public_6711372
        call public_6711000
        mov byte ptr ds : [esi+0x17], al
        public_6711372 : nop
        push 2
        call public_6715440
        add esp, 4
        call public_6712310
        push edi
        call dword ptr ds : [public_6719380]
        test eax, eax
        lea ecx, ss:[esp+0x10]
        setne al
        push ecx
        push edi
        mov byte ptr ds : [esi+0x16], al
        call dword ptr ds : [public_67170fc]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call public_67155e0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        mov eax, esi
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x67112c0)
    }
}

#undef public_6711372

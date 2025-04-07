#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4024d0);
CLANG_FORWARD_PROC_SYMBOL(public_40aa80);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8521);

#define public_40aac8 _public_40aac8
#define public_40aadf _public_40aadf

PROC_DECLARE(0x40aa80, internal_40aa80, public_40aa80);
extern "C" NAKED register_t __cdecl internal_40aa80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8521 @0x40aa82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8521
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_5c7734
        lea eax, ds:[esi+4]
        push eax
        mov dword ptr ss : [esp+0x1C], 2
        call public_4024d0
        mov ebx, dword ptr ds : [esi+0x48]
        mov edi, dword ptr ds : [esi+0x44]
        add esp, 4
        cmp edi, ebx
        mov byte ptr ss : [esp+0x18], 1
        je public_40aadf
        public_40aac8 : nop
        lea ecx, ds:[edi+0x14]
        call public_4de730
        lea ecx, ds:[edi+4]
        call public_4de730
        add edi, 0x24
        cmp edi, ebx
        jne public_40aac8
        public_40aadf : nop
        mov ecx, dword ptr ds : [esi+0x44]
        push ecx
        call public_5b7e1d
        xor edi, edi
        mov dword ptr ds : [esi+0x44], edi
        mov dword ptr ds : [esi+0x48], edi
        mov dword ptr ds : [esi+0x4C], edi
        mov edx, dword ptr ds : [esi+0x34]
        push edx
        call public_5b7e1d
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi+0x38], edi
        mov dword ptr ds : [esi+0x3C], edi
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x40aa80)
    }
}

#undef public_40aac8
#undef public_40aadf

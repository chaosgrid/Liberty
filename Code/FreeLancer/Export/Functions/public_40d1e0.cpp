#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4024d0);
CLANG_FORWARD_PROC_SYMBOL(public_407000);
CLANG_FORWARD_PROC_SYMBOL(public_40d1e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8521);

#define public_40d250 _public_40d250
#define public_40d25e _public_40d25e

PROC_DECLARE(0x40d1e0, internal_40d1e0, public_40d1e0);
extern "C" NAKED register_t __cdecl internal_40d1e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8521 @0x40d1e2*/
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
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x78]
        push edi
        push eax
        mov dword ptr ss : [esp+0x14], esi
        call public_5b7e1d
        xor ebx, ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ds : [esi+0x80], ebx
        mov eax, dword ptr ds : [esi+0x68]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi], offset public_5c7734
        lea eax, ds:[esi+4]
        push eax
        mov dword ptr ss : [esp+0x28], 2
        call public_4024d0
        mov ebp, dword ptr ds : [esi+0x48]
        mov edi, dword ptr ds : [esi+0x44]
        add esp, 0xC
        cmp edi, ebp
        je public_40d25e
        lea ecx, ds:[ecx]
        public_40d250 : nop
        mov ecx, edi
        call public_407000
        add edi, 0x24
        cmp edi, ebp
        jne public_40d250
        public_40d25e : nop
        mov ecx, dword ptr ds : [esi+0x44]
        push ecx
        call public_5b7e1d
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov edx, dword ptr ds : [esi+0x34]
        push edx
        call public_5b7e1d
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        pop edi
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x40d1e0)
    }
}

#undef public_40d250
#undef public_40d25e

#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316470);
CLANG_FORWARD_PROC_SYMBOL(public_63169f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63966e2);

#define public_631655b _public_631655b
#define public_6316564 _public_6316564

PROC_DECLARE(0x6316470, internal_6316470, public_6316470);
extern "C" NAKED register_t __cdecl internal_6316470()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63966e2 @0x6316472*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63966e2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        lea edi, ds:[ecx+4]
        mov dword ptr ss : [esp+0xC], edi
        mov eax, dword ptr ds : [edi+0x40]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x3C]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 2
        call public_63169f0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        xor ebx, ebx
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea esi, ds:[edi+0x28]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 1
        call public_63169f0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea esi, ds:[edi+0x14]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], bl
        call public_63169f0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+8]
        add esp, 8
        cmp eax, ebx
        je public_6316564
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_631655b
        cmp cl, 0xFF
        je public_631655b
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6316564
        public_631655b : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6316564 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+0x10], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6316470)
    }
}

#undef public_631655b
#undef public_6316564

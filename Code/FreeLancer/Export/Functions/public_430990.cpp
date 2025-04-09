#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430990);
CLANG_FORWARD_PROC_SYMBOL(public_432000);
CLANG_FORWARD_PROC_SYMBOL(public_432180);
CLANG_FORWARD_PROC_SYMBOL(public_4324c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8ee2);

#define public_430a0b _public_430a0b
#define public_430a14 _public_430a14
#define public_430a31 _public_430a31
#define public_430a48 _public_430a48

PROC_DECLARE(0x430990, internal_430990, public_430990);
extern "C" NAKED register_t __cdecl internal_430990()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8ee2 @0x430992*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8ee2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+4]
        mov dword ptr ss : [esp+0x14], edi
        mov eax, dword ptr ds : [edi+0x40]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x3C]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 2
        call public_432180
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        xor ebx, ebx
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x30]
        add esp, 8
        cmp eax, ebx
        je public_430a14
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_430a0b
        cmp cl, 0xFF
        je public_430a0b
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_430a14
        public_430a0b : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_430a14 : nop
        mov dword ptr ds : [edi+0x30], ebx
        mov dword ptr ds : [edi+0x34], ebx
        mov dword ptr ds : [edi+0x38], ebx
        mov eax, dword ptr ds : [edi+0x24]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        lea ebp, ds:[edi+0x20]
        mov byte ptr ss : [esp+0x24], bl
        mov dword ptr ss : [esp+0x10], eax
        je public_430a48
        public_430a31 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call public_4324c0
        cmp esi, dword ptr ss : [esp+0x10]
        jne public_430a31
        public_430a48 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0xC]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        call public_432000
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x430990)
    }
}

#undef public_430a0b
#undef public_430a14
#undef public_430a31
#undef public_430a48

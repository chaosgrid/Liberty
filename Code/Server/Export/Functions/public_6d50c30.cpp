#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3be0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5750);
CLANG_FORWARD_PROC_SYMBOL(public_6d50c30);
CLANG_FORWARD_PROC_SYMBOL(public_6d51060);
CLANG_FORWARD_PROC_SYMBOL(public_6d582f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d636fe);

#define public_6d50c67 _public_6d50c67
#define public_6d50c80 _public_6d50c80
#define public_6d50c8d _public_6d50c8d
#define public_6d50ca1 _public_6d50ca1
#define public_6d50d2f _public_6d50d2f
#define public_6d50d3b _public_6d50d3b

PROC_DECLARE(0x6d50c30, internal_6d50c30, public_6d50c30);
extern "C" NAKED register_t __cdecl internal_6d50c30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d636fe @0x6d50c32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d636fe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov ecx, dword ptr ds : [edi]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x1C], 3
        je public_6d50c67
        push 3
        call public_6d51060
        public_6d50c67 : nop
        mov ecx, dword ptr ds : [edi+0x48]
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+4], ebx
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6d50ca1
        lea esp, ss:[esp]
        public_6d50c80 : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        cmp ecx, ebx
        je public_6d50c8d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d50c8d : nop
        lea ecx, ss:[esp+8]
        call public_6ce5750
        mov ecx, dword ptr ds : [edi+0x48]
        mov eax, dword ptr ss : [esp+8]
        cmp eax, ecx
        jne public_6d50c80
        public_6d50ca1 : nop
        mov eax, dword ptr ds : [edi+0x48]
        mov ecx, dword ptr ds : [eax]
        push esi
        lea esi, ds:[edi+0x44]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 2
        call public_6d582f0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6d5ffb0
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x34]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea esi, ds:[edi+0x30]
        push eax
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 1
        call public_6ce3be0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6d5ffb0
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x24]
        add esp, 8
        cmp eax, ebx
        pop esi
        je public_6d50d3b
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d50d2f
        cmp cl, 0xFF
        je public_6d50d2f
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d50d3b
        public_6d50d2f : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d50d3b : nop
        lea ecx, ds:[edi+0x10]
        mov dword ptr ds : [edi+0x24], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_6d64004]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6d50c30)
    }
}

#undef public_6d50c67
#undef public_6d50c80
#undef public_6d50c8d
#undef public_6d50ca1
#undef public_6d50d2f
#undef public_6d50d3b

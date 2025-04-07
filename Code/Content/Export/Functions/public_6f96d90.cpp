#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f96d90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb16b1);

#define public_6f96df1 _public_6f96df1
#define public_6f96df9 _public_6f96df9
#define public_6f96dff _public_6f96dff
#define public_6f96e20 _public_6f96e20
#define public_6f96e28 _public_6f96e28
#define public_6f96e33 _public_6f96e33
#define public_6f96e6a _public_6f96e6a

PROC_DECLARE(0x6f96d90, internal_6f96d90, public_6f96d90);
extern "C" NAKED register_t __cdecl internal_6f96d90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb16b1 @0x6f96d92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb16b1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], edi
        test edi, edi
        mov dword ptr ss : [esp+0x10], 0
        je public_6f96e6a
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], eax
        mov cl, byte ptr ds : [esi+0x10]
        mov byte ptr ds : [edi+0x10], cl
        mov dl, byte ptr ds : [esi+0x14]
        mov byte ptr ds : [edi+0x14], dl
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        jne public_6f96df1
        xor eax, eax
        jmp public_6f96df9
        public_6f96df1 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        sub eax, ecx
        sar eax, 2
        public_6f96df9 : nop
        test eax, eax
        jge public_6f96dff
        xor eax, eax
        public_6f96dff : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov dword ptr ds : [edi+0x18], eax
        mov edx, dword ptr ds : [esi+0x1C]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x18]
        add esp, 4
        cmp eax, edx
        je public_6f96e33
        push ebx
        nop 
        lea esp, ss:[esp]
        public_6f96e20 : nop
        test ecx, ecx
        je public_6f96e28
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_6f96e28 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f96e20
        pop ebx
        public_6f96e33 : nop
        mov dword ptr ds : [edi+0x1C], ecx
        mov dword ptr ds : [edi+0x20], ecx
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edi+0x24], ecx
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+0x28], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edi+0x2C], eax
        mov ecx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [edi+0x30], ecx
        mov edx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edi+0x34], edx
        mov eax, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [edi+0x38], eax
        mov ecx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [edi+0x3C], ecx
        mov edx, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [edi+0x40], edx
        pop esi
        public_6f96e6a : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f96d90)
    }
}

#undef public_6f96df1
#undef public_6f96df9
#undef public_6f96dff
#undef public_6f96e20
#undef public_6f96e28
#undef public_6f96e33
#undef public_6f96e6a

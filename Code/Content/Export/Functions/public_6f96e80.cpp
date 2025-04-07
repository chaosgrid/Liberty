#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f96e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb16dc);

#define public_6f96edb _public_6f96edb
#define public_6f96ee3 _public_6f96ee3
#define public_6f96ee9 _public_6f96ee9
#define public_6f96f07 _public_6f96f07
#define public_6f96f0f _public_6f96f0f
#define public_6f96f1a _public_6f96f1a
#define public_6f96f3c _public_6f96f3c
#define public_6f96f44 _public_6f96f44
#define public_6f96f4a _public_6f96f4a
#define public_6f96f67 _public_6f96f67
#define public_6f96f6f _public_6f96f6f
#define public_6f96f79 _public_6f96f79
#define public_6f96f80 _public_6f96f80

PROC_DECLARE(0x6f96e80, internal_6f96e80, public_6f96e80);
extern "C" NAKED register_t __cdecl internal_6f96e80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb16dc @0x6f96e82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb16dc
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
        je public_6f96f80
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
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        jne public_6f96edb
        xor eax, eax
        jmp public_6f96ee3
        public_6f96edb : nop
        mov eax, dword ptr ds : [esi+0x18]
        sub eax, ecx
        sar eax, 2
        public_6f96ee3 : nop
        test eax, eax
        jge public_6f96ee9
        xor eax, eax
        public_6f96ee9 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+0x14], eax
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x14]
        add esp, 4
        cmp ecx, edx
        je public_6f96f1a
        push ebx
        public_6f96f07 : nop
        test eax, eax
        je public_6f96f0f
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebx
        public_6f96f0f : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6f96f07
        pop ebx
        public_6f96f1a : nop
        mov dword ptr ds : [edi+0x18], eax
        mov dword ptr ds : [edi+0x1C], eax
        mov al, byte ptr ds : [esi+0x20]
        mov byte ptr ds : [edi+0x20], al
        mov cl, byte ptr ds : [esi+0x24]
        mov byte ptr ds : [edi+0x24], cl
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        mov byte ptr ss : [esp+0x14], 1
        jne public_6f96f3c
        xor eax, eax
        jmp public_6f96f44
        public_6f96f3c : nop
        mov eax, dword ptr ds : [esi+0x2C]
        sub eax, ecx
        sar eax, 2
        public_6f96f44 : nop
        test eax, eax
        jge public_6f96f4a
        xor eax, eax
        public_6f96f4a : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+0x28], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov esi, dword ptr ds : [esi+0x28]
        add esp, 4
        cmp esi, ecx
        je public_6f96f79
        public_6f96f67 : nop
        test eax, eax
        je public_6f96f6f
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        public_6f96f6f : nop
        add esi, 4
        add eax, 4
        cmp esi, ecx
        jne public_6f96f67
        public_6f96f79 : nop
        mov dword ptr ds : [edi+0x2C], eax
        mov dword ptr ds : [edi+0x30], eax
        pop esi
        public_6f96f80 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f96e80)
    }
}

#undef public_6f96edb
#undef public_6f96ee3
#undef public_6f96ee9
#undef public_6f96f07
#undef public_6f96f0f
#undef public_6f96f1a
#undef public_6f96f3c
#undef public_6f96f44
#undef public_6f96f4a
#undef public_6f96f67
#undef public_6f96f6f
#undef public_6f96f79
#undef public_6f96f80

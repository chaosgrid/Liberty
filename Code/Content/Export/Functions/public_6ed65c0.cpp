#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab253);

#define public_6ed6623 _public_6ed6623
#define public_6ed662b _public_6ed662b
#define public_6ed6631 _public_6ed6631
#define public_6ed6650 _public_6ed6650
#define public_6ed6658 _public_6ed6658
#define public_6ed6663 _public_6ed6663
#define public_6ed6697 _public_6ed6697
#define public_6ed669f _public_6ed669f
#define public_6ed66a5 _public_6ed66a5
#define public_6ed66c2 _public_6ed66c2
#define public_6ed66ca _public_6ed66ca
#define public_6ed66d4 _public_6ed66d4
#define public_6ed66f3 _public_6ed66f3

PROC_DECLARE(0x6ed65c0, internal_6ed65c0, public_6ed65c0);
extern "C" NAKED register_t __cdecl internal_6ed65c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab253 @0x6ed65c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab253
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x40
        mov esi, ecx
        call public_6fa912a
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], edi
        test edi, edi
        mov dword ptr ss : [esp+0x14], 0
        je public_6ed66f3
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], edx
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], eax
        mov cl, byte ptr ds : [esi+0x14]
        mov byte ptr ds : [edi+0x14], cl
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        jne public_6ed6623
        xor eax, eax
        jmp public_6ed662b
        public_6ed6623 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        sub eax, ecx
        sar eax, 2
        public_6ed662b : nop
        test eax, eax
        jge public_6ed6631
        xor eax, eax
        public_6ed6631 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+0x18], eax
        mov edx, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+0x18]
        add esp, 4
        cmp ecx, edx
        je public_6ed6663
        push ebx
        nop 
        public_6ed6650 : nop
        test eax, eax
        je public_6ed6658
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebx
        public_6ed6658 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6ed6650
        pop ebx
        public_6ed6663 : nop
        mov dword ptr ds : [edi+0x1C], eax
        mov dword ptr ds : [edi+0x20], eax
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edi+0x24], eax
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+0x28], ecx
        mov edx, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edi+0x2C], edx
        mov dword ptr ds : [edi], offset public_6fb6268
        mov al, byte ptr ds : [esi+0x30]
        mov byte ptr ds : [edi+0x30], al
        mov ecx, dword ptr ds : [esi+0x34]
        test ecx, ecx
        mov byte ptr ss : [esp+0x14], 1
        jne public_6ed6697
        xor eax, eax
        jmp public_6ed669f
        public_6ed6697 : nop
        mov eax, dword ptr ds : [esi+0x38]
        sub eax, ecx
        sar eax, 2
        public_6ed669f : nop
        test eax, eax
        jge public_6ed66a5
        xor eax, eax
        public_6ed66a5 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+0x34], eax
        mov ecx, dword ptr ds : [esi+0x38]
        mov esi, dword ptr ds : [esi+0x34]
        add esp, 4
        cmp esi, ecx
        je public_6ed66d4
        public_6ed66c2 : nop
        test eax, eax
        je public_6ed66ca
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        public_6ed66ca : nop
        add esi, 4
        add eax, 4
        cmp esi, ecx
        jne public_6ed66c2
        public_6ed66d4 : nop
        mov dword ptr ds : [edi+0x38], eax
        mov dword ptr ds : [edi+0x3C], eax
        mov dword ptr ds : [edi], offset public_6fb623c
        mov eax, edi
        pop edi
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6ed66f3 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ed65c0)
    }
}

#undef public_6ed6623
#undef public_6ed662b
#undef public_6ed6631
#undef public_6ed6650
#undef public_6ed6658
#undef public_6ed6663
#undef public_6ed6697
#undef public_6ed669f
#undef public_6ed66a5
#undef public_6ed66c2
#undef public_6ed66ca
#undef public_6ed66d4
#undef public_6ed66f3

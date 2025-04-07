#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa4600);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4750);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb2042);

#define public_6fa4662 _public_6fa4662
#define public_6fa4668 _public_6fa4668
#define public_6fa4696 _public_6fa4696
#define public_6fa46c0 _public_6fa46c0
#define public_6fa46c8 _public_6fa46c8
#define public_6fa46e5 _public_6fa46e5
#define public_6fa46fc _public_6fa46fc
#define public_6fa470e _public_6fa470e
#define public_6fa4729 _public_6fa4729
#define public_6fa4737 _public_6fa4737

PROC_DECLARE(0x6fa4600, internal_6fa4600, public_6fa4600);
extern "C" NAKED register_t __cdecl internal_6fa4600()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb2042 @0x6fa4602*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb2042
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0xC], edi
        test edi, edi
        mov dword ptr ss : [esp+0x1C], 0
        je public_6fa4737
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        mov al, byte ptr ds : [esi+4]
        mov byte ptr ds : [edi+4], al
        mov cl, byte ptr ds : [esi+8]
        mov byte ptr ds : [edi+8], cl
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6fa4662
        mov ecx, dword ptr ds : [esi+0x10]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6fa4662 : nop
        test eax, eax
        jge public_6fa4668
        xor eax, eax
        public_6fa4668 : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 3
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+0xC], eax
        mov ecx, dword ptr ds : [esi+0x10]
        mov esi, dword ptr ds : [esi+0xC]
        add esp, 4
        cmp esi, ecx
        mov ebx, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x30], ebx
        je public_6fa4729
        push ebp
        add esi, 0xC
        public_6fa4696 : nop
        mov dword ptr ss : [esp+0x1C], ebx
        test ebx, ebx
        mov byte ptr ss : [esp+0x28], 1
        je public_6fa470e
        mov edx, dword ptr ds : [esi-0xC]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ds : [esi-8]
        mov dword ptr ds : [ebx+4], eax
        mov cl, byte ptr ds : [esi-4]
        add ebx, 8
        mov byte ptr ds : [ebx], cl
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        jne public_6fa46c0
        xor eax, eax
        jmp public_6fa46c8
        public_6fa46c0 : nop
        mov eax, dword ptr ds : [esi+4]
        sub eax, ecx
        sar eax, 2
        public_6fa46c8 : nop
        push 0
        push eax
        call public_6fa4770
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [esi]
        add esp, 8
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov ebp, eax
        je public_6fa46fc
        public_6fa46e5 : nop
        push edi
        push ebp
        mov ecx, ebx
        call public_6fa4750
        mov eax, dword ptr ss : [esp+0x10]
        add edi, 4
        add ebp, 4
        cmp edi, eax
        jne public_6fa46e5
        public_6fa46fc : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ebx+8], ebp
        mov dword ptr ds : [ebx+0xC], ebp
        mov ebx, dword ptr ss : [esp+0x34]
        public_6fa470e : nop
        add esi, 0x18
        add ebx, 0x18
        lea edx, ds:[esi-0xC]
        cmp edx, ecx
        mov byte ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x34], ebx
        jne public_6fa4696
        pop ebp
        public_6fa4729 : nop
        mov dword ptr ds : [edi+0x10], ebx
        mov dword ptr ds : [edi+0x14], ebx
        pop esi
        mov dword ptr ds : [edi], offset public_6fbcf08
        pop ebx
        public_6fa4737 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6fa4600)
    }
}

#undef public_6fa4662
#undef public_6fa4668
#undef public_6fa4696
#undef public_6fa46c0
#undef public_6fa46c8
#undef public_6fa46e5
#undef public_6fa46fc
#undef public_6fa470e
#undef public_6fa4729
#undef public_6fa4737

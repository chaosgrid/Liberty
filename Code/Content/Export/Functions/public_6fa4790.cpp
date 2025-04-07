#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa4790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb2161);

#define public_6fa47f2 _public_6fa47f2
#define public_6fa4808 _public_6fa4808
#define public_6fa4810 _public_6fa4810
#define public_6fa4830 _public_6fa4830
#define public_6fa483f _public_6fa483f
#define public_6fa484a _public_6fa484a
#define public_6fa4852 _public_6fa4852

PROC_DECLARE(0x6fa4790, internal_6fa4790, public_6fa4790);
extern "C" NAKED register_t __cdecl internal_6fa4790()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb2161 @0x6fa4792*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb2161
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], 0
        je public_6fa4852
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], eax
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [ebx+0x10], ecx
        mov dl, byte ptr ds : [esi+0x14]
        mov byte ptr ds : [ebx+0x14], dl
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        jne public_6fa47f2
        xor edx, edx
        jmp public_6fa4808
        public_6fa47f2 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa4808 : nop
        test edx, edx
        mov eax, edx
        jge public_6fa4810
        xor eax, eax
        public_6fa4810 : nop
        lea ecx, ds:[eax+eax*8]
        shl ecx, 3
        push ecx
        call public_6fa912a
        mov dword ptr ds : [ebx+0x18], eax
        mov ebp, dword ptr ds : [esi+0x1C]
        mov edx, eax
        mov eax, dword ptr ds : [esi+0x18]
        add esp, 4
        cmp eax, ebp
        je public_6fa484a
        push edi
        nop 
        public_6fa4830 : nop
        test edx, edx
        je public_6fa483f
        mov ecx, 0x12
        mov esi, eax
        mov edi, edx
        rep movsd
        public_6fa483f : nop
        add eax, 0x48
        add edx, 0x48
        cmp eax, ebp
        jne public_6fa4830
        pop edi
        public_6fa484a : nop
        pop esi
        mov dword ptr ds : [ebx+0x1C], edx
        mov dword ptr ds : [ebx+0x20], edx
        pop ebp
        public_6fa4852 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6fa4790)
    }
}

#undef public_6fa47f2
#undef public_6fa4808
#undef public_6fa4810
#undef public_6fa4830
#undef public_6fa483f
#undef public_6fa484a
#undef public_6fa4852

#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f56e70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf731);

#define public_6f56ecb _public_6f56ecb
#define public_6f56ed1 _public_6f56ed1
#define public_6f56ef0 _public_6f56ef0
#define public_6f56eff _public_6f56eff
#define public_6f56f0a _public_6f56f0a
#define public_6f56f12 _public_6f56f12

PROC_DECLARE(0x6f56e70, internal_6f56e70, public_6f56e70);
extern "C" NAKED register_t __cdecl internal_6f56e70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf731 @0x6f56e72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf731
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], 0
        je public_6f56f12
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp], eax
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ss : [ebp+4], cl
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6f56ecb
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6f56ecb : nop
        test eax, eax
        jge public_6f56ed1
        xor eax, eax
        public_6f56ed1 : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 3
        push ecx
        call public_6fa912a
        mov dword ptr ss : [ebp+8], eax
        mov ebx, dword ptr ds : [esi+0xC]
        mov edx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp eax, ebx
        je public_6f56f0a
        push edi
        public_6f56ef0 : nop
        test edx, edx
        je public_6f56eff
        mov ecx, 6
        mov esi, eax
        mov edi, edx
        rep movsd
        public_6f56eff : nop
        add eax, 0x18
        add edx, 0x18
        cmp eax, ebx
        jne public_6f56ef0
        pop edi
        public_6f56f0a : nop
        pop esi
        mov dword ptr ss : [ebp+0xC], edx
        mov dword ptr ss : [ebp+0x10], edx
        pop ebx
        public_6f56f12 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f56e70)
    }
}

#undef public_6f56ecb
#undef public_6f56ed1
#undef public_6f56ef0
#undef public_6f56eff
#undef public_6f56f0a
#undef public_6f56f12

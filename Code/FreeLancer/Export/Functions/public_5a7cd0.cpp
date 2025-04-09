#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a7cd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c52e6);

#define public_5a7d23 _public_5a7d23
#define public_5a7d3b _public_5a7d3b
#define public_5a7d43 _public_5a7d43
#define public_5a7d66 _public_5a7d66
#define public_5a7d86 _public_5a7d86
#define public_5a7d94 _public_5a7d94
#define public_5a7dc5 _public_5a7dc5

PROC_DECLARE(0x5a7cd0, internal_5a7cd0, public_5a7cd0);
extern "C" NAKED register_t __cdecl internal_5a7cd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c52e6 @0x5a7cd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c52e6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+8], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x1C], 0
        je public_5a7dc5
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [ebx], eax
        mov cl, byte ptr ds : [edi+4]
        add ebx, 4
        mov byte ptr ds : [ebx], cl
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        mov dword ptr ss : [esp+0x18], ebx
        jne public_5a7d23
        xor edx, edx
        jmp public_5a7d3b
        public_5a7d23 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_5a7d3b : nop
        test edx, edx
        mov eax, edx
        jge public_5a7d43
        xor eax, eax
        public_5a7d43 : nop
        imul eax, 0x1C
        push eax
        call public_5b7e84
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ds : [edi+8]
        add esp, 4
        cmp ebp, ecx
        mov esi, eax
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x10], esi
        je public_5a7d94
        public_5a7d66 : nop
        mov dword ptr ss : [esp+0x1C], esi
        test esi, esi
        mov byte ptr ss : [esp+0x28], 1
        je public_5a7d86
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_5c6420]
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        public_5a7d86 : nop
        add esi, 0x1C
        add ebp, 0x1C
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], esi
        jne public_5a7d66
        public_5a7d94 : nop
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+0xC], esi
        mov esi, dword ptr ds : [public_5c6420]
        lea edx, ds:[edi+0x14]
        push edx
        lea ecx, ds:[ebx+0x10]
        mov byte ptr ss : [esp+0x2C], 2
        call esi
        lea eax, ds:[edi+0x2C]
        push eax
        lea ecx, ds:[ebx+0x28]
        mov byte ptr ss : [esp+0x2C], 3
        call esi
        mov cl, byte ptr ds : [edi+0x44]
        pop edi
        pop esi
        mov byte ptr ds : [ebx+0x40], cl
        pop ebp
        public_5a7dc5 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x5a7cd0)
    }
}

#undef public_5a7d23
#undef public_5a7d3b
#undef public_5a7d43
#undef public_5a7d66
#undef public_5a7d86
#undef public_5a7d94
#undef public_5a7dc5

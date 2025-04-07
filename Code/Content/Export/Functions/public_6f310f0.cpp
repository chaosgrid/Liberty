#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f310f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae7c1);

#define public_6f31135 _public_6f31135
#define public_6f3113d _public_6f3113d
#define public_6f31143 _public_6f31143
#define public_6f31162 _public_6f31162
#define public_6f3116a _public_6f3116a
#define public_6f31174 _public_6f31174
#define public_6f3117b _public_6f3117b

PROC_DECLARE(0x6f310f0, internal_6f310f0, public_6f310f0);
extern "C" NAKED register_t __cdecl internal_6f310f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae7c1 @0x6f310f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae7c1
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
        je public_6f3117b
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ds : [edi+4], cl
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        jne public_6f31135
        xor eax, eax
        jmp public_6f3113d
        public_6f31135 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6f3113d : nop
        test eax, eax
        jge public_6f31143
        xor eax, eax
        public_6f31143 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp eax, edx
        je public_6f31174
        public_6f31162 : nop
        test ecx, ecx
        je public_6f3116a
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6f3116a : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f31162
        public_6f31174 : nop
        mov dword ptr ds : [edi+0xC], ecx
        mov dword ptr ds : [edi+0x10], ecx
        pop esi
        public_6f3117b : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f310f0)
    }
}

#undef public_6f31135
#undef public_6f3113d
#undef public_6f31143
#undef public_6f31162
#undef public_6f3116a
#undef public_6f31174
#undef public_6f3117b

#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16640);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61d5b);

#define public_6d16668 _public_6d16668
#define public_6d16671 _public_6d16671
#define public_6d16673 _public_6d16673
#define public_6d16690 _public_6d16690
#define public_6d16695 _public_6d16695
#define public_6d166a0 _public_6d166a0
#define public_6d166b3 _public_6d166b3
#define public_6d166bc _public_6d166bc
#define public_6d166c0 _public_6d166c0
#define public_6d166d6 _public_6d166d6
#define public_6d166e9 _public_6d166e9
#define public_6d166f2 _public_6d166f2
#define public_6d166f6 _public_6d166f6
#define public_6d16703 _public_6d16703
#define public_6d16714 _public_6d16714

PROC_DECLARE(0x6d16640, internal_6d16640, public_6d16640);
extern "C" NAKED register_t __cdecl internal_6d16640()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61d5b @0x6d16642*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61d5b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        xor edi, edi
        push ebp
        public_6d16668 : nop
        cmp edi, ebx
        jne public_6d16671
        mov edi, dword ptr ds : [esi+8]
        jmp public_6d16673
        public_6d16671 : nop
        mov edi, dword ptr ds : [edi]
        public_6d16673 : nop
        cmp edi, ebx
        je public_6d16695
        mov ebp, dword ptr ds : [edi+8]
        cmp ebp, ebx
        je public_6d16690
        lea ecx, ss:[ebp+0xC]
        call dword ptr ds : [public_6d6474c]
        push ebp
        call public_6d5ffb0
        add esp, 4
        public_6d16690 : nop
        mov dword ptr ds : [edi+8], ebx
        jmp public_6d16668
        public_6d16695 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        pop ebp
        je public_6d166c0
        lea ecx, ds:[ecx]
        public_6d166a0 : nop
        cmp byte ptr ds : [esi+0x10], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d166b3
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x14], eax
        jmp public_6d166bc
        public_6d166b3 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d166bc : nop
        cmp edi, ebx
        jne public_6d166a0
        public_6d166c0 : nop
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi], ebx
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        mov dword ptr ds : [esi+4], offset public_6d68338
        je public_6d166f6
        public_6d166d6 : nop
        cmp byte ptr ds : [esi+0x10], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d166e9
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [esi+0x14], eax
        jmp public_6d166f2
        public_6d166e9 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d166f2 : nop
        cmp edi, ebx
        jne public_6d166d6
        public_6d166f6 : nop
        mov edi, dword ptr ds : [esi+0x14]
        cmp edi, ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        je public_6d16714
        public_6d16703 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp edi, ebx
        jne public_6d16703
        public_6d16714 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x14], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d16640)
    }
}

#undef public_6d16668
#undef public_6d16671
#undef public_6d16673
#undef public_6d16690
#undef public_6d16695
#undef public_6d166a0
#undef public_6d166b3
#undef public_6d166bc
#undef public_6d166c0
#undef public_6d166d6
#undef public_6d166e9
#undef public_6d166f2
#undef public_6d166f6
#undef public_6d16703
#undef public_6d16714

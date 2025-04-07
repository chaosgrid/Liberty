#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb2221);

#define public_6fa8e62 _public_6fa8e62
#define public_6fa8e6a _public_6fa8e6a
#define public_6fa8e70 _public_6fa8e70
#define public_6fa8e90 _public_6fa8e90
#define public_6fa8e98 _public_6fa8e98
#define public_6fa8ea2 _public_6fa8ea2
#define public_6fa8ec4 _public_6fa8ec4

PROC_DECLARE(0x6fa8e10, internal_6fa8e10, public_6fa8e10);
extern "C" NAKED register_t __cdecl internal_6fa8e10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb2221 @0x6fa8e12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb2221
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
        je public_6fa8ec4
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+4], ecx
        mov dl, byte ptr ds : [ebx+8]
        mov byte ptr ss : [ebp+8], dl
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        push esi
        push edi
        jne public_6fa8e62
        xor eax, eax
        jmp public_6fa8e6a
        public_6fa8e62 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        sub eax, ecx
        sar eax, 2
        public_6fa8e6a : nop
        test eax, eax
        jge public_6fa8e70
        xor eax, eax
        public_6fa8e70 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+0xC], eax
        mov edx, dword ptr ds : [ebx+0x10]
        mov ecx, eax
        mov eax, dword ptr ds : [ebx+0xC]
        add esp, 4
        cmp eax, edx
        je public_6fa8ea2
        nop 
        lea esp, ss:[esp]
        public_6fa8e90 : nop
        test ecx, ecx
        je public_6fa8e98
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6fa8e98 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6fa8e90
        public_6fa8ea2 : nop
        mov dword ptr ss : [ebp+0x10], ecx
        mov dword ptr ss : [ebp+0x14], ecx
        lea esi, ds:[ebx+0x18]
        lea edi, ss:[ebp+0x18]
        mov ecx, 6
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x30]
        pop edi
        mov dword ptr ss : [ebp+0x30], ecx
        mov dl, byte ptr ds : [ebx+0x34]
        pop esi
        mov byte ptr ss : [ebp+0x34], dl
        pop ebx
        public_6fa8ec4 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6fa8e10)
    }
}

#undef public_6fa8e62
#undef public_6fa8e6a
#undef public_6fa8e70
#undef public_6fa8e90
#undef public_6fa8e98
#undef public_6fa8ea2
#undef public_6fa8ec4

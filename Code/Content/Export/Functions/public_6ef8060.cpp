#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8060);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac571);

#define public_6ef809f _public_6ef809f
#define public_6ef80a7 _public_6ef80a7
#define public_6ef80ad _public_6ef80ad
#define public_6ef80d0 _public_6ef80d0
#define public_6ef80de _public_6ef80de
#define public_6ef80e9 _public_6ef80e9
#define public_6ef80f6 _public_6ef80f6

PROC_DECLARE(0x6ef8060, internal_6ef8060, public_6ef8060);
extern "C" NAKED register_t __cdecl internal_6ef8060()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac571 @0x6ef8062*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac571
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
        je public_6ef80f6
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6ef809f
        xor eax, eax
        jmp public_6ef80a7
        public_6ef809f : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        public_6ef80a7 : nop
        test eax, eax
        jge public_6ef80ad
        xor eax, eax
        public_6ef80ad : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6ef80e9
        push ebx
        lea ecx, ds:[ecx]
        public_6ef80d0 : nop
        test ecx, ecx
        je public_6ef80de
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebx
        public_6ef80de : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6ef80d0
        pop ebx
        public_6ef80e9 : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], edx
        pop esi
        public_6ef80f6 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ef8060)
    }
}

#undef public_6ef809f
#undef public_6ef80a7
#undef public_6ef80ad
#undef public_6ef80d0
#undef public_6ef80de
#undef public_6ef80e9
#undef public_6ef80f6

#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f219c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faddc1);

#define public_6f219ff _public_6f219ff
#define public_6f21a07 _public_6f21a07
#define public_6f21a0d _public_6f21a0d
#define public_6f21a30 _public_6f21a30
#define public_6f21a38 _public_6f21a38
#define public_6f21a43 _public_6f21a43
#define public_6f21a50 _public_6f21a50

PROC_DECLARE(0x6f219c0, internal_6f219c0, public_6f219c0);
extern "C" NAKED register_t __cdecl internal_6f219c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faddc1 @0x6f219c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faddc1
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
        je public_6f21a50
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f219ff
        xor eax, eax
        jmp public_6f21a07
        public_6f219ff : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f21a07 : nop
        test eax, eax
        jge public_6f21a0d
        xor eax, eax
        public_6f21a0d : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6f21a43
        push ebx
        lea ecx, ds:[ecx]
        public_6f21a30 : nop
        test ecx, ecx
        je public_6f21a38
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_6f21a38 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f21a30
        pop ebx
        public_6f21a43 : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], edx
        pop esi
        public_6f21a50 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f219c0)
    }
}

#undef public_6f219ff
#undef public_6f21a07
#undef public_6f21a0d
#undef public_6f21a30
#undef public_6f21a38
#undef public_6f21a43
#undef public_6f21a50

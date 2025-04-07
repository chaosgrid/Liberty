#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb09cb);

#define public_6f84c87 _public_6f84c87
#define public_6f84c8f _public_6f84c8f
#define public_6f84c95 _public_6f84c95
#define public_6f84cb3 _public_6f84cb3
#define public_6f84cbb _public_6f84cbb
#define public_6f84cc6 _public_6f84cc6
#define public_6f84cf2 _public_6f84cf2
#define public_6f84cf4 _public_6f84cf4

PROC_DECLARE(0x6f84c40, internal_6f84c40, public_6f84c40);
extern "C" NAKED register_t __cdecl internal_6f84c40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb09cb @0x6f84c42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb09cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x24
        mov edi, ecx
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6f84cf2
        mov al, byte ptr ds : [edi+4]
        mov byte ptr ds : [esi+4], al
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        jne public_6f84c87
        xor eax, eax
        jmp public_6f84c8f
        public_6f84c87 : nop
        mov eax, dword ptr ds : [edi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6f84c8f : nop
        test eax, eax
        jge public_6f84c95
        xor eax, eax
        public_6f84c95 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        cmp ecx, edx
        je public_6f84cc6
        push ebx
        public_6f84cb3 : nop
        test eax, eax
        je public_6f84cbb
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebx
        public_6f84cbb : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6f84cb3
        pop ebx
        public_6f84cc6 : nop
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dl, byte ptr ds : [edi+0x14]
        mov dword ptr ds : [esi], offset public_6fbc690
        mov byte ptr ds : [esi+0x14], dl
        mov al, byte ptr ds : [edi+0x18]
        mov byte ptr ds : [esi+0x18], al
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], ecx
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], edx
        mov dword ptr ds : [esi], offset public_6fbc660
        jmp public_6f84cf4
        public_6f84cf2 : nop
        xor esi, esi
        public_6f84cf4 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f84c40)
    }
}

#undef public_6f84c87
#undef public_6f84c8f
#undef public_6f84c95
#undef public_6f84cb3
#undef public_6f84cbb
#undef public_6f84cc6
#undef public_6f84cf2
#undef public_6f84cf4

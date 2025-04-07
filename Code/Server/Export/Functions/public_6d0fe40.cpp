#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f230);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f410);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f970);
CLANG_FORWARD_PROC_SYMBOL(public_6d0fe40);
CLANG_FORWARD_PROC_SYMBOL(public_6d17170);
CLANG_FORWARD_PROC_SYMBOL(public_6d171b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61973);

#define public_6d0ff70 _public_6d0ff70
#define public_6d0ff81 _public_6d0ff81
#define public_6d0ffa3 _public_6d0ffa3
#define public_6d0ffb4 _public_6d0ffb4

PROC_DECLARE(0x6d0fe40, internal_6d0fe40, public_6d0fe40);
extern "C" NAKED register_t __cdecl internal_6d0fe40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61973 @0x6d0fe42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61973
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        lea edi, ds:[esi+0xE8]
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0xB
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0xD4]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 0xA
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0xC0]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 9
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0xAC]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 8
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0x98]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 7
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0x84]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 6
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0x70]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 5
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        lea edi, ds:[esi+0x5C]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 4
        mov dword ptr ds : [edi], offset public_6d67d00
        call public_6d17170
        mov ecx, edi
        call public_6d171b0
        mov ebp, dword ptr ds : [esi+0x4C]
        lea edi, ds:[esi+0x48]
        xor ebx, ebx
        cmp ebp, ebx
        mov byte ptr ss : [esp+0x20], 3
        mov dword ptr ds : [edi], offset public_6d67d00
        je public_6d0ff81
        mov edi, edi
        public_6d0ff70 : nop
        mov eax, ebp
        mov ebp, dword ptr ss : [ebp]
        push eax
        mov ecx, edi
        call public_6d0f970
        cmp ebp, ebx
        jne public_6d0ff70
        public_6d0ff81 : nop
        mov ecx, edi
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        call public_6d171b0
        mov ebp, dword ptr ds : [esi+0x38]
        cmp ebp, ebx
        lea edi, ds:[esi+0x34]
        mov byte ptr ss : [esp+0x20], 2
        mov dword ptr ds : [edi], offset public_6d67d00
        je public_6d0ffb4
        public_6d0ffa3 : nop
        mov eax, ebp
        mov ebp, dword ptr ss : [ebp]
        push eax
        mov ecx, edi
        call public_6d0f970
        cmp ebp, ebx
        jne public_6d0ffa3
        public_6d0ffb4 : nop
        mov ecx, edi
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        call public_6d171b0
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        call public_6d5ffb0
        add esp, 4
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x14]
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], bl
        call public_6d0f410
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        add esp, 4
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6d0f230
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d0fe40)
    }
}

#undef public_6d0ff70
#undef public_6d0ff81
#undef public_6d0ffa3
#undef public_6d0ffb4

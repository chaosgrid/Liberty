#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d64c0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_JUMP_SYMBOL(public_65e0096);

#define public_65d5b83 _public_65d5b83
#define public_65d5ba7 _public_65d5ba7
#define public_65d5bab _public_65d5bab
#define public_65d5bb0 _public_65d5bb0
#define public_65d5c3a _public_65d5c3a
#define public_65d5c3c _public_65d5c3c
#define public_65d5c62 _public_65d5c62

PROC_DECLARE(0x65d5b50, internal_65d5b50, public_65d5b50);
extern "C" NAKED register_t __cdecl internal_65d5b50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_65e0096 @0x65d5b58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65e0096
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        push ebx
        push esi
        mov ecx, dword ptr ds : [eax]
        push edi
        xor edi, edi
        cmp ecx, 8
        jne public_65d5c62
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        public_65d5b83 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_65d5bab
        test cl, cl
        je public_65d5ba7
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_65d5bab
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65d5b83
        public_65d5ba7 : nop
        xor eax, eax
        jmp public_65d5bb0
        public_65d5bab : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d5bb0 : nop
        test eax, eax
        jne public_65d5c62
        push 0x28
        call public_65d6f71
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_65d5c3a
        mov al, byte ptr ss : [esp+0x24]
        lea edi, ds:[esi+8]
        push 0
        mov dword ptr ds : [esi], offset public_65e14a8
        push 0
        mov ecx, edi
        mov byte ptr ds : [edi], al
        call public_65d64c0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov cl, byte ptr ss : [esp+0x24]
        push 0x14
        mov byte ptr ss : [esp+0x18], 1
        mov byte ptr ds : [esi+0x14], cl
        call public_65d6f71
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], 0
        add esp, 4
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x20], 1
        mov dword ptr ds : [esi], offset public_65e1484
        mov dword ptr ds : [esi+0x24], 1
        jmp public_65d5c3c
        public_65d5c3a : nop
        xor esi, esi
        public_65d5c3c : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, esi
        neg eax
        sbb eax, eax
        mov dword ptr ds : [edx], esi
        and eax, 4
        add eax, 0xFFFFFFFC
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_65d5c62 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x65d5b50)
    }
}

#undef public_65d5b83
#undef public_65d5ba7
#undef public_65d5bab
#undef public_65d5bb0
#undef public_65d5c3a
#undef public_65d5c3c
#undef public_65d5c62

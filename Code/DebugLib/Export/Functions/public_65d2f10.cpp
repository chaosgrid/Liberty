#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d3c80);
CLANG_FORWARD_PROC_SYMBOL(public_65d64c0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_JUMP_SYMBOL(public_65dff87);

#define public_65d2f42 _public_65d2f42
#define public_65d2f66 _public_65d2f66
#define public_65d2f6a _public_65d2f6a
#define public_65d2f6f _public_65d2f6f
#define public_65d3023 _public_65d3023
#define public_65d3025 _public_65d3025
#define public_65d304a _public_65d304a

PROC_DECLARE(0x65d2f10, internal_65d2f10, public_65d2f10);
extern "C" NAKED register_t __cdecl internal_65d2f10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65dff87 @0x65d2f12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65dff87
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push edi
        xor edi, edi
        cmp dword ptr ds : [eax], 8
        jne public_65d304a
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax+4]
        push ebx
        mov esi, dword ptr ds : [ecx+8]
        public_65d2f42 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_65d2f6a
        test cl, cl
        je public_65d2f66
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_65d2f6a
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65d2f42
        public_65d2f66 : nop
        xor eax, eax
        jmp public_65d2f6f
        public_65d2f6a : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d2f6f : nop
        test eax, eax
        pop ebx
        jne public_65d304a
        push 0x58
        call public_65d6f71
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_65d3023
        lea eax, ss:[esp+0x20]
        lea edx, ss:[esp+0x1C]
        push eax
        push 0
        lea ecx, ds:[esi+4]
        push edx
        mov dword ptr ds : [esi], offset public_65e1380
        call public_65d3c80
        mov al, byte ptr ss : [esp+0x24]
        lea edi, ds:[esi+0x18]
        push 0
        push 0
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [edi], al
        call public_65d64c0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov dl, byte ptr ss : [esp+0x24]
        lea ecx, ds:[esi+0x24]
        push 0
        mov byte ptr ss : [esp+0x18], 2
        mov byte ptr ds : [ecx], dl
        call public_65d3b40
        mov al, byte ptr ss : [esp+0x24]
        lea ecx, ds:[esi+0x34]
        push 0
        mov byte ptr ss : [esp+0x18], 3
        mov byte ptr ds : [ecx], al
        call public_65d3b40
        mov dl, byte ptr ss : [esp+0x24]
        lea ecx, ds:[esi+0x44]
        push 0
        mov byte ptr ss : [esp+0x18], 4
        mov byte ptr ds : [ecx], dl
        call public_65d3b40
        mov dword ptr ds : [esi], offset public_65e1358
        mov dword ptr ds : [esi+0x54], 1
        jmp public_65d3025
        public_65d3023 : nop
        xor esi, esi
        public_65d3025 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, esi
        neg eax
        sbb eax, eax
        mov dword ptr ds : [ecx], esi
        and eax, 4
        pop edi
        add eax, 0xFFFFFFFC
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        public_65d304a : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x65d2f10)
    }
}

#undef public_65d2f42
#undef public_65d2f66
#undef public_65d2f6a
#undef public_65d2f6f
#undef public_65d3023
#undef public_65d3025
#undef public_65d304a

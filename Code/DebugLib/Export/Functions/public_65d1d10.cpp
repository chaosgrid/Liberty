#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1d10);
CLANG_FORWARD_PROC_SYMBOL(public_65d2cb0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);
CLANG_FORWARD_JUMP_SYMBOL(public_65dff00);

#define public_65d1d9b _public_65d1d9b
#define public_65d1dad _public_65d1dad
#define public_65d1e07 _public_65d1e07
#define public_65d1e30 _public_65d1e30
#define public_65d1e46 _public_65d1e46
#define public_65d1e4a _public_65d1e4a
#define public_65d1e5d _public_65d1e5d
#define public_65d1e70 _public_65d1e70
#define public_65d1e83 _public_65d1e83

PROC_DECLARE(0x65d1d10, internal_65d1d10, public_65d1d10);
extern "C" NAKED register_t __cdecl internal_65d1d10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65dff00 @0x65d1d12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65dff00
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov byte ptr ss : [esp+0xB], bl
        mov eax, dword ptr ds : [esi+0x28]
        cmp eax, ebx
        je public_65d1e5d
        cmp dword ptr ds : [esi+0x2C], ebx
        je public_65d1e5d
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov edi, dword ptr ds : [public_65e1004]
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x18], 8
        mov dword ptr ss : [esp+0x1C], eax
        call edi
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_65d1dad
        mov eax, 8
        mov ecx, offset public_65e30c8
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], ecx
        je public_65d1d9b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ebx
        public_65d1d9b : nop
        call edi
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        public_65d1dad : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        je public_65d1e4a
        mov dword ptr ss : [esp+0x14], ebx
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
/*FIXUP push offset public_65e30b4 @0x65d1dc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e30b4
        push eax
        mov byte ptr ss : [esp+0x34], 1
        call dword ptr ds : [edx]
        test eax, eax
        jne public_65d1e30
        mov eax, dword ptr ss : [esp+0x14]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x22]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ds : [esi+0x2C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        test eax, eax
        jne public_65d1e30
        mov edi, dword ptr ds : [esi+8]
        push ebp
        push 0xC
        mov ebp, dword ptr ds : [edi+4]
        call public_65d6f71
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], edi
        jne public_65d1e07
        mov ebp, eax
        public_65d1e07 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push eax
        call public_65d2cb0
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 8
        inc eax
        mov byte ptr ss : [esp+0x13], 1
        mov dword ptr ds : [esi+0xC], eax
        pop ebp
        public_65d1e30 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x28], bl
        cmp eax, ebx
        je public_65d1e46
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], ebx
        public_65d1e46 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_65d1e4a : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        pop edi
        je public_65d1e5d
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_65d1e5d : nop
        mov eax, dword ptr ds : [esi+0x28]
        cmp eax, ebx
        je public_65d1e70
        push eax
        call public_65d6cb8
        add esp, 4
        mov dword ptr ds : [esi+0x28], ebx
        public_65d1e70 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, ebx
        je public_65d1e83
        push eax
        call public_65d6cb8
        add esp, 4
        mov dword ptr ds : [esi+0x2C], ebx
        public_65d1e83 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x65d1d10)
    }
}

#undef public_65d1d9b
#undef public_65d1dad
#undef public_65d1e07
#undef public_65d1e30
#undef public_65d1e46
#undef public_65d1e4a
#undef public_65d1e5d
#undef public_65d1e70
#undef public_65d1e83

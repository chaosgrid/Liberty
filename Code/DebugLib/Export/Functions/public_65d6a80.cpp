#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5410);
CLANG_FORWARD_PROC_SYMBOL(public_65d5520);
CLANG_FORWARD_PROC_SYMBOL(public_65d5540);
CLANG_FORWARD_PROC_SYMBOL(public_65d6a30);
CLANG_FORWARD_PROC_SYMBOL(public_65d6a80);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c00);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c4c);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_JUMP_SYMBOL(public_65e0176);

#define public_65d6ab9 _public_65d6ab9
#define public_65d6afd _public_65d6afd
#define public_65d6b12 _public_65d6b12
#define public_65d6b24 _public_65d6b24
#define public_65d6b39 _public_65d6b39
#define public_65d6b61 _public_65d6b61
#define public_65d6b76 _public_65d6b76

PROC_DECLARE(0x65d6a80, internal_65d6a80, public_65d6a80);
extern "C" NAKED register_t __cdecl internal_65d6a80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65e0176 @0x65d6a82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65e0176
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_65e1540
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x20], 1
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_65d6afd
        public_65d6ab9 : nop
        mov ecx, dword ptr ds : [esi+8]
        lea ebp, ds:[esi+8]
        call public_65d5520
        mov ecx, dword ptr ss : [ebp]
        call public_65d5540
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi]
        push 0
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, ebp
        call public_65d6a30
        push esi
        call public_65d6cb8
        mov ecx, dword ptr ds : [edi+0x10]
        add esp, 4
        dec ecx
        mov esi, ebx
        mov dword ptr ds : [edi+0x10], ecx
        mov eax, dword ptr ds : [edi+0xC]
        cmp ebx, eax
        jne public_65d6ab9
        public_65d6afd : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, 0xFFFFFFFF
        je public_65d6b12
        push eax
        call public_65d6c4c
        mov dword ptr ds : [edi+4], 0xFFFFFFFF
        public_65d6b12 : nop
        mov ebp, dword ptr ds : [edi+0x18]
        lea ebx, ds:[edi+0x14]
        mov byte ptr ss : [esp+0x20], 0
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        je public_65d6b39
        public_65d6b24 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        lea edx, ss:[esp+0x14]
        push eax
        push edx
        mov ecx, ebx
        call public_65d6c00
        cmp esi, ebp
        jne public_65d6b24
        public_65d6b39 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_65d6cb8
        xor ebp, ebp
        add edi, 8
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov ebx, dword ptr ds : [edi+4]
        add esp, 4
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_65d6b76
        public_65d6b61 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_65d5410
        cmp esi, ebx
        jne public_65d6b61
        public_65d6b76 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_65d6cb8
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x65d6a80)
    }
}

#undef public_65d6ab9
#undef public_65d6afd
#undef public_65d6b12
#undef public_65d6b24
#undef public_65d6b39
#undef public_65d6b61
#undef public_65d6b76

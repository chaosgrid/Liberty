#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1330);
CLANG_FORWARD_PROC_SYMBOL(public_65d1c20);
CLANG_FORWARD_PROC_SYMBOL(public_65d2630);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c4c);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_JUMP_SYMBOL(public_65dfedb);

#define public_65d1c5d _public_65d1c5d
#define public_65d1c63 _public_65d1c63
#define public_65d1c76 _public_65d1c76
#define public_65d1c89 _public_65d1c89
#define public_65d1c9c _public_65d1c9c
#define public_65d1cae _public_65d1cae
#define public_65d1cdf _public_65d1cdf

PROC_DECLARE(0x65d1c20, internal_65d1c20, public_65d1c20);
extern "C" NAKED register_t __cdecl internal_65d1c20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65dfedb @0x65d1c22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65dfedb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov eax, dword ptr ds : [edi]
        xor esi, esi
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], esi
        je public_65d1c63
        push eax
        call public_65d6c4c
        cmp eax, 0xFFFFFFFF
        jne public_65d1c5d
        call public_65d1330
        public_65d1c5d : nop
        mov dword ptr ds : [edi], 0xFFFFFFFF
        public_65d1c63 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        cmp eax, esi
        je public_65d1c76
        push eax
        call public_65d6cb8
        add esp, 4
        mov dword ptr ds : [edi+0x2C], esi
        public_65d1c76 : nop
        mov eax, dword ptr ds : [edi+0x28]
        cmp eax, esi
        je public_65d1c89
        push eax
        call public_65d6cb8
        add esp, 4
        mov dword ptr ds : [edi+0x28], esi
        public_65d1c89 : nop
        mov eax, dword ptr ds : [edi+0x34]
        cmp eax, esi
        je public_65d1c9c
        push eax
        call public_65d6cb8
        add esp, 4
        mov dword ptr ds : [edi+0x34], esi
        public_65d1c9c : nop
        mov ebp, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov ebx, dword ptr ss : [ebp]
        cmp ebx, ebp
        je public_65d1cdf
        public_65d1cae : nop
        mov esi, ebx
        mov ebx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_65d2630
        push esi
        call public_65d6cb8
        mov ecx, dword ptr ds : [edi+0xC]
        add esp, 4
        dec ecx
        cmp ebx, ebp
        mov dword ptr ds : [edi+0xC], ecx
        jne public_65d1cae
        xor esi, esi
        public_65d1cdf : nop
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        call public_65d6cb8
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ds : [edi+8], esi
        mov dword ptr ds : [edi+0xC], esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x65d1c20)
    }
}

#undef public_65d1c5d
#undef public_65d1c63
#undef public_65d1c76
#undef public_65d1c89
#undef public_65d1c9c
#undef public_65d1cae
#undef public_65d1cdf

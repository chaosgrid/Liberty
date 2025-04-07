#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4240);
CLANG_FORWARD_PROC_SYMBOL(public_65c45c0);
CLANG_FORWARD_PROC_SYMBOL(public_65c4d70);
CLANG_FORWARD_JUMP_SYMBOL(public_65c6f1e);

#define public_65c4dc7 _public_65c4dc7
#define public_65c4de3 _public_65c4de3
#define public_65c4e03 _public_65c4e03

PROC_DECLARE(0x65c4d70, internal_65c4d70, public_65c4d70);
extern "C" NAKED register_t __cdecl internal_65c4d70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65c6f1e @0x65c4d72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65c6f1e
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
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_65c74d8
        lea edi, ds:[esi+0x56C]
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ds : [esi+0x564], bl
        mov dword ptr ss : [esp+0x10], edi
        call public_65c45c0
        mov eax, dword ptr ds : [esi+0x560]
        xor ebp, ebp
        cmp eax, ebx
        jbe public_65c4de3
        lea edi, ds:[esi+0x460]
        public_65c4dc7 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+0x560]
        inc ebp
        add edi, 4
        cmp ebp, eax
        jb public_65c4dc7
        mov edi, dword ptr ss : [esp+0x10]
        public_65c4de3 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x560], ebx
        je public_65c4e03
        mov edx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [edx+0x5C]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], ebx
        public_65c4e03 : nop
        mov ecx, edi
        mov dword ptr ds : [public_65ca284], ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_65c4240
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x65c4d70)
    }
}

#undef public_65c4dc7
#undef public_65c4de3
#undef public_65c4e03

#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3df0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3e10);
CLANG_FORWARD_PROC_SYMBOL(public_65d4b80);
CLANG_FORWARD_PROC_SYMBOL(public_65d4cd0);
CLANG_FORWARD_PROC_SYMBOL(public_65d4ed0);
CLANG_FORWARD_JUMP_SYMBOL(public_65e0029);

#define public_65d4bf2 _public_65d4bf2
#define public_65d4c1e _public_65d4c1e
#define public_65d4c34 _public_65d4c34
#define public_65d4c4f _public_65d4c4f
#define public_65d4c79 _public_65d4c79
#define public_65d4c95 _public_65d4c95
#define public_65d4cb0 _public_65d4cb0

PROC_DECLARE(0x65d4b80, internal_65d4b80, public_65d4b80);
extern "C" NAKED register_t __cdecl internal_65d4b80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65e0029 @0x65d4b82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65e0029
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_65d4cb0
        mov edi, dword ptr ss : [esp+0x28]
        push 0xFFFFFFFF
        push ebp
        push edi
        mov al, byte ptr ds : [edi]
        mov ecx, esi
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        call public_65d4cd0
        mov cl, byte ptr ds : [edi+0x10]
        add edi, 0x10
        lea ebx, ds:[esi+0x10]
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [ebx], cl
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov dword ptr ds : [ebx+0xC], ebp
        mov eax, dword ptr ds : [edi+8]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        jbe public_65d4bf2
        or ebp, 0xFFFFFFFF
        public_65d4bf2 : nop
        cmp ebx, edi
        jne public_65d4c1e
        push 0xFFFFFFFF
        push ebp
        mov ecx, ebx
        call public_65d4ed0
        push 0
        push 0
        mov ecx, ebx
        call public_65d4ed0
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_65d4c1e : nop
        xor ecx, ecx
        cmp ebp, ecx
        jbe public_65d4c79
        cmp ebp, eax
        jne public_65d4c79
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_65d4c34
        mov eax, offset public_65e13a4
        public_65d4c34 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_65d4c79
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_65d4c4f
        mov eax, offset public_65e13a4
        public_65d4c4f : nop
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], edx
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], ecx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        inc cl
        pop esi
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_65d4c79 : nop
        push 1
        push ebp
        mov ecx, ebx
        call public_65d3e10
        test al, al
        je public_65d4cb0
        mov edi, dword ptr ds : [edi+4]
        mov esi, offset public_65e13a4
        test edi, edi
        je public_65d4c95
        mov esi, edi
        public_65d4c95 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov edx, ecx
        push ebp
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, ebx
        call public_65d3df0
        public_65d4cb0 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x65d4b80)
    }
}

#undef public_65d4bf2
#undef public_65d4c1e
#undef public_65d4c34
#undef public_65d4c4f
#undef public_65d4c79
#undef public_65d4c95
#undef public_65d4cb0

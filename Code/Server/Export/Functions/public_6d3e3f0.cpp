#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e3f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62c99);

#define public_6d3e44b _public_6d3e44b
#define public_6d3e459 _public_6d3e459
#define public_6d3e46c _public_6d3e46c
#define public_6d3e4a6 _public_6d3e4a6
#define public_6d3e4b0 _public_6d3e4b0
#define public_6d3e4c4 _public_6d3e4c4
#define public_6d3e4e0 _public_6d3e4e0
#define public_6d3e4f4 _public_6d3e4f4
#define public_6d3e50f _public_6d3e50f
#define public_6d3e526 _public_6d3e526

PROC_DECLARE(0x6d3e3f0, internal_6d3e3f0, public_6d3e3f0);
extern "C" NAKED register_t __cdecl internal_6d3e3f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62c99 @0x6d3e3f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62c99
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        mov dx, word ptr ds : [eax]
        push ebx
        push ebp
        push esi
        lea esi, ds:[ecx+4]
        mov word ptr ds : [ecx], dx
        mov dword ptr ss : [esp+0xC], ecx
        xor ecx, ecx
        mov dword ptr ss : [esp+0x20], esi
        mov al, byte ptr ss : [esp+0x20]
        push edi
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov ebp, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [public_6d64b64]
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [edx]
        mov edi, eax
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        jae public_6d3e44b
        mov edi, ebx
        public_6d3e44b : nop
        cmp esi, ebp
        jne public_6d3e4b0
        cmp edi, ecx
        jbe public_6d3e459
        call dword ptr ds : [public_6d64b04]
        public_6d3e459 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64acc]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebx
        jae public_6d3e46c
        mov ebx, eax
        public_6d3e46c : nop
        test ebx, ebx
        jbe public_6d3e4a6
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea eax, ds:[ebx+edi]
        lea edx, ds:[ecx+eax*2]
        push edx
        lea eax, ds:[ecx+edi*2]
        push eax
        call public_6ce3ac0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d3e4a6
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b60]
        public_6d3e4a6 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64acc]
        jmp public_6d3e526
        public_6d3e4b0 : nop
        cmp edi, ecx
        jbe public_6d3e4f4
        cmp edi, eax
        jne public_6d3e4f4
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ecx
        jne public_6d3e4c4
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d3e4c4 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6d3e4f4
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d64b58]
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6d3e4e0
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d3e4e0 : nop
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6d3e526
        public_6d3e4f4 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d3e526
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6d3e50f
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d3e50f : nop
        push edi
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6ce1960
        add esp, 0xC
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b60]
        public_6d3e526 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x14], edx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d3e3f0)
    }
}

#undef public_6d3e44b
#undef public_6d3e459
#undef public_6d3e46c
#undef public_6d3e4a6
#undef public_6d3e4b0
#undef public_6d3e4c4
#undef public_6d3e4e0
#undef public_6d3e4f4
#undef public_6d3e50f
#undef public_6d3e526

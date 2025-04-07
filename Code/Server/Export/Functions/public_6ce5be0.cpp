#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4500);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4520);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5620);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5be0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60431);

#define public_6ce5c2e _public_6ce5c2e
#define public_6ce5c40 _public_6ce5c40
#define public_6ce5c57 _public_6ce5c57
#define public_6ce5c8b _public_6ce5c8b
#define public_6ce5c95 _public_6ce5c95
#define public_6ce5ca9 _public_6ce5ca9
#define public_6ce5cc4 _public_6ce5cc4
#define public_6ce5cd8 _public_6ce5cd8
#define public_6ce5cf2 _public_6ce5cf2
#define public_6ce5d0c _public_6ce5d0c
#define public_6ce5d14 _public_6ce5d14

PROC_DECLARE(0x6ce5be0, internal_6ce5be0, public_6ce5be0);
extern "C" NAKED register_t __cdecl internal_6ce5be0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60431 @0x6ce5be2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60431
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        xor ecx, ecx
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ce5d14
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov al, byte ptr ss : [ebp]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov eax, dword ptr ss : [ebp+8]
        push edi
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jbe public_6ce5c2e
        or edi, 0xFFFFFFFF
        public_6ce5c2e : nop
        cmp esi, ebp
        jne public_6ce5c95
        push ebx
        or ebx, 0xFFFFFFFF
        cmp edi, ecx
        jbe public_6ce5c40
        call dword ptr ds : [public_6d64b04]
        public_6ce5c40 : nop
        mov ecx, esi
        call public_6ce5620
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, 0xFFFFFFFF
        jae public_6ce5c57
        mov ebx, eax
        test ebx, ebx
        jbe public_6ce5c8b
        public_6ce5c57 : nop
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ebx+edi]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6ce3ac0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebx
        push edi
        mov ecx, esi
        call public_6ce4520
        test al, al
        je public_6ce5c8b
        push edi
        mov ecx, esi
        call public_6ce4500
        public_6ce5c8b : nop
        mov ecx, esi
        call public_6ce5620
        pop ebx
        jmp public_6ce5d0c
        public_6ce5c95 : nop
        cmp edi, ecx
        jbe public_6ce5cd8
        cmp edi, eax
        jne public_6ce5cd8
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ecx
        jne public_6ce5ca9
        mov eax, offset public_6d64efc
        public_6ce5ca9 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6ce5cd8
        push 1
        mov ecx, esi
        call public_6ce3b20
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6ce5cc4
        mov eax, offset public_6d64efc
        public_6ce5cc4 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_6ce5d0c
        public_6ce5cd8 : nop
        push 1
        push edi
        mov ecx, esi
        call public_6ce4520
        test al, al
        je public_6ce5d0c
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6ce5cf2
        mov eax, offset public_6d64efc
        public_6ce5cf2 : nop
        mov edx, dword ptr ds : [esi+4]
        push edi
        push eax
        push edx
        call public_6ce1960
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        add esp, 0xC
        mov word ptr ds : [eax+edi*2], 0
        public_6ce5d0c : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        pop edi
        mov dword ptr ds : [esi+0x10], ecx
        pop ebp
        public_6ce5d14 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ce5be0)
    }
}

#undef public_6ce5c2e
#undef public_6ce5c40
#undef public_6ce5c57
#undef public_6ce5c8b
#undef public_6ce5c95
#undef public_6ce5ca9
#undef public_6ce5cc4
#undef public_6ce5cd8
#undef public_6ce5cf2
#undef public_6ce5d0c
#undef public_6ce5d14

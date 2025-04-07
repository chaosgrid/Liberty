#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4500);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4520);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5620);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5920);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60431);

#define public_6ce596e _public_6ce596e
#define public_6ce597f _public_6ce597f
#define public_6ce5996 _public_6ce5996
#define public_6ce59c9 _public_6ce59c9
#define public_6ce59e3 _public_6ce59e3
#define public_6ce59f7 _public_6ce59f7
#define public_6ce5a12 _public_6ce5a12
#define public_6ce5a3c _public_6ce5a3c
#define public_6ce5a58 _public_6ce5a58
#define public_6ce5a61 _public_6ce5a61
#define public_6ce5a70 _public_6ce5a70
#define public_6ce5a7c _public_6ce5a7c

PROC_DECLARE(0x6ce5920, internal_6ce5920, public_6ce5920);
extern "C" NAKED register_t __cdecl internal_6ce5920()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60431 @0x6ce5922*/
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
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6ce5a7c
        mov ebx, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [ebx]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [ebx+8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jbe public_6ce596e
        or edi, 0xFFFFFFFF
        public_6ce596e : nop
        cmp esi, ebx
        jne public_6ce59e3
        or ebx, 0xFFFFFFFF
        cmp edi, ebp
        jbe public_6ce597f
        call dword ptr ds : [public_6d64b04]
        public_6ce597f : nop
        mov ecx, esi
        call public_6ce5620
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, 0xFFFFFFFF
        jae public_6ce5996
        mov ebx, eax
        cmp ebx, ebp
        jbe public_6ce59c9
        public_6ce5996 : nop
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
        push ebp
        sub edi, ebx
        push edi
        mov ecx, esi
        call public_6ce4520
        test al, al
        je public_6ce59c9
        push edi
        mov ecx, esi
        call public_6ce4500
        public_6ce59c9 : nop
        mov ecx, esi
        call public_6ce5620
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6ce59e3 : nop
        cmp edi, ebp
        jbe public_6ce5a3c
        cmp edi, eax
        jne public_6ce5a3c
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6ce59f7
        mov eax, offset public_6d64efc
        public_6ce59f7 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6ce5a3c
        push 1
        mov ecx, esi
        call public_6ce3b20
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6ce5a12
        mov eax, offset public_6d64efc
        public_6ce5a12 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6ce5a3c : nop
        push 1
        push edi
        mov ecx, esi
        call public_6ce4520
        test al, al
        je public_6ce5a7c
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov ecx, offset public_6d64efc
        je public_6ce5a58
        mov ecx, ebx
        public_6ce5a58 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_6ce5a70
        mov edx, edi
        public_6ce5a61 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6ce5a61
        public_6ce5a70 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_6ce5a7c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ce5920)
    }
}

#undef public_6ce596e
#undef public_6ce597f
#undef public_6ce5996
#undef public_6ce59c9
#undef public_6ce59e3
#undef public_6ce59f7
#undef public_6ce5a12
#undef public_6ce5a3c
#undef public_6ce5a58
#undef public_6ce5a61
#undef public_6ce5a70
#undef public_6ce5a7c

#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e610);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e640);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf1b1);

#define public_6f4e515 _public_6f4e515
#define public_6f4e523 _public_6f4e523
#define public_6f4e536 _public_6f4e536
#define public_6f4e570 _public_6f4e570
#define public_6f4e57a _public_6f4e57a
#define public_6f4e58e _public_6f4e58e
#define public_6f4e5aa _public_6f4e5aa
#define public_6f4e5be _public_6f4e5be
#define public_6f4e5d9 _public_6f4e5d9
#define public_6f4e5f3 _public_6f4e5f3
#define public_6f4e5fc _public_6f4e5fc

PROC_DECLARE(0x6f4e4c0, internal_6f4e4c0, public_6f4e4c0);
extern "C" NAKED register_t __cdecl internal_6f4e4c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf1b1 @0x6f4e4c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf1b1
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
        je public_6f4e5fc
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov al, byte ptr ss : [ebp]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov edx, dword ptr ds : [public_6fb32cc]
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [edx]
        push edi
        mov edi, eax
        cmp ebx, edi
        jae public_6f4e515
        mov edi, ebx
        public_6f4e515 : nop
        cmp esi, ebp
        jne public_6f4e57a
        cmp edi, ecx
        jbe public_6f4e523
        call dword ptr ds : [public_6fb32e4]
        public_6f4e523 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb32b8]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebx
        jae public_6f4e536
        mov ebx, eax
        public_6f4e536 : nop
        test ebx, ebx
        jbe public_6f4e570
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea eax, ds:[ebx+edi]
        lea edx, ds:[ecx+eax*2]
        push edx
        lea eax, ds:[ecx+edi*2]
        push eax
        call public_6f4e640
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb32b4]
        test al, al
        je public_6f4e570
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb32d4]
        public_6f4e570 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb32b8]
        jmp public_6f4e5f3
        public_6f4e57a : nop
        cmp edi, ecx
        jbe public_6f4e5be
        cmp edi, eax
        jne public_6f4e5be
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ecx
        jne public_6f4e58e
        mov eax, dword ptr ds : [public_6fb32c0]
        public_6f4e58e : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6f4e5be
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb32c8]
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6f4e5aa
        mov eax, dword ptr ds : [public_6fb32c0]
        public_6f4e5aa : nop
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6f4e5f3
        public_6f4e5be : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb32b4]
        test al, al
        je public_6f4e5f3
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6f4e5d9
        mov eax, dword ptr ds : [public_6fb32c0]
        public_6f4e5d9 : nop
        push edi
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6f4e610
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        add esp, 0xC
        mov word ptr ds : [ecx+edi*2], 0
        public_6f4e5f3 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        pop edi
        pop ebp
        mov dword ptr ds : [esi+0x10], edx
        pop ebx
        public_6f4e5fc : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4e4c0)
    }
}

#undef public_6f4e515
#undef public_6f4e523
#undef public_6f4e536
#undef public_6f4e570
#undef public_6f4e57a
#undef public_6f4e58e
#undef public_6f4e5aa
#undef public_6f4e5be
#undef public_6f4e5d9
#undef public_6f4e5f3
#undef public_6f4e5fc

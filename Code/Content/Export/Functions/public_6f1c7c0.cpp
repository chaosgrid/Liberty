#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1a5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c980);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9036);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9174);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadc4b);

#define public_6f1c7f0 _public_6f1c7f0
#define public_6f1c7f3 _public_6f1c7f3
#define public_6f1c83a _public_6f1c83a
#define public_6f1c83c _public_6f1c83c
#define public_6f1c855 _public_6f1c855
#define public_6f1c865 _public_6f1c865
#define public_6f1c89e _public_6f1c89e
#define public_6f1c8aa _public_6f1c8aa
#define public_6f1c8ba _public_6f1c8ba
#define public_6f1c8c6 _public_6f1c8c6
#define public_6f1c8d6 _public_6f1c8d6
#define public_6f1c8e0 _public_6f1c8e0
#define public_6f1c8e7 _public_6f1c8e7
#define public_6f1c907 _public_6f1c907
#define public_6f1c90b _public_6f1c90b
#define public_6f1c91c _public_6f1c91c
#define public_6f1c967 _public_6f1c967

PROC_DECLARE(0x6f1c7c0, internal_6f1c7c0, public_6f1c7c0);
extern "C" NAKED register_t __cdecl internal_6f1c7c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fadc4b @0x6f1c7c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadc4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        je public_6f1c7f0
        mov eax, dword ptr ds : [ecx+0xC]
        lea ebx, ds:[eax-1]
        jmp public_6f1c7f3
        public_6f1c7f0 : nop
        mov ebx, dword ptr ds : [ecx+0xC]
        public_6f1c7f3 : nop
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], ebx
        jle public_6f1c967
        mov eax, ebx
        imul eax, 0x1C
        add eax, 4
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x24], edi
        je public_6f1c83a
/*FIXUP push offset _public_6f1c980 @0x6f1c81e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f1c980
/*FIXUP push offset _public_6f1a5d0 @0x6f1c823*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f1a5d0
        push ebx
        lea esi, ds:[eax+4]
        push 0x1C
        push esi
        mov dword ptr ds : [eax], ebx
        call public_6fa9174
        mov ebp, esi
        jmp public_6f1c83c
        public_6f1c83a : nop
        xor ebp, ebp
        public_6f1c83c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_6f1c91c
        public_6f1c855 : nop
        mov cl, byte ptr ss : [esp+0x2C]
        test cl, cl
        je public_6f1c865
        cmp esi, dword ptr ds : [eax]
        je public_6f1c90b
        public_6f1c865 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        test al, al
        je public_6f1c907
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+0x78]
        cmp eax, 2
        je public_6f1c8c6
        cmp eax, 5
        je public_6f1c8c6
        mov al, byte ptr ss : [esp+0x30]
        test al, al
        je public_6f1c8aa
        test edi, edi
        jne public_6f1c89e
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+0x1C], 0x1A
        jmp public_6f1c8e0
        public_6f1c89e : nop
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+0x1C], 9
        jmp public_6f1c8e0
        public_6f1c8aa : nop
        test edi, edi
        jne public_6f1c8ba
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+0x1C], 0xA
        jmp public_6f1c8e7
        public_6f1c8ba : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+0x1C], 9
        jmp public_6f1c8e7
        public_6f1c8c6 : nop
        test edi, edi
        jne public_6f1c8d6
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+0x1C], 0x3A
        jmp public_6f1c8e0
        public_6f1c8d6 : nop
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+0x1C], 9
        public_6f1c8e0 : nop
        mov dword ptr ds : [ecx+0x78], 3
        public_6f1c8e7 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+0x1C]
        mov eax, edi
        imul eax, 0x1C
        add ecx, 0x1C
        add ecx, 4
        add eax, ebp
        push ecx
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [eax], edx
        call dword ptr ds : [public_6fb3088]
        inc edi
        public_6f1c907 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f1c90b : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx+8]
        cmp esi, eax
        jne public_6f1c855
        public_6f1c91c : nop
        mov eax, dword ptr ds : [ecx+0x80]
        xor edx, edx
        mov dl, byte ptr ds : [eax+0x80]
        lea ecx, ds:[eax+0x68]
        push ecx
        lea ecx, ds:[eax+0x50]
        push edx
        push ecx
        push ebx
        lea edx, ds:[eax+4]
        push ebp
        push edx
        add eax, 0xC
        push eax
        call dword ptr ds : [public_6fb3698]
        add esp, 0x1C
        test ebp, ebp
        je public_6f1c967
        mov eax, dword ptr ss : [ebp-4]
/*FIXUP push offset _public_6f1c980 @0x6f1c94d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f1c980
        lea esi, ss:[ebp-4]
        push eax
        push 0x1C
        push ebp
        call public_6fa9036
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f1c967 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6f1c7c0)
    }
}

#undef public_6f1c7f0
#undef public_6f1c7f3
#undef public_6f1c83a
#undef public_6f1c83c
#undef public_6f1c855
#undef public_6f1c865
#undef public_6f1c89e
#undef public_6f1c8aa
#undef public_6f1c8ba
#undef public_6f1c8c6
#undef public_6f1c8d6
#undef public_6f1c8e0
#undef public_6f1c8e7
#undef public_6f1c907
#undef public_6f1c90b
#undef public_6f1c91c
#undef public_6f1c967

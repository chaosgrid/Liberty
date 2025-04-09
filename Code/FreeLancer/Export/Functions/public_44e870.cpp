#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435b80);
CLANG_FORWARD_PROC_SYMBOL(public_4454e0);
CLANG_FORWARD_PROC_SYMBOL(public_449cd0);
CLANG_FORWARD_PROC_SYMBOL(public_449d50);
CLANG_FORWARD_PROC_SYMBOL(public_44e870);
CLANG_FORWARD_PROC_SYMBOL(public_453b50);
CLANG_FORWARD_PROC_SYMBOL(public_453b60);
CLANG_FORWARD_PROC_SYMBOL(public_455d70);
CLANG_FORWARD_PROC_SYMBOL(public_455ed0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9d99);

#define public_44e8c4 _public_44e8c4
#define public_44e900 _public_44e900
#define public_44e904 _public_44e904
#define public_44e908 _public_44e908
#define public_44e94b _public_44e94b
#define public_44e967 _public_44e967
#define public_44e97f _public_44e97f
#define public_44e989 _public_44e989
#define public_44ea3b _public_44ea3b
#define public_44ea48 _public_44ea48
#define public_44ea65 _public_44ea65
#define public_44ea80 _public_44ea80

PROC_DECLARE(0x44e870, internal_44e870, public_44e870);
extern "C" NAKED register_t __cdecl internal_44e870()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9d99 @0x44e872*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9d99
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x98
        push ebx
        mov ebx, dword ptr ss : [esp+0xB0]
        test ebx, ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov byte ptr ss : [esp+0x12], 0
        mov byte ptr ss : [esp+0x13], 0
        je public_44e967
        mov esi, dword ptr ds : [public_5c6d24]
/*FIXUP push offset public_5cc404 @0x44e8b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc404
        push ebx
        call esi
        add esp, 8
        test eax, eax
        jne public_44e8c4
        mov byte ptr ss : [esp+0x12], 1
/*FIXUP public_44e8c4 : nop
        push offset public_5cba10 @0x44e8c4*/
  FIXUP public_44e8c4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cba10
        push ebx
        call esi
        add esp, 8
        test eax, eax
        je public_44e900
/*FIXUP push offset public_5cba08 @0x44e8d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cba08
        push ebx
        call esi
        add esp, 8
        test eax, eax
        je public_44e900
/*FIXUP push offset public_5cb9fc @0x44e8e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb9fc
        push ebx
        call esi
        add esp, 8
        test eax, eax
        je public_44e900
/*FIXUP push offset public_5cb9f0 @0x44e8f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb9f0
        push ebx
        call esi
        add esp, 8
        test eax, eax
        jne public_44e904
        public_44e900 : nop
        mov al, 1
        jmp public_44e908
        public_44e904 : nop
        mov al, byte ptr ss : [esp+0x13]
        public_44e908 : nop
        mov cl, byte ptr ss : [esp+0x12]
        test cl, cl
        je public_44e94b
        mov ecx, dword ptr ss : [ebp+0x30]
        call public_449cd0
        mov esi, eax
        test esi, esi
        jne public_44ea3b
/*FIXUP push offset public_5cc4f8 @0x44e922*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc4f8
        push 0x358
/*FIXUP push offset public_5cc32c @0x44e92c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc32c
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x44e936*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_44ea48
        public_44e94b : nop
        test al, al
        je public_44e967
        mov ecx, dword ptr ss : [ebp+0x30]
        push ebx
        call public_449d50
        mov esi, eax
        test esi, esi
        jne public_44ea3b
        jmp public_44ea48
        public_44e967 : nop
        mov eax, dword ptr ss : [ebp+0x50]
        test eax, eax
        je public_44e989
        cmp eax, 1
        jne public_44ea65
        mov ecx, dword ptr ss : [ebp+0x38]
        call public_453b50
        public_44e97f : nop
        mov esi, eax
        test esi, esi
        jne public_44ea3b
        public_44e989 : nop
        mov ecx, dword ptr ss : [ebp+0x34]
        push ebx
        call public_455ed0
        mov esi, eax
        test esi, esi
        jne public_44ea3b
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c610c]
        mov dword ptr ss : [esp+0xB0], esi
        call dword ptr ds : [public_5c60e4]
        mov esi, dword ptr ss : [esp+0xB8]
        mov ecx, dword ptr ds : [esi+0x3C]
        lea edx, ss:[esp+0x68]
        push edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c6260]
        lea edx, ds:[esi+8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x18], ecx
        sub esp, 0x30
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ss : [ebp+0x30]
        add esi, 0x14
        mov dword ptr ss : [esp+0x4C], edx
        mov ecx, 9
        lea edi, ss:[esp+0x50]
        rep movsd
        mov edi, esp
        push 1
        push eax
        mov ecx, 0xC
        lea esi, ss:[esp+0x4C]
        push 0xFFFFFFFF
        rep movsd
        lea ecx, ss:[esp+0x80]
        push 0
        push ecx
        call public_435b80
        mov ecx, dword ptr ss : [ebp+0x34]
        add esp, 0x44
        mov esi, eax
        push ebx
        push esi
        call public_455d70
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0xB0], 0xFFFFFFFF
        call dword ptr ds : [public_5c6104]
        public_44ea3b : nop
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x55]
        mov ecx, esi
        push edx
        call public_4454e0
        public_44ea48 : nop
        mov ecx, dword ptr ss : [esp+0xA8]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xA4
        ret 8
        public_44ea65 : nop
        cmp eax, 2
        jne public_44ea80
        test ebx, ebx
        je public_44e989
        mov ecx, dword ptr ss : [ebp+0x38]
        push ebx
        call public_453b60
        jmp public_44e97f
        public_44ea80 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cc4d4 @0x44ea86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc4d4
        push 0x382
/*FIXUP push offset public_5cc32c @0x44ea90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc32c
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x44ea9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_44e989
        UNREACHABLE_TRAP(0x44e870)
    }
}

#undef public_44e8c4
#undef public_44e900
#undef public_44e904
#undef public_44e908
#undef public_44e94b
#undef public_44e967
#undef public_44e97f
#undef public_44e989
#undef public_44ea3b
#undef public_44ea48
#undef public_44ea65
#undef public_44ea80

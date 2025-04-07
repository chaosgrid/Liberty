#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21170);
CLANG_FORWARD_PROC_SYMBOL(public_6c24980);
CLANG_FORWARD_PROC_SYMBOL(public_6c2dd20);
CLANG_FORWARD_PROC_SYMBOL(public_6c2df00);
CLANG_FORWARD_PROC_SYMBOL(public_6c2df60);
CLANG_FORWARD_PROC_SYMBOL(public_6c2dfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e720);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ec0);

#define public_6c2dd6d _public_6c2dd6d
#define public_6c2ddda _public_6c2ddda
#define public_6c2dde3 _public_6c2dde3
#define public_6c2ddf2 _public_6c2ddf2
#define public_6c2de31 _public_6c2de31
#define public_6c2de57 _public_6c2de57
#define public_6c2de59 _public_6c2de59
#define public_6c2deb3 _public_6c2deb3
#define public_6c2deed _public_6c2deed
#define public_6c2deef _public_6c2deef

PROC_DECLARE(0x6c2dd20, internal_6c2dd20, public_6c2dd20);
extern "C" NAKED register_t __cdecl internal_6c2dd20()
{
    __asm
    {
        mov eax, 0x2048
        call public_6c34ec0
        mov eax, dword ptr ss : [esp+0x2050]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_6c36008]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x20]
        push eax
        call public_6c2e720
        mov esi, eax
        xor ebp, ebp
        add esp, 8
        cmp esi, ebp
        je public_6c2dd6d
        mov ecx, esi
        call public_6c2dfe0
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2048
        ret 
/*FIXUP public_6c2dd6d : nop
        push offset public_6c37310 @0x6c2dd6d*/
  FIXUP public_6c2dd6d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37310
        xor ebx, ebx
/*FIXUP push offset public_6c36484 @0x6c2dd74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c36484
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebp
        call public_6c24980
        mov esi, dword ptr ss : [esp+0x205C]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x24]
        push edx
        push esi
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6c2ddf2
        mov eax, dword ptr ds : [esi]
        push ebx
        push edi
        push esi
        call dword ptr ds : [eax+0x28]
        mov ebx, eax
        push ebx
        call public_6c34eac
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea edx, ss:[esp+0x20]
        push edx
        push ebx
        mov ebp, eax
        push ebp
        push edi
        push esi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6c2ddda
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], ebp
        jmp public_6c2dde3
        public_6c2ddda : nop
        push ebp
        call public_6c34ea0
        add esp, 4
        public_6c2dde3 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        mov ebp, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x10]
        public_6c2ddf2 : nop
        xor ecx, ecx
        test ebp, ebp
        setne cl
        dec ecx
        test ecx, 0x80004005
        jge public_6c2de31
        mov edx, dword ptr ds : [public_6c36010]
/*FIXUP push offset public_6c3759c @0x6c2de08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3759c
        push 0x2A
/*FIXUP push offset public_6c37550 @0x6c2de0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37550
        mov eax, 0x100001
/*FIXUP push offset public_6c37530 @0x6c2de19*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37530
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2048
        ret 
        public_6c2de31 : nop
        push 0x38
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c2de57
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x2060]
        push ecx
        push edx
        mov ecx, eax
        call public_6c2df60
        mov esi, eax
        jmp public_6c2de59
        public_6c2de57 : nop
        xor esi, esi
        public_6c2de59 : nop
        mov dword ptr ds : [esi+0x34], ebx
        test byte ptr ds : [ebx], 1
        jne public_6c2deb3
        mov eax, dword ptr ss : [esp+0x2060]
        push eax
        lea ecx, ss:[esp+0x5C]
/*FIXUP push offset public_6c37518 @0x6c2de6d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37518
        push ecx
        call public_6c21170
        mov edx, dword ptr ds : [public_6c36010]
        push eax
        push 0x3A
/*FIXUP push offset public_6c37550 @0x6c2de81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37550
        mov ecx, 0x100002
/*FIXUP push offset public_6c3719c @0x6c2de8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3719c
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        mov ecx, esi
        call public_6c2df00
        push esi
        call public_6c34ea0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2048
        ret 
        public_6c2deb3 : nop
        movzx edi, word ptr ds : [ebx+8]
        lea eax, ds:[edi*4]
        push eax
        call public_6c34eac
        mov edx, eax
        add esp, 4
        test edx, edx
        je public_6c2deed
        lea eax, ds:[edi-1]
        test eax, eax
        jl public_6c2deef
        lea ecx, ds:[eax+1]
        xor eax, eax
        mov edi, edx
        rep stosd
        pop edi
        mov dword ptr ds : [esi+8], edx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2048
        ret 
        public_6c2deed : nop
        xor edx, edx
        public_6c2deef : nop
        pop edi
        mov dword ptr ds : [esi+8], edx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2048
        ret 
        UNREACHABLE_TRAP(0x6c2dd20)
    }
}

#undef public_6c2dd6d
#undef public_6c2ddda
#undef public_6c2dde3
#undef public_6c2ddf2
#undef public_6c2de31
#undef public_6c2de57
#undef public_6c2de59
#undef public_6c2deb3
#undef public_6c2deed
#undef public_6c2deef

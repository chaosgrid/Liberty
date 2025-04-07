#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40b410);
CLANG_FORWARD_PROC_SYMBOL(public_40b610);
CLANG_FORWARD_PROC_SYMBOL(public_415cf0);
CLANG_FORWARD_PROC_SYMBOL(public_4188b2);
CLANG_FORWARD_PROC_SYMBOL(public_418d1a);

#define public_40b470 _public_40b470
#define public_40b480 _public_40b480
#define public_40b49c _public_40b49c
#define public_40b4a9 _public_40b4a9
#define public_40b4c3 _public_40b4c3
#define public_40b4d0 _public_40b4d0
#define public_40b4e4 _public_40b4e4
#define public_40b505 _public_40b505
#define public_40b527 _public_40b527
#define public_40b582 _public_40b582
#define public_40b58d _public_40b58d

PROC_DECLARE(0x40b410, internal_40b410, public_40b410);
extern "C" NAKED register_t __cdecl internal_40b410()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xBA9]
        xor ebx, ebx
        cmp al, bl
        jne public_40b58d
        mov byte ptr ds : [esi+0xBA9], 1
        cmp dword ptr ds : [public_427824], ebx
        push edi
        mov edi, dword ptr ds : [public_41b1b4]
        je public_40b505
        mov eax, dword ptr ds : [public_42781c]
        cmp eax, ebx
        mov dword ptr ds : [public_427824], ebx
        je public_40b4e4
        push ebp
        push 0x64
        push eax
        mov dword ptr ss : [esp+0x18], 0x258
        call edi
        cmp eax, 0x102
        jne public_40b4d0
        mov ebp, dword ptr ds : [public_41bc04]
        nop 
        public_40b470 : nop
        push ebx
        push ebx
        push ebx
        push ebx
        lea eax, ss:[esp+0x24]
        push eax
        call ebp
        test eax, eax
        je public_40b4a9
        nop 
        public_40b480 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x64]
        test eax, eax
        push ebx
        je public_40b49c
        push ebx
        push ebx
        push ebx
        lea eax, ss:[esp+0x24]
        push eax
        call ebp
        test eax, eax
        jne public_40b480
        jmp public_40b4a9
        public_40b49c : nop
        mov ecx, dword ptr ds : [public_42781c]
        push ecx
        call dword ptr ds : [public_41b168]
        public_40b4a9 : nop
        dec dword ptr ss : [esp+0x10]
        je public_40b4c3
        mov edx, dword ptr ds : [public_42781c]
        push 0x64
        push edx
        call edi
        cmp eax, 0x102
        je public_40b470
        jmp public_40b4d0
        public_40b4c3 : nop
        mov eax, dword ptr ds : [public_42781c]
        push ebx
        push eax
        call dword ptr ds : [public_41b168]
        public_40b4d0 : nop
        mov ecx, dword ptr ds : [public_42781c]
        push ecx
        call dword ptr ds : [public_41b1bc]
        mov dword ptr ds : [public_42781c], ebx
        pop ebp
        public_40b4e4 : nop
        mov eax, dword ptr ds : [public_42782c]
        cmp eax, ebx
        je public_40b505
        push 0xFFFFFFFF
        push eax
        call edi
        mov edx, dword ptr ds : [public_42782c]
        push edx
        call dword ptr ds : [public_41b1bc]
        mov dword ptr ds : [public_42782c], ebx
        public_40b505 : nop
        mov eax, dword ptr ds : [public_4277d8]
        push 0xFFFFFFFF
        push eax
        call edi
        mov ecx, dword ptr ds : [esi+0xC8]
        cmp ecx, ebx
        pop edi
        je public_40b527
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0xC8], ebx
        public_40b527 : nop
        mov eax, dword ptr ds : [public_4277d8]
        push eax
        call dword ptr ds : [public_41b1a4]
        push ebx
        push 4
        push ebx
        push 2
        push ebx
/*FIXUP push offset _public_40b610 @0x40b53a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_40b610
        call public_418d1a
        cmp eax, ebx
        mov dword ptr ds : [esi+0xBA4], eax
        je public_40b582
        mov dword ptr ds : [eax+0x28], ebx
        mov ecx, dword ptr ds : [esi+0xBA4]
        mov edx, dword ptr ds : [ecx+0x2C]
        push edx
        call dword ptr ds : [public_41b16c]
        add esi, 0xBAC
        push 1
        mov ecx, esi
        call public_415cf0
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC0]
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x20
        ret 
        public_40b582 : nop
        mov ecx, dword ptr ds : [public_41bb70]
        call public_4188b2
        public_40b58d : nop
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x40b410)
    }
}

#undef public_40b470
#undef public_40b480
#undef public_40b49c
#undef public_40b4a9
#undef public_40b4c3
#undef public_40b4d0
#undef public_40b4e4
#undef public_40b505
#undef public_40b527
#undef public_40b582
#undef public_40b58d

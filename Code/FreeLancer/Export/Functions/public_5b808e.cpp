#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b2f50);
CLANG_FORWARD_PROC_SYMBOL(public_5b8082);
CLANG_FORWARD_PROC_SYMBOL(public_5b81fe);
CLANG_FORWARD_PROC_SYMBOL(public_5b8204);
CLANG_FORWARD_PROC_SYMBOL(public_5b820a);
CLANG_FORWARD_PROC_SYMBOL(public_5b821c);
CLANG_FORWARD_PROC_SYMBOL(public_5b821f);

#define public_5b8111 _public_5b8111
#define public_5b816a _public_5b816a
#define public_5b8178 _public_5b8178
#define public_5b817d _public_5b817d
#define public_5b8181 _public_5b8181
#define public_5b818b _public_5b818b
#define public_5b81a4 _public_5b81a4
#define public_5b81af _public_5b81af
#define public_5b81b2 _public_5b81b2

PROC_DECLARE(0x5b808e, internal_5b808e, public_5b808e);
extern "C" NAKED register_t __cdecl internal_5b808e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_5e74e0 @0x5b8093*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e74e0
/*FIXUP push offset _public_5b8082 @0x5b8098*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b8082
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        xor ebx, ebx
        mov dword ptr ss : [ebp-4], ebx
        push 2
        call dword ptr ds : [public_5c71b8]
        pop ecx
        or dword ptr ds : [public_67ee44], 0xFFFFFFFF
        or dword ptr ds : [public_67ee48], 0xFFFFFFFF
        call dword ptr ds : [public_5c71b4]
        mov ecx, dword ptr ds : [public_67ed74]
        mov dword ptr ds : [eax], ecx
        call dword ptr ds : [public_5c71b0]
        mov ecx, dword ptr ds : [public_67ed70]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [public_5c71ac]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_67ee40], eax
        call public_5b821f
        cmp dword ptr ds : [public_616408], ebx
        jne public_5b8111
/*FIXUP push offset _public_5b821c @0x5b8105*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b821c
        call dword ptr ds : [public_5c71a8]
        pop ecx
        public_5b8111 : nop
        call public_5b820a
/*FIXUP push offset public_6101c4 @0x5b8116*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6101c4
/*FIXUP push offset public_6101c0 @0x5b811b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6101c0
        call public_5b8204
        mov eax, dword ptr ds : [public_67ed6c]
        mov dword ptr ss : [ebp-0x6C], eax
        lea eax, ss:[ebp-0x6C]
        push eax
        push dword ptr ds : [public_67ed68]
        lea eax, ss:[ebp-0x64]
        push eax
        lea eax, ss:[ebp-0x70]
        push eax
        lea eax, ss:[ebp-0x60]
        push eax
        call dword ptr ds : [public_5c71a0]
/*FIXUP push offset public_6101bc @0x5b8149*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6101bc
/*FIXUP push offset public_60f000 @0x5b814e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_60f000
        call public_5b8204
        add esp, 0x24
        mov eax, dword ptr ds : [public_5c719c]
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x74], esi
        cmp byte ptr ds : [esi], 0x22
        jne public_5b81a4
        public_5b816a : nop
        inc esi
        mov dword ptr ss : [ebp-0x74], esi
        mov al, byte ptr ds : [esi]
        cmp al, bl
        je public_5b8178
        cmp al, 0x22
        jne public_5b816a
        public_5b8178 : nop
        cmp byte ptr ds : [esi], 0x22
        jne public_5b8181
        public_5b817d : nop
        inc esi
        mov dword ptr ss : [ebp-0x74], esi
        public_5b8181 : nop
        mov al, byte ptr ds : [esi]
        cmp al, bl
        je public_5b818b
        cmp al, 0x20
        jbe public_5b817d
        public_5b818b : nop
        mov dword ptr ss : [ebp-0x30], ebx
        lea eax, ss:[ebp-0x5C]
        push eax
        call dword ptr ds : [public_5c6ed0]
        test byte ptr ss : [ebp-0x30], 1
        je public_5b81af
        movzx eax, word ptr ss : [ebp-0x2C]
        jmp public_5b81b2
        public_5b81a4 : nop
        cmp byte ptr ds : [esi], 0x20
        jbe public_5b8181
        inc esi
        mov dword ptr ss : [ebp-0x74], esi
        jmp public_5b81a4
        public_5b81af : nop
        push 0xA
        pop eax
        public_5b81b2 : nop
        push eax
        push esi
        push ebx
        push ebx
        call dword ptr ds : [public_5c6f68]
        push eax
        call public_5b2f50
        mov dword ptr ss : [ebp-0x68], eax
        push eax
        call dword ptr ds : [public_5c713c]
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x78], ecx
        push eax
        push ecx
        call public_5b81fe
        pop ecx
        pop ecx
        ret 
        mov esp, dword ptr ss : [ebp-0x18]
        push dword ptr ss : [ebp-0x78]
        call dword ptr ds : [public_5c7194]
        UNREACHABLE_TRAP(0x5b808e)
    }
}

#undef public_5b8111
#undef public_5b816a
#undef public_5b8178
#undef public_5b817d
#undef public_5b8181
#undef public_5b818b
#undef public_5b81a4
#undef public_5b81af
#undef public_5b81b2

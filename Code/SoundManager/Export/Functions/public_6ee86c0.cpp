#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8660);
CLANG_FORWARD_PROC_SYMBOL(public_6ee86a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee86b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee86c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d50);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d56);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d5c);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d62);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d68);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d6e);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d74);

#define public_6ee86d7 _public_6ee86d7
#define public_6ee871f _public_6ee871f
#define public_6ee8748 _public_6ee8748
#define public_6ee8769 _public_6ee8769
#define public_6ee8829 _public_6ee8829
#define public_6ee8858 _public_6ee8858
#define public_6ee888f _public_6ee888f
#define public_6ee88a3 _public_6ee88a3
#define public_6ee88e8 _public_6ee88e8
#define public_6ee890a _public_6ee890a
#define public_6ee890d _public_6ee890d
#define public_6ee8927 _public_6ee8927
#define public_6ee893c _public_6ee893c
#define public_6ee8947 _public_6ee8947

PROC_DECLARE(0x6ee86c0, internal_6ee86c0, public_6ee86c0);
extern "C" NAKED register_t __cdecl internal_6ee86c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6eeaf7c]
        sub esp, 0x74
        push ebx
        push ebp
        xor ebp, ebp
        cmp eax, ebp
        push esi
        push edi
        jne public_6ee86d7
        call public_6ee8660
        public_6ee86d7 : nop
        mov esi, dword ptr ss : [esp+0x88]
        push 0x10000
        xor eax, eax
        mov ecx, 0x15
        lea edi, ss:[esp+0x34]
        rep stosd
        mov ecx, dword ptr ds : [public_6eeaf7c]
        push 0x12
        lea eax, ss:[esp+0x24]
        push eax
        push esi
        push ecx
        xor bl, bl
        mov dword ptr ss : [esp+0x24], ebp
        mov word ptr ss : [esp+0x30], 1
        call public_6ee8d74
        test eax, eax
        je public_6ee871f
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x74
        ret 
        public_6ee871f : nop
        mov eax, dword ptr ds : [public_6eeaf7c]
        push 4
        push ebp
        push ebp
        push ebp
        lea edx, ss:[esp+0x2C]
        push edx
        push esi
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_6ee8d6e
        test eax, eax
        je public_6ee8748
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x74
        ret 
        public_6ee8748 : nop
        movzx eax, word ptr ds : [esi+0xC]
        mov ecx, dword ptr ss : [esp+0x90]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x30], 0x54
        mov dword ptr ss : [esp+0x40], ecx
        jae public_6ee8769
        mov ecx, eax
        mov dword ptr ss : [esp+0x40], ecx
        public_6ee8769 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        lea edx, ss:[esp+0x54]
        push edx
        push ecx
        push eax
        mov dword ptr ss : [esp+0x54], ebp
        mov dword ptr ss : [esp+0x60], ebp
        call public_6ee8d68
        test eax, eax
        jne public_6ee890d
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x8C]
        add eax, 0x2000
        push eax
        mov dword ptr ss : [esp+0x58], ebp
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x40], ecx
        call public_6ee86a0
        add esp, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x4C], eax
        je public_6ee890d
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call public_6ee8d62
        test eax, eax
        jne public_6ee890d
        mov edx, dword ptr ss : [esp+0x10]
        push 0x20
        lea ecx, ss:[esp+0x34]
        push ecx
        push edx
        call public_6ee8d5c
        test eax, eax
        jne public_6ee88e8
        mov ecx, dword ptr ss : [esp+0x54]
        cmp ecx, ebp
        je public_6ee88e8
        mov eax, dword ptr ss : [esp+0x40]
        cmp eax, dword ptr ss : [esp+0x44]
        je public_6ee8829
        mov ecx, dword ptr ds : [public_6ee9008]
/*FIXUP push offset public_6eeaebc @0x6ee8808*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaebc
        push 0x120
/*FIXUP push offset public_6eeadd4 @0x6ee8812*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeadd4
        mov eax, 0x100001
/*FIXUP push offset public_6eea124 @0x6ee881c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea124
        push eax
        call dword ptr ds : [ecx]
        jmp public_6ee890a
        public_6ee8829 : nop
        cmp ecx, dword ptr ss : [esp+0x50]
        jne public_6ee8858
        mov edx, dword ptr ds : [public_6ee9008]
/*FIXUP push offset public_6eeae90 @0x6ee8835*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeae90
        push 0x129
/*FIXUP push offset public_6eeadd4 @0x6ee883f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeadd4
        mov eax, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee8849*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x68]
        add esp, 0x14
        public_6ee8858 : nop
        mov si, word ptr ss : [esp+0x2A]
        movzx edx, word ptr ss : [esp+0x1E]
        mov ebp, dword ptr ss : [esp+0x94]
        xor eax, eax
        mov edi, dword ptr ss : [esp+0x4C]
        mov ax, si
        imul eax, edx
        cdq 
        and edx, 7
        add eax, edx
        sar eax, 3
        test ebp, ebp
        jle public_6ee888f
        mov edx, eax
        imul edx, ebp
        cmp edx, ecx
        jae public_6ee888f
        add edi, edx
        sub ecx, edx
        public_6ee888f : nop
        mov edx, dword ptr ss : [esp+0x98]
        test edx, edx
        jle public_6ee88a3
        imul eax, edx
        cmp ecx, eax
        jbe public_6ee88a3
        mov ecx, eax
        public_6ee88a3 : nop
        mov ax, word ptr ss : [esp+0x1E]
        mov dx, word ptr ss : [esp+0x20]
        mov word ptr ss : [esp+0x14], ax
        shr si, 3
        mov word ptr ss : [esp+0x18], dx
        mov word ptr ss : [esp+0x16], si
        mov eax, dword ptr ss : [esp+0x16]
        imul eax, dword ptr ss : [esp+0x1E]
        push ecx
        mov word ptr ss : [esp+0x1E], ax
        mov eax, dword ptr ss : [esp+0xA0]
        mov edx, dword ptr ds : [eax]
        push edi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx]
        mov bl, al
        xor ebp, ebp
        jmp public_6ee890d
        public_6ee88e8 : nop
        mov edx, dword ptr ds : [public_6ee9008]
/*FIXUP push offset public_6eeae68 @0x6ee88ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeae68
        push 0x119
/*FIXUP push offset public_6eeadd4 @0x6ee88f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeadd4
        mov eax, 0x100001
/*FIXUP push offset public_6eea124 @0x6ee8902*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea124
        push eax
        call dword ptr ds : [edx]
        public_6ee890a : nop
        add esp, 0x14
        public_6ee890d : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        je public_6ee8947
        cmp dword ptr ss : [esp+0x34], ebp
        je public_6ee8927
        push ebp
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        call public_6ee8d56
        public_6ee8927 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, ebp
        je public_6ee893c
        push eax
        call public_6ee86b0
        add esp, 4
        mov dword ptr ss : [esp+0x4C], ebp
        public_6ee893c : nop
        mov edx, dword ptr ss : [esp+0x10]
        push ebp
        push edx
        call public_6ee8d50
        public_6ee8947 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x6ee86c0)
    }
}

#undef public_6ee86d7
#undef public_6ee871f
#undef public_6ee8748
#undef public_6ee8769
#undef public_6ee8829
#undef public_6ee8858
#undef public_6ee888f
#undef public_6ee88a3
#undef public_6ee88e8
#undef public_6ee890a
#undef public_6ee890d
#undef public_6ee8927
#undef public_6ee893c
#undef public_6ee8947

#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6cb20);
CLANG_FORWARD_PROC_SYMBOL(public_6f6cb90);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d280);
CLANG_FORWARD_PROC_SYMBOL(public_6f72380);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f723e2 _public_6f723e2
#define public_6f7244c _public_6f7244c
#define public_6f72459 _public_6f72459
#define public_6f72495 _public_6f72495
#define public_6f7249c _public_6f7249c
#define public_6f724a3 _public_6f724a3
#define public_6f724bd _public_6f724bd
#define public_6f724d0 _public_6f724d0

PROC_DECLARE(0x6f72380, internal_6f72380, public_6f72380);
extern "C" NAKED register_t __cdecl internal_6f72380()
{
    __asm
    {
        sub esp, 0x94
        mov edx, dword ptr ss : [esp+0xB0]
        push edi
        lea eax, ss:[esp+8]
        push eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0xB4]
        push eax
        mov eax, dword ptr ss : [esp+0xB4]
        push edx
        push eax
        push 0x20
        lea edx, ss:[esp+0x2C]
        push edx
        add ecx, 0x48
        push ecx
        call dword ptr ds : [public_6fb3460]
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0xD4]
        add esp, 0x1C
        test eax, eax
        mov dword ptr ss : [esp+4], 0
        jbe public_6f724bd
        push ebx
        mov ebx, dword ptr ss : [esp+0xA4]
        push esi
        lea esi, ss:[esp+0x20]
        public_6f723e2 : nop
        mov ecx, dword ptr ss : [esp+0xB0]
        mov eax, dword ptr ds : [esi]
        cmp eax, dword ptr ds : [ecx]
        je public_6f724a3
        push esi
        call public_6f6d280
        add esp, 4
        test al, al
        jne public_6f724a3
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [public_6fb33a0]
        mov ecx, dword ptr ss : [esp+0xB4]
        mov edx, dword ptr ss : [esp+0xAC]
        push esi
/*FIXUP push offset public_6fbbedc @0x6f72421*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbedc
        push ecx
        push ebx
        push edx
        call public_6f6cb90
        add esp, 0x1C
        test al, al
        je public_6f724a3
        test dword ptr ss : [esp+0x14], 0xC40
        jne public_6f72495
        mov eax, dword ptr ds : [ebx]
        cmp eax, 0xFFFFFFFF
        je public_6f7244c
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6f72459
        public_6f7244c : nop
        mov eax, dword ptr ss : [esp+0xAC]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        public_6f72459 : nop
        lea edx, ss:[esp+0x18]
        push esi
        push edx
        call public_6f6cb20
        add esp, 8
        test al, al
        je public_6f724a3
        test dword ptr ss : [esp+0x14], 0xC40
        jne public_6f72495
        lea eax, ss:[esp+0x1C]
        push eax
        push esi
        call dword ptr ds : [public_6fb3428]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        test eax, eax
        je public_6f724a3
        mov ecx, dword ptr ds : [edi+8]
        push esi
        push 1
        push ecx
        jmp public_6f7249c
        public_6f72495 : nop
        mov edx, dword ptr ds : [edi+8]
        push esi
        push 1
        push edx
        public_6f7249c : nop
        mov ecx, edi
        call public_6f937c0
        public_6f724a3 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        inc eax
        add esi, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        jb public_6f723e2
        pop esi
        pop ebx
        public_6f724bd : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6f724d0
        xor eax, eax
        pop edi
        add esp, 0x94
        ret 0x20
        public_6f724d0 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        pop edi
        add esp, 0x94
        ret 0x20
        UNREACHABLE_TRAP(0x6f72380)
    }
}

#undef public_6f723e2
#undef public_6f7244c
#undef public_6f72459
#undef public_6f72495
#undef public_6f7249c
#undef public_6f724a3
#undef public_6f724bd
#undef public_6f724d0

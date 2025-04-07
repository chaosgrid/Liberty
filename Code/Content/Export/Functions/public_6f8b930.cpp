#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7080);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f86ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f87a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb11e0);

#define public_6f8b977 _public_6f8b977
#define public_6f8b9bc _public_6f8b9bc
#define public_6f8b9c2 _public_6f8b9c2
#define public_6f8b9e4 _public_6f8b9e4
#define public_6f8ba1c _public_6f8ba1c
#define public_6f8ba22 _public_6f8ba22
#define public_6f8ba38 _public_6f8ba38
#define public_6f8ba53 _public_6f8ba53
#define public_6f8ba80 _public_6f8ba80
#define public_6f8ba9b _public_6f8ba9b

PROC_DECLARE(0x6f8b930, internal_6f8b930, public_6f8b930);
extern "C" NAKED register_t __cdecl internal_6f8b930()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb11e0 @0x6f8b932*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb11e0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        push edi
        push 0
        push 2
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x5C]
        push 0
        lea eax, ss:[esp+0x30]
        push eax
        call public_6f87a50
        mov ecx, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        mov ebx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x3C], 0
        je public_6f8b9c2
        public_6f8b977 : nop
        mov edi, dword ptr ds : [esi+8]
        fld dword ptr ds : [edi+0x44]
        fcomp dword ptr ds : [public_6fbc2e8]
        fnstsw ax
        test ah, 0x44
        jnp public_6f8b9bc
        mov ecx, ebx
        call public_6f33f80
        mov ecx, dword ptr ds : [edi+0x4C]
        mov dword ptr ss : [esp+0x44], eax
        call public_6eb7080
        mov ecx, dword ptr ds : [edi+0x44]
        push ecx
        lea edx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6fb33f4]
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 0xC
        public_6f8b9bc : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ecx
        jne public_6f8b977
        public_6f8b9c2 : nop
        push 0
        push 2
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x58]
        call public_6f86ae0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        mov byte ptr ss : [esp+0x3C], 1
        je public_6f8ba22
        public_6f8b9e4 : nop
        mov edi, dword ptr ds : [esi+8]
        fld dword ptr ds : [edi+0x44]
        fcomp dword ptr ds : [public_6fbc2e8]
        fnstsw ax
        test ah, 0x44
        jnp public_6f8ba1c
        mov ecx, ebx
        call public_6f33f80
        mov edx, dword ptr ds : [edi+0x44]
        mov dword ptr ss : [esp+0x44], eax
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        add edi, 0x64
        push edi
        call dword ptr ds : [public_6fb33f4]
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        public_6f8ba1c : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ecx
        jne public_6f8b9e4
        public_6f8ba22 : nop
        mov ebx, offset public_6fbc7cc
        mov dword ptr ss : [esp+0x14], ebx
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        mov byte ptr ss : [esp+0x3C], 0
        mov edi, ecx
        je public_6f8ba53
        public_6f8ba38 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6ecfe80
        cmp esi, edi
        jne public_6f8ba38
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6f8ba53 : nop
        push ecx
        call public_6fa8fe0
        xor eax, eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x28], ebx
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        mov edi, eax
        je public_6f8ba9b
        mov edi, edi
        public_6f8ba80 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x48]
        push edx
        lea ecx, ss:[esp+0x30]
        call public_6ecfe80
        cmp esi, edi
        jne public_6f8ba80
        mov eax, dword ptr ss : [esp+0x2C]
        public_6f8ba9b : nop
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x6f8b930)
    }
}

#undef public_6f8b977
#undef public_6f8b9bc
#undef public_6f8b9c2
#undef public_6f8b9e4
#undef public_6f8ba1c
#undef public_6f8ba22
#undef public_6f8ba38
#undef public_6f8ba53
#undef public_6f8ba80
#undef public_6f8ba9b

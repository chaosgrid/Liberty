#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1de0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee4900);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7510);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7580);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7590);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee1e35 _public_6ee1e35
#define public_6ee1e47 _public_6ee1e47
#define public_6ee1e5c _public_6ee1e5c
#define public_6ee1e82 _public_6ee1e82
#define public_6ee1e93 _public_6ee1e93
#define public_6ee1e9f _public_6ee1e9f
#define public_6ee1eb5 _public_6ee1eb5
#define public_6ee1ed9 _public_6ee1ed9
#define public_6ee1efd _public_6ee1efd
#define public_6ee1f06 _public_6ee1f06
#define public_6ee1f20 _public_6ee1f20
#define public_6ee1f31 _public_6ee1f31
#define public_6ee1f3d _public_6ee1f3d
#define public_6ee1f90 _public_6ee1f90
#define public_6ee1fa1 _public_6ee1fa1
#define public_6ee1fad _public_6ee1fad

PROC_DECLARE(0x6ee1de0, internal_6ee1de0, public_6ee1de0);
extern "C" NAKED register_t __cdecl internal_6ee1de0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        push ebp
        mov dword ptr ss : [ebp], offset public_6ee9278
        mov dword ptr ss : [ebp+4], offset public_6ee9264
        mov dword ptr ss : [ebp+8], offset public_6ee9254
        call public_6ee4900
/*FIXUP push offset public_6eeaf0c @0x6ee1e04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9024]
        mov eax, dword ptr ds : [public_6eeaf70]
        push eax
        call dword ptr ds : [public_6ee9034]
        mov eax, dword ptr ss : [ebp+0x134]
        test eax, eax
        je public_6ee1e35
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+0x134], 0
        public_6ee1e35 : nop
        mov ebx, dword ptr ss : [ebp+0x11C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x118]
        je public_6ee1e5c
        public_6ee1e47 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        call public_6ee7590
        cmp esi, ebx
        jne public_6ee1e47
        public_6ee1e5c : nop
        mov eax, dword ptr ds : [edi+4]
        push 1
        push eax
        mov ecx, edi
        call public_6ee7d10
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        dec dword ptr ds : [public_6eeaf40]
        jne public_6ee1e9f
        mov eax, dword ptr ds : [public_6eeaf3c]
        cmp eax, ebx
        je public_6ee1e93
        public_6ee1e82 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6ee8ddc
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_6ee1e82
        public_6ee1e93 : nop
        mov dword ptr ds : [public_6eeaf3c], ebx
        mov dword ptr ds : [public_6eeaf48], ebx
        public_6ee1e9f : nop
        mov edi, dword ptr ss : [ebp+0x110]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        lea esi, ss:[ebp+0x10C]
        mov dword ptr ss : [esp+0x10], eax
        je public_6ee1ed9
        public_6ee1eb5 : nop
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6ee7580
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6ee7510
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6ee1eb5
        public_6ee1ed9 : nop
        cmp dword ptr ds : [public_6eeaf58], 0x7FFFFFFF
        mov eax, dword ptr ds : [esi+4]
        jge public_6ee1efd
        mov ecx, dword ptr ds : [public_6eeaf4c]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_6eeaf4c], eax
        inc dword ptr ds : [public_6eeaf58]
        jmp public_6ee1f06
        public_6ee1efd : nop
        push eax
        call public_6ee8ddc
        add esp, 4
        public_6ee1f06 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        dec dword ptr ds : [public_6eeaf50]
        jne public_6ee1f3d
        mov eax, dword ptr ds : [public_6eeaf4c]
        cmp eax, ebx
        je public_6ee1f31
        lea ecx, ds:[ecx]
        public_6ee1f20 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6ee8ddc
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_6ee1f20
        public_6ee1f31 : nop
        mov dword ptr ds : [public_6eeaf4c], ebx
        mov dword ptr ds : [public_6eeaf58], ebx
        public_6ee1f3d : nop
        mov eax, dword ptr ss : [ebp+0xFC]
        mov ecx, dword ptr ds : [eax]
        lea esi, ss:[ebp+0xF8]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6ee7ad0
        mov eax, dword ptr ds : [esi+4]
        push 1
        push eax
        mov ecx, esi
        call public_6ee7cd0
        mov ecx, dword ptr ds : [esi+8]
        push 1
        push ecx
        mov ecx, esi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6ee7cd0
        mov dword ptr ds : [esi+8], ebx
        dec dword ptr ds : [public_6eeaf30]
        jne public_6ee1fad
        mov eax, dword ptr ds : [public_6eeaf2c]
        cmp eax, ebx
        je public_6ee1fa1
        lea ecx, ds:[ecx]
        public_6ee1f90 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6ee8ddc
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_6ee1f90
        public_6ee1fa1 : nop
        mov dword ptr ds : [public_6eeaf2c], ebx
        mov dword ptr ds : [public_6eeaf38], ebx
        public_6ee1fad : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ee1de0)
    }
}

#undef public_6ee1e35
#undef public_6ee1e47
#undef public_6ee1e5c
#undef public_6ee1e82
#undef public_6ee1e93
#undef public_6ee1e9f
#undef public_6ee1eb5
#undef public_6ee1ed9
#undef public_6ee1efd
#undef public_6ee1f06
#undef public_6ee1f20
#undef public_6ee1f31
#undef public_6ee1f3d
#undef public_6ee1f90
#undef public_6ee1fa1
#undef public_6ee1fad

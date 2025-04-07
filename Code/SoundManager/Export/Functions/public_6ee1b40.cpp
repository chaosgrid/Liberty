#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1b40);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7620);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7d50);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7d80);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee1b87 _public_6ee1b87
#define public_6ee1b98 _public_6ee1b98
#define public_6ee1ba4 _public_6ee1ba4
#define public_6ee1be0 _public_6ee1be0
#define public_6ee1bf1 _public_6ee1bf1
#define public_6ee1bfd _public_6ee1bfd
#define public_6ee1c37 _public_6ee1c37
#define public_6ee1c48 _public_6ee1c48
#define public_6ee1c54 _public_6ee1c54

PROC_DECLARE(0x6ee1b40, internal_6ee1b40, public_6ee1b40);
extern "C" NAKED register_t __cdecl internal_6ee1b40()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6ee9368
        mov dword ptr ds : [esi+4], offset public_6ee9358
        mov eax, dword ptr ds : [public_6eeaf30]
        inc eax
        push edi
        mov dword ptr ds : [public_6eeaf30], eax
        lea eax, ss:[esp+0xE]
        push eax
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0x17]
        push ecx
        lea ecx, ds:[esi+0xF8]
        call public_6ee7620
        dec dword ptr ds : [public_6eeaf30]
        jne public_6ee1ba4
        mov eax, dword ptr ds : [public_6eeaf2c]
        cmp eax, ebx
        je public_6ee1b98
        public_6ee1b87 : nop
        mov edi, dword ptr ds : [eax]
        push eax
        call public_6ee8ddc
        add esp, 4
        cmp edi, ebx
        mov eax, edi
        jne public_6ee1b87
        public_6ee1b98 : nop
        mov dword ptr ds : [public_6eeaf2c], ebx
        mov dword ptr ds : [public_6eeaf38], ebx
        public_6ee1ba4 : nop
        mov edx, dword ptr ds : [public_6eeaf50]
        lea edi, ds:[esi+0x10C]
        add edx, 2
        push 0xC
        mov ecx, edi
        mov dword ptr ds : [public_6eeaf50], edx
        call public_6ee7d80
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        dec dword ptr ds : [public_6eeaf50]
        jne public_6ee1bfd
        mov eax, dword ptr ds : [public_6eeaf4c]
        cmp eax, ebx
        je public_6ee1bf1
        mov edi, edi
        public_6ee1be0 : nop
        mov edi, dword ptr ds : [eax]
        push eax
        call public_6ee8ddc
        add esp, 4
        cmp edi, ebx
        mov eax, edi
        jne public_6ee1be0
        public_6ee1bf1 : nop
        mov dword ptr ds : [public_6eeaf4c], ebx
        mov dword ptr ds : [public_6eeaf58], ebx
        public_6ee1bfd : nop
        mov edx, dword ptr ds : [public_6eeaf40]
        lea edi, ds:[esi+0x118]
        add edx, 2
        push 0x60
        mov ecx, edi
        mov dword ptr ds : [public_6eeaf40], edx
        call public_6ee7d50
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        dec dword ptr ds : [public_6eeaf40]
        jne public_6ee1c54
        mov eax, dword ptr ds : [public_6eeaf3c]
        cmp eax, ebx
        je public_6ee1c48
        public_6ee1c37 : nop
        mov edi, dword ptr ds : [eax]
        push eax
        call public_6ee8ddc
        add esp, 4
        cmp edi, ebx
        mov eax, edi
        jne public_6ee1c37
        public_6ee1c48 : nop
        mov dword ptr ds : [public_6eeaf3c], ebx
        mov dword ptr ds : [public_6eeaf48], ebx
        public_6ee1c54 : nop
        mov dword ptr ds : [esi+0x134], ebx
/*FIXUP push offset public_6eeaf0c @0x6ee1c5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        mov byte ptr ds : [esi+0x138], bl
        mov dword ptr ds : [esi], offset public_6ee9278
        mov dword ptr ds : [esi+4], offset public_6ee9264
        mov dword ptr ds : [esi+8], offset public_6ee9254
        call dword ptr ds : [public_6ee9028]
        mov byte ptr ds : [esi+0xC], bl
        xor eax, eax
        mov ecx, 0xA
        lea edi, ds:[esi+0xD]
        rep stosd
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x78], ebx
        lea eax, ds:[esi+0x68]
        mov ecx, ebx
        mov edx, eax
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [edx+0xC], ecx
        mov ecx, dword ptr ds : [public_6ee95e4]
        lea edx, ds:[esi+0x7C]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [public_6ee95e8]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [public_6ee95ec]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [public_6ee95f0]
        mov dword ptr ds : [edx+0xC], ecx
        mov dword ptr ds : [esi+0x8C], 0x113
        mov dword ptr ds : [esi+0x90], ebx
        mov dword ptr ds : [esi+0x94], ebx
        mov dword ptr ds : [esi+0x98], 0x5622
        mov dword ptr ds : [esi+0x9C], 2
        mov dword ptr ds : [esi+0xA0], 0x10
        mov ecx, 0x3F800000
        mov edx, 1
        mov dword ptr ds : [esi+0xA4], edx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xB0], ecx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB8], ecx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ds : [esi+0xCC], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xE0], ebx
        push ebx
        push ebx
        push ebx
        push ebx
        mov dword ptr ds : [esi+0xE4], ecx
        mov dword ptr ds : [esi+0xE8], ecx
        mov dword ptr ds : [esi+0xEC], ecx
        mov dword ptr ds : [esi+0xF0], 0x461C4000
        mov dword ptr ds : [esi+0x12C], ebx
        mov dword ptr ds : [esi+0x130], ebx
        mov dword ptr ds : [esi+0x128], ebx
        mov dword ptr ds : [esi+0x124], edx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        call dword ptr ds : [public_6ee903c]
        mov dword ptr ds : [public_6eeaf70], eax
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ee1b40)
    }
}

#undef public_6ee1b87
#undef public_6ee1b98
#undef public_6ee1ba4
#undef public_6ee1be0
#undef public_6ee1bf1
#undef public_6ee1bfd
#undef public_6ee1c37
#undef public_6ee1c48
#undef public_6ee1c54

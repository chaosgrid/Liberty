#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6d1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d220);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d400);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d5d0);

#define public_6ec5ebb _public_6ec5ebb
#define public_6ec5eed _public_6ec5eed
#define public_6ec5f36 _public_6ec5f36
#define public_6ec5f65 _public_6ec5f65

PROC_DECLARE(0x6ec5e60, internal_6ec5e60, public_6ec5e60);
extern "C" NAKED register_t __cdecl internal_6ec5e60()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov ebx, ecx
        lea eax, ds:[ebx+0x44]
        push edi
        push eax
        call dword ptr ds : [public_6fb3684]
        mov dword ptr ss : [esp+0x10], eax
        add esp, 4
        lea eax, ds:[ebx+0x10]
        mov edi, offset public_6fb4708
        mov esi, eax
        mov ecx, 7
        xor edx, edx
        repe cmpsb
        jne public_6ec5eed
        mov eax, dword ptr ds : [ebx+4]
        mov ebx, dword ptr ds : [ebx+0x74]
        cmp ebx, 1
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6ec5ebb
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call public_6f6d400
        add esp, 8
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 
        public_6ec5ebb : nop
        test ebx, ebx
        jne public_6ec5f65
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call public_6f6d5d0
        lea eax, ss:[esp+0x14]
        push eax
/*FIXUP push offset public_6fb4654 @0x6ec5ed7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4654
        call public_6f6d5d0
        add esp, 0x10
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 
        public_6ec5eed : nop
        mov edi, offset public_6fb5b1c
        mov esi, eax
        mov ecx, 9
        xor edx, edx
        repe cmpsb
        jne public_6ec5f65
        mov eax, dword ptr ds : [ebx+4]
        mov ebx, dword ptr ds : [ebx+0x74]
        cmp ebx, 1
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6ec5f36
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call public_6f6d400
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_6f6d1c0
        add esp, 0xC
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 
        public_6ec5f36 : nop
        test ebx, ebx
        jne public_6ec5f65
        lea edx, ss:[esp+0xC]
        push edx
        call public_6f6d220
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6f6d5d0
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_6fb4654 @0x6ec5f58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4654
        call public_6f6d5d0
        add esp, 0x14
        public_6ec5f65 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ec5e60)
    }
}

#undef public_6ec5ebb
#undef public_6ec5eed
#undef public_6ec5f36
#undef public_6ec5f65

#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef0600);
CLANG_FORWARD_PROC_SYMBOL(public_6ef09c0);

#define public_6ef0b46 _public_6ef0b46
#define public_6ef0b67 _public_6ef0b67
#define public_6ef0b86 _public_6ef0b86
#define public_6ef0b96 _public_6ef0b96
#define public_6ef0ba9 _public_6ef0ba9
#define public_6ef0bb5 _public_6ef0bb5

PROC_DECLARE(0x6ef0b00, internal_6ef0b00, public_6ef0b00);
extern "C" NAKED register_t __cdecl internal_6ef0b00()
{
    __asm
    {
        sub esp, 0xC0C
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC18]
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], edi
        xor bl, bl
        call dword ptr ds : [public_6fb302c]
        mov ecx, esi
        call dword ptr ds : [public_6fb3028]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        je public_6ef0b46
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [edi], 0
        public_6ef0b46 : nop
        push edi
        call public_6ef0600
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0xC28]
        mov dword ptr ds : [eax+0xC], ecx
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6ef0bb5
/*FIXUP public_6ef0b67 : nop
        push offset public_6fb780c @0x6ef0b67*/
  FIXUP public_6ef0b67 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb780c
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6ef0ba9
        mov ebx, dword ptr ds : [public_6fb3018]
        mov ecx, esi
        call ebx
        test al, al
        je public_6ef0b96
        public_6ef0b86 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+8]
        mov ecx, esi
        call ebx
        test al, al
        jne public_6ef0b86
        public_6ef0b96 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        push 1
        call public_6ef09c0
        mov ebx, eax
        neg ebx
        sbb bl, bl
        inc bl
        public_6ef0ba9 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6ef0b67
        public_6ef0bb5 : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6fb3010]
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ss : [esp+0xC20]
        pop edi
        pop esi
        mov al, bl
        mov dword ptr ds : [edx], ecx
        pop ebx
        add esp, 0xC0C
        ret 0xC
        UNREACHABLE_TRAP(0x6ef0b00)
    }
}

#undef public_6ef0b46
#undef public_6ef0b67
#undef public_6ef0b86
#undef public_6ef0b96
#undef public_6ef0ba9
#undef public_6ef0bb5

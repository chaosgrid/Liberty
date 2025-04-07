#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_62a06c0);
CLANG_FORWARD_PROC_SYMBOL(public_62a15f0);

#define public_62c0af4 _public_62c0af4
#define public_62c0b17 _public_62c0b17
#define public_62c0b32 _public_62c0b32
#define public_62c0b5d _public_62c0b5d
#define public_62c0b62 _public_62c0b62

PROC_DECLARE(0x62c0aa0, internal_62c0aa0, public_62c0aa0);
extern "C" NAKED register_t __cdecl internal_62c0aa0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr ds : [ecx+0x10]
        test ebx, ebx
        mov eax, 0xFFFFFFFD
        je public_62c0b62
        mov ecx, dword ptr ds : [ebx+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62c0b62
        push ebp
        push esi
        push edi
        push 0x1FE0
        lea ecx, ss:[esp+0x1C]
        call public_629b990
        lea edx, ss:[esp+0x18]
        lea edi, ds:[ebx+0xE4]
        push edx
        mov ecx, edi
        call public_629b430
        test eax, eax
        mov esi, dword ptr ss : [esp+0x2C]
        je public_62c0b17
        public_62c0af4 : nop
        mov ecx, dword ptr ds : [eax+0x14]
        movzx eax, word ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi]
        push ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx]
        test al, al
        je public_62c0b17
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_629b430
        test eax, eax
        jne public_62c0af4
        public_62c0b17 : nop
        lea ecx, ss:[esp+0x10]
        add ebx, 0x144
        push ecx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x14], 1
        call public_62a15f0
        test eax, eax
        je public_62c0b5d
        public_62c0b32 : nop
        mov edx, dword ptr ds : [eax+4]
        mov di, word ptr ds : [edx+4]
        mov ebp, dword ptr ds : [esi]
        mov ecx, eax
        call public_62a06c0
        push eax
        push edi
        mov ecx, esi
        call dword ptr ss : [ebp+4]
        test al, al
        je public_62c0b5d
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebx
        call public_62a15f0
        test eax, eax
        jne public_62c0b32
        public_62c0b5d : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        public_62c0b62 : nop
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62c0aa0)
    }
}

#undef public_62c0af4
#undef public_62c0b17
#undef public_62c0b32
#undef public_62c0b5d
#undef public_62c0b62

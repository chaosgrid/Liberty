#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f5f0);

#define public_51b40c _public_51b40c
#define public_51b431 _public_51b431
#define public_51b43d _public_51b43d

PROC_DECLARE(0x51b3f0, internal_51b3f0, public_51b3f0);
extern "C" NAKED register_t __cdecl internal_51b3f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push eax
        push esi
        mov edi, ecx
        call public_40f5f0
        test al, al
        jne public_51b40c
        pop edi
        pop esi
        ret 8
        public_51b40c : nop
        push ebx
        mov ebx, dword ptr ds : [public_5c6d24]
/*FIXUP push offset public_5c89ac @0x51b413*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c89ac
        push esi
        call ebx
        add esp, 8
        test eax, eax
        je public_51b431
/*FIXUP push offset public_5c89a4 @0x51b422*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c89a4
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_51b43d
        public_51b431 : nop
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+0x18]
        fstp dword ptr ds : [edi+0xC8]
        public_51b43d : nop
        pop ebx
        pop edi
        mov al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x51b3f0)
    }
}

#undef public_51b40c
#undef public_51b431
#undef public_51b43d

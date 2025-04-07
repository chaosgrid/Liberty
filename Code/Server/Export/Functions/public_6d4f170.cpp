#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f170);

#define public_6d4f18f _public_6d4f18f
#define public_6d4f1f1 _public_6d4f1f1
#define public_6d4f227 _public_6d4f227

PROC_DECLARE(0x6d4f170, internal_6d4f170, public_6d4f170);
extern "C" NAKED register_t __cdecl internal_6d4f170()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d4f18f
        mov dl, byte ptr ds : [edi+0x64]
        test dl, dl
        setne al
        test al, al
        je public_6d4f227
        public_6d4f18f : nop
        mov ebx, dword ptr ss : [esp+0x10]
        push ebx
        lea ecx, ds:[edi+0x278]
        call dword ptr ds : [public_6d64944]
        mov esi, eax
        test esi, esi
        je public_6d4f1f1
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d64258]
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d645ac]
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d64708]
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d64704]
        add edi, 0x348
        push edi
        push 0
        call public_6d43650
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 0x18
        public_6d4f1f1 : nop
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi+0x348]
        xor ecx, ecx
        sub esp, 8
        mov cx, bx
        fstp qword ptr ss : [esp]
        mov eax, 0x100001
        push ecx
        push edx
        push 0xDD7
/*FIXUP push offset public_6d6b280 @0x6d4f212*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b280
/*FIXUP push offset public_6d6b738 @0x6d4f217*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b738
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x20
        public_6d4f227 : nop
        pop edi
        pop esi
        pop ebx
        ret 0x18
        UNREACHABLE_TRAP(0x6d4f170)
    }
}

#undef public_6d4f18f
#undef public_6d4f1f1
#undef public_6d4f227

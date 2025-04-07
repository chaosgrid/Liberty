#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f260);

#define public_6d4f2a5 _public_6d4f2a5
#define public_6d4f2d1 _public_6d4f2d1
#define public_6d4f2f0 _public_6d4f2f0
#define public_6d4f315 _public_6d4f315

PROC_DECLARE(0x6d4f260, internal_6d4f260, public_6d4f260);
extern "C" NAKED register_t __cdecl internal_6d4f260()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ebx
        lea edi, ds:[esi+0x278]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d64404]
        test eax, eax
        je public_6d4f2f0
        mov dx, word ptr ds : [eax+2]
        mov word ptr ss : [esp+0x18], dx
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d4f2a5
        mov dl, byte ptr ds : [esi+0x64]
        test dl, dl
        setne al
        test al, al
        je public_6d4f315
        public_6d4f2a5 : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push ebx
        push ebp
        mov ecx, edi
        call dword ptr ds : [public_6d64400]
        mov cl, byte ptr ss : [esp+0x20]
        test cl, cl
        je public_6d4f2d1
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebp
        push eax
        mov eax, dword ptr ds : [esi+0x348]
        push eax
        call dword ptr ds : [edx+0x6C]
        public_6d4f2d1 : nop
        add esi, 0x348
        push esi
        push 0
        call public_6d43650
        add esp, 8
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret 0x10
        lea esp, ss:[esp]
        public_6d4f2f0 : nop
        mov ecx, dword ptr ds : [public_6d64a44]
/*FIXUP push offset public_6d6b7c0 @0x6d4f2f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b7c0
        push 0xDEA
/*FIXUP push offset public_6d6b280 @0x6d4f300*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b280
        mov eax, 0x100002
/*FIXUP push offset public_6d65494 @0x6d4f30a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65494
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d4f315 : nop
        pop edi
        pop esi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6d4f260)
    }
}

#undef public_6d4f2a5
#undef public_6d4f2d1
#undef public_6d4f2f0
#undef public_6d4f315

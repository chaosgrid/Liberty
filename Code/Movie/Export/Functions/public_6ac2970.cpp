#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac2870);
CLANG_FORWARD_PROC_SYMBOL(public_6ac2970);
CLANG_FORWARD_PROC_SYMBOL(public_6ac32b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3d40);
CLANG_FORWARD_PROC_SYMBOL(public_6ac54d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac5d70);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8010);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8200);

#define public_6ac2a52 _public_6ac2a52
#define public_6ac2a54 _public_6ac2a54
#define public_6ac2aa2 _public_6ac2aa2
#define public_6ac2aad _public_6ac2aad
#define public_6ac2ad2 _public_6ac2ad2

PROC_DECLARE(0x6ac2970, internal_6ac2970, public_6ac2970);
extern "C" NAKED register_t __cdecl internal_6ac2970()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        test ebx, ebx
        je public_6ac2ad2
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        je public_6ac2ad2
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_6ac2ad2
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        je public_6ac2ad2
        mov ecx, dword ptr ss : [esp+0x20]
        test ecx, ecx
        je public_6ac2ad2
        mov ecx, dword ptr ss : [esp+0x24]
        test ecx, ecx
        je public_6ac2ad2
        mov ecx, dword ptr ss : [esp+0x28]
        test ecx, ecx
        je public_6ac2ad2
        mov ecx, 5
        mov edi, ebx
        rep movsd
        lea edi, ds:[ebx+0x64]
        mov ecx, 5
        mov esi, eax
        mov dword ptr ss : [esp+0x10], edi
        rep movsd
        lea edi, ds:[ebx+0x78]
        push ebp
        push edi
        push 1
        push 5
        push ebx
        call public_6ac3d40
        mov esi, eax
        lea ebp, ds:[ebx+0x14]
        mov eax, dword ptr ss : [esp+0x20]
        push edi
        neg esi
        push ebp
        push 5
        sbb esi, esi
        push eax
        neg esi
        call public_6ac2870
        lea eax, ds:[ebx+0x28]
        push edi
        mov ecx, dword ptr ss : [esp+0x28]
        push eax
        push 5
        push ecx
        call public_6ac2870
        test esi, esi
        je public_6ac2a52
        lea esi, ds:[ebx+0x37DC]
        lea edx, ds:[ebx+0x12BC]
        push esi
        push edx
        push edi
        call public_6ac32b0
        test eax, eax
        je public_6ac2a52
        lea eax, ds:[ebx+0x35D8]
        push eax
        lea eax, ds:[ebx+0x28]
        push esi
        push eax
        push ebp
        call public_6ac8200
        test eax, eax
        je public_6ac2a52
        mov ebp, 1
        jmp public_6ac2a54
        public_6ac2a52 : nop
        xor ebp, ebp
        public_6ac2a54 : nop
        lea esi, ds:[ebx+0x3C]
        push edi
        push esi
        push 5
/*FIXUP push offset public_6ada7d8 @0x6ac2a5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada7d8
        call public_6ac2870
        lea ecx, ds:[ebx+0x50]
        push edi
        push ecx
        push 5
/*FIXUP push offset public_6ada7ec @0x6ac2a6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada7ec
        call public_6ac2870
        test ebp, ebp
        pop ebp
        je public_6ac2aa2
        lea edi, ds:[ebx+0x35D8]
        push edi
        push esi
        call public_6ac8010
        test eax, eax
        je public_6ac2aa2
        lea edx, ds:[ebx+0x3A14]
        push edi
        push edx
        push 0x3C
        push 4
        push esi
        call public_6ac5d70
        test eax, eax
        jne public_6ac2aad
        public_6ac2aa2 : nop
        pop edi
        pop esi
        mov eax, 0x80004005
        pop ebx
        ret 0x1C
        public_6ac2aad : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0x3A08], 5
        add ebx, 0x3A0C
        push ebx
        push 5
        push eax
        call public_6ac54d0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x1C
        public_6ac2ad2 : nop
        pop edi
        pop esi
        mov eax, 0x80070057
        pop ebx
        ret 0x1C
        UNREACHABLE_TRAP(0x6ac2970)
    }
}

#undef public_6ac2a52
#undef public_6ac2a54
#undef public_6ac2aa2
#undef public_6ac2aad
#undef public_6ac2ad2

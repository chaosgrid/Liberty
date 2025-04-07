#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d37d0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3930);
CLANG_FORWARD_PROC_SYMBOL(public_65d39a0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3a80);
CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d3b90);
CLANG_FORWARD_PROC_SYMBOL(public_65d3cf0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3d00);
CLANG_FORWARD_PROC_SYMBOL(public_65d3d50);
CLANG_FORWARD_PROC_SYMBOL(public_65d3e10);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_JUMP_SYMBOL(public_65dfff0);

#define public_65d33bc _public_65d33bc
#define public_65d34ad _public_65d34ad
#define public_65d34d0 _public_65d34d0
#define public_65d34d9 _public_65d34d9
#define public_65d353b _public_65d353b
#define public_65d35a9 _public_65d35a9

PROC_DECLARE(0x65d3380, internal_65d3380, public_65d3380);
extern "C" NAKED register_t __cdecl internal_65d3380()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_65dfff0 @0x65d3388*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65dfff0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x68]
        xor ebx, ebx
        cmp esi, ebx
        jne public_65d33bc
        pop esi
        mov eax, 0xFFFFFFF9
        pop ebx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 0xC
        public_65d33bc : nop
        mov al, byte ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x64]
        push ebp
        push edi
        mov byte ptr ss : [esp+0x18], al
        mov edi, edx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov dword ptr ss : [esp+0x1C], ebx
        push ecx
        push edx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        call public_65d3d50
        mov cl, byte ptr ss : [esp+0x70]
        push ebx
        mov byte ptr ss : [esp+0x2C], cl
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x64], ebx
        call public_65d3b40
        lea edx, ss:[esp+0x18]
        lea ecx, ss:[esp+0x38]
        push edx
        mov byte ptr ss : [esp+0x64], 1
        call public_65d37d0
        lea eax, ss:[esp+0x28]
        lea ecx, ss:[esp+0x48]
        push eax
        mov byte ptr ss : [esp+0x64], 2
        call public_65d37d0
        mov ebp, dword ptr ss : [esp+0x68]
        lea edx, ss:[esp+0x38]
        lea eax, ss:[esp+0x10]
        push edx
        lea ecx, ss:[ebp+4]
        push eax
        mov byte ptr ss : [esp+0x68], 3
        call public_65d3b90
        mov ebx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x60], 1
        call public_65d3930
        push 1
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x64], 0
        call public_65d3b40
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add ebx, 0x1C
        repne scasb
        not ecx
        dec ecx
        push 1
        mov edi, ecx
        mov ecx, ebx
        push edi
        mov dword ptr ss : [esp+0x74], edi
        call public_65d3e10
        test al, al
        je public_65d34ad
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x70]
        mov ecx, edi
        mov edi, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        mov eax, edx
        and ecx, 3
        rep movsb
        mov dword ptr ds : [ebx+8], eax
        mov ebx, dword ptr ds : [ebx+4]
        add ebx, eax
        mov byte ptr ds : [ebx], 0
        public_65d34ad : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        test eax, eax
        je public_65d34d9
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_65d34d0
        cmp cl, 0xFF
        je public_65d34d0
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_65d34d9
        public_65d34d0 : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d34d9 : nop
        mov edi, offset public_65e31d8
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea esi, ss:[ebp+0x34]
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_65e31d8 @0x65d34ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e31d8
        mov ecx, esi
        call public_65d3d50
        lea ebx, ss:[ebp+0x24]
        push 0xFFFFFFFF
        push 0
        push ebx
        mov ecx, esi
        call public_65d39a0
        mov edi, offset public_65e31d4
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_65e31d4 @0x65d3517*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e31d4
        mov ecx, esi
        call public_65d3a80
        lea eax, ss:[esp+0x70]
        lea ecx, ss:[ebp+4]
        push eax
        call public_65d3cf0
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x70]
        cmp eax, ecx
        je public_65d35a9
        public_65d353b : nop
        push 0xFFFFFFFF
        add eax, 0xC
        push 0
        push eax
        mov ecx, esi
        call public_65d39a0
        mov edi, offset public_65e31d0
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_65e31d0 @0x65d355a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e31d0
        mov ecx, esi
        call public_65d3a80
        push 0xFFFFFFFF
        push 0
        mov ecx, dword ptr ss : [esp+0x78]
        add ecx, 0x1C
        push ecx
        mov ecx, esi
        call public_65d39a0
        mov edi, offset public_65e31cc
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_65e31cc @0x65d3589*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e31cc
        mov ecx, esi
        call public_65d3a80
        lea ecx, ss:[esp+0x70]
        call public_65d3d00
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [ebp+8]
        cmp eax, ecx
        jne public_65d353b
        public_65d35a9 : nop
        mov edi, offset public_65e31c8
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_65e31c8 @0x65d35b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e31c8
        mov ecx, esi
        call public_65d3a80
        mov edi, offset public_65e31c4
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add ebp, 0x44
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_65e31c4 @0x65d35d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e31c4
        mov ecx, ebp
        call public_65d3d50
        push 0xFFFFFFFF
        push 0
        push ebx
        mov ecx, ebp
        call public_65d39a0
        mov edi, offset public_65e31c8
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_65e31c8 @0x65d3600*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e31c8
        mov ecx, ebp
        call public_65d3a80
        pop edi
        pop ebp
        mov ecx, dword ptr ss : [esp+0x50]
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 0xC
        UNREACHABLE_TRAP(0x65d3380)
    }
}

#undef public_65d33bc
#undef public_65d34ad
#undef public_65d34d0
#undef public_65d34d9
#undef public_65d353b
#undef public_65d35a9

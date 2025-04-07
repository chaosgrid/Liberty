#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed5590);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e020);

#define public_6ed55d3 _public_6ed55d3
#define public_6ed55ee _public_6ed55ee
#define public_6ed5612 _public_6ed5612
#define public_6ed5659 _public_6ed5659
#define public_6ed568c _public_6ed568c
#define public_6ed56e4 _public_6ed56e4
#define public_6ed5712 _public_6ed5712
#define public_6ed5717 _public_6ed5717

PROC_DECLARE(0x6ed5590, internal_6ed5590, public_6ed5590);
extern "C" NAKED register_t __cdecl internal_6ed5590()
{
    __asm
    {
        push ecx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb445c @0x6ed559e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        mov byte ptr ss : [esp+0x13], 1
        call edi
        test al, al
        mov ecx, esi
        je public_6ed5612
        call dword ptr ds : [public_6fb3054]
        mov ebp, dword ptr ss : [esp+0x18]
        mov esi, eax
        xor eax, eax
        cmp esi, eax
        jne public_6ed55d3
        pop edi
        mov dword ptr ss : [ebp+0x50], eax
        mov byte ptr ss : [ebp+0x54], al
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 
        public_6ed55d3 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x54]
        jb public_6ed55ee
        mov eax, 0x2F
        public_6ed55ee : nop
        push ebx
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        pop ebx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x50], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 
/*FIXUP public_6ed5612 : nop
        push offset public_6fb45f8 @0x6ed5612*/
  FIXUP public_6ed5612 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45f8
        call edi
        test al, al
        je public_6ed5659
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi+0x4C]
        test eax, eax
        jne public_6ed5717
        mov ecx, esi
        call dword ptr ds : [public_6fb3054]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [public_6fb36a8]
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_6eac0c0
        add esp, 0xC
        mov dword ptr ds : [edi+0x4C], eax
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 
/*FIXUP public_6ed5659 : nop
        push offset public_6fb6194 @0x6ed5659*/
  FIXUP public_6ed5659 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6194
        mov ecx, esi
        call edi
        test al, al
        je public_6ed568c
        mov ecx, esi
        call dword ptr ds : [public_6fb3054]
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        add edx, 0x46C
        push edx
        call dword ptr ds : [public_6fb361c]
        mov al, byte ptr ss : [esp+0x17]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 
        public_6ed568c : nop
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        push esi
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6ed5717
/*FIXUP push offset public_6fb618c @0x6ed569d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb618c
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6ed56e4
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        lea ecx, ss:[ebp+0x90]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x24], eax
        call public_6f3e020
        add esp, 0xC
        cmp al, 1
        jne public_6ed5717
        pop edi
        mov byte ptr ss : [ebp+0x468], al
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 
/*FIXUP public_6ed56e4 : nop
        push offset public_6fb6180 @0x6ed56e4*/
  FIXUP public_6ed56e4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6180
        call edi
        test al, al
        je public_6ed5712
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb30b4]
        add esp, 8
        pop edi
        mov dword ptr ss : [ebp+0x8C], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 
        public_6ed5712 : nop
        mov byte ptr ss : [esp+0xF], 0
        public_6ed5717 : nop
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ed5590)
    }
}

#undef public_6ed55d3
#undef public_6ed55ee
#undef public_6ed5612
#undef public_6ed5659
#undef public_6ed568c
#undef public_6ed56e4
#undef public_6ed5712
#undef public_6ed5717

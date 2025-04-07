#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a1d40);
CLANG_FORWARD_PROC_SYMBOL(public_6325bb0);
CLANG_FORWARD_PROC_SYMBOL(public_632a550);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

#define public_6329a84 _public_6329a84
#define public_6329ab1 _public_6329ab1
#define public_6329ab6 _public_6329ab6
#define public_6329ad0 _public_6329ad0
#define public_6329ae3 _public_6329ae3

PROC_DECLARE(0x6329a50, internal_6329a50, public_6329a50);
extern "C" NAKED register_t __cdecl internal_6329a50()
{
    __asm
    {
        sub esp, 8
        xor eax, eax
        mov ax, word ptr ds : [ecx+4]
        push esi
        push edi
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_6401950
        mov dword ptr ss : [esp+0x10], eax
        call public_62a1d40
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [public_6401954]
        je public_6329a84
        lea edi, ds:[eax+0x10]
        jmp public_6329ab6
        public_6329a84 : nop
        mov cl, byte ptr ds : [public_640194c]
        mov al, 1
        test al, cl
        jne public_6329ab1
        mov dl, cl
        or dl, al
        mov ecx, offset public_6401940
        mov byte ptr ds : [public_640194c], dl
        call public_6325bb0
/*FIXUP push offset _public_632a550 @0x6329aa4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_632a550
        call public_6391f9e
        add esp, 4
        public_6329ab1 : nop
        mov edi, offset public_6401940
        public_6329ab6 : nop
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6329ae3
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_6329ad0 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push ebp
        push ebx
        call dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_6329ad0
        pop ebp
        pop ebx
        public_6329ae3 : nop
        pop edi
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6329a50)
    }
}

#undef public_6329a84
#undef public_6329ab1
#undef public_6329ab6
#undef public_6329ad0
#undef public_6329ae3

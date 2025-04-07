#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a01e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a1fc0);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a18e8 _public_62a18e8
#define public_62a18f0 _public_62a18f0
#define public_62a190e _public_62a190e
#define public_62a1926 _public_62a1926

PROC_DECLARE(0x62a18b0, internal_62a18b0, public_62a18b0);
extern "C" NAKED register_t __cdecl internal_62a18b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov ebx, ecx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        lea esi, ds:[ebx+4]
        push ecx
        mov ecx, esi
        call public_62a1fc0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, eax
        mov dx, word ptr ss : [esp+0x18]
        je public_62a18e8
        cmp dx, word ptr ds : [ecx+0xC]
        jb public_62a18e8
        lea eax, ss:[esp+0xC]
        jmp public_62a18f0
        public_62a18e8 : nop
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        public_62a18f0 : nop
        mov edi, dword ptr ds : [eax]
        cmp edi, dword ptr ds : [ebx+8]
        je public_62a1926
        mov ebx, dword ptr ds : [edi+0x10]
        test ebx, ebx
        je public_62a190e
        mov ecx, ebx
        call public_62a01e0
        push ebx
        call public_6391d5a
        add esp, 4
        public_62a190e : nop
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_62be400
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_62a1926 : nop
        xor ecx, ecx
        mov cx, dx
        mov edx, dword ptr ds : [public_6399028]
        mov eax, 0x100002
        xor bl, bl
        push ecx
        push 0xE7
/*FIXUP push offset public_639d9e0 @0x62a193e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d9e0
/*FIXUP push offset public_639dab0 @0x62a1943*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639dab0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62a18b0)
    }
}

#undef public_62a18e8
#undef public_62a18f0
#undef public_62a190e
#undef public_62a1926

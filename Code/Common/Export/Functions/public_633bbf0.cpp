#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6331940);
CLANG_FORWARD_PROC_SYMBOL(public_633bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6397809);

#define public_633bc45 _public_633bc45
#define public_633bc60 _public_633bc60
#define public_633bc75 _public_633bc75

PROC_DECLARE(0x633bbf0, internal_633bbf0, public_633bbf0);
extern "C" NAKED register_t __cdecl internal_633bbf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397809 @0x633bbf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397809
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+4]
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_63a5144
        mov dword ptr ds : [edi+4], offset public_63a5134
        mov eax, dword ptr ds : [edi+0x8C]
        test eax, eax
        mov dword ptr ss : [esp+0x20], 1
        je public_633bc45
        push eax
        call public_6331940
        add esp, 4
        mov dword ptr ds : [edi+0x8C], 0
        public_633bc45 : nop
        mov ebx, dword ptr ds : [edi+0x84]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea ebp, ds:[edi+0x80]
        mov byte ptr ss : [esp+0x20], 0
        je public_633bc75
        lea esp, ss:[esp]
        public_633bc60 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        call public_6271cc0
        cmp esi, ebx
        jne public_633bc60
        public_633bc75 : nop
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6391d5a
        xor esi, esi
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov edx, dword ptr ds : [edi+0x58]
        push edx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        mov dword ptr ds : [edi+0x58], esi
        mov dword ptr ds : [edi+0x5C], esi
        mov dword ptr ds : [edi+0x60], esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x633bbf0)
    }
}

#undef public_633bc45
#undef public_633bc60
#undef public_633bc75

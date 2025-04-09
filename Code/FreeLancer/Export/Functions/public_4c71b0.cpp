#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c71b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4c71f4 _public_4c71f4
#define public_4c71fc _public_4c71fc
#define public_4c7239 _public_4c7239
#define public_4c7241 _public_4c7241

PROC_DECLARE(0x4c71b0, internal_4c71b0, public_4c71b0);
extern "C" NAKED register_t __cdecl internal_4c71b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push esi
        push edi
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [public_67dbf8]
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
/*FIXUP push offset public_67dbf8 @0x4c71d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [ecx+0x34]
        test al, al
        je public_4c71f4
        fld dword ptr ss : [esp+0xC]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x10]
        mov ebx, eax
        call public_5b7ec0
        mov edi, eax
        jmp public_4c71fc
        public_4c71f4 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0xC]
        public_4c71fc : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ds : [public_67dbf8]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_67dbf8 @0x4c7215*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [eax+0x34]
        test al, al
        je public_4c7239
        fld dword ptr ss : [esp+0xC]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x10]
        mov esi, eax
        call public_5b7ec0
        mov ecx, eax
        jmp public_4c7241
        public_4c7239 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x14]
        public_4c7241 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, eax
        mov dword ptr ds : [edx], ebx
        mov dword ptr ds : [edx+4], edi
        pop edi
        mov dword ptr ds : [edx+8], esi
        pop esi
        mov dword ptr ds : [edx+0xC], ecx
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4c71b0)
    }
}

#undef public_4c71f4
#undef public_4c71fc
#undef public_4c7239
#undef public_4c7241

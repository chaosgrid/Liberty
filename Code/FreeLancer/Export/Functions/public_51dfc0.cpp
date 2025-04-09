#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_51dfc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bff30);

#define public_51e006 _public_51e006
#define public_51e024 _public_51e024
#define public_51e02d _public_51e02d
#define public_51e049 _public_51e049

PROC_DECLARE(0x51dfc0, internal_51dfc0, public_51dfc0);
extern "C" NAKED register_t __cdecl internal_51dfc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bff30 @0x51dfc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bff30
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_5dc164
        mov eax, dword ptr ds : [esi+0xFC]
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        je public_51e006
        push eax
        mov dword ptr ds : [eax], offset public_5dc140
        call public_5b7e1d
        add esp, 4
        public_51e006 : nop
        mov edi, dword ptr ds : [esi+0x100]
        test edi, edi
        mov ebx, dword ptr ds : [public_5c62a8]
        je public_51e02d
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        lea ecx, ds:[edi+8]
        je public_51e024
        push 0
        call ebx
        public_51e024 : nop
        push edi
        call public_5b7e1d
        add esp, 4
        public_51e02d : nop
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        lea ecx, ds:[esi+0xC0]
        mov dword ptr ss : [esp+0x18], 1
        je public_51e049
        push 0
        call ebx
        public_51e049 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_5c8944
        call public_401e90
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x51dfc0)
    }
}

#undef public_51e006
#undef public_51e024
#undef public_51e02d
#undef public_51e049

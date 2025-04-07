#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b44d20);
CLANG_FORWARD_PROC_SYMBOL(public_6b45420);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a96e);

#define public_6b44d60 _public_6b44d60
#define public_6b44d77 _public_6b44d77
#define public_6b44d80 _public_6b44d80
#define public_6b44d87 _public_6b44d87
#define public_6b44d94 _public_6b44d94
#define public_6b44da9 _public_6b44da9
#define public_6b44dce _public_6b44dce
#define public_6b44dde _public_6b44dde

PROC_DECLARE(0x6b44d20, internal_6b44d20, public_6b44d20);
extern "C" NAKED register_t __cdecl internal_6b44d20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a96e @0x6b44d22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a96e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0xC], ebp
        mov dword ptr ss : [ebp], offset public_6b6c2a8
        mov eax, dword ptr ss : [ebp+0x40]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], 2
        je public_6b44d87
        lea esp, ss:[esp]
        public_6b44d60 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_6b44d80
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_6b44d77
        push eax
        call public_6b6a092
        add esp, 4
        public_6b44d77 : nop
        push edi
        call public_6b6a092
        add esp, 4
        public_6b44d80 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0x40]
        jne public_6b44d60
        public_6b44d87 : nop
        lea edi, ss:[ebp+0x3C]
        push ebx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6b44da9
        public_6b44d94 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6b45420
        cmp esi, ebx
        jne public_6b44d94
        public_6b44da9 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6b6a092
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov eax, dword ptr ss : [ebp+0x34]
        add esp, 4
        cmp eax, esi
        pop ebx
        je public_6b44dce
        push eax
        call public_6b6a092
        add esp, 4
        public_6b44dce : nop
        mov eax, dword ptr ss : [ebp+0x2C]
        cmp eax, esi
        je public_6b44dde
        push eax
        call public_6b6a092
        add esp, 4
        public_6b44dde : nop
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_6b4e730
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6b44d20)
    }
}

#undef public_6b44d60
#undef public_6b44d77
#undef public_6b44d80
#undef public_6b44d87
#undef public_6b44d94
#undef public_6b44da9
#undef public_6b44dce
#undef public_6b44dde

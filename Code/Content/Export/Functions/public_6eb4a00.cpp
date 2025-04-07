#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea8d40);
CLANG_FORWARD_PROC_SYMBOL(public_6eac110);
CLANG_FORWARD_PROC_SYMBOL(public_6eb4a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f00b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6f47990);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa1d8);

#define public_6eb4a60 _public_6eb4a60
#define public_6eb4aa0 _public_6eb4aa0
#define public_6eb4aa9 _public_6eb4aa9
#define public_6eb4ab0 _public_6eb4ab0

PROC_DECLARE(0x6eb4a00, internal_6eb4a00, public_6eb4a00);
extern "C" NAKED register_t __cdecl internal_6eb4a00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa1d8 @0x6eb4a02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa1d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        push edi
        mov ecx, esi
        call public_6f47980
        mov ecx, esi
        mov edi, eax
        call public_6f47990
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_6eac110
        mov edi, eax
        test edi, edi
        je public_6eb4ab0
        mov ebx, dword ptr ss : [esp+0x2C]
        lea ecx, ds:[ebx+0x5C]
        call public_6ea8d40
        mov ebp, eax
        mov eax, dword ptr ds : [edi+0x10]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eb4ab0
        lea ecx, ds:[ecx]
        public_6eb4a60 : nop
        mov eax, dword ptr ds : [esi+0x5C]
        cmp eax, 3
        lea ecx, ds:[esi+0x5C]
        jne public_6eb4aa9
        call public_6ea8d40
        cmp ebp, eax
        jne public_6eb4aa9
        cmp esi, ebx
        je public_6eb4aa0
        xor eax, eax
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0x24], eax
        call public_6ea7ef0
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6ea7c30
        public_6eb4aa0 : nop
        push esi
        call public_6f00b60
        add esp, 4
        public_6eb4aa9 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x10]
        jne public_6eb4a60
        public_6eb4ab0 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6eb4a00)
    }
}

#undef public_6eb4a60
#undef public_6eb4aa0
#undef public_6eb4aa9
#undef public_6eb4ab0

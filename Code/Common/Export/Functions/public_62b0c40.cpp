#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6295c40);
CLANG_FORWARD_PROC_SYMBOL(public_629d120);
CLANG_FORWARD_PROC_SYMBOL(public_629e030);
CLANG_FORWARD_PROC_SYMBOL(public_62a9a90);
CLANG_FORWARD_PROC_SYMBOL(public_62fd560);
CLANG_FORWARD_JUMP_SYMBOL(public_63945e1);

#define public_62b0ca8 _public_62b0ca8
#define public_62b0ccf _public_62b0ccf
#define public_62b0cf6 _public_62b0cf6
#define public_62b0cf8 _public_62b0cf8
#define public_62b0d04 _public_62b0d04
#define public_62b0d0e _public_62b0d0e

PROC_DECLARE(0x62b0c40, internal_62b0c40, public_62b0c40);
extern "C" NAKED register_t __cdecl internal_62b0c40()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63945e1 @0x62b0c48*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63945e1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        cmp eax, 0xC
        mov ebx, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x28]
        je public_62b0ccf
        cmp eax, 0xF
        je public_62b0ca8
        cmp eax, 0x16
        jne public_62b0d04
        push 0x60
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 2
        je public_62b0cf6
        push ebp
        push esi
        push ebx
        push edi
        mov ecx, eax
        call public_629e030
        jmp public_62b0cf8
        public_62b0ca8 : nop
        push 0x64
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 1
        je public_62b0cf6
        push ebp
        push esi
        push ebx
        push edi
        mov ecx, eax
        call public_629d120
        jmp public_62b0cf8
        public_62b0ccf : nop
        push 0x58
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        je public_62b0cf6
        push ebp
        push esi
        push ebx
        push edi
        mov ecx, eax
        call public_6295c40
        jmp public_62b0cf8
        public_62b0cf6 : nop
        xor eax, eax
        public_62b0cf8 : nop
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_62b0d0e
        public_62b0d04 : nop
        push ebp
        push esi
        push ebx
        mov ecx, edi
        call public_62a9a90
        public_62b0d0e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x62b0c40)
    }
}

#undef public_62b0ca8
#undef public_62b0ccf
#undef public_62b0cf6
#undef public_62b0cf8
#undef public_62b0d04
#undef public_62b0d0e

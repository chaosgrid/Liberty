#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_638b280);

#define public_638b2ce _public_638b2ce
#define public_638b2d9 _public_638b2d9
#define public_638b2ff _public_638b2ff
#define public_638b30e _public_638b30e
#define public_638b31f _public_638b31f
#define public_638b32a _public_638b32a

PROC_DECLARE(0x638b280, internal_638b280, public_638b280);
extern "C" NAKED register_t __cdecl internal_638b280()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        test edi, edi
        je public_638b32a
        mov esi, dword ptr ss : [ebp+0x14]
        test esi, esi
        je public_638b32a
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        mov ebx, dword ptr ds : [public_63991e8]
        je public_638b2ce
        push edi
        push eax
        call dword ptr ds : [public_63992d8]
        mov eax, dword ptr ss : [ebp+0x18]
        add esp, 8
        cmp eax, 0xFFFFFFFF
        je public_638b2ce
        push eax
/*FIXUP push offset public_63f99f4 @0x638b2c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f99f4
        push edi
        call ebx
        add esp, 0xC
        public_638b2ce : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_638b31f
        mov dword ptr ss : [esp+0xC], eax
        public_638b2d9 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+0xC]
        add esi, 8
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_638b2ff
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, ecx
        push edx
        push eax
/*FIXUP push offset public_63f99ec @0x638b2f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f99ec
        jmp public_638b30e
        public_638b2ff : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
/*FIXUP push offset public_63f637c @0x638b309*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        public_638b30e : nop
        push edi
        call ebx
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0x10
        dec eax
        mov dword ptr ss : [esp+0xC], eax
        jne public_638b2d9
/*FIXUP public_638b31f : nop
        push offset public_63edccc @0x638b31f*/
  FIXUP public_638b31f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call ebx
        add esp, 8
        public_638b32a : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638b280)
    }
}

#undef public_638b2ce
#undef public_638b2d9
#undef public_638b2ff
#undef public_638b30e
#undef public_638b31f
#undef public_638b32a

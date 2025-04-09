#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e4a0);
CLANG_FORWARD_PROC_SYMBOL(public_42e850);
CLANG_FORWARD_PROC_SYMBOL(public_42e920);
CLANG_FORWARD_PROC_SYMBOL(public_42ed30);

#define public_42e870 _public_42e870
#define public_42e8d0 _public_42e8d0
#define public_42e8e6 _public_42e8e6
#define public_42e8f2 _public_42e8f2
#define public_42e90e _public_42e90e

PROC_DECLARE(0x42e850, internal_42e850, public_42e850);
extern "C" NAKED register_t __cdecl internal_42e850()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov ecx, esi
        xor edi, edi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_42e90e
        push ebx
        mov ebx, dword ptr ds : [public_5c6050]
        nop 
/*FIXUP public_42e870 : nop
        push offset public_5c866c @0x42e870*/
  FIXUP public_42e870 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_42e8e6
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c69a0]
        mov ecx, esi
        call dword ptr ds : [public_5c6698]
        push 0
        push eax
        call dword ptr ds : [public_5c6028]
        mov dword ptr ss : [esp+0x18], eax
        add esp, 8
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_667d78
        call public_42ed30
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, eax
        mov dword ptr ds : [edi], ecx
/*FIXUP push offset public_5c8878 @0x42e8ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8878
        mov ecx, esi
        call ebx
        test al, al
        je public_42e8d0
        mov dword ptr ds : [edi+4], 0
        jmp public_42e8f2
/*FIXUP public_42e8d0 : nop
        push offset public_5c886c @0x42e8d0*/
  FIXUP public_42e8d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c886c
        mov ecx, esi
        call ebx
        test al, al
        je public_42e8f2
        mov dword ptr ds : [edi+4], 1
        jmp public_42e8f2
        public_42e8e6 : nop
        test edi, edi
        je public_42e8f2
        push esi
        mov ecx, edi
        call public_42e4a0
        public_42e8f2 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_42e870
        test edi, edi
        pop ebx
        je public_42e90e
        mov ecx, edi
        call public_42e920
        public_42e90e : nop
        xor eax, eax
        test edi, edi
        pop edi
        setne al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42e850)
    }
}

#undef public_42e870
#undef public_42e8d0
#undef public_42e8e6
#undef public_42e8f2
#undef public_42e90e

#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_488b70);

#define public_488bc3 _public_488bc3
#define public_488bca _public_488bca
#define public_488bd9 _public_488bd9

PROC_DECLARE(0x488b70, internal_488b70, public_488b70);
extern "C" NAKED register_t __cdecl internal_488b70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x224]
        test eax, eax
        je public_488bca
        push 0x100
/*FIXUP push offset public_671ce8 @0x488b84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671ce8
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push eax
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_488bc3
        mov ecx, dword ptr ds : [esi+0x224]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x64D
/*FIXUP push offset public_5d1e40 @0x488bae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e40
        mov eax, 0x100001
/*FIXUP push offset public_5c9414 @0x488bb8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9414
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_488bc3 : nop
        mov eax, offset public_671ce8
        pop esi
        ret 
        public_488bca : nop
        mov eax, dword ptr ds : [esi+0x218]
        test eax, eax
        jne public_488bd9
        mov eax, dword ptr ds : [public_5c700c]
        public_488bd9 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x488b70)
    }
}

#undef public_488bc3
#undef public_488bca
#undef public_488bd9

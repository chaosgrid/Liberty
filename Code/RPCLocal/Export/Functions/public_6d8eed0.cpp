#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d95e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d9ace0);
CLANG_FORWARD_PROC_SYMBOL(public_6d9bc80);

#define public_6d8ef12 _public_6d8ef12
#define public_6d8ef70 _public_6d8ef70

PROC_DECLARE(0x6d8eed0, internal_6d8eed0, public_6d8eed0);
extern "C" NAKED register_t __cdecl internal_6d8eed0()
{
    __asm
    {
        push edi
/*FIXUP push offset public_6dbbbc0 @0x6d8eed1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6dbbbc0
        mov edi, ecx
        call dword ptr ds : [public_6db3134]
        test eax, eax
        mov dword ptr ds : [public_6dbbd14], eax
        je public_6d8ef12
        push esi
        mov esi, dword ptr ds : [public_6db3130]
/*FIXUP push offset public_6db3b88 @0x6d8eeee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3b88
        push eax
        call esi
        call eax
        mov dword ptr ds : [public_6dbbd0c], eax
        mov eax, dword ptr ds : [public_6dbbd14]
/*FIXUP push offset public_6db3b70 @0x6d8ef02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3b70
        push eax
        call esi
        call eax
        mov dword ptr ds : [public_6dbbd10], eax
        pop esi
        public_6d8ef12 : nop
        mov ecx, dword ptr ds : [public_6dbbd0c]
        test ecx, ecx
        je public_6d8ef70
        mov edx, dword ptr ds : [public_6dbbd10]
        mov dword ptr ds : [public_6dbbcd4], edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_6dbbcd8], ecx
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x28]
        test al, al
        je public_6d8ef70
        call public_6d95e50
        test eax, eax
        mov dword ptr ds : [edi+8], eax
        je public_6d8ef70
        push eax
        call public_6d9bc80
        add esp, 4
        test eax, eax
        jne public_6d8ef70
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_6d9ace0
        add esp, 4
        test eax, eax
        jne public_6d8ef70
        mov al, 1
        pop edi
        ret 8
        public_6d8ef70 : nop
        xor al, al
        pop edi
        ret 8
        UNREACHABLE_TRAP(0x6d8eed0)
    }
}

#undef public_6d8ef12
#undef public_6d8ef70

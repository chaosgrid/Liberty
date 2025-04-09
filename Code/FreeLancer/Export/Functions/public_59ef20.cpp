#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_420f70);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4eb8);

#define public_59ef68 _public_59ef68
#define public_59ef7a _public_59ef7a

PROC_DECLARE(0x59ef20, internal_59ef20, public_59ef20);
extern "C" NAKED register_t __cdecl internal_59ef20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4eb8 @0x59ef22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4eb8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5d2efc
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], 0
        je public_59ef68
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        public_59ef68 : nop
        mov ecx, esi
        call public_420d60
        test al, al
        je public_59ef7a
        mov ecx, esi
        call public_420f70
        public_59ef7a : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_420d10
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x59ef20)
    }
}

#undef public_59ef68
#undef public_59ef7a

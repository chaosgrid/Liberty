#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b110);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);

#define public_6f4b916 _public_6f4b916
#define public_6f4b94f _public_6f4b94f

PROC_DECLARE(0x6f4b900, internal_6f4b900, public_6f4b900);
extern "C" NAKED register_t __cdecl internal_6f4b900()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_6f4b916
/*FIXUP push offset public_6f60414 @0x6f4b909*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60414
        call public_6f4c7f0
        add esp, 4
        public_6f4b916 : nop
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        shl esi, 4
        lea edx, ds:[ecx+esi-0x10]
        push edx
        push eax
        call public_6f4b110
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+8]
        add esp, 8
        cmp ecx, edx
        pop esi
        jb public_6f4b94f
        push 1
        call public_6f4c260
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f4b94f : nop
        add dword ptr ds : [eax], 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4b900)
    }
}

#undef public_6f4b916
#undef public_6f4b94f

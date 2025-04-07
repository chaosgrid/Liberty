#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801d70);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6802e00);

#define public_6802436 _public_6802436
#define public_680246f _public_680246f

PROC_DECLARE(0x6802420, internal_6802420, public_6802420);
extern "C" NAKED register_t __cdecl internal_6802420()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_6802436
/*FIXUP push offset public_680d3f4 @0x6802429*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d3f4
        call public_6802e00
        add esp, 4
        public_6802436 : nop
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        shl esi, 4
        lea edx, ds:[ecx+esi-0x10]
        push edx
        push eax
        call public_6801d70
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+8]
        add esp, 8
        cmp ecx, edx
        pop esi
        jb public_680246f
        push 1
        call public_6802870
        mov eax, dword ptr ds : [public_680e604]
        add esp, 4
        public_680246f : nop
        add dword ptr ds : [eax], 0x10
        ret 
        UNREACHABLE_TRAP(0x6802420)
    }
}

#undef public_6802436
#undef public_680246f

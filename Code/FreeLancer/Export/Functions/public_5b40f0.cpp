#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3640);
CLANG_FORWARD_PROC_SYMBOL(public_5b40f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_5b413a _public_5b413a
#define public_5b4147 _public_5b4147
#define public_5b4171 _public_5b4171
#define public_5b4177 _public_5b4177

PROC_DECLARE(0x5b40f0, internal_5b40f0, public_5b40f0);
extern "C" NAKED register_t __cdecl internal_5b40f0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_67ed0c]
        mov al, 1
        sub esp, 8
        test al, cl
        jne public_5b413a
        or cl, al
        mov al, byte ptr ss : [esp+3]
        push 0
        mov byte ptr ds : [public_67ed0c], cl
        push 0
        mov ecx, offset public_67ed00
        mov byte ptr ds : [public_67ed00], al
        call public_42a7e0
/*FIXUP push offset _public_5b3640 @0x5b411e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b3640
        mov dword ptr ds : [public_67ed04], eax
        mov dword ptr ds : [public_67ed08], 0
        call public_5b7e6c
        add esp, 4
        public_5b413a : nop
        mov edx, dword ptr ds : [public_67ed04]
        push esi
        mov esi, dword ptr ds : [edx]
        cmp esi, edx
        je public_5b4177
        public_5b4147 : nop
        mov ecx, dword ptr ds : [esi+8]
        fld dword ptr ds : [ecx+0x14]
        fcomp dword ptr ds : [ecx+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_5b4171
        fld dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        fst dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ds : [ecx+0x14]
        push eax
        call dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [public_67ed04]
        public_5b4171 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edx
        jne public_5b4147
        public_5b4177 : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x5b40f0)
    }
}

#undef public_5b413a
#undef public_5b4147
#undef public_5b4171
#undef public_5b4177

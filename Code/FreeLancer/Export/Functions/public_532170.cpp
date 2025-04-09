#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_532170);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0738);

#define public_5321db _public_5321db
#define public_5321ed _public_5321ed
#define public_5321ff _public_5321ff

PROC_DECLARE(0x532170, internal_532170, public_532170);
extern "C" NAKED register_t __cdecl internal_532170()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0738 @0x532172*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0738
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov dword ptr ss : [esp], 0
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp]
        push edx
/*FIXUP push offset public_5cad80 @0x53219c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [ecx]
        test eax, eax
        mov eax, dword ptr ss : [esp]
        jl public_5321ed
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        mov eax, dword ptr ss : [esp+4]
        setge bl
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        je public_5321db
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_5321db : nop
        mov al, bl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_5321ed : nop
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        je public_5321ff
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_5321ff : nop
        mov ecx, dword ptr ss : [esp+4]
        xor al, al
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x532170)
    }
}

#undef public_5321db
#undef public_5321ed
#undef public_5321ff

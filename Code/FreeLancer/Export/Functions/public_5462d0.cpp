#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5462d0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0f38);

#define public_546340 _public_546340
#define public_546352 _public_546352
#define public_546364 _public_546364

PROC_DECLARE(0x5462d0, internal_5462d0, public_5462d0);
extern "C" NAKED register_t __cdecl internal_5462d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0f38 @0x5462d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0f38
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
/*FIXUP push offset public_5cad80 @0x5462fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [ecx]
        test eax, eax
        mov eax, dword ptr ss : [esp]
        jl public_546352
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        test eax, eax
        mov eax, dword ptr ss : [esp+4]
        setge bl
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        je public_546340
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_546340 : nop
        mov al, bl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_546352 : nop
        test eax, eax
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        je public_546364
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_546364 : nop
        mov ecx, dword ptr ss : [esp+4]
        xor al, al
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5462d0)
    }
}

#undef public_546340
#undef public_546352
#undef public_546364

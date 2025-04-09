#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44b370);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9c28);

#define public_44b41f _public_44b41f
#define public_44b422 _public_44b422
#define public_44b438 _public_44b438

PROC_DECLARE(0x44b370, internal_44b370, public_44b370);
extern "C" NAKED register_t __cdecl internal_44b370()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b9c28 @0x44b378*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9c28
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push esi
        push 0x2B
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_44b438
/*FIXUP push offset public_5cbf60 @0x44b39d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbf60
        call dword ptr ds : [public_5c61a8]
        add esp, 4
        test al, al
        je public_44b438
        mov eax, dword ptr ds : [esi+0x40]
        mov al, byte ptr ds : [eax+0xE4]
        test al, al
        je public_44b438
        mov dword ptr ss : [esp+4], 0
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+4]
        push ecx
/*FIXUP push offset public_5cad80 @0x44b3d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad80
        push eax
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [edx]
        test eax, eax
        jl public_44b422
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        push 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], edx
        push 1
        mov dword ptr ss : [esp+0x14], eax
        mov al, byte ptr ss : [esp+0x30]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [esi+0x500]
        test al, al
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        je public_44b41f
        call dword ptr ds : [ecx+0x30]
        jmp public_44b422
        public_44b41f : nop
        call dword ptr ds : [ecx+0x2C]
        public_44b422 : nop
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_44b438
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_44b438 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x44b370)
    }
}

#undef public_44b41f
#undef public_44b422
#undef public_44b438

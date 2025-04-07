#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafe88);

#define public_6f71281 _public_6f71281
#define public_6f71283 _public_6f71283

PROC_DECLARE(0x6f71240, internal_6f71240, public_6f71240);
extern "C" NAKED register_t __cdecl internal_6f71240()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fafe88 @0x6f71248*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafe88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call public_6efec10
        fst qword ptr ds : [esi+0x30]
        fcomp qword ptr ds : [public_6fb78f0]
        fnstsw ax
        test ah, 0x44
        jnp public_6f71281
        mov al, byte ptr ds : [esi+0x24]
        test al, al
        je public_6f71281
        mov ebx, 1
        jmp public_6f71283
        public_6f71281 : nop
        xor ebx, ebx
        public_6f71283 : nop
        mov eax, dword ptr ds : [public_6fd3a18]
        mov edi, dword ptr ds : [esi+0x20]
        mov ebp, dword ptr ds : [esi+0x38]
        push eax
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3118]
        mov dword ptr ss : [esp+0x2C], ebp
        mov byte ptr ss : [esp+0x30], bl
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x10], offset public_6fbbde4
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x10]
        push eax
        lea ecx, ds:[esi+0x10]
        push 0x3C23D70A
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x4C], 0
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x6f71240)
    }
}

#undef public_6f71281
#undef public_6f71283

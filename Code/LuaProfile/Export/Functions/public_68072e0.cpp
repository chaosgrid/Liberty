#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6807260);
CLANG_FORWARD_PROC_SYMBOL(public_68072e0);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);
CLANG_FORWARD_PROC_SYMBOL(public_680a870);

#define public_6807317 _public_6807317

PROC_DECLARE(0x68072e0, internal_68072e0, public_68072e0);
extern "C" NAKED register_t __cdecl internal_68072e0()
{
    __asm
    {
        sub esp, 0x84
        push esi
        mov esi, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ds : [esi+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x9C]
        cmp edi, eax
        jne public_6807317
        mov eax, dword ptr ss : [esp+0x94]
        push eax
        push esi
        call public_6807260
        add esp, 8
        pop edi
        pop esi
        add esp, 0x84
        ret 
        public_6807317 : nop
        mov edx, dword ptr ss : [esp+0x94]
        lea ecx, ss:[esp+8]
        push ecx
        push edx
        call public_680a870
        mov ecx, dword ptr ss : [esp+0xA0]
        lea eax, ss:[esp+0x20]
        push eax
        push ecx
        call public_680a870
        push edi
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x44]
/*FIXUP push offset public_680dba4 @0x680734a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dba4
        push ecx
        call dword ptr ds : [public_680c060]
        lea edx, ss:[esp+0x4C]
        push edx
        push esi
        call public_680a850
        UNREACHABLE_TRAP(0x68072e0)
    }
}

#undef public_6807317

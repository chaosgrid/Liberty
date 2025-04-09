#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_488a80);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_488ad3 _public_488ad3
#define public_488aee _public_488aee
#define public_488b5a _public_488b5a

PROC_DECLARE(0x488a80, internal_488a80, public_488a80);
extern "C" NAKED register_t __cdecl internal_488a80()
{
    __asm
    {
        mov eax, 0x1014
        call public_5b7e90
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x400
        lea eax, ss:[esp+0x18]
        push eax
        push 0x75C
        push ecx
        call public_4347e0
        mov edx, dword ptr ss : [esp+0x102C]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x82C]
        push ecx
        call dword ptr ds : [public_5c70ec]
        mov eax, dword ptr ss : [esp+0x103C]
        add esp, 0x1C
        test eax, eax
        jne public_488ad3
        mov eax, offset public_611aec
        public_488ad3 : nop
        test eax, eax
        lea edx, ss:[esp+0x814]
        mov dword ptr ss : [esp], edx
        mov dword ptr ss : [esp+4], eax
        jne public_488aee
        mov dword ptr ss : [esp+4], offset public_5d2254
        public_488aee : nop
        push esi
/*FIXUP push offset public_5d2260 @0x488aef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2260
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_488b5a
        mov ecx, dword ptr ss : [esp+0x101C]
        lea eax, ss:[esp+4]
        push eax
        push ecx
/*FIXUP push offset public_5d2260 @0x488b0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2260
/*FIXUP push offset public_5d2260 @0x488b12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2260
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_488b5a
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        push 0x42
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x80]
        public_488b5a : nop
        pop esi
        add esp, 0x1014
        ret 
        UNREACHABLE_TRAP(0x488a80)
    }
}

#undef public_488ad3
#undef public_488aee
#undef public_488b5a

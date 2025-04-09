#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4889e0);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_488a03 _public_488a03
#define public_488a73 _public_488a73

PROC_DECLARE(0x4889e0, internal_4889e0, public_4889e0);
extern "C" NAKED register_t __cdecl internal_4889e0()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ss : [esp+0x24]
        push edi
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jne public_488a03
        mov dword ptr ss : [esp+0xC], offset public_5d2254
/*FIXUP public_488a03 : nop
        push offset public_5d2260 @0x488a03*/
  FIXUP public_488a03 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2260
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_488a73
        mov edx, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+8]
        push ecx
        push edx
/*FIXUP push offset public_5d2260 @0x488a1e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2260
/*FIXUP push offset public_5d2260 @0x488a23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2260
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_488a73
        mov eax, dword ptr ds : [esi]
        push 0
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0x42
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x80]
        pop edi
        mov eax, esi
        pop esi
        add esp, 0x14
        ret 
        public_488a73 : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4889e0)
    }
}

#undef public_488a03
#undef public_488a73

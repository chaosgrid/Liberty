#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6372280);
CLANG_FORWARD_PROC_SYMBOL(public_6389640);

#define public_6389688 _public_6389688
#define public_6389698 _public_6389698
#define public_63896b9 _public_63896b9
#define public_63896d0 _public_63896d0

PROC_DECLARE(0x6389640, internal_6389640, public_6389640);
extern "C" NAKED register_t __cdecl internal_6389640()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_63896d0
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        push eax
        call public_6372280
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [public_63991e8]
        add esp, 4
        cmp ecx, 0x10
        mov dword ptr ss : [esp+0x10], eax
        jne public_6389688
        push eax
        call public_636ec10
        add esp, 4
        push eax
/*FIXUP push offset public_63ee77c @0x6389679*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee77c
        push edi
        call ebx
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        public_6389688 : nop
        test eax, eax
        je public_63896b9
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_63896b9
        public_6389698 : nop
        mov ecx, dword ptr ds : [eax+8]
        push ecx
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63ee77c @0x63896a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee77c
        push edi
        call ebx
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_6389698
/*FIXUP public_63896b9 : nop
        push offset public_63edccc @0x63896b9*/
  FIXUP public_63896b9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call ebx
        lea edx, ss:[esp+0x18]
        push edx
        call public_636ecc0
        add esp, 0xC
        pop esi
        pop ebx
        public_63896d0 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6389640)
    }
}

#undef public_6389688
#undef public_6389698
#undef public_63896b9
#undef public_63896d0

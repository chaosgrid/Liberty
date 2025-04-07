#include "Common-PCH.h"


#define public_63339e9 _public_63339e9

PROC_DECLARE(0x63339c0, internal_63339c0, public_63339c0);
extern "C" NAKED register_t __cdecl internal_63339c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea ecx, ds:[esi+4]
        push ecx
        push edi
        mov ecx, esi
        mov byte ptr ds : [esi+0xD], 1
        call dword ptr ds : [eax+8]
        test al, al
        jne public_63339e9
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_63a4978 @0x63339de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4978
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+8]
        public_63339e9 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        pop edi
        mov byte ptr ds : [esi+0xD], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63339c0)
    }
}

#undef public_63339e9

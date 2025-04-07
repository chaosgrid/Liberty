#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6804f80);
CLANG_FORWARD_PROC_SYMBOL(public_6804fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6805020);
CLANG_FORWARD_PROC_SYMBOL(public_6805070);

#define public_6805065 _public_6805065

PROC_DECLARE(0x6805020, internal_6805020, public_6805020);
extern "C" NAKED register_t __cdecl internal_6805020()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
/*FIXUP push offset public_680d5c4 @0x6805026*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d5c4
        push eax
        call public_6805070
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        mov edi, eax
        call public_6804fb0
        push edi
        push esi
        call public_6804f80
        add esp, 0x14
        test eax, eax
        je public_6805065
        mov edx, dword ptr ds : [public_680e604]
        lea ecx, ds:[esi+esi*8]
        shl ecx, 1
        mov eax, edi
        sub eax, ecx
        mov ecx, dword ptr ds : [edx+0x64]
        shl eax, 4
        pop edi
        add eax, ecx
        pop esi
        ret 
        public_6805065 : nop
        pop edi
        mov eax, offset public_680d968
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805020)
    }
}

#undef public_6805065

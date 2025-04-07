#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218cd0);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_6244320);

#define public_6218cfc _public_6218cfc

PROC_DECLARE(0x6218cd0, internal_6218cd0, public_6218cd0);
extern "C" NAKED register_t __cdecl internal_6218cd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esi, ds:[eax+4]
        push edi
        push ebx
        push esi
        call public_6244320
        test eax, eax
        jne public_6218cfc
        push edi
        push ebx
/*FIXUP push offset public_6255b70 @0x6218cf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255b70
        mov ecx, esi
        call public_623f920
        public_6218cfc : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6218cd0)
    }
}

#undef public_6218cfc

#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63456b0);
CLANG_FORWARD_PROC_SYMBOL(public_6345790);
CLANG_FORWARD_JUMP_SYMBOL(public_6397b28);

#define public_63457c2 _public_63457c2
#define public_63457cf _public_63457cf

PROC_DECLARE(0x6345790, internal_6345790, public_6345790);
extern "C" NAKED register_t __cdecl internal_6345790()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397b28 @0x6345792*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397b28
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_63a5454
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_63457cf
        public_63457c2 : nop
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_63457c2
        public_63457cf : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_63456b0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6345790)
    }
}

#undef public_63457c2
#undef public_63457cf

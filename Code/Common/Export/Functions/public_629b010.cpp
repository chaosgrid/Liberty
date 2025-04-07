#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b010);

#define public_629b02a _public_629b02a
#define public_629b037 _public_629b037

PROC_DECLARE(0x629b010, internal_629b010, public_629b010);
extern "C" NAKED register_t __cdecl internal_629b010()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        je public_629b02a
        mov eax, dword ptr ds : [ecx]
        push edi
        push ebx
        call dword ptr ds : [eax]
        public_629b02a : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        je public_629b037
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebx
        call dword ptr ds : [edx]
        public_629b037 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x629b010)
    }
}

#undef public_629b02a
#undef public_629b037

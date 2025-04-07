#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806990);
CLANG_FORWARD_PROC_SYMBOL(public_6807020);

#define public_6807051 _public_6807051

PROC_DECLARE(0x6807020, internal_6807020, public_6807020);
extern "C" NAKED register_t __cdecl internal_6807020()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        jle public_6807051
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        xor edx, edx
        mov byte ptr ds : [ecx+esi-1], al
        mov dl, byte ptr ds : [ecx+esi]
        sub eax, edx
        dec eax
        push eax
        push edi
        call public_6806990
        add esp, 8
        pop edi
        public_6807051 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6807020)
    }
}

#undef public_6807051

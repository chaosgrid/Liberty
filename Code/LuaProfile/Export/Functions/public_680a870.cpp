#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_680a870);

#define public_680a887 _public_680a887

PROC_DECLARE(0x680a870, internal_680a870, public_680a870);
extern "C" NAKED register_t __cdecl internal_680a870()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        cmp ecx, 0xFF
        jge public_680a887
        mov eax, dword ptr ss : [esp+8]
        mov byte ptr ds : [eax], cl
        mov byte ptr ds : [eax+1], 0
        ret 
        public_680a887 : nop
        push esi
        push edi
        mov edi, dword ptr ds : [ecx*4+public_680df58]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, dword ptr ss : [esp+0x10]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x680a870)
    }
}

#undef public_680a887

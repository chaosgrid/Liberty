#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6809050);
CLANG_FORWARD_PROC_SYMBOL(public_6809090);

#define public_680906c _public_680906c
#define public_6809075 _public_6809075
#define public_6809083 _public_6809083

PROC_DECLARE(0x6809050, internal_6809050, public_6809050);
extern "C" NAKED register_t __cdecl internal_6809050()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        dec eax
        push edi
        mov dword ptr ds : [esi], eax
        js public_680906c
        mov eax, dword ptr ds : [esi+4]
        xor ecx, ecx
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi+4], eax
        mov edi, ecx
        jmp public_6809075
        public_680906c : nop
        push esi
        call dword ptr ds : [esi+8]
        add esp, 4
        mov edi, eax
        public_6809075 : nop
        cmp edi, 0xFFFFFFFF
        jne public_6809083
        push esi
        call public_6809090
        add esp, 4
        public_6809083 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6809050)
    }
}

#undef public_680906c
#undef public_6809075
#undef public_6809083

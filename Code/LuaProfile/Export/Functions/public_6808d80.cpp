#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6807b00);
CLANG_FORWARD_PROC_SYMBOL(public_6808d80);
CLANG_FORWARD_PROC_SYMBOL(public_6808e10);

#define public_6808d91 _public_6808d91
#define public_6808dbf _public_6808dbf
#define public_6808dd9 _public_6808dd9
#define public_6808ddf _public_6808ddf
#define public_6808dee _public_6808dee

PROC_DECLARE(0x6808d80, internal_6808d80, public_6808d80);
extern "C" NAKED register_t __cdecl internal_6808d80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+4], 0x2C
        push edi
        mov edi, 1
        jne public_6808ddf
        public_6808d91 : nop
        push esi
        call public_6806a20
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, 0x3B
        je public_6808ddf
        cmp eax, 0x7D
        je public_6808ddf
        push esi
        call public_6807b00
        add esp, 4
        inc edi
        mov eax, edi
        and eax, 0x8000003F
        jns public_6808dbf
        dec eax
        or eax, 0xFFFFFFC0
        inc eax
        public_6808dbf : nop
        jne public_6808dd9
        mov eax, edi
        cdq 
        and edx, 0x3F
        add eax, edx
        sar eax, 6
        push 0x40
        dec eax
        push eax
        push esi
        call public_6808e10
        add esp, 0xC
        public_6808dd9 : nop
        cmp dword ptr ds : [esi+4], 0x2C
        je public_6808d91
        public_6808ddf : nop
        mov ecx, edi
        and ecx, 0x8000003F
        jns public_6808dee
        dec ecx
        or ecx, 0xFFFFFFC0
        inc ecx
        public_6808dee : nop
        mov eax, edi
        cdq 
        and edx, 0x3F
        add eax, edx
        push ecx
        sar eax, 6
        push eax
        push esi
        call public_6808e10
        add esp, 0xC
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6808d80)
    }
}

#undef public_6808d91
#undef public_6808dbf
#undef public_6808dd9
#undef public_6808ddf
#undef public_6808dee

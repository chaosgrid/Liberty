#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9978);
CLANG_FORWARD_PROC_SYMBOL(public_65d99de);

#define public_65d99f4 _public_65d99f4
#define public_65d9a12 _public_65d9a12

PROC_DECLARE(0x65d99de, internal_65d99de, public_65d99de);
extern "C" NAKED register_t __cdecl internal_65d99de()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, ebx
        dec ebx
        push esi
        push edi
        test eax, eax
        jle public_65d9a12
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x10]
        public_65d99f4 : nop
        movsx eax, byte ptr ds : [esi]
        push edi
        inc esi
        push dword ptr ss : [esp+0x1C]
        push eax
        call public_65d9978
        add esp, 0xC
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        je public_65d9a12
        mov eax, ebx
        dec ebx
        test eax, eax
        jg public_65d99f4
        public_65d9a12 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65d99de)
    }
}

#undef public_65d99f4
#undef public_65d9a12

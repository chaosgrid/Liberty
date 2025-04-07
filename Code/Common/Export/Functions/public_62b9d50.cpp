#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9d50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62b9d84 _public_62b9d84
#define public_62b9d8d _public_62b9d8d

PROC_DECLARE(0x62b9d50, internal_62b9d50, public_62b9d50);
extern "C" NAKED register_t __cdecl internal_62b9d50()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_62b9d8d
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_62b9d84
        cmp cl, 0xFF
        je public_62b9d84
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62b9d8d
        public_62b9d84 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62b9d8d : nop
        push esi
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [esi+0x14], 0
        call public_6391d5a
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x62b9d50)
    }
}

#undef public_62b9d84
#undef public_62b9d8d

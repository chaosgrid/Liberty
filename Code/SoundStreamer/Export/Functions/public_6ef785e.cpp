#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef77f8);
CLANG_FORWARD_PROC_SYMBOL(public_6ef785e);

#define public_6ef7874 _public_6ef7874
#define public_6ef7892 _public_6ef7892

PROC_DECLARE(0x6ef785e, internal_6ef785e, public_6ef785e);
extern "C" NAKED register_t __cdecl internal_6ef785e()
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
        jle public_6ef7892
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x10]
        public_6ef7874 : nop
        movsx eax, byte ptr ds : [esi]
        push edi
        inc esi
        push dword ptr ss : [esp+0x1C]
        push eax
        call public_6ef77f8
        add esp, 0xC
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        je public_6ef7892
        mov eax, ebx
        dec ebx
        test eax, eax
        jg public_6ef7874
        public_6ef7892 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ef785e)
    }
}

#undef public_6ef7874
#undef public_6ef7892

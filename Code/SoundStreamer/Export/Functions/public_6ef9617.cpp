#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9617);
CLANG_FORWARD_PROC_SYMBOL(public_6efab32);

#define public_6ef9650 _public_6ef9650
#define public_6ef9669 _public_6ef9669

PROC_DECLARE(0x6ef9617, internal_6ef9617, public_6ef9617);
extern "C" NAKED register_t __cdecl internal_6ef9617()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        push 0x20
        mov ebx, dword ptr ss : [esp+0x14]
        cdq 
        pop ecx
        idiv ecx
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x14]
        cdq 
        idiv ecx
        lea edi, ds:[ebx+esi*4]
        push edi
        push 0x1F
        pop ecx
        push 1
        pop eax
        sub ecx, edx
        shl eax, cl
        push eax
        push dword ptr ds : [edi]
        call public_6efab32
        add esp, 0xC
        dec esi
        js public_6ef9669
        lea edi, ds:[ebx+esi*4]
        public_6ef9650 : nop
        test eax, eax
        je public_6ef9669
        push edi
        push 1
        push dword ptr ds : [edi]
        call public_6efab32
        add esp, 0xC
        dec esi
        sub edi, 4
        test esi, esi
        jge public_6ef9650
        public_6ef9669 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ef9617)
    }
}

#undef public_6ef9650
#undef public_6ef9669

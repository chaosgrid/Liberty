#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_47ad20);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_4c62b0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

#define public_47ad57 _public_47ad57
#define public_47ad9a _public_47ad9a
#define public_47adb0 _public_47adb0
#define public_47adc3 _public_47adc3

PROC_DECLARE(0x47ad20, internal_47ad20, public_47ad20);
extern "C" NAKED register_t __cdecl internal_47ad20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_47ad57
        mov cl, byte ptr ds : [eax+0x6C]
        test cl, 2
        je public_47ad57
        mov dl, cl
        and dl, 0xFC
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x360]
        mov ecx, dword ptr ds : [eax+0x978]
        test ecx, ecx
        je public_47ad57
        mov dword ptr ds : [eax+0x978], 0
        public_47ad57 : nop
        push 1
        call public_4c4060
        push eax
        lea ecx, ds:[esi+0x330]
        call public_4c62b0
        mov eax, dword ptr ds : [esi+0x500]
        test eax, eax
        mov byte ptr ds : [esi+0x4E3], 0
        je public_47ad9a
        mov ecx, dword ptr ds : [esi+0x504]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x4E5]
        push ecx
        push edx
        call eax
        add esp, 8
        mov dword ptr ds : [esi+0x500], 0
        public_47ad9a : nop
        push 0
        push esi
        call public_59dd00
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 8
        test eax, eax
        je public_47adc3
        push edi
        lea ecx, ds:[ecx]
        public_47adb0 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_47adb0
        pop edi
        public_47adc3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x47ad20)
    }
}

#undef public_47ad57
#undef public_47ad9a
#undef public_47adb0
#undef public_47adc3

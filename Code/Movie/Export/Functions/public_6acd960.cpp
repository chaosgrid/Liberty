#include "Movie-PCH.h"


#define public_6acd9a9 _public_6acd9a9
#define public_6acdad4 _public_6acdad4
#define public_6acdaf6 _public_6acdaf6
#define public_6acdb00 _public_6acdb00
#define public_6acdbcf _public_6acdbcf
#define public_6acdd28 _public_6acdd28
#define public_6acdd54 _public_6acdd54
#define public_6acdd5e _public_6acdd5e
#define public_6acde2d _public_6acde2d
#define public_6acde3d _public_6acde3d

PROC_DECLARE(0x6acd960, internal_6acd960, public_6acd960);
extern "C" NAKED register_t __cdecl internal_6acd960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        sub esp, 0x6C
        add eax, eax
        je public_6acde3d
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x64], edi
        mov ebp, dword ptr ss : [esp+0x78]
        mov edi, dword ptr ss : [esp+0x74]
        shr ebp, 1
        mov dword ptr ss : [esp+0x68], esi
        mov esi, dword ptr ss : [esp+0x70]
        sub edi, ebp
        mov dword ptr ss : [esp+0x60], ebx
        sub esi, ebp
        lea ebx, ss:[ebp+eax*8]
        mov dword ptr ss : [esp+0x48], edi
        cmp esi, edi
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x4C], ebx
        jne public_6acdbcf
        public_6acd9a9 : nop
        mov eax, dword ptr ss : [ebp+esi]
        xor ecx, ecx
        mul eax
        mov dword ptr ss : [ebp+ebp], eax
        mov ebx, edx
        mov eax, dword ptr ss : [ebp+esi]
        mov edx, dword ptr ss : [ebp+esi+4]
        mul edx
        xor edi, edi
        add ebx, eax
        adc ecx, edx
        add ebx, eax
        adc ecx, edx
        mov dword ptr ss : [ebp+ebp+4], ebx
        adc edi, edi
        mov eax, dword ptr ss : [ebp+esi+4]
        mul eax
        add ecx, eax
        mov eax, dword ptr ss : [ebp+esi+8]
        adc edi, edx
        xor ebx, ebx
        mul eax
        add ecx, eax
        mov eax, dword ptr ss : [ebp+esi+8]
        adc edi, edx
        mov edx, dword ptr ss : [ebp+esi+0xC]
        adc ebx, ebx
        push edx
        mul edx
        xor esi, esi
        add edi, eax
        adc ebx, edx
        add edi, eax
        adc ebx, edx
        pop eax
        adc esi, esi
        nop 
        mul eax
        add eax, ebx
        mov ebx, dword ptr ss : [ebp+ebp]
        adc edx, esi
        add ebx, ecx
        mov dword ptr ss : [ebp+ebp+8], ebx
        mov ebx, dword ptr ss : [ebp+ebp+4]
        adc ebx, edi
        mov esi, dword ptr ss : [esp+0x44]
        adc ecx, eax
        mov dword ptr ss : [ebp+ebp+0xC], ebx
        adc edi, edx
        mov dword ptr ss : [ebp+ebp+0x10], ecx
        adc eax, 0
        mov dword ptr ss : [ebp+ebp+0x14], edi
        adc edx, 0
        mov ebx, dword ptr ss : [ebp+esi]
        mov edi, dword ptr ss : [ebp+esi+8]
        mov ecx, dword ptr ss : [ebp+esi+4]
        sub ebx, edi
        mov esi, dword ptr ss : [ebp+esi+0xC]
        sbb ecx, esi
        mov dword ptr ss : [ebp+ebp+0x1C], edx
        sbb edx, edx
        mov dword ptr ss : [ebp+ebp+0x18], eax
        xor ebx, edx
        xor ecx, edx
        sub ebx, edx
        lea ebp, ss:[ebp+0x10]
        sbb ecx, edx
        mov eax, ebx
        mul eax
        mov edi, eax
        mov esi, edx
        mov eax, ebx
        xor ebx, ebx
        mul ecx
        add esi, eax
        push ecx
        adc ebx, edx
        add esi, eax
        adc ebx, edx
        mov ecx, 0
        adc ecx, ecx
        pop eax
        mul eax
        add ebx, eax
        mov eax, dword ptr ss : [ebp+ebp-0x18]
        adc ecx, edx
        sub eax, edi
        mov edi, dword ptr ss : [ebp+ebp-0x14]
        mov dword ptr ss : [ebp+ebp-0x18], eax
        sbb edi, esi
        mov eax, dword ptr ss : [ebp+ebp-0x10]
        sbb eax, ebx
        mov dword ptr ss : [ebp+ebp-0x14], edi
        mov edi, dword ptr ss : [ebp+ebp-0xC]
        mov dword ptr ss : [ebp+ebp-0x10], eax
        sbb edi, ecx
        mov esi, dword ptr ss : [esp+0x44]
        mov ebx, dword ptr ss : [ebp+ebp-8]
        mov ecx, dword ptr ss : [ebp+ebp-4]
        sbb ebx, 0
        mov eax, dword ptr ss : [esp+0x4C]
        sbb ecx, 0
        mov dword ptr ss : [ebp+ebp-0xC], edi
        mov dword ptr ss : [ebp+ebp-8], ebx
        cmp ebp, eax
        mov dword ptr ss : [ebp+ebp-4], ecx
        jne public_6acd9a9
        je public_6acde2d
        public_6acdad4 : nop
        sub eax, edx
        mov edx, dword ptr ss : [ebp+edi-0x10]
        sbb ebx, ecx
        mov ecx, dword ptr ss : [ebp+edi-0xC]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebx
        mov ebx, dword ptr ss : [ebp+edi-4]
        mov eax, dword ptr ss : [ebp+edi-8]
        cmp ecx, ebx
        jne public_6acdaf6
        cmp edx, eax
        public_6acdaf6 : nop
        mov esi, dword ptr ss : [ebp+ebp-0x18]
        jae public_6acdd5e
        public_6acdb00 : nop
        sub eax, edx
        mov edx, dword ptr ss : [esp+0x24]
        sbb ebx, ecx
        mov edi, dword ptr ss : [ebp+ebp-0x14]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], ebx
        mul edx
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x30]
        mov ebx, edx
        mov edx, dword ptr ss : [esp+0x28]
        mul edx
        add eax, ebx
        mov dword ptr ss : [esp+0x34], ecx
        adc edx, 0
        add ecx, eax
        adc eax, edx
        mov dword ptr ss : [esp+0x38], ecx
        adc edx, 0
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x40], edx
        sub eax, ebx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        sbb ebx, ebx
        sub edx, ecx
        sbb ecx, ecx
        add eax, ebx
        add edx, ecx
        xor eax, ebx
        xor edx, ecx
        xor ecx, ebx
        mul edx
        xor eax, ecx
        xor edx, ecx
        mov ebx, dword ptr ss : [esp+0x38]
        nop 
        sbb ebx, eax
        mov eax, dword ptr ss : [esp+0x3C]
        sbb eax, edx
        mov edx, dword ptr ss : [esp+0x40]
        sbb edx, edi
        add ebx, ecx
        adc ecx, eax
        mov eax, dword ptr ss : [esp+0x34]
        adc edx, edi
        add esi, eax
        adc edi, ebx
        mov eax, dword ptr ss : [ebp+ebp-0x10]
        mov dword ptr ss : [ebp+ebp-0x18], esi
        mov dword ptr ss : [ebp+ebp-0x14], edi
        adc eax, ecx
        mov ebx, dword ptr ss : [ebp+ebp-0xC]
        mov esi, dword ptr ss : [esp+0x44]
        mov edi, dword ptr ss : [esp+0x48]
        adc ebx, edx
        mov ecx, dword ptr ss : [ebp+ebp-8]
        mov edx, dword ptr ss : [ebp+ebp-4]
        mov dword ptr ss : [ebp+ebp-0x10], eax
        adc ecx, 0
        mov eax, dword ptr ss : [esp+0x4C]
        adc edx, 0
        mov dword ptr ss : [ebp+ebp-0xC], ebx
        mov dword ptr ss : [ebp+ebp-8], ecx
        cmp ebp, eax
        mov dword ptr ss : [ebp+ebp-4], edx
        je public_6acde2d
        public_6acdbcf : nop
        mov eax, dword ptr ss : [ebp+esi]
        mov edx, dword ptr ss : [ebp+edi]
        mul edx
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+esi+4]
        mov ebx, edx
        mov edx, dword ptr ss : [ebp+edi+4]
        mul edx
        add eax, ebx
        mov dword ptr ss : [ebp+ebp], ecx
        adc edx, 0
        add ecx, eax
        adc eax, edx
        mov dword ptr ss : [ebp+ebp+4], ecx
        adc edx, 0
        mov dword ptr ss : [ebp+ebp+8], eax
        mov eax, dword ptr ss : [ebp+edi+4]
        mov ebx, dword ptr ss : [ebp+edi]
        mov dword ptr ss : [ebp+ebp+0xC], edx
        sub eax, ebx
        mov ecx, dword ptr ss : [ebp+esi]
        mov edx, dword ptr ss : [ebp+esi+4]
        sbb ebx, ebx
        sub edx, ecx
        sbb ecx, ecx
        add eax, ebx
        add edx, ecx
        xor eax, ebx
        xor edx, ecx
        xor ecx, ebx
        mul edx
        xor eax, ecx
        xor edx, ecx
        mov ebx, dword ptr ss : [ebp+ebp+4]
        nop 
        sbb ebx, eax
        mov eax, dword ptr ss : [ebp+ebp+8]
        sbb eax, edx
        mov edx, dword ptr ss : [ebp+ebp+0xC]
        sbb edx, edi
        add ebx, ecx
        adc ecx, eax
        mov dword ptr ss : [ebp+ebp+4], ebx
        adc edx, edi
        mov dword ptr ss : [ebp+ebp+8], ecx
        mov dword ptr ss : [ebp+ebp+0xC], edx
        mov eax, dword ptr ss : [ebp+esi+8]
        mov edx, dword ptr ss : [ebp+edi+8]
        add ebp, 0x10
        mul edx
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+esi-4]
        mov ebx, edx
        mov edx, dword ptr ss : [ebp+edi-4]
        mul edx
        add eax, ebx
        mov dword ptr ss : [ebp+ebp-0x10], ecx
        adc edx, 0
        add ecx, eax
        adc eax, edx
        mov dword ptr ss : [ebp+ebp-0xC], ecx
        adc edx, 0
        mov dword ptr ss : [ebp+ebp-8], eax
        mov eax, dword ptr ss : [ebp+edi-4]
        mov ebx, dword ptr ss : [ebp+edi-8]
        mov dword ptr ss : [ebp+ebp-4], edx
        sub eax, ebx
        mov ecx, dword ptr ss : [ebp+esi-8]
        mov edx, dword ptr ss : [ebp+esi-4]
        sbb ebx, ebx
        sub edx, ecx
        sbb ecx, ecx
        add eax, ebx
        add edx, ecx
        xor eax, ebx
        xor edx, ecx
        xor ecx, ebx
        mul edx
        xor eax, ecx
        xor edx, ecx
        mov ebx, dword ptr ss : [ebp+ebp-0xC]
        nop 
        sbb ebx, eax
        mov eax, dword ptr ss : [ebp+ebp-8]
        sbb eax, edx
        mov edx, dword ptr ss : [ebp+ebp-4]
        sbb edx, edi
        add ebx, ecx
        adc ecx, eax
        mov eax, dword ptr ss : [ebp+ebp-0x10]
        adc edx, edi
        mov esi, dword ptr ss : [ebp+ebp-0x18]
        add eax, esi
        mov esi, dword ptr ss : [ebp+ebp-0x14]
        adc ebx, esi
        mov esi, dword ptr ss : [ebp+ebp-0x20]
        adc ecx, 0
        mov edi, dword ptr ss : [ebp+ebp-0x1C]
        adc edx, 0
        add esi, eax
        adc edi, ebx
        mov dword ptr ss : [ebp+ebp-0x18], esi
        adc eax, ecx
        mov dword ptr ss : [ebp+ebp-0x14], edi
        adc ebx, edx
        mov esi, dword ptr ss : [esp+0x44]
        adc ecx, 0
        mov edi, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [ebp+ebp-0x10], eax
        mov dword ptr ss : [ebp+ebp-0xC], ebx
        adc edx, 0
        mov dword ptr ss : [ebp+ebp-8], ecx
        mov ebx, dword ptr ss : [ebp+esi-0xC]
        mov ecx, dword ptr ss : [ebp+esi-4]
        cmp ecx, ebx
        mov dword ptr ss : [ebp+ebp-4], edx
        mov edx, dword ptr ss : [ebp+esi-8]
        jne public_6acdd28
        cmp edx, dword ptr ss : [ebp+esi-0x10]
        public_6acdd28 : nop
        mov eax, dword ptr ss : [ebp+esi-0x10]
        jb public_6acdad4
        sub edx, eax
        mov eax, dword ptr ss : [ebp+edi-0x10]
        sbb ecx, ebx
        mov ebx, dword ptr ss : [ebp+edi-0xC]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ss : [ebp+edi-4]
        mov edx, dword ptr ss : [ebp+edi-8]
        cmp ecx, ebx
        jne public_6acdd54
        cmp edx, eax
        public_6acdd54 : nop
        mov esi, dword ptr ss : [ebp+ebp-0x18]
        jb public_6acdb00
        public_6acdd5e : nop
        sub edx, eax
        mov eax, dword ptr ss : [esp+0x24]
        sbb ecx, ebx
        mov edi, dword ptr ss : [ebp+ebp-0x14]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], ecx
        mul edx
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x28]
        mov ebx, edx
        mov edx, dword ptr ss : [esp+0x30]
        mul edx
        add eax, ebx
        mov dword ptr ss : [esp+0x34], ecx
        adc edx, 0
        add ecx, eax
        adc eax, edx
        mov dword ptr ss : [esp+0x38], ecx
        adc edx, 0
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x30]
        mov ebx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x40], edx
        sub eax, ebx
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        sbb ebx, ebx
        sub edx, ecx
        sbb ecx, ecx
        add eax, ebx
        add edx, ecx
        xor eax, ebx
        xor edx, ecx
        xor ecx, ebx
        mul edx
        xor eax, ecx
        xor edx, ecx
        mov ebx, dword ptr ss : [esp+0x38]
        nop 
        sbb ebx, eax
        mov eax, dword ptr ss : [esp+0x3C]
        sbb eax, edx
        mov edx, dword ptr ss : [esp+0x40]
        sbb edx, edi
        add ebx, ecx
        adc ecx, eax
        mov eax, dword ptr ss : [esp+0x34]
        adc edx, edi
        sub esi, eax
        sbb edi, ebx
        mov eax, dword ptr ss : [ebp+ebp-0x10]
        mov dword ptr ss : [ebp+ebp-0x18], esi
        mov dword ptr ss : [ebp+ebp-0x14], edi
        sbb eax, ecx
        mov ebx, dword ptr ss : [ebp+ebp-0xC]
        mov esi, dword ptr ss : [esp+0x44]
        mov edi, dword ptr ss : [esp+0x48]
        sbb ebx, edx
        mov ecx, dword ptr ss : [ebp+ebp-8]
        mov edx, dword ptr ss : [ebp+ebp-4]
        mov dword ptr ss : [ebp+ebp-0x10], eax
        sbb ecx, 0
        mov eax, dword ptr ss : [esp+0x4C]
        sbb edx, 0
        mov dword ptr ss : [ebp+ebp-0xC], ebx
        mov dword ptr ss : [ebp+ebp-8], ecx
        cmp ebp, eax
        mov dword ptr ss : [ebp+ebp-4], edx
        jne public_6acdbcf
        public_6acde2d : nop
        mov ebp, dword ptr ss : [esp+0x5C]
        mov ebx, dword ptr ss : [esp+0x60]
        mov edi, dword ptr ss : [esp+0x64]
        mov esi, dword ptr ss : [esp+0x68]
        public_6acde3d : nop
        add esp, 0x6C
        ret 0x10
        UNREACHABLE_TRAP(0x6acd960)
    }
}

#undef public_6acd9a9
#undef public_6acdad4
#undef public_6acdaf6
#undef public_6acdb00
#undef public_6acdbcf
#undef public_6acdd28
#undef public_6acdd54
#undef public_6acdd5e
#undef public_6acde2d
#undef public_6acde3d

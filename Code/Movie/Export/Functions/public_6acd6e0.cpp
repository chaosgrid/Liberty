#include "Movie-PCH.h"


#define public_6acd72c _public_6acd72c
#define public_6acd7c8 _public_6acd7c8
#define public_6acd948 _public_6acd948
#define public_6acd958 _public_6acd958

PROC_DECLARE(0x6acd6e0, internal_6acd6e0, public_6acd6e0);
extern "C" NAKED register_t __cdecl internal_6acd6e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        sub esp, 0x6C
        test eax, eax
        je public_6acd958
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x64], edi
        mov ebp, dword ptr ss : [esp+0x78]
        mov edi, dword ptr ss : [esp+0x74]
        shr ebp, 1
        mov dword ptr ss : [esp+0x68], esi
        mov esi, dword ptr ss : [esp+0x70]
        lea eax, ds:[eax+eax*2]
        mov dword ptr ss : [esp+0x60], ebx
        sub edi, ebp
        sub esi, ebp
        lea ebx, ss:[ebp+eax*4]
        mov dword ptr ss : [esp+0x48], edi
        cmp esi, edi
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x4C], ebx
        jne public_6acd7c8
        public_6acd72c : nop
        mov eax, dword ptr ss : [ebp+esi]
        nop 
        mul eax
        mov dword ptr ss : [ebp+ebp], eax
        mov ebx, edx
        mov eax, dword ptr ss : [ebp+esi+4]
        nop 
        mul eax
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+esi]
        mov edi, edx
        mov edx, dword ptr ss : [ebp+esi+4]
        mul edx
        add ebx, eax
        lea ebp, ss:[ebp+0xC]
        adc ecx, edx
        nop 
        adc edi, 0
        add ebx, eax
        adc ecx, edx
        mov eax, dword ptr ss : [ebp+esi-4]
        adc edi, 0
        mov edx, dword ptr ss : [ebp+esi-0xC]
        mul edx
        add ecx, eax
        mov dword ptr ss : [ebp+ebp-0x14], ebx
        adc edi, edx
        mov ebx, 0
        adc ebx, ebx
        add ecx, eax
        adc edi, edx
        mov edx, dword ptr ss : [ebp+esi-4]
        adc ebx, 0
        mov eax, dword ptr ss : [ebp+esi-8]
        mul edx
        add edi, eax
        mov dword ptr ss : [ebp+ebp-0x10], ecx
        adc ebx, edx
        mov ecx, 0
        adc ecx, ecx
        add edi, eax
        adc ebx, edx
        mov eax, dword ptr ss : [ebp+esi-4]
        adc ecx, 0
        mov dword ptr ss : [ebp+ebp-0xC], edi
        mul eax
        mov edi, dword ptr ss : [esp+0x4C]
        add ebx, eax
        adc ecx, edx
        cmp ebp, edi
        mov dword ptr ss : [ebp+ebp-8], ebx
        mov dword ptr ss : [ebp+ebp-4], ecx
        jne public_6acd72c
        je public_6acd948
        public_6acd7c8 : nop
        mov eax, dword ptr ss : [ebp+esi]
        mov edx, dword ptr ss : [ebp+edi]
        mul edx
        mov dword ptr ss : [ebp+ebp], eax
        mov ebx, edx
        mov eax, dword ptr ss : [ebp+esi+4]
        mov edx, dword ptr ss : [ebp+edi+4]
        mul edx
        add ebx, eax
        mov eax, dword ptr ss : [ebp+esi+8]
        mov ecx, edx
        mov edx, dword ptr ss : [ebp+edi+8]
        adc ecx, 0
        mov dword ptr ss : [ebp+ebp+0xC], ebx
        mul edx
        add ecx, eax
        mov eax, dword ptr ss : [ebp+ebp]
        adc edx, 0
        add eax, ebx
        adc ebx, ecx
        mov dword ptr ss : [ebp+ebp+0x10], ecx
        adc ecx, edx
        mov dword ptr ss : [ebp+ebp+0x14], edx
        mov dword ptr ss : [ebp+ebp+4], eax
        mov eax, dword ptr ss : [ebp+ebp]
        adc edx, 0
        add ebx, eax
        mov eax, dword ptr ss : [ebp+ebp+0xC]
        mov dword ptr ss : [ebp+ebp+8], ebx
        adc ecx, eax
        mov eax, dword ptr ss : [ebp+ebp+0x10]
        mov ebx, dword ptr ss : [ebp+ebp+0x14]
        mov dword ptr ss : [ebp+ebp+0xC], ecx
        adc edx, eax
        mov eax, dword ptr ss : [ebp+esi+4]
        adc ebx, 0
        mov ecx, dword ptr ss : [ebp+esi]
        mov dword ptr ss : [ebp+ebp+0x10], edx
        mov dword ptr ss : [ebp+ebp+0x14], ebx
        sub eax, ecx
        mov edx, dword ptr ss : [ebp+edi+4]
        sbb ecx, ecx
        mov ebx, dword ptr ss : [ebp+edi]
        add eax, ecx
        sub edx, ebx
        sbb ebx, ebx
        xor eax, ecx
        add edx, ebx
        xor ecx, ebx
        xor edx, ebx
        mov dword ptr ss : [esp+0x1C], ecx
        mul edx
        xor eax, ecx
        xor edx, ecx
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], edx
        mov ecx, dword ptr ss : [ebp+esi+4]
        mov eax, dword ptr ss : [ebp+esi+8]
        mov ebx, dword ptr ss : [ebp+edi+4]
        sub eax, ecx
        sbb ecx, ecx
        mov edx, dword ptr ss : [ebp+edi+8]
        add eax, ecx
        sub edx, ebx
        sbb ebx, ebx
        xor eax, ecx
        add edx, ebx
        xor ecx, ebx
        xor edx, ebx
        mov dword ptr ss : [esp+0x20], ecx
        mul edx
        xor eax, ecx
        xor edx, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], edx
        mov ecx, dword ptr ss : [ebp+esi]
        mov eax, dword ptr ss : [ebp+esi+8]
        mov ebx, dword ptr ss : [ebp+edi]
        mov edx, dword ptr ss : [ebp+edi+8]
        sub eax, ecx
        mov esi, dword ptr ss : [ebp+ebp+8]
        sbb ecx, ecx
        sub edx, ebx
        sbb ebx, ebx
        add eax, ecx
        add edx, ebx
        xor eax, ecx
        xor edx, ebx
        xor ecx, ebx
        mul edx
        mov edi, dword ptr ss : [ebp+ebp+0xC]
        xor eax, ecx
        xor edx, ecx
        sub eax, ecx
        sbb edx, ecx
        mov ebx, dword ptr ss : [ebp+ebp+0x10]
        sbb ecx, ecx
        sub esi, eax
        sbb edi, edx
        mov eax, dword ptr ss : [ebp+ebp+0x14]
        sbb ebx, ecx
        mov edx, dword ptr ss : [ebp+ebp+4]
        sbb eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        add edx, ecx
        lea ebp, ss:[ebp+0xC]
        adc esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        adc edi, ecx
        nop 
        adc ebx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        adc eax, esp
        sub edx, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        sbb esi, ecx
        mov dword ptr ss : [ebp+ebp-0x14], edx
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        sbb edi, ecx
        mov dword ptr ss : [ebp+ebp-0x10], esi
        sbb ebx, edx
        mov ecx, dword ptr ss : [esp+0x4C]
        sbb eax, esp
        mov dword ptr ss : [ebp+ebp-0xC], edi
        mov esi, dword ptr ss : [esp+0x44]
        mov edi, dword ptr ss : [esp+0x48]
        cmp ebp, ecx
        mov dword ptr ss : [ebp+ebp-8], ebx
        mov dword ptr ss : [ebp+ebp-4], eax
        jne public_6acd7c8
        public_6acd948 : nop
        mov ebp, dword ptr ss : [esp+0x5C]
        mov ebx, dword ptr ss : [esp+0x60]
        mov edi, dword ptr ss : [esp+0x64]
        mov esi, dword ptr ss : [esp+0x68]
        public_6acd958 : nop
        add esp, 0x6C
        ret 0x10
        UNREACHABLE_TRAP(0x6acd6e0)
    }
}

#undef public_6acd72c
#undef public_6acd7c8
#undef public_6acd948
#undef public_6acd958

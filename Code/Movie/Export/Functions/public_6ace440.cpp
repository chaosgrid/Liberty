#include "Movie-PCH.h"


#define public_6ace482 _public_6ace482
#define public_6ace53b _public_6ace53b
#define public_6ace676 _public_6ace676
#define public_6ace684 _public_6ace684
#define public_6ace6b4 _public_6ace6b4
#define public_6ace6e0 _public_6ace6e0
#define public_6ace786 _public_6ace786
#define public_6ace7de _public_6ace7de

PROC_DECLARE(0x6ace440, internal_6ace440, public_6ace440);
extern "C" NAKED register_t __cdecl internal_6ace440()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        sub esp, 0x6C
        imul eax, 0x60
        mov dword ptr ss : [esp+0x64], edi
        mov dword ptr ss : [esp+0x68], esi
        mov edi, dword ptr ss : [esp+0x78]
        mov esi, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x60], ebx
        xor edx, edx
        mov ebx, dword ptr ss : [esp+0x74]
        test eax, eax
        mov dword ptr ss : [esp], edx
        lea ebp, ds:[edi+eax]
        je public_6ace7de
        cmp esi, ebx
        mov dword ptr ss : [esp+0x54], ebp
        je public_6ace676
        public_6ace482 : nop
        mov ebp, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [esi]
        mul ebp
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, edx
        mul ebp
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [edi+4], eax
        mov eax, dword ptr ds : [esi+8]
        adc ecx, edx
        mov dword ptr ss : [esp+0x50], ebx
        mul ebp
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+0xC]
        adc ecx, edx
        mul ebp
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [esi+0x10]
        adc ecx, edx
        mul ebp
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ds : [esi+0x14]
        adc ecx, edx
        mul ebp
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [edi+0x14], eax
        mov eax, dword ptr ds : [esi+0x18]
        adc ecx, edx
        mul ebp
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [edi+0x18], eax
        mov eax, dword ptr ds : [esi+0x1C]
        adc ecx, edx
        mul ebp
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [edi+0x1C], eax
        mov eax, dword ptr ds : [esi+0x20]
        adc ecx, edx
        mul ebp
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [edi+0x20], eax
        mov eax, dword ptr ds : [esi+0x24]
        adc ecx, edx
        mul ebp
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [edi+0x24], eax
        mov eax, dword ptr ds : [esi+0x28]
        adc ecx, edx
        mul ebp
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [edi+0x28], eax
        mov eax, dword ptr ds : [esi+0x2C]
        adc ecx, edx
        mul ebp
        mov ebp, 0xFFFFFFF5
        add eax, ecx
        adc edx, 0
        mov dword ptr ds : [edi+0x2C], eax
        mov dword ptr ds : [edi+0x30], edx
        public_6ace53b : nop
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [ebx+ebp*4+0x30]
        mov ecx, dword ptr ds : [edi+ebp*4+0x30]
        mul ebx
        add ecx, eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+ebp*4+0x30], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x34]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+ebp*4+0x34], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x38]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+ebp*4+0x38], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x3C]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+ebp*4+0x3C], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x40]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+ebp*4+0x40], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x44]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+ebp*4+0x44], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x48]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+ebp*4+0x48], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x4C]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edi+ebp*4+0x4C], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x50]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edi+ebp*4+0x50], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x54]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+ebp*4+0x54], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x58]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edi+ebp*4+0x58], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        mov ebx, dword ptr ss : [esp+0x50]
        add eax, dword ptr ds : [edi+ebp*4+0x5C]
        adc edx, 0
        add ecx, eax
        adc edx, 0
        mov dword ptr ds : [edi+ebp*4+0x5C], ecx
        mov dword ptr ds : [edi+ebp*4+0x60], edx
        inc ebp
        jne public_6ace53b
        mov eax, dword ptr ss : [esp+0x54]
        add edi, 0x60
        add ebx, 0x30
        add esi, 0x30
        cmp eax, edi
        jne public_6ace482
        jmp public_6ace7de
        public_6ace676 : nop
        mov ebx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mul ebx
        mov ebp, 0xFFFFFFFB
        mov ecx, edx
        public_6ace684 : nop
        mov dword ptr ds : [edi+ebp*8+0x2C], eax
        mov eax, dword ptr ds : [esi+ebp*8+0x30]
        mul ebx
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mov dword ptr ds : [edi+ebp*8+0x30], eax
        mov eax, dword ptr ds : [esi+ebp*8+0x34]
        mul ebx
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        inc ebp
        jne public_6ace684
        mov ebp, 0xFFFFFFF8
        mov dword ptr ds : [edi+0x2C], eax
        mov dword ptr ds : [edi+0x30], ecx
        public_6ace6b4 : nop
        mov eax, dword ptr ds : [esi+ebp*4+0x24]
        mov ebx, dword ptr ds : [esi+ebp*4+0x28]
        mov ecx, dword ptr ds : [edi+ebp*4+0x2C]
        mov dword ptr ss : [esp+4], eax
        mul ebx
        mov dword ptr ss : [esp+0x58], ebp
        mov dword ptr ss : [esp+8], ebx
        mov ebx, dword ptr ss : [esp]
        add eax, ecx
        adc ebx, edx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x58], ebp
        mov dword ptr ds : [edi+ebp*4+0x2C], eax
        public_6ace6e0 : nop
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi+ebp*4+0x2C]
        mul edx
        add eax, dword ptr ds : [edi+ebp*4+0x30]
        adc edx, 0
        add eax, ebx
        mov ebx, dword ptr ss : [esp]
        mov dword ptr ds : [edi+ebp*4+0x30], eax
        mov eax, dword ptr ss : [esp+8]
        adc ebx, edx
        mov edx, dword ptr ds : [esi+ebp*4+0x2C]
        mul edx
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc edx, 0
        add ebx, eax
        adc ecx, edx
        inc ebp
        jle public_6ace6e0
        mov ebp, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [edi+0x34], ebx
        mov dword ptr ds : [edi+0x38], ecx
        add ebp, 2
        lea edi, ds:[edi+8]
        jne public_6ace6b4
        mov eax, dword ptr ds : [esi+0x28]
        mov ebp, dword ptr ds : [esi+0x24]
        mul ebp
        add eax, ebx
        mov ebx, dword ptr ss : [esp]
        adc ebx, edx
        mov dword ptr ds : [edi+0x2C], eax
        mov eax, dword ptr ds : [esi+0x2C]
        mul ebp
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc edx, 0
        add ebx, eax
        adc ecx, edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+0x30], ebx
        mul edx
        add ecx, eax
        mov eax, dword ptr ds : [esi]
        adc edx, 0
        mov ebx, dword ptr ds : [edi-0x1C]
        mov dword ptr ds : [edi+0x34], ecx
        mov dword ptr ds : [edi+0x38], edx
        mul eax
        mov ecx, dword ptr ss : [esp]
        add edx, ebx
        mov ebp, 0xFFFFFFF6
        mov dword ptr ds : [edi-0x20], eax
        adc ecx, ecx
        add ebx, edx
        mov eax, dword ptr ds : [esi+4]
        adc ecx, 0
        mov dword ptr ds : [edi-0x1C], ebx
        mov ebx, dword ptr ds : [edi-0x18]
        mul eax
        public_6ace786 : nop
        add eax, ebx
        adc edx, 0
        add eax, ebx
        adc edx, 0
        mov ebx, dword ptr ds : [edi+ebp*8+0x3C]
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc edx, ebx
        mov dword ptr ds : [edi+ebp*8+0x38], eax
        adc ecx, ecx
        add edx, ebx
        adc ecx, 0
        mov eax, dword ptr ds : [esi+ebp*4+0x30]
        mov ebx, dword ptr ds : [edi+ebp*8+0x40]
        mov dword ptr ds : [edi+ebp*8+0x3C], edx
        mul eax
        inc ebp
        jne public_6ace786
        add eax, ebx
        adc edx, 0
        add eax, ebx
        adc edx, 0
        add eax, ecx
        adc edx, 0
        mov dword ptr ds : [edi+0x38], eax
        mov dword ptr ds : [edi+0x3C], edx
        mov eax, dword ptr ss : [esp+0x54]
        lea edi, ds:[edi+0x40]
        add esi, 0x30
        cmp eax, edi
        jne public_6ace676
        public_6ace7de : nop
        mov ebp, dword ptr ss : [esp+0x5C]
        mov ebx, dword ptr ss : [esp+0x60]
        mov edi, dword ptr ss : [esp+0x64]
        mov esi, dword ptr ss : [esp+0x68]
        add esp, 0x6C
        ret 0x10
        UNREACHABLE_TRAP(0x6ace440)
    }
}

#undef public_6ace482
#undef public_6ace53b
#undef public_6ace676
#undef public_6ace684
#undef public_6ace6b4
#undef public_6ace6e0
#undef public_6ace786
#undef public_6ace7de

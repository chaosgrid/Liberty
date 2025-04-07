#include "Movie-PCH.h"


#define public_6ace162 _public_6ace162
#define public_6ace1df _public_6ace1df
#define public_6ace2be _public_6ace2be
#define public_6ace2cc _public_6ace2cc
#define public_6ace2fc _public_6ace2fc
#define public_6ace328 _public_6ace328
#define public_6ace3ce _public_6ace3ce
#define public_6ace426 _public_6ace426

PROC_DECLARE(0x6ace120, internal_6ace120, public_6ace120);
extern "C" NAKED register_t __cdecl internal_6ace120()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        sub esp, 0x6C
        imul eax, 0x40
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
        je public_6ace426
        cmp esi, ebx
        mov dword ptr ss : [esp+0x54], ebp
        je public_6ace2be
        public_6ace162 : nop
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
        mov ebp, 0xFFFFFFF9
        add eax, ecx
        adc edx, 0
        mov dword ptr ds : [edi+0x1C], eax
        mov dword ptr ds : [edi+0x20], edx
        public_6ace1df : nop
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [ebx+ebp*4+0x20]
        mov ecx, dword ptr ds : [edi+ebp*4+0x20]
        mul ebx
        add ecx, eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+ebp*4+0x20], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x24]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+ebp*4+0x24], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x28]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+ebp*4+0x28], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x2C]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+ebp*4+0x2C], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x30]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+ebp*4+0x30], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x34]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+ebp*4+0x34], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x38]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+ebp*4+0x38], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        mov ebx, dword ptr ss : [esp+0x50]
        add eax, dword ptr ds : [edi+ebp*4+0x3C]
        adc edx, 0
        add ecx, eax
        adc edx, 0
        mov dword ptr ds : [edi+ebp*4+0x3C], ecx
        mov dword ptr ds : [edi+ebp*4+0x40], edx
        inc ebp
        jne public_6ace1df
        mov eax, dword ptr ss : [esp+0x54]
        add edi, 0x40
        add ebx, 0x20
        add esi, 0x20
        cmp eax, edi
        jne public_6ace162
        jmp public_6ace426
        public_6ace2be : nop
        mov ebx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mul ebx
        mov ebp, 0xFFFFFFFD
        mov ecx, edx
        public_6ace2cc : nop
        mov dword ptr ds : [edi+ebp*8+0x1C], eax
        mov eax, dword ptr ds : [esi+ebp*8+0x20]
        mul ebx
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mov dword ptr ds : [edi+ebp*8+0x20], eax
        mov eax, dword ptr ds : [esi+ebp*8+0x24]
        mul ebx
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        inc ebp
        jne public_6ace2cc
        mov ebp, 0xFFFFFFFC
        mov dword ptr ds : [edi+0x1C], eax
        mov dword ptr ds : [edi+0x20], ecx
        public_6ace2fc : nop
        mov eax, dword ptr ds : [esi+ebp*4+0x14]
        mov ebx, dword ptr ds : [esi+ebp*4+0x18]
        mov ecx, dword ptr ds : [edi+ebp*4+0x1C]
        mov dword ptr ss : [esp+4], eax
        mul ebx
        mov dword ptr ss : [esp+0x58], ebp
        mov dword ptr ss : [esp+8], ebx
        mov ebx, dword ptr ss : [esp]
        add eax, ecx
        adc ebx, edx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x58], ebp
        mov dword ptr ds : [edi+ebp*4+0x1C], eax
        public_6ace328 : nop
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi+ebp*4+0x1C]
        mul edx
        add eax, dword ptr ds : [edi+ebp*4+0x20]
        adc edx, 0
        add eax, ebx
        mov ebx, dword ptr ss : [esp]
        mov dword ptr ds : [edi+ebp*4+0x20], eax
        mov eax, dword ptr ss : [esp+8]
        adc ebx, edx
        mov edx, dword ptr ds : [esi+ebp*4+0x1C]
        mul edx
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc edx, 0
        add ebx, eax
        adc ecx, edx
        inc ebp
        jle public_6ace328
        mov ebp, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [edi+0x24], ebx
        mov dword ptr ds : [edi+0x28], ecx
        add ebp, 2
        lea edi, ds:[edi+8]
        jne public_6ace2fc
        mov eax, dword ptr ds : [esi+0x18]
        mov ebp, dword ptr ds : [esi+0x14]
        mul ebp
        add eax, ebx
        mov ebx, dword ptr ss : [esp]
        adc ebx, edx
        mov dword ptr ds : [edi+0x1C], eax
        mov eax, dword ptr ds : [esi+0x1C]
        mul ebp
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc edx, 0
        add ebx, eax
        adc ecx, edx
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+0x20], ebx
        mul edx
        add ecx, eax
        mov eax, dword ptr ds : [esi]
        adc edx, 0
        mov ebx, dword ptr ds : [edi-0xC]
        mov dword ptr ds : [edi+0x24], ecx
        mov dword ptr ds : [edi+0x28], edx
        mul eax
        mov ecx, dword ptr ss : [esp]
        add edx, ebx
        mov ebp, 0xFFFFFFFA
        mov dword ptr ds : [edi-0x10], eax
        adc ecx, ecx
        add ebx, edx
        mov eax, dword ptr ds : [esi+4]
        adc ecx, 0
        mov dword ptr ds : [edi-0xC], ebx
        mov ebx, dword ptr ds : [edi-8]
        mul eax
        public_6ace3ce : nop
        add eax, ebx
        adc edx, 0
        add eax, ebx
        adc edx, 0
        mov ebx, dword ptr ds : [edi+ebp*8+0x2C]
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc edx, ebx
        mov dword ptr ds : [edi+ebp*8+0x28], eax
        adc ecx, ecx
        add edx, ebx
        adc ecx, 0
        mov eax, dword ptr ds : [esi+ebp*4+0x20]
        mov ebx, dword ptr ds : [edi+ebp*8+0x30]
        mov dword ptr ds : [edi+ebp*8+0x2C], edx
        mul eax
        inc ebp
        jne public_6ace3ce
        add eax, ebx
        adc edx, 0
        add eax, ebx
        adc edx, 0
        add eax, ecx
        adc edx, 0
        mov dword ptr ds : [edi+0x28], eax
        mov dword ptr ds : [edi+0x2C], edx
        mov eax, dword ptr ss : [esp+0x54]
        lea edi, ds:[edi+0x30]
        add esi, 0x20
        cmp eax, edi
        jne public_6ace2be
        public_6ace426 : nop
        mov ebp, dword ptr ss : [esp+0x5C]
        mov ebx, dword ptr ss : [esp+0x60]
        mov edi, dword ptr ss : [esp+0x64]
        mov esi, dword ptr ss : [esp+0x68]
        add esp, 0x6C
        ret 0x10
        UNREACHABLE_TRAP(0x6ace120)
    }
}

#undef public_6ace162
#undef public_6ace1df
#undef public_6ace2be
#undef public_6ace2cc
#undef public_6ace2fc
#undef public_6ace328
#undef public_6ace3ce
#undef public_6ace426

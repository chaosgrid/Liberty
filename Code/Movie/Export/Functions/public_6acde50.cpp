#include "Movie-PCH.h"


#define public_6acde92 _public_6acde92
#define public_6acdef1 _public_6acdef1
#define public_6acdfa2 _public_6acdfa2
#define public_6acdfb0 _public_6acdfb0
#define public_6acdfe0 _public_6acdfe0
#define public_6ace00c _public_6ace00c
#define public_6ace0b1 _public_6ace0b1
#define public_6ace109 _public_6ace109

PROC_DECLARE(0x6acde50, internal_6acde50, public_6acde50);
extern "C" NAKED register_t __cdecl internal_6acde50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        sub esp, 0x6C
        imul eax, 0x30
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
        je public_6ace109
        cmp esi, ebx
        mov dword ptr ss : [esp+0x54], ebp
        je public_6acdfa2
        public_6acde92 : nop
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
        mov ebp, 0xFFFFFFFB
        add eax, ecx
        adc edx, 0
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0x18], edx
        public_6acdef1 : nop
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [ebx+ebp*4+0x18]
        mov ecx, dword ptr ds : [edi+ebp*4+0x18]
        mul ebx
        add ecx, eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+ebp*4+0x18], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x1C]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+ebp*4+0x1C], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x20]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+ebp*4+0x20], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x24]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+ebp*4+0x24], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        add eax, dword ptr ds : [edi+ebp*4+0x28]
        adc edx, 0
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+ebp*4+0x28], ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mul ebx
        mov ebx, dword ptr ss : [esp+0x50]
        add eax, dword ptr ds : [edi+ebp*4+0x2C]
        adc edx, 0
        add ecx, eax
        adc edx, 0
        mov dword ptr ds : [edi+ebp*4+0x2C], ecx
        mov dword ptr ds : [edi+ebp*4+0x30], edx
        inc ebp
        jne public_6acdef1
        mov eax, dword ptr ss : [esp+0x54]
        add edi, 0x30
        add ebx, 0x18
        add esi, 0x18
        cmp eax, edi
        jne public_6acde92
        jmp public_6ace109
        public_6acdfa2 : nop
        mov ebx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mul ebx
        mov ebp, 0xFFFFFFFE
        mov ecx, edx
        public_6acdfb0 : nop
        mov dword ptr ds : [edi+ebp*8+0x14], eax
        mov eax, dword ptr ds : [esi+ebp*8+0x18]
        mul ebx
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        mov dword ptr ds : [edi+ebp*8+0x18], eax
        mov eax, dword ptr ds : [esi+ebp*8+0x1C]
        mul ebx
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc ecx, edx
        inc ebp
        jne public_6acdfb0
        mov ebp, 0xFFFFFFFE
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0x18], ecx
        public_6acdfe0 : nop
        mov eax, dword ptr ds : [esi+ebp*4+0xC]
        mov ebx, dword ptr ds : [esi+ebp*4+0x10]
        mov ecx, dword ptr ds : [edi+ebp*4+0x14]
        mov dword ptr ss : [esp+4], eax
        mul ebx
        mov dword ptr ss : [esp+0x58], ebp
        mov dword ptr ss : [esp+8], ebx
        mov ebx, dword ptr ss : [esp]
        add eax, ecx
        adc ebx, edx
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x58], ebp
        mov dword ptr ds : [edi+ebp*4+0x14], eax
        public_6ace00c : nop
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi+ebp*4+0x14]
        mul edx
        add eax, dword ptr ds : [edi+ebp*4+0x18]
        adc edx, 0
        add eax, ebx
        mov ebx, dword ptr ss : [esp]
        mov dword ptr ds : [edi+ebp*4+0x18], eax
        mov eax, dword ptr ss : [esp+8]
        adc ebx, edx
        mov edx, dword ptr ds : [esi+ebp*4+0x14]
        mul edx
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc edx, 0
        add ebx, eax
        adc ecx, edx
        inc ebp
        jle public_6ace00c
        mov ebp, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x20], ecx
        add ebp, 2
        lea edi, ds:[edi+8]
        jne public_6acdfe0
        mov eax, dword ptr ds : [esi+0x10]
        mov ebp, dword ptr ds : [esi+0xC]
        mul ebp
        add eax, ebx
        mov ebx, dword ptr ss : [esp]
        adc ebx, edx
        mov dword ptr ds : [edi+0x14], eax
        mov eax, dword ptr ds : [esi+0x14]
        mul ebp
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc edx, 0
        add ebx, eax
        adc ecx, edx
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x18], ebx
        mul edx
        add ecx, eax
        mov eax, dword ptr ds : [esi]
        adc edx, 0
        mov ebx, dword ptr ds : [edi-4]
        mov dword ptr ds : [edi+0x1C], ecx
        mov dword ptr ds : [edi+0x20], edx
        mul eax
        mov ecx, dword ptr ss : [esp]
        add edx, ebx
        mov ebp, 0xFFFFFFFC
        mov dword ptr ds : [edi-8], eax
        adc ecx, ecx
        add ebx, edx
        mov eax, dword ptr ds : [esi+4]
        adc ecx, 0
        mov dword ptr ds : [edi-4], ebx
        mov ebx, dword ptr ds : [edi]
        mul eax
        public_6ace0b1 : nop
        add eax, ebx
        adc edx, 0
        add eax, ebx
        adc edx, 0
        mov ebx, dword ptr ds : [edi+ebp*8+0x24]
        add eax, ecx
        mov ecx, dword ptr ss : [esp]
        adc edx, ebx
        mov dword ptr ds : [edi+ebp*8+0x20], eax
        adc ecx, ecx
        add edx, ebx
        adc ecx, 0
        mov eax, dword ptr ds : [esi+ebp*4+0x18]
        mov ebx, dword ptr ds : [edi+ebp*8+0x28]
        mov dword ptr ds : [edi+ebp*8+0x24], edx
        mul eax
        inc ebp
        jne public_6ace0b1
        add eax, ebx
        adc edx, 0
        add eax, ebx
        adc edx, 0
        add eax, ecx
        adc edx, 0
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x24], edx
        mov eax, dword ptr ss : [esp+0x54]
        lea edi, ds:[edi+0x28]
        add esi, 0x18
        cmp eax, edi
        jne public_6acdfa2
        public_6ace109 : nop
        mov ebp, dword ptr ss : [esp+0x5C]
        mov ebx, dword ptr ss : [esp+0x60]
        mov edi, dword ptr ss : [esp+0x64]
        mov esi, dword ptr ss : [esp+0x68]
        add esp, 0x6C
        ret 0x10
        UNREACHABLE_TRAP(0x6acde50)
    }
}

#undef public_6acde92
#undef public_6acdef1
#undef public_6acdfa2
#undef public_6acdfb0
#undef public_6acdfe0
#undef public_6ace00c
#undef public_6ace0b1
#undef public_6ace109

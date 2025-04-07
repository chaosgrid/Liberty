#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6aca920);

#define public_6aca97f _public_6aca97f
#define public_6aca991 _public_6aca991
#define public_6aca9ca _public_6aca9ca
#define public_6aca9d9 _public_6aca9d9
#define public_6aca9f0 _public_6aca9f0
#define public_6aca9fc _public_6aca9fc
#define public_6acaa1f _public_6acaa1f
#define public_6acaa29 _public_6acaa29
#define public_6acaa49 _public_6acaa49
#define public_6acaa6a _public_6acaa6a
#define public_6acaa8b _public_6acaa8b
#define public_6acaa9f _public_6acaa9f
#define public_6acaabe _public_6acaabe
#define public_6acaaf7 _public_6acaaf7
#define public_6acab10 _public_6acab10
#define public_6acab65 _public_6acab65
#define public_6acac4f _public_6acac4f
#define public_6acacc4 _public_6acacc4
#define public_6acadf5 _public_6acadf5
#define public_6acae05 _public_6acae05

PROC_DECLARE(0x6aca920, internal_6aca920, public_6aca920);
extern "C" NAKED register_t __cdecl internal_6aca920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        sub esp, 0x28
        neg eax
        mov dword ptr ss : [esp+0x18], ebp
        je public_6acae05
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], esi
        mov ebp, eax
        mov ecx, dword ptr ss : [esp+0x40]
        mov ebx, dword ptr ss : [esp+0x3C]
        mov edi, dword ptr ss : [esp+0x38]
        sub ecx, ebp
        mov edx, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [esp+0x2C]
        sub ebx, ebp
        mov dword ptr ss : [esp+0xC], ecx
        lea ecx, ds:[edi+edi*2]
        sub edi, edx
        lea esi, ds:[esi+edx*4]
        cmp edi, edx
        mov dword ptr ss : [esp+8], ebx
        jne public_6aca97f
        cmp edx, 4
        je public_6acacc4
        cmp edx, 3
        je public_6acab65
        public_6aca97f : nop
        shr edx, 1
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x10], edi
        jae public_6aca9f0
        jb public_6acadf5
        public_6aca991 : nop
        mov ebx, dword ptr ds : [esi+edi*8]
        mov ecx, dword ptr ds : [esi+edi*8+4]
        sbb eax, ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [esi+8]
        sbb ebx, ecx
        mov ecx, dword ptr ds : [esi+edi*8+8]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ds : [esi+0xC]
        sbb eax, ecx
        mov ecx, dword ptr ds : [esi+edi*8+0xC]
        mov dword ptr ds : [esi+8], eax
        lea esi, ds:[esi+0x10]
        sbb ebx, ecx
        dec ebp
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [esi-4], ebx
        jne public_6aca991
        mov ecx, edx
        mov ebx, dword ptr ss : [esp+4]
        public_6aca9ca : nop
        sbb eax, ebp
        dec ecx
        mov dword ptr ds : [esi], eax
        jae public_6aca9d9
        mov eax, dword ptr ds : [esi+4]
        lea esi, ds:[esi+4]
        jne public_6aca9ca
        public_6aca9d9 : nop
        mov ebp, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp]
        inc ebp
        je public_6acadf5
        sub edi, edx
        lea esi, ds:[esi+ecx*4]
        public_6aca9f0 : nop
        mov dword ptr ss : [esp+4], ebp
        mov dword ptr ss : [esp], esi
        mov ebp, edx
        mov eax, dword ptr ds : [esi+edi*4]
        public_6aca9fc : nop
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        adc ebx, eax
        mov eax, dword ptr ds : [esi+edi*4+4]
        mov dword ptr ds : [esi+edx*8], ebx
        lea esi, ds:[esi+8]
        adc ecx, eax
        dec ebp
        mov eax, dword ptr ds : [esi+edi*4]
        mov dword ptr ds : [esi+edx*8-4], ecx
        jne public_6aca9fc
        mov ebp, edx
        mov ebx, dword ptr ds : [esi+edi*4+4]
        public_6acaa1f : nop
        adc eax, 0
        mov ecx, dword ptr ss : [esp]
        adc ebx, 0
        nop 
        public_6acaa29 : nop
        mov dword ptr ds : [esi+edx*8], eax
        mov dword ptr ds : [esi+edx*8+4], ebx
        mov eax, dword ptr ds : [esi+edi*4+8]
        mov ebx, dword ptr ds : [esi+edi*4+0xC]
        dec ebp
        lea esi, ds:[esi+8]
        ja public_6acaa29
        jne public_6acaa1f
        sub ebp, edx
        mov eax, dword ptr ds : [ecx+edx*8]
        mov edi, edx
        and edx, edx
        public_6acaa49 : nop
        mov ebx, dword ptr ds : [ecx+ebp*8]
        mov esi, dword ptr ds : [ecx+ebp*8+4]
        adc ebx, eax
        mov eax, dword ptr ds : [ecx+edx*8+4]
        mov dword ptr ds : [ecx], ebx
        lea ecx, ds:[ecx+8]
        adc esi, eax
        dec edi
        mov eax, dword ptr ds : [ecx+edx*8]
        mov dword ptr ds : [ecx-4], esi
        jne public_6acaa49
        mov eax, dword ptr ds : [ecx]
        mov ebp, edx
        public_6acaa6a : nop
        mov ebx, dword ptr ds : [ecx+edx*8]
        mov esi, dword ptr ds : [ecx+edx*8+4]
        adc ebx, eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx], ebx
        lea ecx, ds:[ecx+8]
        adc esi, eax
        dec ebp
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [ecx-4], esi
        jne public_6acaa6a
        mov ebp, edx
        mov ebx, dword ptr ss : [esp+4]
        public_6acaa8b : nop
        adc eax, 0
        mov edi, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        jae public_6acaa9f
        mov eax, dword ptr ds : [ecx+4]
        lea ecx, ds:[ecx+4]
        dec ebp
        jne public_6acaa8b
        public_6acaa9f : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp]
        mov ah, byte ptr ds : [edi+ebx]
        mov edi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [ecx+ebx]
        mov ebp, edx
        add edi, edx
        xor ah, al
        mov eax, dword ptr ds : [esi]
        je public_6aca991
        public_6acaabe : nop
        mov ebx, dword ptr ds : [esi+edi*8]
        mov ecx, dword ptr ds : [esi+edi*8+4]
        adc eax, ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [esi+8]
        adc ebx, ecx
        mov ecx, dword ptr ds : [esi+edi*8+8]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ds : [esi+0xC]
        adc eax, ecx
        mov ecx, dword ptr ds : [esi+edi*8+0xC]
        mov dword ptr ds : [esi+8], eax
        lea esi, ds:[esi+0x10]
        adc ebx, ecx
        dec ebp
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [esi-4], ebx
        jne public_6acaabe
        mov ecx, edx
        mov ebx, dword ptr ss : [esp+4]
        public_6acaaf7 : nop
        adc eax, ebp
        dec ecx
        mov dword ptr ds : [esi], eax
        jae public_6aca9d9
        mov eax, dword ptr ds : [esi+4]
        lea esi, ds:[esi+4]
        jne public_6acaaf7
        je public_6aca9d9
        public_6acab10 : nop
        sub ebx, edi
        mov edi, dword ptr ds : [esi-0x20]
        mov dword ptr ds : [esi-0x48], ebx
        mov ebx, dword ptr ds : [esi-0x40]
        sbb ecx, edi
        mov edi, dword ptr ds : [esi-0x1C]
        mov dword ptr ds : [esi-0x44], ecx
        mov ecx, dword ptr ds : [esi-0x3C]
        sbb ebx, edi
        mov edi, dword ptr ds : [esi-0x18]
        mov dword ptr ds : [esi-0x40], ebx
        mov ebx, dword ptr ds : [esi-0x38]
        sbb ecx, edi
        mov edi, dword ptr ds : [esi-0x14]
        mov dword ptr ds : [esi-0x3C], ecx
        mov ecx, dword ptr ds : [esi-0x34]
        sbb ebx, edi
        mov edi, dword ptr ds : [esi-0x10]
        sbb ecx, edi
        mov edi, dword ptr ds : [esi-0x30]
        sbb edi, 0
        mov dword ptr ds : [esi-0x38], ebx
        sbb edx, 0
        mov dword ptr ds : [esi-0x34], ecx
        sbb eax, 0
        mov dword ptr ds : [esi-0x30], edi
        inc ebp
        mov dword ptr ds : [esi-0x2C], edx
        mov dword ptr ds : [esi-0x28], eax
        je public_6acadf5
        public_6acab65 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi+0x10]
        add eax, edx
        mov ecx, dword ptr ds : [esi+0x14]
        adc ebx, edi
        mov edx, dword ptr ds : [esi+8]
        adc ecx, edx
        mov edi, dword ptr ds : [esi+0x18]
        adc edi, 0
        mov edx, dword ptr ds : [esi+0x1C]
        adc edx, 0
        mov dword ptr ds : [esi+0x18], edi
        mov edi, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [esi+0x1C], edx
        adc edi, 0
        mov edx, dword ptr ds : [esi-0xC]
        add edx, eax
        mov dword ptr ds : [esi+0x20], edi
        mov edi, dword ptr ds : [esi-8]
        mov dword ptr ds : [esi], edx
        adc edi, ebx
        mov edx, dword ptr ds : [esi-4]
        adc edx, ecx
        mov dword ptr ds : [esi+4], edi
        mov edi, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [esi+8], edx
        adc eax, edi
        mov edx, dword ptr ds : [esi+0x1C]
        adc ebx, edx
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [esi+0x10], ebx
        adc ecx, eax
        mov ebx, dword ptr ss : [esp+8]
        adc edi, 0
        mov dword ptr ds : [esi+0x14], ecx
        adc edx, 0
        mov ecx, dword ptr ss : [esp+0xC]
        lea esi, ds:[esi+0x48]
        mov bh, byte ptr ds : [ebx+ebp]
        adc eax, 0
        mov bl, byte ptr ds : [ecx+ebp]
        mov dword ptr ds : [esi-0x30], edi
        cmp bh, bl
        mov ebx, dword ptr ds : [esi-0x48]
        mov ecx, dword ptr ds : [esi-0x44]
        mov edi, dword ptr ds : [esi-0x24]
        je public_6acab10
        add ebx, edi
        mov edi, dword ptr ds : [esi-0x20]
        mov dword ptr ds : [esi-0x48], ebx
        mov ebx, dword ptr ds : [esi-0x40]
        adc ecx, edi
        mov edi, dword ptr ds : [esi-0x1C]
        mov dword ptr ds : [esi-0x44], ecx
        mov ecx, dword ptr ds : [esi-0x3C]
        adc ebx, edi
        mov edi, dword ptr ds : [esi-0x18]
        mov dword ptr ds : [esi-0x40], ebx
        mov ebx, dword ptr ds : [esi-0x38]
        adc ecx, edi
        mov edi, dword ptr ds : [esi-0x14]
        mov dword ptr ds : [esi-0x3C], ecx
        mov ecx, dword ptr ds : [esi-0x34]
        adc ebx, edi
        mov edi, dword ptr ds : [esi-0x10]
        adc ecx, edi
        mov edi, dword ptr ds : [esi-0x30]
        adc edi, 0
        mov dword ptr ds : [esi-0x38], ebx
        adc edx, 0
        mov dword ptr ds : [esi-0x34], ecx
        adc eax, 0
        mov dword ptr ds : [esi-0x30], edi
        inc ebp
        mov dword ptr ds : [esi-0x2C], edx
        mov dword ptr ds : [esi-0x28], eax
        jne public_6acab65
        je public_6acadf5
        public_6acac4f : nop
        sub ecx, ebp
        mov ebp, dword ptr ds : [esi-0x2C]
        mov dword ptr ds : [esi-0x60], ecx
        mov ecx, dword ptr ds : [esi-0x58]
        sbb edx, ebp
        mov ebp, dword ptr ds : [esi-0x28]
        mov dword ptr ds : [esi-0x5C], edx
        mov edx, dword ptr ds : [esi-0x54]
        sbb ecx, ebp
        mov ebp, dword ptr ds : [esi-0x24]
        mov dword ptr ds : [esi-0x58], ecx
        mov ecx, dword ptr ds : [esi-0x50]
        sbb edx, ebp
        mov ebp, dword ptr ds : [esi-0x20]
        mov dword ptr ds : [esi-0x54], edx
        mov edx, dword ptr ds : [esi-0x4C]
        sbb ecx, ebp
        mov ebp, dword ptr ds : [esi-0x1C]
        mov dword ptr ds : [esi-0x50], ecx
        mov ecx, dword ptr ds : [esi-0x48]
        sbb edx, ebp
        mov ebp, dword ptr ds : [esi-0x18]
        mov dword ptr ds : [esi-0x4C], edx
        mov edx, dword ptr ds : [esi-0x44]
        sbb ecx, ebp
        mov ebp, dword ptr ds : [esi-0x14]
        mov dword ptr ds : [esi-0x48], ecx
        mov ecx, dword ptr ds : [esi-0x40]
        sbb edx, ebp
        mov ebp, dword ptr ss : [esp+4]
        sbb ecx, 0
        mov dword ptr ds : [esi-0x44], edx
        sbb edi, 0
        mov dword ptr ds : [esi-0x40], ecx
        sbb eax, 0
        mov dword ptr ds : [esi-0x3C], edi
        sbb ebx, 0
        mov dword ptr ds : [esi-0x38], eax
        inc ebp
        mov dword ptr ds : [esi-0x34], ebx
        je public_6acadf5
        public_6acacc4 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ebx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [esi+4]
        add eax, edx
        mov dword ptr ss : [esp+4], ebp
        adc ebx, edi
        mov ebp, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [esi+0x1C]
        adc ecx, ebp
        mov edi, dword ptr ds : [esi+0xC]
        adc edx, edi
        mov ebp, dword ptr ds : [esi+0x20]
        adc ebp, 0
        mov edi, dword ptr ds : [esi+0x24]
        adc edi, 0
        mov dword ptr ds : [esi+0x20], ebp
        mov ebp, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [esi+0x24], edi
        adc ebp, 0
        mov edi, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [esi+0x28], ebp
        mov ebp, dword ptr ds : [esi-0x10]
        adc edi, 0
        add ebp, eax
        mov dword ptr ds : [esi+0x2C], edi
        mov edi, dword ptr ds : [esi-0xC]
        adc edi, ebx
        mov dword ptr ds : [esi], ebp
        mov ebp, dword ptr ds : [esi-8]
        mov dword ptr ds : [esi+4], edi
        adc ebp, ecx
        mov edi, dword ptr ds : [esi-4]
        adc edi, edx
        mov dword ptr ds : [esi+8], ebp
        mov ebp, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [esi+0xC], edi
        adc eax, ebp
        mov edi, dword ptr ds : [esi+0x24]
        adc ebx, edi
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [esi+0x14], ebx
        adc ecx, eax
        mov ebx, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [esi+0x18], ecx
        lea esi, ds:[esi+0x60]
        adc edx, ebx
        mov ecx, dword ptr ss : [esp+4]
        adc ebp, 0
        mov dword ptr ds : [esi-0x44], edx
        adc edi, 0
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi-0x40], ebp
        mov ebp, dword ptr ss : [esp+0xC]
        adc eax, 0
        mov dh, byte ptr ds : [edx+ecx]
        adc ebx, 0
        mov dl, byte ptr ss : [ebp+ecx]
        cmp dh, dl
        mov ebp, dword ptr ds : [esi-0x30]
        mov ecx, dword ptr ds : [esi-0x60]
        mov edx, dword ptr ds : [esi-0x5C]
        je public_6acac4f
        add ecx, ebp
        mov ebp, dword ptr ds : [esi-0x2C]
        mov dword ptr ds : [esi-0x60], ecx
        mov ecx, dword ptr ds : [esi-0x58]
        adc edx, ebp
        mov ebp, dword ptr ds : [esi-0x28]
        mov dword ptr ds : [esi-0x5C], edx
        mov edx, dword ptr ds : [esi-0x54]
        adc ecx, ebp
        mov ebp, dword ptr ds : [esi-0x24]
        mov dword ptr ds : [esi-0x58], ecx
        mov ecx, dword ptr ds : [esi-0x50]
        adc edx, ebp
        mov ebp, dword ptr ds : [esi-0x20]
        mov dword ptr ds : [esi-0x54], edx
        mov edx, dword ptr ds : [esi-0x4C]
        adc ecx, ebp
        mov ebp, dword ptr ds : [esi-0x1C]
        mov dword ptr ds : [esi-0x50], ecx
        mov ecx, dword ptr ds : [esi-0x48]
        adc edx, ebp
        mov ebp, dword ptr ds : [esi-0x18]
        mov dword ptr ds : [esi-0x4C], edx
        mov edx, dword ptr ds : [esi-0x44]
        adc ecx, ebp
        mov ebp, dword ptr ds : [esi-0x14]
        mov dword ptr ds : [esi-0x48], ecx
        mov ecx, dword ptr ds : [esi-0x40]
        adc edx, ebp
        mov ebp, dword ptr ss : [esp+4]
        adc ecx, 0
        mov dword ptr ds : [esi-0x44], edx
        adc edi, 0
        mov dword ptr ds : [esi-0x40], ecx
        adc eax, 0
        mov dword ptr ds : [esi-0x3C], edi
        adc ebx, 0
        mov dword ptr ds : [esi-0x38], eax
        inc ebp
        mov dword ptr ds : [esi-0x34], ebx
        jne public_6acacc4
        public_6acadf5 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x24]
        public_6acae05 : nop
        add esp, 0x28
        ret 0x18
        UNREACHABLE_TRAP(0x6aca920)
    }
}

#undef public_6aca97f
#undef public_6aca991
#undef public_6aca9ca
#undef public_6aca9d9
#undef public_6aca9f0
#undef public_6aca9fc
#undef public_6acaa1f
#undef public_6acaa29
#undef public_6acaa49
#undef public_6acaa6a
#undef public_6acaa8b
#undef public_6acaa9f
#undef public_6acaabe
#undef public_6acaaf7
#undef public_6acab10
#undef public_6acab65
#undef public_6acac4f
#undef public_6acacc4
#undef public_6acadf5
#undef public_6acae05

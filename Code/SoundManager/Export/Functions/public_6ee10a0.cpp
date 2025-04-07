#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee10a0);

#define public_6ee10b8 _public_6ee10b8
#define public_6ee10d5 _public_6ee10d5
#define public_6ee10e7 _public_6ee10e7
#define public_6ee10f9 _public_6ee10f9
#define public_6ee1109 _public_6ee1109
#define public_6ee1119 _public_6ee1119

PROC_DECLARE(0x6ee10a0, internal_6ee10a0, public_6ee10a0);
extern "C" NAKED register_t __cdecl internal_6ee10a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        push edi
        je public_6ee10b8
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], 0
        public_6ee10b8 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ee10d5
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x48]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_6ee10d5 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ee10e7
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi], 0
        public_6ee10e7 : nop
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6ee10f9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6ee10f9 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov dword ptr ds : [esi+4], eax
        je public_6ee1109
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6ee1109 : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        je public_6ee1119
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6ee1119 : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], ecx
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi+0x24], edx
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [esi+0x28], eax
        mov ecx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [esi+0x2C], ecx
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [esi+0x30], edx
        mov eax, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x34], eax
        lea ecx, ds:[edi+0x38]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0x38]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea edx, ds:[edi+0x44]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[esi+0x44]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov al, byte ptr ds : [edi+0x50]
        mov byte ptr ds : [esi+0x50], al
        mov ecx, dword ptr ds : [edi+0x54]
        pop edi
        mov dword ptr ds : [esi+0x54], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ee10a0)
    }
}

#undef public_6ee10b8
#undef public_6ee10d5
#undef public_6ee10e7
#undef public_6ee10f9
#undef public_6ee1109
#undef public_6ee1119

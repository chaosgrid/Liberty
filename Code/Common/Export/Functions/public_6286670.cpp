#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627ce00);
CLANG_FORWARD_PROC_SYMBOL(public_628e870);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6393026);

#define public_62866ac _public_62866ac
#define public_62866ae _public_62866ae
#define public_62867d4 _public_62867d4

PROC_DECLARE(0x6286670, internal_6286670, public_6286670);
extern "C" NAKED register_t __cdecl internal_6286670()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393026 @0x6286672*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393026
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        call public_627ce00
        test edi, edi
        mov dword ptr ss : [esp+0x14], 0
        je public_62866ac
        lea eax, ds:[edi+0x9C]
        jmp public_62866ae
        public_62866ac : nop
        xor eax, eax
        public_62866ae : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x9C], eax
        mov cl, byte ptr ds : [edi+0xA0]
        mov al, byte ptr ds : [esi+0xA0]
        xor cl, al
        and cl, 1
        xor cl, al
        mov byte ptr ds : [esi+0xA0], cl
        mov edx, dword ptr ds : [edi+0xA4]
        mov dword ptr ds : [esi+0xA4], edx
        mov eax, dword ptr ds : [edi+0xA8]
        mov dword ptr ds : [esi+0xA8], eax
        mov ecx, dword ptr ds : [edi+0xAC]
        mov dword ptr ds : [esi+0xAC], ecx
        mov edx, dword ptr ds : [edi+0xB0]
        mov dword ptr ds : [esi+0xB0], edx
        mov eax, dword ptr ds : [edi+0xB4]
        mov dword ptr ds : [esi+0xB4], eax
        mov ecx, dword ptr ds : [edi+0xB8]
        lea edx, ds:[edi+0xBC]
        mov dword ptr ds : [esi+0xB8], ecx
        lea ecx, ds:[esi+0xBC]
        push edx
        mov byte ptr ss : [esp+0x18], 1
        call public_628e870
        lea eax, ds:[edi+0xD0]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xD0]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [edi+0xDC]
        mov dword ptr ds : [esi+0xDC], ecx
        mov edx, dword ptr ds : [edi+0xE0]
        mov dword ptr ds : [esi], offset public_639b884
        mov dword ptr ds : [esi+0xE0], edx
        mov eax, dword ptr ds : [edi+0xE4]
        mov dword ptr ds : [esi+0xE4], eax
        mov ecx, dword ptr ds : [edi+0xE8]
        mov dword ptr ds : [esi+0xE8], ecx
        mov edx, dword ptr ds : [edi+0xEC]
        mov dword ptr ds : [esi+0xEC], edx
        mov dword ptr ds : [esi], offset public_639bbbc
        lea ecx, ds:[esi+0xF0]
        mov dword ptr ss : [esp+0x14], 2
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ds : [ecx], 0
        mov dword ptr ds : [ecx+4], 0
        mov eax, dword ptr ds : [edi+0xF0]
        test eax, eax
        mov byte ptr ss : [esp+0x14], 3
        je public_62867d4
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62867d4
        add eax, 8
        test eax, eax
        je public_62867d4
        push eax
        call public_6341610
        public_62867d4 : nop
        mov ax, word ptr ds : [edi+0xF8]
        mov word ptr ds : [esi+0xF8], ax
        mov ecx, dword ptr ds : [edi+0xFC]
        mov dword ptr ds : [esi+0xFC], ecx
        mov edx, dword ptr ds : [edi+0x100]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x100], edx
        mov dword ptr ds : [esi], offset public_639bc6c
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6286670)
    }
}

#undef public_62866ac
#undef public_62866ae
#undef public_62867d4

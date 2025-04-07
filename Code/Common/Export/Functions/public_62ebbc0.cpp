#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ebbc0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6395466);

#define public_62ebc49 _public_62ebc49
#define public_62ebc55 _public_62ebc55

PROC_DECLARE(0x62ebbc0, internal_62ebbc0, public_62ebbc0);
extern "C" NAKED register_t __cdecl internal_62ebbc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395466 @0x62ebbc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395466
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0xC]
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        lea edi, ds:[esi+0x14]
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [esi+0x9C], 0x3DCCCCCD
        mov dword ptr ds : [esi+0xA0], 0x3E4CCCCD
        mov dword ptr ds : [esi+0xA4], 0x43480000
        mov byte ptr ds : [esi+0xC0], bl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi], ebx
        mov byte ptr ds : [esi+0xBD], bl
        mov byte ptr ds : [esi+0xBE], bl
        mov dword ptr ds : [esi+0xB0], ebx
        mov byte ptr ds : [esi+0xC2], bl
        cmp dword ptr ds : [ecx], ebx
        mov byte ptr ss : [esp+0x18], 3
        je public_62ebc49
        push ebx
        call public_6341610
        public_62ebc49 : nop
        cmp dword ptr ds : [edi], ebx
        je public_62ebc55
        push ebx
        mov ecx, edi
        call public_6341610
        public_62ebc55 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+0xBF], bl
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov byte ptr ds : [esi+0xC1], bl
        mov byte ptr ds : [esi+0xC3], bl
        mov byte ptr ds : [esi+0xC5], bl
        mov byte ptr ds : [esi+0xC4], bl
        mov byte ptr ds : [esi+0xC6], bl
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62ebbc0)
    }
}

#undef public_62ebc49
#undef public_62ebc55

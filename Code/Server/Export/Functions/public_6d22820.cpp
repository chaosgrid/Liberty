#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1bd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d22820);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62788);

#define public_6d22868 _public_6d22868
#define public_6d22871 _public_6d22871

PROC_DECLARE(0x6d22820, internal_6d22820, public_6d22820);
extern "C" NAKED register_t __cdecl internal_6d22820()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62788 @0x6d22822*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62788
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi], offset public_6d68d00
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+8], edi
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6d22868
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edi+4]
        add eax, 0xC
        cmp eax, ecx
        jbe public_6d22871
        public_6d22868 : nop
        push 0xC
        mov ecx, edi
        call public_6d1bd20
        public_6d22871 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ds:[edx+ecx+8]
        add edx, 0xC
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [public_6d68a50]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, dword ptr ds : [public_6d68a54]
        mov dword ptr ds : [esi+0x20], eax
        pop edi
        mov dword ptr ds : [esi], offset public_6d68e7c
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d22820)
    }
}

#undef public_6d22868
#undef public_6d22871
